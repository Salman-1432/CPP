/* #include <iostream>
#include <vector>
#include <cmath>
#include <limits>

using namespace std;

struct Point 
{
    double x, y;
};

double dist(Point p1, Point p2) 
{
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    return sqrt(dx*dx + dy*dy);
}

pair<Point, Point> closest_pair(vector<Point>& points) 
{
    double min_dist = numeric_limits<double>::max();
    pair<Point, Point> closest_points;

    for (int i = 0; i < points.size(); i++) {
        for (int j = i+1; j < points.size(); j++) {
            double d = dist(points[i], points[j]);
            if (d < min_dist) {
                min_dist = d;
                closest_points = make_pair(points[i], points[j]);
            }
        }
    }

    return closest_points;
}

int main() 
{
    vector<Point> points = { {1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10} };
    pair<Point, Point> closest_points = closest_pair(points);

    cout << "Closest pair: (" << closest_points.first.x << "," << closest_points.first.y << ") and (" << closest_points.second.x << "," << closest_points.second.y << ")" << endl;
    cout << "Distance: " << dist(closest_points.first, closest_points.second) << endl;

    return 0;
} */
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <limits>

using namespace std;

struct Point {
    double x, y;
};

bool compare_y(Point p1, Point p2) {
    return p1.y < p2.y;
}

double dist(Point p1, Point p2) {
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    return sqrt(dx*dx + dy*dy);
}

pair<Point, Point> brute_force(vector<Point>& points) {
    double min_dist = numeric_limits<double>::max();
    pair<Point, Point> closest_points;

    for (int i = 0; i < points.size(); i++) {
        for (int j = i+1; j < points.size(); j++) {
            double d = dist(points[i], points[j]);
            if (d < min_dist) {
                min_dist = d;
                closest_points = make_pair(points[i], points[j]);
            }
        }
    }

    return closest_points;
}

pair<Point, Point> closest_pair(vector<Point>& points) {
    if (points.size() <= 3) {
        return brute_force(points);
    }

    int mid = points.size() / 2;
    Point mid_point = points[mid];

    vector<Point> left_points(points.begin(), points.begin() + mid);
    vector<Point> right_points(points.begin() + mid, points.end());

    pair<Point, Point> left_closest = closest_pair(left_points);
    pair<Point, Point> right_closest = closest_pair(right_points);

    double left_dist = dist(left_closest.first, left_closest.second);
    double right_dist = dist(right_closest.first, right_closest.second);

    double min_dist = min(left_dist, right_dist);
    pair<Point, Point> closest_points;

    if (min_dist == left_dist) {
        closest_points = left_closest;
    } else {
        closest_points = right_closest;
    }

    vector<Point> strip;

    for (int i = 0; i < points.size(); i++) {
        if (abs(points[i].x - mid_point.x) < min_dist) {
            strip.push_back(points[i]);
        }
    }

    sort(strip.begin(), strip.end(), compare_y);

    for (int i = 0; i < strip.size(); i++) {
        for (int j = i+1; j < strip.size() && strip[j].y - strip[i].y < min_dist; j++) {
            double d = dist(strip[i], strip[j]);
            if (d < min_dist) {
                min_dist = d;
                closest_points = make_pair(strip[i], strip[j]);
            }
        }
    }

    return closest_points;
}

int main() {
    ifstream input_file("points.txt");

    int n;
    input_file >> n;

    vector<Point> points(n);

    for (int i = 0; i < n; i++) {
        input_file >> points[i].x >> points[i].y;
    }

    input_file.close();

    pair<Point, Point> closest_points = closest_pair(points);

    cout << "Closest pair: (" << closest_points.first.x << "," << closest_points.first.y << ") and (" << closest_points.second.x << "," << closest_points.second.y << ")" << endl;
    cout << "Distance: " << dist(closest_points.first, closest_points.second) << endl;

    return 0;
}