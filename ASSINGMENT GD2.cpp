#include <stdio.h>
int main() {
    int lop;
    printf("Nhap so luong cac lop trong CD FPT Polytechnic: ");
    scanf("%d", &lop);
    int siso[lop];
    for (int i = 0; i <lop; i++) {
        printf("Nhap si so cua lop %d: ", i + 1);
        scanf("%d", &siso[i]);
    }
    printf("So luong cac lop la: %d\n", lop);
    int lopcosisotren30 = 0;
    for (int i = 0; i < lop; i++) {
        if (siso[i] >= 30) {
            lopcosisotren30++;
        }
    }
    printf("So luong lop co si so >= 30: %d\n",lopcosisotren30);
    int sisolonnhat  = siso[0];
    int loplonnhat = 0;
    for (int i = 1; i < lop; i++) {
        if (siso[i] > sisolonnhat) {
            sisolonnhat = siso[i];
            loplonnhat = i;
        }
    }
    printf("Vi tri lop co si so lon nhat: %d\n", loplonnhat + 1);
    return 0;
}

