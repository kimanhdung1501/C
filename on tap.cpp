#include <stdio.h>

int main() {
//Nhap n
	int n;
	printf("Nhap so luong so =");
	scanf("%d",&n);
//Nhap n phan tu
	int a[50];// de luu tru day so
	for(int i = 0; i<n ;i++){
	printf("a[%d]=",i + 1);
	scanf("%d",&a[i]);
    }
    //In day so vua nhap
    printf("Day so vua nhap la:");
    for(int i=0;i<n;i++){
    	printf("%d\t",a[i]);
	}
	printf("\n");
//Sap xep day so theo chieu tang dan
	int temp;
	for(int i =0; i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				//hoan doi vi tri a[i] va a[j]
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
//In ra man hinh so da sap xep
printf("Day so sau khi sap xep la:");
for(int i=0;i<n;i++){
	printf("%5d",a[i]);
}	
	return 0;	
}
