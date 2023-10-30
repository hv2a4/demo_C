#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{ int gioBatDau, gioKetThuc, soGio, thanhTien;
printf("nhap so gio bat dau: "); scanf("%d",&gioBatDau);
printf("nhap so gio ket thuc: "); scanf("%d",&gioKetThuc);

if(gioBatDau <12 || gioKetThuc >23)
{
	printf("khong co trong khung gio tu tu 12 -23 \n");
}
else if (gioBatDau > gioKetThuc)
printf("vui long nhap lai ");
else 
{
soGio = gioKetThuc-gioBatDau;
if (soGio <3){
thanhTien= soGio *150000;
printf("so tien ban phai tra la: %d \n",thanhTien);

}
else
{ thanhTien= 3*150000+(soGio-3)*150000*0.7;
printf("so tien cua ban phai tra la: %d\n",thanhTien);
}

{ if (gioBatDau >=14 && gioBatDau<=17){
	thanhTien= thanhTien *0.9;
	printf("thanh tien ban phai tra la: %d\n", thanhTien); 
	}
}
}

getch ();
return 0;
}

