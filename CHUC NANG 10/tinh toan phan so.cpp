#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
#include"stdlib.h"
#include"time.h"
#include"string.h"
#include<ctype.h>
struct toanTu 
{
	int tuso,mauso;
};
int main ()
{
struct toanTu so1,so2;
	printf("nhap tu so thu 1: ");
	scanf("%d",&so1.tuso);
	printf("nhap mau so thu 1: ");
	scanf("%d",&so1.mauso);
	printf("nhap tu so thu 2: ");
	scanf("%d",&so2.tuso);
	printf("nhap mau so thu 2: ");
	scanf("%d",&so2.mauso);
	struct toanTu tong , hieu , tich, thuong;
	if(so1.mauso==0||so2.mauso==0){
		printf("Vui long nhap mau so khac 0 !\n"); 	
	}else
	{
		tong.tuso = (so1.tuso*so2.mauso)+(so2.tuso*so1.mauso);
	tong.mauso= so1.mauso *so2.mauso;
	hieu.tuso = (so1.tuso*so2.mauso)-(so2.tuso*so1.mauso);
	hieu.mauso= so1.mauso *so2.mauso;
	tich.tuso = so1.tuso *so2.tuso;
	tich.mauso = so1.mauso *so2.mauso;
	thuong.tuso=so1.tuso*so2.mauso;
	thuong.mauso=so1.mauso*so2.tuso;
	
	 float a ,b,usc,x,y,x1,y1,x2,y2,y3,x3;
  a=x=tong.tuso;
  b=y=tong.mauso;
  a=x1=hieu.tuso;
  b=y1=hieu.mauso;
  a=x2=tich.tuso;
  b=y2=tich.mauso;
  a=x3=thuong.tuso;
  b=y3=thuong.mauso;
  
   
 if (a == (int)a)
{   
 
 	while(a!=b){
 		if(a>b){
 			a=a-b;
		 }else{
		 	b=b-a;
		 } 
	 }
	x=x/a;
	y=y/a;
	x1=x1/a;
	y1=y1/a;
	x2=x2/a;
	y2=y2/a;
	x3=x3/a;
	y3=y3/a;
	printf("\nTong 2 so: %d / %d \n", tong. tuso, tong. mauso);
	printf("Rut gon tong la %d / %d = %d / %d = %.3f\n",tong.tuso,tong.mauso,(int)x,(int)y,((float)tong.tuso/tong.mauso));
	printf("\nhieu 2 so: %d / %d \n", hieu. tuso, hieu. mauso);
	printf("Rut gon hieu la %d / %d = %d / %d = %.3f\n",hieu.tuso,hieu.mauso,(int)x1,(int)y1,((float)hieu.tuso/hieu.mauso));
	printf("\nTich 2 so: %d / %d \n", tich. tuso, tich. mauso);
	printf("Rut gon tich la %d / %d = %d / %d = %.3f\n",tich.tuso,tich.mauso,(int)x2,(int)y2,((float)tich.tuso/tich.mauso));
	printf("\nThuong 2 so: %d / %d \n", thuong. tuso, thuong. mauso);
	printf("Rut gon thuong la %d / %d = %d / %d = %.3f\n",thuong.tuso,thuong.mauso,(int)x3,(int)y3,((float)thuong.tuso/thuong.mauso));

	}
	


getch ();
 return 0;
}
}
