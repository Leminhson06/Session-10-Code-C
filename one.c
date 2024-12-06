#include <stdio.h>

int main(){
    // Khởi tạo và gán giá trị cho mảng cần được sắp xếp
    int arr[] = {10,20,30,40,50,60};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element, found = 0;// khai bao yeu to cac yeu to xac dinh can tim ra chi so can duoc sap xep

    // Yeu cau nguoi dung nhap vao phan tu bat ki
    printf("Nhap vao phan tu can kiem tra: ");
    scanf("%d", &element);

    // Kiem tra xem phan tu co ton tai trong mang khong
    for (int i = 0; i < size; i++){
        if (arr[i] == element) {
            found = 1;
            break; // thoat vong lap khi tim thay
        }
    }

    // Neu khong tim thay
    if (!found) {
        printf("Phan tu %d khong ton tai trong mang.\n", element);
    } 

    return 0;
} 