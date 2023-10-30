#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
#include"stdlib.h"
#include"time.h"
#include"string.h"
#include<ctype.h>
int main ()
{ 
	system("color 0b");
	int soNgauNhien1,soNgauNhien2,so1,so2;
srand((int)time(0));
soNgauNhien1 =1+rand()%(15-1+1);
soNgauNhien2 =1+rand()%(15-1+1);

printf("\nnhap so thu nhat 1: "); scanf("%d",&so1);
printf("nhap so thu nhat 2: "); scanf("%d",&so2);
printf("\nso nguoi dung nhap: %d",so1);
printf("\nso nguoi dung nhap: %d\n",so2);
 

if (so1<1 || so2>15){
	printf("khong hop le vui long nhap lai tu 1 den 15\n");
}
else
{	
printf("\nso ngau nhien: %d",soNgauNhien1);
printf("\nso ngau nhien: %d\n",soNgauNhien2);
if(so1==soNgauNhien1 && so2==soNgauNhien2)
	printf("Trung giai nhat\n");

else
if (so1==soNgauNhien1 && so2!=soNgauNhien2)
	printf("Trung giai nhi\n");
	else 
	if (so1!=soNgauNhien1 && so2==soNgauNhien2)  
printf("Trung giai nhi\n");
else
if(so1!=soNgauNhien2&& so2==soNgauNhien1 )
{
	printf("Trung giai nhi\n");
}
else
if (so1!=soNgauNhien1&& so2!=soNgauNhien2)
	printf("Chuc ban mai man lan sau\n");


}

getch ();
return 0;
}

