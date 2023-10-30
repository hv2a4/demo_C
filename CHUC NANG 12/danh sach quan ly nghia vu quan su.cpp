#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
#include"stdlib.h"
#include"time.h"
#include"string.h"
#include<ctype.h>
struct danhSach
{
	int sothutu;
    char ten[100];
	char queQuan[100];
	int namSinh;
	int tuoi;
};
int main ()
{ printf("Chuong trinh quan ly tuoi di nghia vu quan su\n");

	int n; 
	printf("nhap them so luong: ");
	scanf("%d",&n);
	danhSach nv[n];
	for(int i = 0; i<n;i++)
	{ printf("=================Thong tin thu %d=================\n",i+1);
	fflush(stdin);
		printf("Nhap so thu tu: ");
        scanf("%d",&nv[i].sothutu);
        fflush(stdin);
		printf("Nhap ten: "); 
		gets(nv[i].ten);
		printf("Nhap que quan: ");
		gets(nv[i].queQuan);
		printf("Nhap nam sinh: ");
		scanf("%d",&nv[i].namSinh);
	nv[i].tuoi = 2022 - nv[i].namSinh;
	printf("Tuoi hien tai cua ban la: %d\n",nv[i].tuoi);		
	}


 printf("*****Danh sach trung tuyen nghia vu quan su*****\n");
for (int i =0;i<n;i++)
{
		if(nv[i].tuoi>=18 &&nv[i].tuoi <27 )
	{
		
	printf("\nSo thu tu : %d",nv[i].sothutu);
	printf("\nTen: %s",nv[i].ten);
	printf("\nQue quan: %s",nv[i].queQuan);
	printf("\nNam sinh: %d ",nv[i].namSinh);
	printf("\nTuoi : %d\n",nv[i].tuoi);
	
	}
}


 printf("\n*****Danh sach khong trung tuyen nghia vu quan su*****\n");
 for (int i = 0; i<n;i++)
 {	
 	if (nv[i].tuoi<18 )
 	{
 		
	printf("\nSo thu tu : %d",nv[i].sothutu);
	printf("\nTen: %s",nv[i].ten);
	printf("\nQue quan: %s",nv[i].queQuan);
	printf("\nNam sinh: %d ",nv[i].namSinh);
	printf("\nTuoi : %d\n",nv[i].tuoi);
	 }
}
printf("\n*****Danh sach het tuoi di nghia vu quan su*****\n");
 for (int i = 0; i<n;i++)
 {	
 	if ( nv[i].tuoi >=27)
 	{
 		
	printf("\nSo thu tu : %d",nv[i].sothutu);
	printf("\nTen: %s",nv[i].ten);
	printf("\nQue quan: %s",nv[i].queQuan);
	printf("\nNam sinh: %d ",nv[i].namSinh);
	printf("\nTuoi : %d\n",nv[i].tuoi);
	 }
}	
char timkiem[100];
printf("=== Tim kiem=====\n");
printf("Nhap ten can tim can tim: ");
fflush(stdin);
gets(timkiem);
printf("Danh sach thong tin ban dang tim \n");
for(int i =0; i<n;i++)
{
	if(strcmp(nv[i].ten,timkiem)==0)
	{
	printf("\nSo thu tu : %d",nv[i].sothutu);
	printf("\nTen: %s",nv[i].ten);
	printf("\nQue quan: %s",nv[i].queQuan);
	printf("\nNam sinh: %d ",nv[i].namSinh);
	printf("\nTuoi : %d\n",nv[i].tuoi);
	}
}
getch ();
return 0;
}

