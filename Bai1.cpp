#include <stdio.h>

int main(){
	int n;
	do{
	   printf("Moi ban nhap mot so nguyen duong n =");
	   scanf("%d",&n);
	   if(n<=0){
	   	printf("Ban da nhap sai(n<0). Xin moi nhap lai(n>0)\n");
	   }	
	}while(n<=0);
	//In tong tu 1 den n 
	int x,sum=0;
	for(int x = 1; x <=n;x++){
		sum += x;
	}
    	printf("Tong tu 1 den %d la :%d",n,sum);
	//In cac so chan tu 1 den n
	printf("\nCac so chan tu 1 den %d la\n",n);
	for(int i = 1; i<=n;i++){
		if(i%2==0){
			printf("%d\t",i);
		}
	}printf("\n");
	//Kiem tra so x(Nhap tu ban phim)co trong day so tu 1 den n
	int z;
	printf("Moi ban nhap so can tim la");
	scanf("%d",&z);
	if(z>=1 && z<=n){
	printf("%d co trong day so tu 1 den %d",z,n);
}else{
	printf("%d khong co trong day so tu 1 den %d",z,n);
}
	return 0;
}
