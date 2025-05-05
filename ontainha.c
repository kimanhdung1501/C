#include<stdio.h>
#include<stdlib.h>

void menu();
void bai1();
void bai2();
int main(){
	menu();
	return 0;	
}

void menu(){
	int chon;
	do{
		laplai:system("cls");
		printf("+-------------MENU-------------+\n");
		printf("|1. Thong tin gia dinh         |\n");
		printf("|2. Tim so chia het cho 3      |\n");
		printf("|3. Thong tin diem thi mon C   |\n");
		printf("|0. Thoat                      |\n");
		printf("+------------------------------+\n");
		printf("Moi ban nhap chuong trinh:");
		scanf("%d",&chon);
		switch(chon){
			case 1:
				bai1();
				break;
			case 2:
				bai2();
				break;
			case 3:
			//	bai3();
				break;
			case 0: exit(0);
			default:
				printf("Ban nhap[ khong dung chuong trinh moi nhap lai");getch();
				goto laplai;			
		}getch();
	}while(chon>=0 && chon<=3);
}
//Xay dung bai 1 thong tin gia dinh
void bai1(){
	char ten[50];
	int tuoi;
	float chieucao,cannang;
	fflush(stdin);
	printf("MOI BAN NHAP TEN NYC:");gets(ten);
	printf("TUOI:");scanf("%d",&tuoi);	
	printf("Chieu cao:");scanf("%f",&chieucao);
	printf("Can nang:");scanf("%f",&cannang);
	printf("-----Thong tin NYC-----\n");
	printf("Ho va ten la: %s\n",ten);
	printf("Tuoi: %d\n",tuoi);
	printf("Chieu cao la: %.0f\n",chieucao);
	printf("Can nang la: %.0f\n",cannang);
}
//Xay dung bai 2 chia het cho 3
void bai2(){
	int n,i,dem=0;
	printf("Moi nhap n=");scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%3==0){
			n=i%3;
			if(n==0){
				printf("%d",n);
			}		
		}
	}
}	
