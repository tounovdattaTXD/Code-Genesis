#include <stdio.h>

int main()
{
  int n,i,j;
 
  printf("Enter number of rows:\n");
  scanf("%d", &n);
  int n1=n/2+1;
  for (i=1;i<=n1;i++)
  {
    for (j=1;j<=n1-i;j++)
        {printf(" ");}
 
    for (j=1;j<=2*i-1;j++)
        {printf("*");}
 
    printf("\n");
  }
 
  for (i= 1;i<=n1-1;i++)
  {
    for (j=1;j<=i;j++)
        {printf(" ");}
 
    for (j=1;j<=2*(n1-i)-1;j++)
        {printf("*");}
 
    printf("\n");
  }
 
  return 0;
}
