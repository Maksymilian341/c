#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *plik_wejsciowy = fopen("wejscie.txt", "r");
    FILE *plik_wyjsciowy = fopen("wyjscie.txt", "w");

    char wiersz[1024];
    int liczniki[10] = {0};

    while (fgets(wiersz, sizeof(wiersz), plik_wejsciowy) != NULL) {
        int poziom = 0;
        while (wiersz[poziom] == '*') {
            poziom++;
        }

        if (poziom == 0) {
            continue;
        }

        if (poziom >= 10) {
            poziom = 9;
        }

        liczniki[poziom]++;
        
        for (int i = poziom + 1; i < 10; i++) {
            liczniki[i] = 0;
        }

        char *tekst = wiersz + poziom;
        while (*tekst == ' ' || *tekst == '\t') {
            tekst++;
        }

        for (int i = 1; i < poziom; i++) {
            fprintf(plik_wyjsciowy, "    "); 
        }

        for (int i = 1; i <= poziom; i++) {
            fprintf(plik_wyjsciowy, "%d.", liczniki[i]);
        }
        
        fprintf(plik_wyjsciowy, " %s", tekst);
    }

    fclose(plik_wejsciowy);
    fclose(plik_wyjsciowy);
    
    FILE *plik_wejsciowy1 = fopen("wejscie1.txt", "r");
    FILE *plik_wyjsciowy1 = fopen("wyjscie1.txt", "w");

    int liczniki1[10] = {0};

    while (fgets(wiersz, sizeof(wiersz), plik_wejsciowy1) != NULL) {
        int poziom = 0;
        while (wiersz[poziom] == '*') {
            poziom++;
        }

        if (poziom == 0) {
            continue;
        }

        if (poziom >= 10) {
            poziom = 9;
        }

        liczniki1[poziom]++;
        
        for (int i = poziom + 1; i < 10; i++) {
            liczniki1[i] = 0;
        }

        char *tekst = wiersz + poziom;
        while (*tekst == ' ' || *tekst == '\t') {
            tekst++;
        }

        for (int i = 1; i < poziom; i++) {
            fprintf(plik_wyjsciowy1, "    "); 
        }

        if (poziom == 1) {
            fprintf(plik_wyjsciowy1, "%c.", 'A' + liczniki1[1] - 1);
        } else if (poziom == 2) {
            fprintf(plik_wyjsciowy1, "%d.", liczniki1[2]);
        } else if (poziom == 3) {
            fprintf(plik_wyjsciowy1, "%c.", 'a' + liczniki1[3] - 1);
        } else if (poziom == 4) {
            fprintf(plik_wyjsciowy1, "(%d)", liczniki1[4]);
        } else if (poziom == 5) {
            fprintf(plik_wyjsciowy1, "(%c)", 'a' + liczniki1[5] - 1);
        } else {
            fprintf(plik_wyjsciowy1, "%d.", liczniki1[poziom]);
        }
        
        fprintf(plik_wyjsciowy1, " %s", tekst);
    }

    fclose(plik_wejsciowy1);
    fclose(plik_wyjsciowy1);

    return 0;
}
