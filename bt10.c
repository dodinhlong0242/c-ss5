#include <stdio.h>

int main() {
    int num;
    printf("Nhập vào một số nguyên: ");
    scanf("%d", &num);
    if (num < 0) {
        num = -num;  
        printf("Số bạn nhập là số âm, sau khi chuyển thành dương: ");
    }
    
    printf("Các chữ số trong số bạn nhập là: ");
    
    int digits[10], i = 0;

    while (num > 0) {
        digits[i] = num % 10;  
        num = num / 10;         
        i++;
    }
    
    for (int j = i - 1; j >= 0; j--) {
        printf("%d ", digits[j]);
    }
    printf("\n");

    return 0;
}
