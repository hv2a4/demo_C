#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
int main  () 
{
	 int thang; 
	 float phantramvay;
int tienVay ;
printf("nhap so tien ban muon vay vao: ");
	scanf("%d",&tienVay);
	printf("nhap thoi gian vay: ");
	scanf("%d",&thang);
	printf("nhap lai suat vay: ");
	scanf("%f",&phantramvay); 
int tienLai;
int tienGoc = tienVay/thang;
int tienTra;
int tienPhaiTra;
tienPhaiTra = tienVay;
printf("___________________________________________________________________________\n");
printf("Ky han | Lai phai tra | Goc phai tra | So tien phai tra | So tien con lai |\n");
for ( int i  = 1 ; i<=thang;i++)
{
tienLai = tienPhaiTra*phantramvay;
tienTra = tienGoc + tienLai;
tienPhaiTra= tienPhaiTra - tienGoc;
printf("---------------------------------------------------------------------------\n");
printf("%6d | ",i);
printf("%12d |",tienLai);
printf("%13d |",tienGoc);
printf("%17d |",tienTra);
printf("%16d |",tienPhaiTra);
printf("\n");
}
printf("___________________________________________________________________________\n");
getch ();
return 0;
}

