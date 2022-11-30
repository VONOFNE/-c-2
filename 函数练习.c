#include<stdio.h>
 #include<string.h>
 #include<windows.h>
 #include<stdlib.h>
 #include<time.h>
 #include<math.h>

/*互换函数（利用地址对主函数的变量进行操作）*/
void swap(int* pa,int* pb)
{
    int z = 0;
    z = *pa;
    *pa = *pb;
    *pb = z;
}
 int main ()
 {
    int a = 1;
    int b = 2;
    printf("a = %d,b = %d\n",a,b);
    swap(&a,&b);
    printf("a = %d,b = %d\n",a,b);
    return 0;
 }