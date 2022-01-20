#include <stdio.h>
#include <stdlib.h>

int main(){
    // Inisiasi variabel
    int arr[4];
    int angka;
    system("cls");

    // Pengulangan untuk input array
    for(int i = 0; i < 4; i++){
        printf("Input Nilai\t: ");
        scanf("%d", &angka);
        arr[i] = angka;
    }
    
    // Nilai dari ukuran array
    int n = sizeof(arr)/sizeof(int);
    int m = n;

    // Perulangan bubble sort
    printf("\nProses Pengurutan Array.\n");
    for(int i = 0; i < n-1; ++i){
        for(int j = 0; j < m-1; ++j){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
            // Untuk melihat hasil setiap terjadinya perulangan
            // Tidak peduli apakah terjadi pertukaran tempat atau tidak

            // for(int k = 0; k < n; k++){
            //     printf("%d", arr[k]);
            //     if(k != n-1)
            //         printf(", ");
            // }
            // printf("\n");
        }
    }

    // Pencetakan array yang nilainya sudah diurutkan
    printf("\nAngka di dalam array adalah {");
    for(int i = 0; i < n; i++){
        printf("%d", arr[i]);
        if(i != n-1)
            printf(", ");
    }
    printf("}");
    return 0;
}
