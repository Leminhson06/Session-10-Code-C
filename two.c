#include <stdio.h>

int main(){
    // Khoi tao va gan gia tri cho mang
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Mang truoc khi sap xep: ");
    for (int i = 0; i < size; i++){
        printf("%d", arr[i]);
    }
    printf("\n");

    // Goi ham sap xe 

    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < size; i++) {
        printf("%d \t", arr[i]);
    }
    printf("\n");

    return 0;
}
