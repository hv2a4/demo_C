#include<stdio.h>
#include<conio.h>
int main()
{ 
 float a,b,usc,bsc,x,y;
 printf("nhap so a: "); scanf("%f",& a);
 printf("nhap so b: "); scanf("%f",& b);
 x = a;
 y = b;
 if (a == (int)a)
{   
 if(a==0 || b==0){
   printf("vui long nhap lai\n");
 }if (a<0 || b<0){
 	printf("vui long nhap lai");
 }else{
 	while(a!=b){
 		if(a>b){
 			a=a-b;
		 }else{
		 	b=b-a;
		 } 
	 }
	 printf("so %d la uoc chung lon nhat\n",(int)a);
	 bsc=(x*y)/a;
   printf("so %d la boi so chung nho nhat\n",(int)bsc);
 }
}else 
printf("vui long nhap lai");
getch();
return 0;
}
