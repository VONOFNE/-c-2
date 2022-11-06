 #include<stdio.h>
 #include<string.h>
 #include<windows.h>
 /*比大小作业*/
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     if(a>b)
//     {
//         printf("%d\n",a);
//     }
//     else{
//         printf("%d\n",b);
//     }
//     return 0;
// } 

/*筛选被五整除*/
// int main ()
// {
//     int a =0;
//     scanf("%d",&a);
//     // printf("%d",a);
//     int b = a&5;
//     // printf("%d\n",b);
//     if(b < 1){
//         printf("YES");
//     }
//     else{
//         printf("NO");
//     }
//     return 0;
// }

/*找1~100之间的奇数*/
// int main()
// {
//     int i = 0 ;    
//     while (i < 100)
//     {
//         ++i; 
//         if(i % 2 == 1)
//         {
//             printf ("%d,",i);
//         }  
//     }     
//     return 0;
// }

/*switch分支语句的应用*/
// int main ()
// {
//     int day = 0 ;
//     printf("今天周几：");
//     scanf("%d",&day);
//     switch(day)
//     {
//         case 1:
//         printf("星期一"); 
//         break;
//         case 2:
//         printf("星期二");
//         break;
//         case 3:
//         printf("星期三");
//         break;
//         case 4:
//         printf("星期四");
//         break;
//         case 5:
//         printf("星期五");
//         break;
//         case 6:
//         printf("星期六");
//         break;
//         case 7:
//         printf("星期天");
//         break;
//         default:
//         printf("输入错误");
//     }
//     return 0;
// }

/*while循环语句中break与continue的作用*/
// int main ()
// {
//     int a = 1;
//     while(a <= 10)
//     {
//         if (5 == a)
//         {
//             continue;
//         }
//         printf("%d,",a);   
//         a++;
//     }
//     return 0;
// }

/*getchar与putchar的应用*/
// int main ()
// {
//     int ch = 0;
//     while ((ch = getchar()) != EOF)
//     {
//         putchar(ch);
//     }
//     return 0;
// }

/*使用getchar清理缓冲区的应用*/
// int main ()
// {
//     int password[20] = { 0 };
//     printf("请输入密码：");
//     scanf("%s", password);
//     printf("请确认密码Y/N:>");
//     int tmp  = 0;
//     while ((tmp = getchar()) != '\n')
//     {
//         ;//清理缓冲区
//     }
//     int i = getchar();
//     if(i == 'Y')
//     {
//         printf("确认正确");
//     }
//     else
//     {
//         printf("确认失败");
//     }
//     return 0;
// }

/*初识for循环*/
// int main ()
// {
//     int i = 0;
//     for(i = 1; i <= 10; i++)//for (初始化;条件判断;调整)
//     {
//         printf("%d,", i);
//     }
//     return 0;
// }

/*初识dowhile循环*/
// int main ()
// {
//     int i = 0;
//     do
//     {
//         printf("%d,",i);
//         i++;
//     } while (i <= 10);
//     return 0;
// }

/*n的阶乘*/
// int main ()
// {
//     int n = 0;
//     int i = 0;
//     int result = 1;
//     int sum = 0;
//     scanf("%d", &n);
//     while(i < n)
//     {
//         i++;
//         result = result * i;
//         sum += result;
//     } 
//     printf("%d,%d", result,sum);
//     return 0;
// }

/*1!+2!+...+10!*/
// int main ()
// {
//     int a = 1;
//     int n = 10;
//     int ret = 1;
//     int sum = 0;
//     for(a = 1; a <= n; a++)
//     {
//         ret *= a;
//         sum += ret;
//     }
//     printf("%d",sum);
//     return 0;
// }

/*有序数组中选出具体的某个数n的下标*/
// int main ()
// {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int k = 8;
//     int i = sizeof(arr)/sizeof(int);
//     int left = 0;
//     int right = i - 1;
//     while (left <= right)
//     {
//         int mid = (left + right )/2;
//         if (arr[mid] < k)
//         {
//             left = mid + 1;//+1/-1会使循环次数减少，效率变高
//         }
//         else if (arr[mid] > k)
//         {
//             right  = mid - 1;
//         }
//         else 
//         {
//             printf("找到了下标为：%d",mid);
//             break;
//         }
//     }
//     if (left > right)
//     {
//         printf("找不到");
//     }
//     return 0;
// }

/*两边向中间聚集的效果*/
// int main ()
// {
//     char arr1[] = "welcome to it!!!!!";
//     char arr2[] = "##################";
//     int left = 0;
//     int right = strlen(arr1) -1;
//     while(left<=right)
//     {
//     arr2[left] = arr1[left];
//     arr2[right] = arr1[right];
//     printf("%s\n",arr2);
//     Sleep(1000);//睡眠1秒
//     system("cls");//清空屏幕
//     left++;
//     right--;
//     }
//     printf("%s",arr2);
//     // printf("%d",strlen(arr1));
//     return 0;
// }

/*用户输入密码三次失败，则无法登录*/
int main ()
{
    char arr1[20] = { 0 };
    int i = 0;
    for(i = 0 ; i<3 ; i++)
    {
        printf("请输入密码：");
        scanf("%s",arr1);
        if(strcmp(arr1,"123456") == 0)
        {
            printf("正确");
            i = 0;//防止在第三次输入正确后显示“已锁定”
            break;//结束循环
        }
        else
        {
            printf("错误，请重新输入");
            Sleep(1000);
            system("cls");
        }
    }
    if(i == 3)
    {
        printf("已锁定");
    }

    return 0;
}