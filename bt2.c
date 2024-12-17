#include <stdio.h>

int main() {
    int predefinedNumber = 25;  
    int userInput;  
    do {
        printf("Nhập vào một số (số cho trước là %d): ", predefinedNumber);
        scanf("%d", &userInput);
    } while (userInput != predefinedNumber);  
    printf("Bạn đã nhập đúng số %d. Chương trình kết thúc.\n", predefinedNumber);
    return 0;
}
