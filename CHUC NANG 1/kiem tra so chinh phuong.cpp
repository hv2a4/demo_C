#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{ 
int i,x, bienDem;
bienDem=0;
i == 1;
printf("kiem tra so chinh phuong: ",x); scanf("%d",&x);
while(i*i<=x) // i la so lap , x la dieu kien lap
{
	if(i*i==x){ // so chinh phuong bang so lap nhan so lap bang so nhap tu ban phim
	bienDem=bienDem+1; // lap duoc 1 lan thi bien diem tang them 1
}
	i++;
}
if (bienDem==0) // bien dem tang 1 thi ko dung vs dieu kien
printf("so %d khong phai la so chinh phuong",x);
else
printf("so %d la so chinh phuong ",x);
getch ();
return 0;
}

