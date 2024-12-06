#include <stdio.h>

int main() {
    int n;
    int flag = -1;

    printf("Nhập kích thước mảng: ");
    scanf("%d", &n);

    int arr[n];

    // Khởi tạo và gán giá trị cho mảng
    printf("Nhập các phần tử của mảng:\n");
    for (int i = 0; i < n; i++) {
        printf("Phần tử %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Sắp xếp mảng
    bubbleSort(arr, n);
    printf("Mảng sau khi sắp xếp theo thứ tự tăng dần:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Nhập số nguyên cần tìm
    int x;
    printf("Nhập số nguyên cần tìm: ");
    scanf("%d", &x);

    // Tìm kiếm nhị phân
    int result = binarySearch(arr, n, x);
    if (result != -1) {
        printf("Số %d được tìm thấy tại vị trí: %d\n", x, result);
    } else {
        printf("Số %d không có trong mảng.\n", x);
    }

    return 0;
}
