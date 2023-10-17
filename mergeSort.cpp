#include <iostream>
using namespace std;
int IsLargeApples(int A[], int i, int j)
{
    if (A[i] > A[j])
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int merge(int A[], int s[], int l, int mid, int r)
{
    int comp[4 - 0 + 1];
    int i = l, j = mid + 1, k = 0;
    while (i <= mid && j <= r)
    {
        if (IsLargeApples(A, s[i], s[j]) == 1)
        {
            comp[k] = s[j];
            k++;
            j++;
        }
        else
        {
            comp[k] = s[i];
            k++;
            i++;
        }
    }
    if (i > mid)
    {
        for (int m = j; m <= r; m++)
        {
            comp[k] = s[m];
            k++;
        }
    }
    else
    {
        for (int m = i; m <= mid; m++)
        {
            comp[k] = s[m];
            k++;
        }
    }
    i = 0;
    for (int m = l; m <= r; m++, i++)
    {
        s[m] = comp[i];
    }
}
int mergesort(int A[], int s[], int l, int r)
{
    int mid = (r + l) / 2;
    if (l < r)
    {
        mergesort(A, s, l, mid);
        mergesort(A, s, mid + 1, r);
        merge(A, s, l, mid, r);
    }
}
int main()
{
    int A[] = {5, 2, 7, 0, 1};
    int n = sizeof(A) / sizeof(int);
    int s[5];
    for (int i = 0; i < n; i++)
    {
        s[i] = i;
    }
    int p = mergesort(A, s, 0, n - 1);
    /* cout << "show the return number" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << p << " ";
    }
    cout << endl; */

    cout << "show  the output:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[s[i]] << " ";
    }
    cout << endl;
}