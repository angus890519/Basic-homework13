/* 計算機概論實務-基本練習作業-作業13*/
/* 製作人：郭柏鋒 */
/* 完成時間：2019/03/21 10:00*/  
#include<stdio.h> //函示庫 
#include<iostream> //函示庫 

int main()
{
    int sex,age; //定義性別及年齡 
    printf("如果男性請輸入1,女性請輸入2。\n"); 
    printf("請輸入性別和年齡：");
 	scanf("%d%d",&sex,&age); //輸入性別及年齡 
    if( sex==1 && age>=18 )  
    {
    printf("你可以結婚\n");
    }
    if( sex==1 && age<18 )
    {
    printf("你不可以結婚\n");
    }
    if( sex==2 && age>=16 )
    {
    printf("妳可以結婚\n");
    }
    if( sex==2 && age<16 )
    {
    printf("妳不可以結婚\n");
    }
    return 0; //回傳值 0 
}
