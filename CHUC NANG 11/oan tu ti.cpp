#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
#include"stdlib.h"
#include"time.h"
#include"string.h"
#include<ctype.h>
int main ()
{ printf("\tChuong trinh giao luu oan tu ti cung may tinh\n");
	int soNgauNhien;
	int nguoiChoi;
srand((int)time(0));
soNgauNhien =1+rand()%(3 -1+1);
printf("Luu y\n");
printf("1.keo\n");
printf("2.bua\n");
printf("3.bao\n\n");
printf("Moi ban chon tu 1 den 3: ");
scanf("%d",&nguoiChoi);
if (nguoiChoi<0 || nguoiChoi>3 || soNgauNhien != nguoiChoi )
{
	printf("Xem luu y va chon lai di ban oi!!");
}else{

printf("May tinh chon %d \n",soNgauNhien); 
if(soNgauNhien==nguoiChoi)
{
	printf("Hoa nhau.");
	printf("Nhin la biet khong gion roi\n");
}
else
if(soNgauNhien<nguoiChoi)
{  
	printf("Ban da thang.");
    printf(" Qua ghe gom!\n");
}
else
if(soNgauNhien>nguoiChoi)
{
	printf("May tinh thang.");
	printf("La do ban den thoi :))\n");
}
}
getch ();
return 0;
}

