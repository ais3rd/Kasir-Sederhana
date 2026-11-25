#include <stdio.h>

int makanan, jumlah, harga;
double total;

int main(){
    do {
        printf("Pilih menu:\n");
        printf("1. Nasi Goreng (Rp15.000)\n");
        printf("2. Mie Ayam (Rp12.000)\n");
        printf("3. Es Teh (Rp5.000)\n");
        scanf("%d", &makanan);

        if (makanan == 1) {
            harga = 15000;
            break;}
        else if (makanan == 2) {
            harga = 12000;
            break;}
        else if (makanan == 3) {
            harga = 5000;
            break;}
        else {
            printf("Input menu tidak tersedia.\n\n");;
            continue;}
    } while (harga == 0);

    printf("\nMasukkan jumlah pesanan: ");
    scanf("%d", &jumlah);
    if (jumlah > 0) {
        total = harga*jumlah;
        printf("Total pembayaran: Rp%.2lf", total);
    } else {
        printf("Masukkan jumlah pesanan yang valid.");}
return 0;
}
