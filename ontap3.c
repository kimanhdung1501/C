#include<stdio.h>
#include<stdlib.h>
void menu();//Ham chua menu
void bai1();//Ham hien thi thong tin nyc
void bai2();//Ham tinh toan
void bai3();//Thong tin diem sinh vien
//chuong trinh chinh
int main(){
	menu();
	return 0;
}

//Xay dung ham chua menu
void menu(){
	int chon;
	do{
		laplai:system("cls");
		printf("+-------------MENU-------------+\n");
		printf("1.THONG TIN NYC\n");
		printf("2.TINH TOAN\n");
		printf("3.THONG TIN DIEM SINH VIEN\n");
		printf("0.THOAT\n");
		printf("+------------------------------+\n");
		printf("Moi ban lua chon chuc nang:");
		scanf("%d",&chon);
		
		switch(chon){
			case 1:
				bai1();
				break;
			case 2:
				bai2();
				break;
			case 3:
			    bai3();
				break;
			case 0: exit(0);			
			default:
				printf("Ban da nhap sai chuc nang. Moi ban nhap lai");getch();
				goto laplai;
		}
	getch();				
	}while(chon>=0 && chon<=3);
}		

//Xay dung ham nhap thong tin va hien thi thong tin nyc
void bai1(){
	char ten[50];//Khai bao bien kieu chuoi
	int tuoi;
	float cannang,chieucao;
	fflush(stdin);
	printf("Moi ban nhap ho va ten nguoi yeu cu:",ten);gets(ten);
	printf("Tuoi: ");scanf("%d",&tuoi);
	printf("Cannang: ");scanf("%f",&cannang);
	printf("Chieucao: ");scanf("%f",&chieucao);
	system("cls");
	printf("+-----Ten nguoi yeu cu ban vua nhap la-----+\n");
	printf("Ho va ten: %s\n",ten);
	printf("Tuoi: %d\n",tuoi);
	printf("Can nang: %.0f\n",cannang);
	printf("Chieu cao: %.0f\n",chieucao);
}

//Tinh toan
void bai2(){
	int n,i,tongchan=0, demchan=0;
	printf("n= "); scanf("%d",&n);
	for( i=2; i<=n; i++){
		if(i%2==0){
			tongchan+=i;
			demchan++;
		}
	}
	printf("Tong cac so chan tu 1 den %d la: %d",n,tongchan);
	printf("\nSo luong cac so chan tu 1 den %d la: %d",n,demchan);		
}	

//Thong tin diem sinh vien
void bai3(){
	float max=0,diemNMLT[50];
	int n,i, dem=0;//n la so luong sinh vien lop
	//Nhap so luong sinh vien
	printf("Moi ban nhap so luong sinh vien cua lop: ");scanf("%d",&n);
	//Nhap diem cho tung sinh vien
	for( i=0;i<n;i++){
		printf("Nhap diemNMLT[%d]=",i+1);
		scanf("%f",&diemNMLT[i]);
		if(diemNMLT>=5) dem++;
		if(max<diemNMLT[i]) max=diemNMLT[i]; 	
	}	
	//In ra so luong diem cua sinh vien
printf("So luong diem cua sinh vien la: %d",n);
printf("\nSo luong diem thi cua sinh vien >= 5 la: %d",dem);
printf("\nDiem thi cao nhat mon NMLT la: %.0f",max);
}	
