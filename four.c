#include <stdio.h>

int main() {
    // Khởi tạo và gán giá trị cho mảng
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Mảng trước khi sắp xếp: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Gọi hàm sắp xếp chọn
    selectionSort(arr, size);

    printf("Mảng sau khi sắp xếp: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
 