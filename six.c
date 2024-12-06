#include <stdio.h>

int main() {
    int n;
    printf("Nhập kích thước mảng: ");
    scanf("%d", &n);

    int arr[n];

    // Khởi tạo và gán giá trị cho mảng
    printf("Nhập các phần tử của mảng:\n");
    for (int i = 0; i < n; i++) {
        printf("Phần tử %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // Nhập số nguyên cần tìm
    int x;
    printf("Nhập số nguyên cần tìm: ");
    scanf("%d", &x);

    int positions[n]; // Mảng lưu trữ các vị trí tìm được
    int count = 0; // Đếm số lượng vị trí tìm được

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            positions[count] = i; // Lưu vị trí
            count++; // Tăng số lượng vị trí tìm được
        }
    }
    
    // In kết quả
    if (count > 0) {
        printf("Số %d được tìm thấy tại các vị trí: ", x);
        for (int i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    } else {
        printf("Số %d không có trong mảng.\n", x);
    }

    return 0;
}
