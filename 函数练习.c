#include<stdio.h>
 #include<string.h>
 #include<windows.h>
 #include<stdlib.h>
 #include<time.h>
 #include<math.h>

/*判断素数*/
int findprimenum(int x)
{
    int z = 0;
    for(z = 2;z < x; z++ )
    {
        if(x%z == 0)
        {
            return 0;
        }
    }
    return 1;
}

/*互换函数（利用地址对主函数的变量进行操作）*/
void swap(int* pa,int* pb)//
{
    int z = 0;
    z = *pa;
    *pa = *pb;
    *pb = z;
}

/*判断闰年*/
int is_leapyear(int x)
{
    return ((x % 4 == 0 && x%100 == 0) || (x %400 == 0));
}

 int main ()
 {
    int i = 0;
    printf("Please input the year you want to test:");
    scanf("%d",&i);
    if(is_leapyear(i) == 1)
    printf("yes,it's.");
    else
    printf("No,it's not");
    return 0;
 }