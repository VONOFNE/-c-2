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
int main()
{
    unsigned int n = 0 ;
    scanf("%d",&n);
    print(n);
    return 0 ; 
}