 #include<stdio.h>
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
int main ()
{
    int a = 1;
    while(a <= 10)
    {
        if (5 == a)
        {
            continue;
        }
        printf("%d,",a);   
        a++;
    }
    return 0;
}