#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int INT_MIN= -2147483648;
    int max = INT_MIN, secondMax = INT_MIN;
 
    int num;
    int count = 1;
    while (count <= n) 
    {
        scanf("%d", &num);
        if (num > max) 
        {
            secondMax = max;   
            max = num;         
        }
        else if (num > secondMax && num != max)    
        {
            secondMax = num;
        }
        count++;
    }
    printf("%d\n", secondMax);
    return 0;
}