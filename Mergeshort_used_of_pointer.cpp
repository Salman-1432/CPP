#include <iostream>
#include <vector>
using namespace std;
class size
{
private:
    int *a, *s, len;
    void mergesort(int, int);
    void merge(int, int);
    int Islarge(int i, int j)
    {
        if (a[i] > a[j])
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }

public:
    size() // constractor
    {
        cout << "Enter the total number of apple:" << endl;
        cin >> len;
        a = new int[len];
        s = new int[len];
        cout << "Enter size of" << len << "apple" << endl;
        for (int i = 0; i < len; i++)
        {
            cin >> a[i];
            s[i] = i;
        }
    }
    void msort()
    {
        mergesort(0, len - 1);
    }
    void print()
    {
        cout << "Apple:" << endl;
        for (int i = 0; i < len; i++)
        {
            cout << a[s[i]] << " ";
        }
        cout << endl;
        cout << "size :" << endl;
        for (int i = 0; i < len; i++)
        {
            cout << s[i] << " ";
        }
        cout << endl;
    }
    vector<int> sortedApple()
    {
        vector<int> temp;
        for (int i = 0; i < len; i++)
        {
            temp.push_back(a[s[i]]);
        }
        return temp;
    }
};
void size::merge(int l, int r)
{
    int mid = l + (r - l) / 2;
    int len1 = mid - l + 1;
    int len2 = r - mid;

    int *first = new int[len1];
    int *second = new int[len2];
    int k = 1;
    for (int i = 0; i < len1; i++)
    {
        first[i] = s[k++];
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = s[k++];
    }
    k = 1;
    int index1 = 0;
    int index2 = 0;
    while (index1 < len1 && index2 < len2)
    {
        if (Islarge(first[index1], second[index2]) == -1)
        {
            s[k++] = first[index1++];
        }
        else
        {
            s[k++] = first[index2++];
        }
    }
}
void size::mergesort(int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int mid = l + (r - l) / 2;
    mergesort(l, mid);
    mergesort(mid + 1, r);
    merge(l, r);
}
