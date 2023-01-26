#include<stdio.h>
#include<string.h>

/*冒泡排序*/
void bubble_sort(int* arr,int n)
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
        bubble_sort(arr,len);
    }
    arr[i] = tmp2;
}

int main()
{
    int arr[10] = {9,8,7,6,5,4,3,2,1,0};
    int i = 0;
    int n = 10; 
    bubble_sort(arr,n);
    for(i=0;i<=9;i++)
    {
        printf("%d",arr[i]);
    }
    return 0 ;
}