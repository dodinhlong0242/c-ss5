#include <stdio.h>
    int main() {
        int n, sum=0;
        do {
            printf("nhập vào một số nguyên dương:");
            scanf("%d ", &n);
            if(n <= 0) {
                printf("vui lòng nhập một số nguyên dương:");
            }
        }while (n <= 0);
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        printf("tổng các số từ 1 đến %d là: %d\n", n, sum);
        return 0;
    }