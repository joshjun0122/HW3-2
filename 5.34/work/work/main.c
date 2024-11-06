#include <stdio.h>

int power(int base, int exponent);
int base, exponent;


int main() {
    printf("請輸入底數和指數：");
    scanf("%d %d", &base, &exponent);
    int result = power(base, exponent);
    printf("%d 的 %d 次方為：%d\n", base, exponent, result);

    return 0;
}


int power(int z, int  exponent) {
    if (exponent == 1) {
        return base;
    }
    else {
        return base * power(base, exponent - 1);
       // return power(base,exponent);
    }
}
