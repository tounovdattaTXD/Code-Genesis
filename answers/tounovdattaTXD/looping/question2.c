#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i = 1;
    while (i <= n)
    {
        char startChar = 'A' + n - i;
        int j = 1;
        while (j<=i)
        {
            char ch=startChar + j - 1;
            printf("%c", ch);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}