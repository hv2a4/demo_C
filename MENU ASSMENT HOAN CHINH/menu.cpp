#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
#include"stdlib.h"
#include"time.h"
#include"string.h"
#include<ctype.h>
struct sinhVien{
		char hoTen[50];
		float diem;
	};
void kiemTraSoNguyen()
{
	
		float x, kiemTra;
	int so = 2;
	int i = 0;
	kiemTra = 0;
	
	printf("Nhap x: "); scanf("%f", &x);

	if(x == (int)x )
	    {
		    printf("%.2f la so nguyen ", x);
	    } else{
	    	printf("%.3f ko phai so nguyen", x);
		}
 

	if (x == (int)x){
		if (x <= 1)
	   printf("\n%.2f Khong phai la so nguyen to");
	else{
		while(so < x)
	      {
		if((int)x % so == 0)
		    kiemTra++;
		    so++;
	      }
	if (kiemTra == 0)
	   printf("\n%.2f la so nguyen to", x);
	  else
	printf("\n%.2f Khong phai la nguyen to", x);
	   }     
	 }else
	printf("\n%.3f Khong phai la so nguyen to", x);


	if ((int)x < 1)
	      printf("\n%.3f Khong phai la so chinh phuong\n");
	  else{
		while (i * i <= (int)x)
	     {
	     	if (i * i == (int)x)
	     	{
	     	    printf("\n%.2f la so chinh phuong\n", x);
	     	    break;
			}
			i++;
		 }if (i * i != (int)x)
		 printf("\n%.2f khong phai la so chinh phuong\n", x);
	}
 }
 void cnhai()
 {
 	printf(" ------chuc nang tim uoc chung va boi so chung------\n");
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
  } 
  void karaok()
  {
  	printf("------chuc nang tinh tien cho quan karaoke------\n");
			int gioBatDau, gioKetThuc, soGio, thanhTien;
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
  }
  void tienDien()
  {
  		printf("------chuc nang tinh tien dien------\n");
				float x , y;
	int bac1 = 1678 , bac2 = 1734, bac3 = 2014, bac4 = 2536, bac5 = 2834, bac6 = 2927;
	printf("nhap vao so dien cua ban(kWh): ");
	scanf("%f",&x);
	if (x < 0)

	printf("\n vui long nhap lai so dien \n so dien khong nho hon 0");

	else

	if (x <= 50){
	y = x * bac1;
	printf("\n ban da su dung so dien trong khoang 0 - 50(kWh) \n so tien ban phai tra la: %.2f", y);
}
else if (x <= 100){
	y = 50*bac1+((x-50)*bac2);
	printf("\n ban da su dung so dien trong khoang 51 - 100(kWh) \n so tien ban phai tra la: %.2f", y);
	}else if (x <= 200){
	
	y = 50*bac1+(50*bac2)+(x-100)*bac3;
	printf("\n ban da su dung so dien trong khoang 101 - 200(kWh) \n so tien ban phai tra la: %.2f", y);
}
else if(x<= 300){
	y = (50*bac1)+(50*bac2)+(100*bac3)+(x-200)*bac4;
	printf("\n ban da su dung so dien trong khoang 201 - 300(kWh) \n so tien ban phai tra la: %.2f", y);
}
else if (x<= 400){
	y = (50*bac1)+(50*bac2)+(100*bac3)+(100*bac4)+(x-300)*bac5;
		printf("\n ban da su dung so dien trong khoang 301 - 400(kWh) \n so tien ban phai tra la: %.2f", y);
}
else if (x>400){
	y = (50*bac1)+(bac2*50)+(100*bac3)+(100*bac4)+(100*bac5)+(x - 400)*bac6;
		printf("\n ban da su dung so dien tren 400(kWh) \n so tien ban phai tra la: %.2f", y);
}
  	
  }
  void doiTien()
  {
  	int soTien, i, k;
			printf("Chuong trinh doi tien \n ") ;
	do{
		printf("Vui long nhap so tien can doi > 1: "); scanf("%d", &soTien);
		
	}while(soTien < 1);
	int tien = soTien;
	printf("%dk VND doi thanh:\n", soTien);
	int menhGia [9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
	int soTo [9] = {0};
	for (i = 0; i < 9; i++){
		if(i == 0)
		{
			while(soTien <= menhGia[i]){
			i++;
		   }
		}
		k = soTien / menhGia[i];
		if (k==0)
		continue;
		printf("%d to %dk VND\n", k, menhGia[i]);
		soTien = soTien - (k * menhGia[i]);
		if(soTien == 0)
		break;
	}
	
	
  }
  void thoatChuongTrinh()
  {
  	printf("------ Thoat chuong trinh------\n");
				exit (0);
  }
  void tinhTienLai()
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
  }
  void cn7()
  {
  	
     double tienXe;
    double  tienTraTruoc = 0; 
    double tienVay = 0;
    float laiXuatNam, laiXuatThang = 0, traTruoc, traGop;
    int n;
	printf("Nhap gia tien cua chiec xe: "); scanf("%lf", &tienXe);
	printf("Nhap lai xuat hang nam: "); scanf("%f", &laiXuatNam);
	printf("Nhap phan tram tra truoc: "); scanf("%f", &traTruoc);
	printf("Nhap thoi gian vay (nam): "); scanf("%d", &n);
	n = n * 12;
	traGop = 1 - traTruoc;
	tienVay = tienXe * traGop;
	
	tienTraTruoc = tienXe * traTruoc;
	printf("So tien vay: %.0lf\n", tienVay);
	printf("Tien tra lan dau: %.0lf\n", tienTraTruoc);
	double tienCon, tienTra, tienGoc, tienLai;
	tienGoc = tienVay / n;
	tienCon = tienVay;
	
	int nam = 0;
	printf("__________________________________________________________________________________+\n");
	printf("Ky han |   Lai phai tra  |   Goc phai tra   |   Tien phai tra   |   Tien con lai   |\n");
	for(int i = 1; i <= n; i++)
	{
		laiXuatThang = laiXuatNam * 10 / 12;
		tienLai = tienCon * (laiXuatThang/100);
		tienTra = tienGoc + tienLai;
		tienCon = tienCon - tienGoc;
		printf("-------*-----------------*------------------*-------------------*------------------*\n");
		printf("%4d   | ", i);
		printf("%13.0lf   |  ", tienLai);
		printf("%13.0lf   |  ", tienGoc);
		printf("%14.0lf   |  ", tienTra);
		printf("%13.0lf   |  ", tienCon);
		printf("\n");
		if (i % 12 == 0){
		    nam++;
		    printf("\n");
	    	printf("================================ ket thuc %d nam===============================\n", nam);
	    	printf("\n");
	    }
	    
	}

  }
  

