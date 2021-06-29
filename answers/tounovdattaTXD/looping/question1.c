#include<stdio.h>

int main()
{
    int no;
    float temp, sqrt;
    printf("Enter the number: \n");
    scanf("%d", &no);
    sqrt = no / 2;
    temp = 0;
    while(sqrt != temp)
    {
        temp = sqrt;
        sqrt = ( no/temp + temp) / 2;
    }
    int s= sqrt;
    printf("The square root of '%d' is '%d'", no, s);
    return 0;
}
