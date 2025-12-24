#include <stdio.h>

int main() {
    char dosya[100];
    FILE *f;
    char satir[300];

    // Kullanıcıdan içeriği görüntülenecek dosya adını alır
    printf("İçeriği görüntülenecek dosyanin adini giriniz: ");
    scanf("%s", dosya);

    // Dosyayı okuma modunda açar
    f = fopen(dosya, "r");

    // Eğer dosya açılamazsa
    if (f == NULL) {
        printf("Dosya açilamadi! \n");
        return 1;
    }

    printf("\n Dosyanin içeriği: \n\n", dosya);

    // Dosya sonuna gelene kadar satır satır okur
    while (fgets(satir, sizeof(satir), f) != NULL) {
        printf("%s", satir);
    }

    // Dosyayı kapatır
    fclose(f);
    
    return 0;
}
