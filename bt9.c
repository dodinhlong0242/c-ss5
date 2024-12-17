#include <stdio.h>

int tong3so(int a, int b, int c) {
    return a + b + c;
}

float trungbinh3so(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

int sonho3so(int a, int b, int c) {
    if (a <= b && a <= c) {
        return a;
    } else if (b <= a && b <= c) {
        return b;
    } else {
        return c;
    }
}

int solon3so(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int num1, num2, num3, choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap 3 so\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So nho nhat\n");
        printf("5. So lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap 3 so: ");
                scanf("%d %d %d", &num1, &num2, &num3);
                break;
            case 2:
                printf("Tong 3 so: %d\n", tong3so(num1, num2, num3));
                break;
            case 3:
                printf("Trung binh cong 3 so: %.2f\n", trungbinh3so(num1, num2, num3));
                break;
            case 4:
                printf("So nho nhat: %d\n", sonho3so(num1, num2, num3));
                break;
            case 5:
                printf("So lon nhat: %d\n", solon3so(num1, num2, num3));
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
        }
    } while (choice != 6);  

    return 0;
}
