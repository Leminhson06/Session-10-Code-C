#include <stdio.h>

int main(){
    // Khoi tao vs gan gia tri cho mang
    int arr[] = {29, 10, 14,37, 13};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Mang truoc khi sap xep: ");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");

    // Goi ham sap xep chen
    insertionSort(arr, size);

    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < size; i++){
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}