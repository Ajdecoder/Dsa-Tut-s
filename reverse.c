#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int i = 1;

    while (n != 0)
    {
        int dig = n % 10;
        int ans = 0;
        ans = (ans * 10) + dig;
        n = n / 10;

        printf("%d", ans);
    }
}
