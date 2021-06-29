#include <stdio.h>
int main()
{
    int a, b;
    printf("enter two numbers:\n");
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) {
        
        if (i == 1 || i == 0)
            continue;
 
        
        int flag = 1;
 
        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
 
        
        if (flag == 1)
            printf("%d  ", i);
    }
    return 0;
}