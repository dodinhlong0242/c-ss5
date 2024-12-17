#include<stdio.h>

    int main() {
        int num1, num2, choice;
        printf("nhập vào số thứ nhất:");
        scanf("%d ",&num1);
        printf("nhập số nguyên thứ hai:");
        scanf("%d ", &num2);
        
        do {
            printf("\nCALCULATOR\n");
            printf("1. tổng 2 số\n");
            printf("2. hiệu 2 số\n");
            printf("3. tích 2 số\n");
            printf("4. thương 2 số\n");
            printf("5. thoát\n");
            printf("lựa chọn của bạn:");
            scanf("%d ", &choice);
            
            switch (choice) {
                 case 1:
                printf("Tổng của %d và %d là: %d\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("Hiệu của %d và %d là: %d\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("Tích của %d và %d là: %d\n", num1, num2, num1 * num2);
                break;
            case 4:
                if (num2 != 0) {
                    printf("Thương của %d và %d là: %.2f\n", num1, num2, (float)num1 / num2);
                } else {
                    printf("Lỗi: Không thể chia cho 0.\n");
            }
            break;
        case 5:
            printf("chuong trình kết thúc.\n");
            break;
        default:
            printf("lựa chọn không hợp lệ. vui lòng nhập lại.\n");
            }
        }while (choice != 5);
        return 0;
    }
            
            
