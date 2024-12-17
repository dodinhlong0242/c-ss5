#include <stdio.h>

int UCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;  
        a = temp;  
    }
    return a;
}

int BCNN(int a, int b) {
    return (a * b) / UCLN(a, b);
}

int main() {
    int num1, num2;

    printf("Nhập số nguyên dương thứ nhất: ");
    scanf("%d", &num1);
    printf("Nhập số nguyên dương thứ hai: ");
    scanf("%d", &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Vui lòng nhập vào hai số nguyên dương!\n");
    } else {
        int result = BCNN(num1, num2);
        printf("Bội chung nhỏ nhất của %d và %d là: %d\n", num1, num2, result);
    }

    return 0;
}
