#include <stdio.h>
#include <stdbool.h>

// 函數用於判斷一個數是否為質數
bool isPrime(int n) {
    if (n <= 1) {
        return false; // 1和所有負數都不是質數
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // 如果有除了1和自身以外的因數，則不是質數
        }
    }
    return true; // 沒有其他因數，是質數
}

int main() {
    int num;

    // 提示用戶輸入一個正整數
    printf("請輸入一個正整數：");
    scanf("%d", &num);

    // 判斷是否為質數並顯示結果
    if (isPrime(num)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
