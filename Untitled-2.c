#include <stdio.h>
enum day {             
     monday = 1,   
     sunday,
    
};

int main() {
    int pilihan;

    printf("Masukkan Nama hari:\n");
    printf("1. Monday\n");
    printf("2. sunday\n");
   printf("Pilihan anda: ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case monday:
            printf("hari libur\n");
            break;
        case sunday:
            printf("bukan hari libur\n");
            break;
        default:
            printf("Pilihan tidak valid\n");
    }
    
    return 0;
}