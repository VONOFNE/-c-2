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

/*二分查找*/
int binary_search(int a[],int k,int s)
{
    int left = 0;
    int right = s - 1;
    while(left <= right)
    {
        int mid = (left + right)/2;
        if(a[mid] < k)
        {
            left = mid + 1;   
        }
        else if(a[mid] > k)
        {
            right = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
//  int main ()
//  {
//     int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//     int key = 7;
//     int ret = binary_search(arr,key,sizeof(arr)/sizeof(arr[0]));
//     if(ret == -1)
//     {
//         printf("can't find");
//     }
//     else
//     {
//         printf("subscript is %d",ret);
//     }
//     return 0;
//  }

/*函数被调用一次，num+1*/
void Add(int*p)
{
    (*p)++;
}
// int main()
// {
//     int num = 0 ;
//     Add(&num);
//     printf("num = %d\n",num);
//     Add(&num);
//     printf("num = %d\n",num);
//     Add(&num);
//     printf("num = %d",num);
// }

/*初识函数递归：依次打印输入数字每一位上的数字*/
void print(unsigned int n)
{
    if(n > 9)//使递归结束的条件
    {
        print(n / 10);//使递归逼近结束的条件
    }
    printf("%d ",n % 10);
}
// int main()
// {
//     unsigned int n = 0 ;
//     scanf("%d",&n);
//     print(n);
//     return 0 ; 
// }

/*函数递归2：不创建临时变量的情况下计算出字符串的长度*/
int my_strlen(char* arr)
{
    if(*arr != '\0')
    {
        return 1 + my_strlen(arr + 1);//是递归逼近结束的条件
        //不用++arr或arr++的原因是因为在arr传进去之后留下来的arr也会变
    }
    else//使递归结束的条件
    {
        return 0 ;
    }
}
// int main()
// {
//     char arr[] = "hello world";
//     printf("%d",my_strlen(arr));//传去的是数组第一个元素的地址
//     return 0;
// }

/*用递归算n的阶乘*/
int Fac(int n)
{
    if(n <= 1)
    {
        return 1;
    }
    else
    {
        return n * Fac(n - 1);
    }
}
// int main ()
// {
//     int n = 0;
//     scanf("%d",&n);
//     printf("%d",Fac(n));
//     return 0 ;
// }

/*用递归计算第n个斐波那契数*/
int count = 0;
int Fib(int n)
{
    if(n == 3)
    {
        count++;//统计第三个斐波那契数的计算次数
    }
    if(n <= 2)
    {
        return 1;
    }
    else
    {
        return Fib(n-1) + Fib(n-2);
    }
}
// int main()
// {
//     int a = 0;
//     scanf("%d",&a);
//     printf("%d\n",Fib(a)); 
//     printf("count = %d",count);//进行了大量重复的计算，效率太低
//     return 0;
// }

/*用循环计算第n个斐波那契数*/
int my_Fib(int n)
{
    if(n <= 2)
    {
        return 1;
    }
    else
    {
        int i = 0;
        int ret = 1;
        int a = 1;
        for (i = 1; i < n; i++)
        {
            a = ret - a;//给a赋值前一个数的前一个数
            ret = a + ret;//ret为前后一个数
        }
        return ret;
    }
}
int teacher_Fib(int n)
{
    int a = 1;
    int b = 1;
    int c = 1;
    while(n > 2)
    {
        c = a + b;
        a = b;
        b = c;
        n--;
    } 
    return c;
}
// int main()
// {
//     int a = 0;
//     scanf("%d",&a);
//     printf("%d\n",teacher_Fib(a)); 
//     return 0;
// }

/*计算1/1-1/2+1/3-...-1/100*/
// int main()
// {
//     int i  = 0;
//     int flag = 1;
//     double  sum = 0.0;
//     for (i=0 ;i <= 100;i++)
//     {
//         sum += flag*1.0 / i;
//         flag = -flag;
//     }
//     printf("%lf\n",sum);
//     return 0;
// }

/*求十个整数中的是最大值*/
// int main()
// {
//     int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
//     int max = arr[0];
//     int i = 0;
//     for(i=1;i<10;i++)
//     {
//         if(arr[i]>max)
//         {
//             max = arr[i];
//         }
//     }
//     printf("%d",max);
//     return 0;
// }

/*生成九九乘法表*/
int main()
{
    int i = 0;
    int j = 0;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%dx%d=%2d ",j,i,(i*j));//%2d——右对齐，不够填充空格
        }
        printf("\n");
    }
    return 0;
}