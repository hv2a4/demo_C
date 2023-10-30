#include<stdio.h> 
#include<conio.h> 
int main()
{
	int soTien, i, j;
	do{
		printf("Vui long nhap so tien can doi > 1: "); scanf("%d", &soTien);
		
	}while(soTien < 1);
	int tien = soTien;
	printf("%dk VND doi thanh:\n", soTien);
	int menhGia [9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
	int soTo [9] = (0);
	for (i = 0; i < 9; i++){
		if(i == 0)
		{
			while(soTien <= menhGia[i]){
			i++;
		   }
		}
		j = soTien / menhGia[i];
		printf("%d to %dk VND\n", j, menhGia[i]);
		soTien = soTien - (j * menhGia[i]);
		if(soTien == 1 )
		break;
	}
	
	
	getch(); 
	return 0;
}
