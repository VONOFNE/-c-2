#include<stdio.h>
#include<string.h>

/*冒泡排序（递归实现）*/
void bubble_sort1(int* arr,int n)
{
    int i = 0;
    int len = n - 1;
    for(i=0;i<len;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int tmp1 = i;
            tmp1 = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = tmp1;
        }
    }
    int tmp2 = arr[i];
    arr[i] = '\0';
    if(i>1)
    {
        bubble_sort1(arr,len);
    }
    arr[i] = tmp2;
}

/*冒泡排序（迭代实现）*/
void bubble_sort2(int arr[],int n)
{
    int i = 0;
    for(i=0;i<n-1;i++)
    {
        int j = 0;
        for(j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int tmp1 = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp1;
            }
        }
    }
}

int main()
{
    int arr[10] = {9,8,7,6,5,4,3,2,1,0};
    int i = 0;
    int n = sizeof(arr)/sizeof(arr[0]); 
    bubble_sort2(arr,n);
    for(i=0;i<=9;i++)
    {
        printf("%d",arr[i]);
    }
    return 0 ;
}