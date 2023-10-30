#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{ int x,i,bienDem=0;
i =1;
printf("kiem tra so nguyen to: ",x);
scanf("%d",&x);
if (x<2)
printf("khong dung vui long nhap lai");
while (i<=x)
{
	if (x%i==0){
	bienDem+=1;
}
i++;		
}
if (bienDem==2){
printf("%d la so nguyen to",x);
}
else
printf("%d khong phai la so nguyen to",x);

getch ();
return 0;
}

