#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
int main()
{
	
	float tienVay,tienTraGop,tienTraTruoc,phanTramVay;
    printf("\tChuong Trinh Tinh Tien Mua Xe Tra Gop\n\n");
    int tienXe;
	printf("nhap gia tri cua chiec xe vao:");
	scanf("%d",&tienXe); 
    printf("xin moi nhap so phan tram ban muon vay: "); scanf("%f",&tienVay);
    
	if(tienVay<1 || tienVay>99){
		printf("so tien phan tram ban muon vay khong hop le\n");
	}
	else{
		phanTramVay = tienVay / 100;
        tienTraGop = (float)tienXe * phanTramVay;
	    tienTraTruoc= (float)tienXe - tienTraGop; 
	    printf("so tien ma ban tra truoc: %1.f\n",tienTraTruoc);
	    printf("so tien ma ban phai tra gop trong 24 nam: %1.f\n",tienTraGop);
		int tienLai;
		int tienGoc = tienTraGop / 288;
		int tienTra;
		int tienCon,nam=0;
		tienCon = tienTraGop;
		printf("Ky Han | Lai Phai Tra | Goc Phai Tra | So Tien phai tra | So Tien Con Lai \n");
		for(int i =1;i<=288;i++)
		{
		  tienLai= tienCon *0.006;
		  tienTra= tienGoc+ tienLai;
		  tienCon = tienCon- tienGoc;
		  printf("----------------------------------------------------------------------\n");
		 printf("%6d|  ",i);
		 printf("%12d  |",tienLai);
		 printf("%12d  |",tienGoc);
		 printf("%12d  |",tienTra);
		 printf("%12d  |",tienCon);
		 printf("\n"); 
		  if(i%12==0)
		  {
		  	nam++;
		 	printf("\n");
		 	printf("//=====================Ket Thuc %d nam ===========================\n",nam);
		 	printf("\n");
		  }
		}
		
}
	
getch();
return 0;
}
