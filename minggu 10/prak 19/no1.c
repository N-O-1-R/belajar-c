    // Buatlah program yang terdiri atas :
    // - fungsi input() yang bertugas menanyakan jumlah data sekaligus memasukkan
    // data bilangan sebanyak yang diminta ke dalam array nilai[]
    // - fungsi findmax()yang bertugas mencari nilai terbesar yang ada pada array
    // nilai[] tsb
    // - fungsi main() yang memanggil fungsi input() dan fungsi findmax() ,
    // selanjutnya menampilkan nilai terbesar yang ada pada array nilai[]

    // Petunjuk : jadikan array sebagai parameter fungsi

    #include <stdio.h>
    #define MAX 100


    void input(int nilai[], int *jumlah) {
        printf("Masukkan jumlah data: ");
        scanf("%d", jumlah);
        
        for (int i = 0; i < *jumlah; i++) {
            printf("Masukkan nilai ke-%d: ", i + 1);
            scanf("%d", &nilai[i]);
        }
    }

    int findmax(int nilai[], int jumlah) {
        int max = nilai[0];
        for (int i = 1; i < jumlah; i++) {
            if (nilai[i] > max) {
                max = nilai[i];
            }
        }
        return max;
    }

    int main() {
            int nilai[MAX];
            int jumlah;
            
            input(nilai, &jumlah);
            
            int max = findmax(nilai, jumlah);
            
            printf("Nilai terbesar adalah: %d\n", max);
            
            return 0;
        }