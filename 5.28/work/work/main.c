#include <stdio.h>
#include <ctype.h>

char changeCase(char ch);

int main() {
    char ch;
    printf("請輸入一個字母：");
    scanf("%c", &ch);

    char result = changeCase(ch);
    printf("轉換後的字母：%c\n", result);

    return 0;
}

char changeCase(char ch) {
    if (isupper(ch)) {
        return tolower(ch);
    }
    else {
        return 0;
    }
    //return ch; 
}

/*
islower 函式檢查字母是否為小寫。
isupper 函式檢查字母是否為大寫。
tolower 函式將大寫字母轉為小寫。
toupper 函式將小寫字母轉為大寫。
*/