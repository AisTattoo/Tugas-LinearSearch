#include <stdio.h>
int x(int arr[], int panjang) {
    int nilaiTerkecil = arr[0];
    for (int i = 1; i < panjang; i++) {
        if (arr[i] < nilaiTerkecil) {
            nilaiTerkecil = arr[i];
        }
    }
    return nilaiTerkecil;
}
int y(int arr[], int panjang) {
    int terbesar = arr[0];
    int terbesarKedua = arr[0];
    for (int i = 1; i < panjang; i++) {
        if (arr[i] > terbesar) {
            terbesarKedua = terbesar;
            terbesar = arr[i];
        } else if (arr[i] > terbesarKedua && arr[i] < terbesar) {
            terbesarKedua = arr[i];
        }
    }

    return terbesarKedua;
}
int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7};
    int panjang = sizeof(array) / sizeof(array[0]);
    int nilaiTerkecil = x(array, panjang);
    int elemenTerbesarKedua = y(array, panjang);
    printf("Nilai terkecil dalam array: %d\n", nilaiTerkecil);
    printf("Elemen terbesar kedua dalam array: %d\n", elemenTerbesarKedua);
    return 0;
}
