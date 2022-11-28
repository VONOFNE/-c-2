#include <stdio.h>

int sum(int m,int n);
{
    while(m < n)
    {
        m++;
        m += (m-1); 
    }
    return m;
}

int main()
{
    int m, n;
    
   scanf("%d %d",&m,&n);
   printf("sum = %d\n",sum(m,n));
    return 0;
}