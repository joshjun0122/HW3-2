#include <stdio.h>

// 漢諾塔函數

void hanoi(int n, char x, char y, char z);

int main() {
    int n;
    printf("請輸入圓盤的數量: ");
    scanf("%d", &n);

    hanoi(n, 'A', 'C', 'B');  // A 為起始柱子, C 為目標柱子, B 為輔助柱子
    return 0;
}
// x 為起始柱子, y 為目標柱子, z為輔助柱子

void hanoi(int n, char x, char y, char z) {
    if (n == 1) {
        printf("將圓盤 1 從 %c 移動到 %c\n", x, y);
        return;
    }
    hanoi(n - 1, x, z, y);  // 將 n-1 個圓盤從 x 移到 z
    printf("將圓盤 %d 從 %c 移動到 %c\n", n, x, y);  // 將第 n 個圓盤從 x 移到 y
    hanoi(n - 1, z, y, x);  // 將 n-1 個圓盤從 z 移到 y
}