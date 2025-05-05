#include <stdio.h>
int main(){
int a[100],n,x;
printf("So phan tu cua mang n =");
scanf("%d",&n);
for(int i = 0; i<n; i++){
	printf("Nhap a[%d]=",i);
	scanf("%d",&a[i]);
    }
    printf("Day so ban vua nhap la:\n");
for(int i = 0; i<n; i++){
	printf("%d\t",a[i]);
    }
    return 0;
}
