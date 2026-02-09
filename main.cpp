#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
   int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    while (q--)
    {
        int x;
        cin >> x;
        int l = 0;
        int r = (n - 1);
        int found = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] == x)
            {
                found = 1;
                break;
            }
            else if(a[mid]<x)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        if(found==1)
        {
            cout<<"found"<<endl;
        }
        else 
        {
            cout<<"not found"<<endl;
        }
    }

    return 0;
}