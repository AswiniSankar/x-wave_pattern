/*
5
4
*       * *       * *       * *       * 
| *   * | | *   * | | *   * | | *   * | 
| | * | | | | * | | | | * | | | | * | | 
| *   * | | *   * | | *   * | | *   * | 
*       * *       * *       * *       * 

*/
#include<stdio.h>
int main()
{
  int i,j,n,m;
  scanf("%d %d",&n,&m);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n*m;j++)
    {
       if((i%n)==(j%n) || (i+j)%n == n-1)
         printf("* ");
       else if((i>=(j%n) && (j%n)<n/2 && ((i+j)%n < n-1 && (i+j)%n !=0)))
         printf("| ");
       else if(j%n > n/2 && ((i%n + j%n) > n-1 && (i%n < j%n)))
        printf("| ");
       else
         printf("  ");
    }
   printf("\n");
  }
}
