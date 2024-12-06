#include <stdio.h>

int main() {
    int n, m;

    // Nhập số dòng và số cột
    printf("Nhập số dòng (n): ");
    scanf("%d", &n);
    printf("Nhập số cột (m): ");
    scanf("%d", &m);

    int matrix[n][m];

    // Nhập giá trị các phần tử của ma trận
    printf("Nhập các phần tử của ma trận:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Phần tử [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Sắp xếp từng dòng của ma trận
    for (int i = 0; i < n; i++) {
        sortRow(matrix[i], m);
    }

    // In ma trận sau khi sắp xếp
    printf("Ma trận sau khi sắp xếp tăng dần theo từng dòng:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d \t ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
