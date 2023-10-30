#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
#include"stdlib.h"
#include"time.h"
#include"string.h"
#include<ctype.h>
struct sinhVien{
	char mssv[50];
char tenSV [50];
char nganhHoc[50];
float diemTB;
};

int main ()
{

int n; 
printf("nhap so luong sinh vien: ");
scanf("%d",&n);
sinhVien sv, danhsach[n];
for(int i =0; i<n;i++)
{    printf("=== Moi nhap thong tin sinh vien thu %d ===\n", i+1);
    fflush(stdin);
	printf("\nnhap ma so sinh vien: ");
    gets(danhsach[i].mssv);
    printf("\n nhap ten sinh vien: ");
    gets(danhsach[i].tenSV);
    printf("\n nhap ten nganh hoc thu: ");
    gets(danhsach[i].nganhHoc);
    printf("\n nhap diem trung binh: ");
    scanf("%f",&danhsach[i].diemTB);
}
// tamg dan
for(int i=0; i<n-1; i++){
	for(int j=n-1;j>i;j--){
		if(danhsach[i].diemTB > danhsach[j].diemTB)
		{
			struct sinhVien temp;
			temp =danhsach[i];
			danhsach[i]=danhsach[j];
			danhsach[j] =temp;
		}
	}
    }
    
printf("\n====== DANH SACH SINH VIEN ======\n");
for(int i =0; i<n;i++)
{ printf("=== Thong tin sinh vien thu %d:\n", i+1);
	printf("\nMSSV: %s",danhsach[i].mssv);
	printf("\nTen SV: %s",danhsach[i].tenSV);
    printf("\nTen nganh hoc: %s",danhsach[i].nganhHoc);
    printf("\nDiem trung binh SV: %.2f\n",danhsach[i].diemTB);
}	

for(int i=n;i>0;i--)
{
	
	
	printf("\nMSSV: %s",danhsach[i].mssv);
	printf("\nTen SV: %s",danhsach[i].tenSV);
    printf("\nTen nganh hoc: %s",danhsach[i].nganhHoc);
    printf("\nDiem trung binh SV: %.2f\n",danhsach[i].diemTB);
	
}
    

getch ();
return 0;
}

