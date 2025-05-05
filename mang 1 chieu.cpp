#include<stdio.h>

int main() {
	int mang[5]={10,20,30,40,50};
	printf("Nhap mang:");
	for(int i=0; i<5; i++){
		scanf("%d,&i");
	    printf("mang[%d]=%d \t",i,mang[i]);
    }
    return 0;
}
