#include <stdio.h>
#include <string.h>

int main()
{   
    int a;
    int b;

    printf("Podaj liczbę a i b: \n");
    scanf("%d %d",&a,&b);

    for(int n = a; n <= b; n++){
        long long kwadrat = (long long) n * n;
        int temp = n;
        int czy_automorficzna = 1;

        if (n < 0) continue;

        while (temp > 0) {
            if (temp % 10 != kwadrat % 10) {
                czy_automorficzna = 0;
                break;
            }
            temp /= 10;
            kwadrat /= 10;
        }

        if (czy_automorficzna == 1) {
            printf("%d ", n);
        }
    }
    printf("\n");
    return 0;
}
