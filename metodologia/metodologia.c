#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    char Metodologia_1;
    bool Czy_dobrze_metodologia_1 = false;
    
    printf("1. Czym jest metodologia badań naukowych ? \n");
    printf("a) Zbiorem prypadkowych obserwacji \n");
    printf("b) Planem badania i sposobem uzyskania wiarygodnych wyników \n");
    printf("c) Wyłącznie analizą statystyczną \n");
    printf("\n");
    while( Czy_dobrze_metodologia_1 == false){
    scanf(" %c", &Metodologia_1);
    
    switch (Metodologia_1)
    {
    case 'a':
        printf("Nieprawidłowa odpowiedź \n ");
        break;
    case 'b':
        printf("Prawidłowa odpowiedź \n");
        Czy_dobrze_metodologia_1 = true;
        break;
    case 'c':
        printf("Nieprawidłowa odpowiedź \n ");
        break;
    }   
    } 

    printf("\n");


    char Metodologia_2;
    bool Czy_dobrze_metodologia_2 = false;
    
    printf("2. Które badania mają charakter dedukcyjny ? \n");
    printf("a) Empiryczne \n");
    printf("b) Eksperymentalne \n");
    printf("c) Logiczne i matematyczne \n");
    printf("\n");

    while( Czy_dobrze_metodologia_2 == false){
    scanf(" %c", &Metodologia_2);
    
    switch (Metodologia_2)
    {
    case 'a':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    case 'b':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    case 'c':
        printf("Prawidłowa odpowiedź \n");
        Czy_dobrze_metodologia_2 = true;
        break;
    }
    }

    printf("\n");


    char Metodologia_3;
    bool Czy_dobrze_metodologia_3 = false;
    
    printf("3. Która technika badań polega na analizie treści dokumentów ? \n");
    printf("a) Ankietowanie \n");
    printf("b) Badanie dokumentów \n");
    printf("c) Obserwacja uczestnicząca \n");
    printf("\n");

    while( Czy_dobrze_metodologia_3 == false){
    scanf(" %c", &Metodologia_3);
    
    switch (Metodologia_3)
    {
    case 'a':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    case 'b':
        printf("Prawidłowa odpowiedź \n");
        Czy_dobrze_metodologia_3 = true;
        break;
    case 'c':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    }
    }

    printf("\n");


    char Metodologia_4;
    bool Czy_dobrze_metodologia_4 = false;
    
    printf("4. Co powinno determinować wybw metodologii badań ? \n");
    printf("a) Poglądy promotora \n");
    printf("b) Liczba respondentów \n");
    printf("c) Cel badawczy \n");
    printf("\n");

    while( Czy_dobrze_metodologia_4 == false){
    scanf(" %c", &Metodologia_4);
    
    switch (Metodologia_4)
    {
    case 'a':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    case 'b':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    case 'c':
        printf("Prawidłowa odpowiedź \n");
        Czy_dobrze_metodologia_4 = true;
        break;
    }
    }

    printf("\n");


    char Metodologia_5;
    bool Czy_dobrze_metodologia_5 = false;
    
    printf("5. Badanie jakościowe najczęściej stosuje się, gdy badanie ma charakter:  \n");
    printf("a) Potwierdzający \n");
    printf("b) Eksploatacyjny \n");
    printf("c) Statystyczny \n");
    printf("\n");

    while( Czy_dobrze_metodologia_5 == false){
    scanf(" %c", &Metodologia_5);
    
    switch (Metodologia_5)
    {
    case 'a':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    case 'b':
        printf("Prawidłowa odpowiedź \n");
        Czy_dobrze_metodologia_5 = true;
        break;
    case 'c':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    }
    }

    printf("\n");


    char Metodologia_6;
    bool Czy_dobrze_metodologia_6 = false;
    
    printf("6. Która z poniższych technik jest metodą gromadzenia danych ?  \n");
    printf("a) Wywiad \n");
    printf("b) Hipoteza \n");
    printf("c) Wniosek \n");
    printf("\n");

    while( Czy_dobrze_metodologia_6 == false){
    scanf(" %c", &Metodologia_6);
    
    switch (Metodologia_6)
    {
    case 'a':
        printf("Prawidłowa odpowiedź \n");
        Czy_dobrze_metodologia_6 = true;
        break;
    case 'b':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    case 'c':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    }
    }

    printf("\n");


    char Metodologia_7;
    bool Czy_dobrze_metodologia_7 = false;
    
    printf("7. Obserwacja naukowa powinna być:  \n");
    printf("a) Subiektywna \n");
    printf("b) Wnikliwa i obiektywna \n");
    printf("c) Przypadkowa \n");
    printf("\n");

    while( Czy_dobrze_metodologia_7 == false){
    scanf(" %c", &Metodologia_7);
    
    switch (Metodologia_7)
    {
    case 'a':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    case 'b':
        printf("Prawidłowa odpowiedź \n");
        Czy_dobrze_metodologia_7 = true;
        break;
    case 'c':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    }
    }

    printf("\n");


    char Metodologia_8;
    bool Czy_dobrze_metodologia_8 = false;
    
    printf("8. Ankieta nie powinna:  \n");
    printf("a) Być zrozumiała \n");
    printf("b) Sugestować odpowiedzi \n");
    printf("c) Być logiczna \n");
    printf("\n");

    while( Czy_dobrze_metodologia_8 == false){
    scanf(" %c", &Metodologia_8);
    
    switch (Metodologia_8)
    {
    case 'a':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    case 'b':
        printf("Prawidłowa odpowiedź \n");
        Czy_dobrze_metodologia_8 = true;
        break;
    case 'c':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    }
    }

    printf("\n");


    char Metodologia_9;
    bool Czy_dobrze_metodologia_9 = false;
    
    printf("9. Jedną z zalet ankietowania jest: \n");
    printf("a) Wysoki koszt badań \n");
    printf("b) Możliwość badania dużych grup \n");
    printf("c) Brak anonimowości \n");
    printf("\n");

    while( Czy_dobrze_metodologia_9 == false){
    scanf(" %c", &Metodologia_9);
    
    switch (Metodologia_9)
    {
    case 'a':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    case 'b':
        printf("Prawidłowa odpowiedź \n");
        Czy_dobrze_metodologia_9 = true;
        break;
    case 'c':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    }
    }

    printf("\n");


    char Metodologia_10;
    bool Czy_dobrze_metodologia_10 = false;
    
    printf("10. Techniki socjometryczne służą do badania: \n");
    printf("a) Procesów chemicznych \n");
    printf("b) Relacji międzyludzkich w grupach \n");
    printf("c) Parametrów fizycznych \n");
    printf("\n");

    while( Czy_dobrze_metodologia_10 == false){
    scanf(" %c", &Metodologia_10);
    
    switch (Metodologia_10)
    {
    case 'a':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    case 'b':
        printf("Prawidłowa odpowiedź \n");
        Czy_dobrze_metodologia_10 = true;
        break;
    case 'c':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    }
    }

    printf("\n");


    char Metodologia_11;
    bool Czy_dobrze_metodologia_11 = false;
    
    printf("11. Zmienna to: \n");
    printf("a) Stały element badania \n");
    printf("b) Cecha przyjmująca różne wartości \n");
    printf("c) Gotowy wynik badania \n");
    printf("\n");

    while( Czy_dobrze_metodologia_11 == false){
    scanf(" %c", &Metodologia_11);
    
    switch (Metodologia_11)
    {
    case 'a':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    case 'b':
        printf("Prawidłowa odpowiedź \n");
        Czy_dobrze_metodologia_11 = true;
        break;
    case 'c':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    }
    }

    printf("\n");


    char Metodologia_12;
    bool Czy_dobrze_metodologia_12 = false;
    
    printf("12. Które badania pozwalają obserwować zmiany w czasie ?  \n");
    printf("a) Badania ciągłe \n");
    printf("b) Badania przekrojowe \n");
    printf("c) Badania ankietowe \n");
    printf("\n");

    while( Czy_dobrze_metodologia_12 == false){
    scanf(" %c", &Metodologia_12);
    
    switch (Metodologia_12)
    {
    case 'a':
        printf("Prawidłowa odpowiedź \n");
        Czy_dobrze_metodologia_12 = true;
        break;
    case 'b':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    case 'c':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    }
    }

    printf("\n");


    char Metodologia_13;
    bool Czy_dobrze_metodologia_13 = false;
    
    printf("13. Synteza badań polega na: \n");
    printf("a) Skracaniu tekstu \n");
    printf("b) Łączenie informacji z wielu źródeł \n");
    printf("c) Tworzeniu ankiet \n");
    printf("\n");

    while( Czy_dobrze_metodologia_13 == false){
    scanf(" %c", &Metodologia_13);
    
    switch (Metodologia_13)
    {
    case 'a':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    case 'b':
        printf("Prawidłowa odpowiedź \n");
        Czy_dobrze_metodologia_13 = true;
        break;
    case 'c':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    }
    }

    printf("\n");


    char Metodologia_14;
    bool Czy_dobrze_metodologia_14 = false;
    
    printf("14. Podsumowanie różni się od syntezy tym, że: \n");
    printf("a) Łączy wiele źródeł \n");
    printf("b) Jest bardziej szczegółowe \n");
    printf("c) Skraca najważniejsze informacje \n");
    printf("\n");

    while( Czy_dobrze_metodologia_14 == false){
    scanf(" %c", &Metodologia_14);
    
    switch (Metodologia_14)
    {
    case 'a':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    case 'b':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    case 'c':
        printf("Prawidłowa odpowiedź \n");
        Czy_dobrze_metodologia_14 = true;
        break;
    }
    }

    printf("\n");


    char Metodologia_15;
    bool Czy_dobrze_metodologia_15 = false;
    
    printf("15. Co należy zrobić po zebraniu literatury do syntezy badań ? \n");
    printf("a) Zignorować różnice między badaniami \n");
    printf("b) Uporządkować źródła \n");
    printf("c) Od razu napisać wnioski \n");
    printf("\n");

    while( Czy_dobrze_metodologia_15 == false){
    scanf(" %c", &Metodologia_15);
    
    switch (Metodologia_15)
    {
    case 'a':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    case 'b':
        printf("Prawidłowa odpowiedź \n");
        Czy_dobrze_metodologia_15 = true;
        break;
    case 'c':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    }
    }

    printf("\n");


    char Metodologia_16;
    bool Czy_dobrze_metodologia_16 = false;
    
    printf("16. Który zapis jest poprawny językowo ? \n");
    printf("a) Policja pojawiła się na miejscu zdarzenia. \n");
    printf("b) policja pojawiła się na miejscu zdarzenia. \n");
    printf("c) Na miejscu zdarzenia pojawiła się policja. \n");
    printf("\n");

    while( Czy_dobrze_metodologia_16 == false){
    scanf(" %c", &Metodologia_16);
    
    switch (Metodologia_16)
    {
    case 'a':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    case 'b':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    case 'c':
        printf("Prawidłowa odpowiedź \n");
        Czy_dobrze_metodologia_16 = true;
        break;
    }
    }

    printf("\n");


    char Metodologia_17;
    bool Czy_dobrze_metodologia_17 = false;
    
    printf("17. Które wyrażenie jest przykładem masła maślanego ? \n");
    printf("a) Liczba dzieci \n");
    printf("b) Kwestionariusz ankiety \n");
    printf("c) Analiza danych \n");
    printf("\n");

    while( Czy_dobrze_metodologia_17 == false){
    scanf(" %c", &Metodologia_17);
    
    switch (Metodologia_17)
    {
    case 'a':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    case 'b':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    case 'c':
        printf("Prawidłowa odpowiedź \n");
        Czy_dobrze_metodologia_17 = true;
        break;
    }
    }

    printf("\n");


    char Metodologia_18;
    bool Czy_dobrze_metodologia_18 = false;
    
    printf("18. Które sformułowanie jest poprawne ? \n");
    printf("a) Ilość dzieci \n");
    printf("b) Liczba dzieci \n");
    printf("c) Ilość studentów i uczniów \n");
    printf("\n");

    while( Czy_dobrze_metodologia_18 == false){
    scanf(" %c", &Metodologia_18);
    
    switch (Metodologia_18)
    {
    case 'a':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    case 'b':
        printf("Prawidłowa odpowiedź \n");
        Czy_dobrze_metodologia_18 = true;
        break;
    case 'c':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    }
    }

    printf("\n");


    char Metodologia_19;
    bool Czy_dobrze_metodologia_19 = false;
    
    printf("19. Co jest częstym błędem podczas pisania pracy dyplomowej ? \n");
    printf("a) Tworzenie planu pracy \n");
    printf("b) Konsultacja z promotorem \n");
    printf("c) Brak przygotowania planu \n");
    printf("\n");

    while( Czy_dobrze_metodologia_19 == false){
    scanf(" %c", &Metodologia_19);
    
    switch (Metodologia_19)
    {
    case 'a':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    case 'b':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    case 'c':
        printf("Prawidłowa odpowiedź \n");
        Czy_dobrze_metodologia_19 = true;
        break;
    }
    }

    printf("\n");


    char Metodologia_20;
    bool Czy_dobrze_metodologia_20 = false;
    
    printf("20. Które stwierdzenie dotyczące statystyki jest poprawne ? \n");
    printf("a) Statystyka pozwala coś udowodnić na pewno \n");
    printf("b) Statystyka ocenia prawdopodobieństwo \n");
    printf("c) Statystyka eliminuje błędy badawcze \n");
    printf("\n");

    while( Czy_dobrze_metodologia_20 == false){
    scanf(" %c", &Metodologia_20);
    
    switch (Metodologia_20)
    {
    case 'a':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    case 'b':
        printf("Prawidłowa odpowiedź \n");
        Czy_dobrze_metodologia_20 = true;
        break;
    case 'c':
        printf("Nieprawidłowa odpowiedź \n");
        break;
    }
    }

    printf("\n");
}