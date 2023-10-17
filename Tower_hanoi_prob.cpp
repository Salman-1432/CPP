/* #include <iostream>
using namespace std;
void tw(int n, int s, int t, int d)
{
    if (n == 1)
    {
        cout << "move1 :" << "s" << " to<-> " << "d" << " " << endl;
        return;
    }
        tw(n - 1, s, d, t);
        cout << "move2 :" << "s" << " to<-> " << "d" << " " << endl;
        tw(n - 1, t, s, d);
        cout << "move3 :" << "t" << " to<-> " << "d" << " " << endl;
}
int main()
{
    tw(3, 'A', 'B', 'C');
    return 0;
} */
 
#include <iostream>
using namespace std;
#include <vector>
void tw(vector<int> s, vector<int> t, vector<int> d)
{
    cout << "show s:" << endl;
    for (auto i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;
    cout << "show t:" << endl;
    for (auto i = 0; i < t.size(); i++)
    {
        cout << t[i] << " ";
    }
    cout << endl; 
    cout << "show d:" << endl;
    for (auto i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> A, B, C;
    A.push_back(3);
    A.push_back(2);
    A.push_back(1);
    tw(A, B, C);
}
