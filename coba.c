#include <stdio.h>
int x(int arr[], int panjang, int a) {
    for (int i = 0; i<panjang; i++){
    if (arr[i] == a) {
        return i;
    }
}
return -1;
}

int main() {
    int arr[] = {8,5,3,4,10,11};
    int panjang = sizeof(arr)/sizeof(arr[0]);
    int Dicari = 3 ;
    int indeks = x(arr, panjang, Dicari);
     
    if(indeks != -1){
        printf("element %d berada di indeks %d", Dicari, indeks);
    }else{
        printf("element %d tidak berada dalam array", Dicari);
    }
    return 0;
}
