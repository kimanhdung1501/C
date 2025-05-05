#include<stdio.h>
#include<stdlib.h>

void menu();
void bai1();
void bai2();
void bai3();
//Xay dung chuong trinh
int main(){
	menu();
	return 0;
}
//Xay dung bai menu
void menu(){
	int chon;
	do{
		laplai:system("cls");
		printf("+------------MENU------------+\n");
		printf("|1. Thong tin ca nhan        |\n");
		printf("|2. Xep loai diem            |\n");
		printf("|3. Thong tin Laptop         |\n");
		printf("|0. Thoat                    |\n");
		printf("+----------------------------+\n");
		printf("Moi ban chon chuong trinh:");
		scanf("%d",&chon);
		//Chon
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
				printf("Ban da nhap sai chuong trinh moi ban nhap lai!");getch();
				goto laplai;			
		}getch();
	}while(chon>=0 && chon<=3);
}
//Xay dung bai 1
void bai1(){
	char datnuoc[50],thanhpho[50],duong[50];
	int sonha;
	fflush(stdin);
	printf("----Xin moi nhap thong tin cua ban----\n");
	printf("Dat nuoc cua ban la:");gets(datnuoc);
	printf("Thanh pho cua ban la:");gets(thanhpho);
	printf("Duong khu ban song la:");gets(duong);
	printf("So nha cua ban la:");scanf("%d",&sonha);
	system("cls");
	printf("---- Thong tin cua ban la ----\n");
	printf("Dat nuoc cua ban la: %s\n",datnuoc);
	printf("Thanh pho cua ban la: %s\n",thanhpho);
	printf("Duong khu ban song la: %s\n",duong);
	printf("So nha cua ban la: %d",sonha);
}
//Xay dung bai 2 xep loai diem thi
void bai2(){
	int diemthiTA;
	printf("Moi ban nhap diem thi tieng anh:");
	scanf("%d",&diemthiTA);
	if(diemthiTA<50){
		printf("Truot");
	}else if(diemthiTA<80){
		printf("Kha");
	}else{
		printf("Gioi");
	}
}
//Xay dung bai 3
void bai3(){
	int i,j,n,dem=0,kichco[100];//n la so luong
	printf("+------------Thong tin Laptop------------+\n");
	printf("Moi ban nhap so luong:");scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Kich co may %d la:",i+1);
		scanf("%d",&kichco[i]);
		if(kichco[i]%2==0) dem++;	
	}printf("So luong Laptop co kich co chia het cho 2 la: %d",dem);
	printf("\nMang truoc khi sap xep:\n");
	for(i=0;i<n;i++)printf("%d",kichco[i]);
	for(i=0;i<n;i++){
		int temp;
		for( j=i+1;j<n;j++){
			if(kichco[i] < kichco[j]){
				temp = kichco[j];
				kichco[j] = kichco[i];
				kichco[i] = temp;
			}
		}
	}
		printf("Mang sau khi sap xep:");
	for( i=0;i<n;i++){
		printf("%d",kichco[i]);
	}			
}	


