#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{
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
getch ();
return 0;
}

