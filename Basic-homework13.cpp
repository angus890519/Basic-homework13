/* �p������׹��-�򥻽m�ߧ@�~-�@�~13*/
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/03/21 10:00*/  
#include<stdio.h> //��ܮw 
#include<iostream> //��ܮw 

int main()
{
    int sex,age; //�w�q�ʧO�Φ~�� 
    printf("�p�G�k�ʽп�J1,�k�ʽп�J2�C\n"); 
    printf("�п�J�ʧO�M�~�֡G");
 	scanf("%d%d",&sex,&age); //��J�ʧO�Φ~�� 
    if( sex==1 && age>=18 )  
    {
    printf("�A�i�H���B\n");
    }
    if( sex==1 && age<18 )
    {
    printf("�A���i�H���B\n");
    }
    if( sex==2 && age>=16 )
    {
    printf("�p�i�H���B\n");
    }
    if( sex==2 && age<16 )
    {
    printf("�p���i�H���B\n");
    }
    return 0; //�^�ǭ� 0 
}