void cn8()
{
	int n;
	printf("Nhap so luong hoc sinh: "); scanf("%d", &n);
	getchar();
	struct sinhVien dssv[n];
	int i, j;
	for(i = 0; i < n; i++)
	{
		
		printf("Nhap ten sinh vien thu %d: ", i + 1); gets(dssv[i]. hoTen);
		printf("Nhap diem sinh vien thu %d: ", i + 1); scanf("%f", &dssv[i]. diem);
	    getchar();
	}
	for(i = 0; i < n - 1; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if (dssv[i]. diem < dssv[j]. diem)
			{
			float diemtam;
			diemtam = dssv[i]. diem;
			dssv[i]. diem = dssv[j]. diem;
			dssv[j]. diem = diemtam;
			
			char tentam[100];
			strcpy(tentam, dssv[i]. hoTen);
			strcpy(dssv[i]. hoTen, dssv[j]. hoTen);
			strcpy(dssv[j]. hoTen, tentam);
			}
			
		}
	}
	printf("\n---------Danh sach sinh vien-------------\n");
	for(i = 0; i < n; i++)
	{
		printf("Ho ten: %s\n", dssv[i].hoTen);
		printf("Diem trung binh: %.2f\n", dssv[i].diem);
		if (dssv[i]. diem >= 9)
		{
		    printf("Hoc luc: xuat sac\n");
	    	printf("----------------------------------------\n");
	    }
		else if (dssv[i]. diem >= 8)
		{
			printf("Hoc luc: gioi\n");
		    printf("----------------------------------------\n");
		}
		else if (dssv[i]. diem >= 6.5)
		{
			printf("Hoc luc: kha\n");
	    	printf("----------------------------------------\n");
		}
		else if (dssv[i]. diem >= 5)
		{
			printf("Hoc luc: trung binh\n");
	    	printf("----------------------------------------\n");
		}
		else 
		{
			printf("Hoc luc: yeu\n");
			printf("----------------------------------------\n");
		}
		   
		
	}
}
void cn9()
{
	int soNgauNhien1,soNgauNhien2,so1,so2;
srand((int)time(0));
soNgauNhien1 =1+rand()%(15-1+1);
soNgauNhien2 =1+rand()%(15-1+1);

printf("\nNhap so thu nhat 1: "); scanf("%d",&so1);
printf("Nhap so thu nhat 2: "); scanf("%d",&so2);
printf("\nSo nguoi dung nhap: %d",so1);
printf("\nSo nguoi dung nhap: %d\n",so2);
 

if (so1<1 || so2>15){
	printf("khong hop le vui long nhap lai tu 1 den 15\n");
}
else
{	
printf("\nSo ngau nhien: %d",soNgauNhien1);
printf("\nSo ngau nhien: %d\n",soNgauNhien2);
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

}
struct toanTu 
{
	int tuso,mauso;
};
void cn10()
{
	struct toanTu so1,so2;
	printf("nhap tu so thu 1: ");
	scanf("%d",&so1.tuso);
	printf("nhap mau so thu 1: ");
	scanf("%d",&so1.mauso);
	printf("nhap tu so thu 2: ");
	scanf("%d",&so2.tuso);
	printf("nhap mau so thu 2: ");
	scanf("%d",&so2.mauso);
	struct toanTu tong , hieu , tich, thuong;
	if(so1.mauso==0||so2.mauso==0){
		printf("Vui long nhap mau so khac 0 !\n"); 	
	}else
	{
		tong.tuso = (so1.tuso*so2.mauso)+(so2.tuso*so1.mauso);
	tong.mauso= so1.mauso *so2.mauso;
	hieu.tuso = (so1.tuso*so2.mauso)-(so2.tuso*so1.mauso);
	hieu.mauso= so1.mauso *so2.mauso;
	tich.tuso = so1.tuso *so2.tuso;
	tich.mauso = so1.mauso *so2.mauso;
	thuong.tuso=so1.tuso*so2.mauso;
	thuong.mauso=so1.mauso*so2.tuso;
	
	 float a ,b,usc,x,y,x1,y1,x2,y2,y3,x3;
  a=x=tong.tuso;
  b=y=tong.mauso;
  a=x1=hieu.tuso;
  b=y1=hieu.mauso;
  a=x2=tich.tuso;
  b=y2=tich.mauso;
  a=x3=thuong.tuso;
  b=y3=thuong.mauso;
  
   
 if (a == (int)a)
{   
 
 	while(a!=b){
 		if(a>b){
 			a=a-b;
		 }else{
		 	b=b-a;
		 } 
	 }
	x=x/a;
	y=y/a;
	x1=x1/a;
	y1=y1/a;
	x2=x2/a;
	y2=y2/a;
	x3=x3/a;
	y3=y3/a;
	printf("\nTong 2 so: %d / %d \n", tong. tuso, tong. mauso);
	printf("Rut gon tong la %d / %d = %d / %d = %.3f\n",tong.tuso,tong.mauso,(int)x,(int)y,((float)tong.tuso/tong.mauso));
	printf("\nhieu 2 so: %d / %d \n", hieu. tuso, hieu. mauso);
	printf("Rut gon hieu la %d / %d = %d / %d = %.3f\n",hieu.tuso,hieu.mauso,(int)x1,(int)y1,((float)hieu.tuso/hieu.mauso));
	printf("\nTich 2 so: %d / %d \n", tich. tuso, tich. mauso);
	printf("Rut gon tich la %d / %d = %d / %d = %.3f\n",tich.tuso,tich.mauso,(int)x2,(int)y2,((float)tich.tuso/tich.mauso));
	printf("\nThuong 2 so: %d / %d \n", thuong. tuso, thuong. mauso);
	printf("Rut gon thuong la %d / %d = %d / %d = %.3f\n",thuong.tuso,thuong.mauso,(int)x3,(int)y3,((float)thuong.tuso/thuong.mauso));

	}
	
}

}
void cn11()
{
	printf("\tChuong trinh giao luu oan tu ti cung may tinh\n");
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
}
struct danhSach
{
	int sothutu;
    char ten[100];
	char queQuan[100];
	int namSinh;
	int tuoi;
};
void cn12()
{
	printf("Chuong trinh quan ly tuoi di nghia vu quan su\n");

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
}
int main ()
{ system("color 0c");
	do {
		int chucNang;
		char tiepTuc;
		printf("*._.*._.*_*._.*_*._.*_*._.*MENU*._.*_*._.*_*._.*_*._.*_*._.*._.**\n");
		printf("=1. Chuong trinh kiem tra so nguyen,so nguyen to,so chinh phuong=\n");
		printf("=2. Chuong trinh tinh uoc chung va boi so chung cua hai so      =\n");
		printf("=3. Chuong trinh tinh tien cho quan karaoke                     =\n");
		printf("=4. Chuong trinh tinh tien dien                                 =\n");
		printf("=5. Chuong trinh chuc nang doi tien                             =\n");
		printf("=6. Chuong trinh tinh lai vay ngan hang vay tra gop             =\n");
		printf("=7. Chuong trinh tinh vay tien mua xe                           =\n");
	    printf("=8. Chuong trinh sap xep thong tin sinh vien                    =\n");
	    printf("=9. Chuong trinh tro choi Fpoly                                 =\n");
	    printf("=10.Chuong trinh tinh toan phan so                              =\n");
	    printf("=11.Chuong trinh choi keo bua bao cung may tinh                 =\n");
	    printf("=12.Chuong trinh quan ly tuoi di nghia vu quan su               =\n");
		printf("=0. Thoat chuong trinh                                          =\n");
		printf("=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.=.\n");
		int so;
	printf(" MOI BAN CHON CHUC NANG  ");
	scanf("%d",&chucNang);
	switch (chucNang)
	{
		case 1: 
		{ printf("------Kiem tra so nguyuen------\n");
			kiemTraSoNguyen();
			break;
		}
		
			case 2: 
			{printf("------USC va BSC------\n");
			    cnhai();
				break;
			}
			
			case 3: 
			{ printf("------tinh tien quan Karaok------\n");
			karaok();
			break;
			}
			case 4:
			{printf("------Tinh tien dien------\n");
				tienDien();
				
		
			break;
			}
			case 5: 
			{ printf("------Doi tien------\n");
				doiTien();
		      break;
			}
			case 6: 
			{printf("------Tinh lai vay ngan hang vay tra gop------\n");
				tinhTienLai();
				break;
			}
			case 7:
				
					{printf("------Tinh vay tien mua xe------\n");
					cn7();
					break;
				}
				case 8:
					{
						printf("------Sap xep thong tin sinh vien------\n");
						cn8();
						break;
					}
					case 9:
						{
							printf("------Tro choi Fpoly------\n");
							cn9();
							break;
						}
						case 10:
							{
								printf("-----Tinh toan phan so-----\n");
								cn10();
								break;
							}
						case 11:

                            { printf("-----Keo bua bao cung may tinh-----\n");
                            cn11();
                            	break;
							}
							 case 12:
							 	{
							 		printf("----Quan ly tuoi di nghia vu quan su-----\n");
							 		cn12();
							 		break;
								 }
			case 0:
				{ 
				thoatChuongTrinh();
				default:
					 printf(" moi nhap so tu 1-5\n");
			    printf ("so ban nhap khong chinh xac moi ban kiem tra lai\n");
			}
	}
	 
	fflush(stdin);
	printf("Ban co muon tiep tuc hay khong Y/N:");
	scanf("%c",&tiepTuc);
	if (tiepTuc=='Y' || tiepTuc=='y'){
		system ("cls");
		continue;
	}
	else 
	break;
}


	while (true);
	getch ();
	return 0; 
 
 } 

