#include <stdio.h>

int main() {
    char dosya[100];
    FILE *f;
    char satir[300];

    printf("İçeriği görüntülenecek dosyanin adini giriniz: ");
    scanf("%s", dosya);

    f = fopen(dosya, "r");
    if (f == NULL) {
        printf("Dosya açilamadi! \n");
        return 1;
    }

    printf("\n Dosyanin içeriği: \n\n", dosya);

    while (fgets(satir, sizeof(satir), f) != NULL) {
        printf("%s", satir);
    }

    fclose(f);
    return 0;
}

