#include <iostream>
using namespace std;

int main()
{

    if (m > n)
        return -1;

    int s = 0, e = 0, mid, ans;
    for (int i = 0; i < n; i++)
    {
        s = max(s, a[i]);
        e += a[i];
    }

    while (s <= e)
    {
        mid = s + (e - s) / 2;
        int pages = 0, count = 1;
        for (int i = 0; i < n; i++)
        {
            pages += a[i];
            if (pages > mid)
            {
                count++;
                pages = a[i];
            }         
        }

        if (count<=m)
        {
            ans = mid;
            e = mid-1;
        }
        else
        s = mid + 1;
        
    }
    return ans;
}