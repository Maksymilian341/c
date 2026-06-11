#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[100];
    int weight; 
    int value;  
} Item;

int max(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}


void knapsack_brute_force(Item items[], int n, int max_weight) {
    int max_value = 0;
    int best_combination = 0;
    
    int total_combinations = 1;
    for (int i = 0; i < n; i++) {
        total_combinations *= 2;
    }

    for (int i = 0; i < total_combinations; i++) {
        int current_weight = 0;
        int current_value = 0;
        int temp = i; 

        for (int j = 0; j < n; j++) {
            if (temp % 2 == 1) { 
                current_weight += items[j].weight;
                current_value += items[j].value;
            }
            temp /= 2; 
        }

        if (current_weight <= max_weight && current_value > max_value) {
            max_value = current_value;    
            best_combination = i;         
        }
    }

    printf("\nwynik bf:\nmax wartosc: %d\nprzedmioty:\n", max_value);
    
    int total_weight = 0;
    int temp = best_combination;
    
    for (int j = 0; j < n; j++) {
        if (temp % 2 == 1) { 
            printf("- %s (masa: %d, wartość: %d)\n", items[j].name, items[j].weight, items[j].value);
            total_weight += items[j].weight;
        }
        temp /= 2;
    }
    printf("waga: %d/%d\n", total_weight, max_weight);
}


void knapsack_PD(Item items[], int n, int max_weight) {
    int **dp = (int **)malloc((n + 1) * sizeof(int *));
    for (int i = 0; i <= n; i++) {
        dp[i] = (int *)malloc((max_weight + 1) * sizeof(int));
    }

    
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= max_weight; w++) {
            
            if (i == 0 || w == 0) {
                dp[i][w] = 0;
            } 
            else {
                int item_w = items[i - 1].weight;
                int item_v = items[i - 1].value;
                
                if (item_w > w) {
                    dp[i][w] = dp[i - 1][w]; 
                } 
                else {
                    dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - item_w] + item_v);
                }
            }
        }
    }

    
    printf("\nwynik pd:\nmax wartosc: %d\nprzedmioty:\n", dp[n][max_weight]);
    
    int current_val = dp[n][max_weight];
    int current_weight = max_weight;
    int total_weight = 0;
    
    
    for (int i = n; i > 0 && current_val > 0; i--) {
        if (current_val != dp[i - 1][current_weight]) {
            
            printf("- %s (masa: %d, wartość: %d)\n", items[i - 1].name, items[i - 1].weight, items[i - 1].value);
            
            total_weight += items[i - 1].weight;       
            current_val -= items[i - 1].value;         
            current_weight -= items[i - 1].weight;     
        }
    }
    printf("waga: %d/%d\n", total_weight, max_weight);

    
    for (int i = 0; i <= n; i++) {
        free(dp[i]);
    }
    free(dp);
}


void print_help() {
    printf("\nkomendy:\n1 - pd\n2 - brute force\n3 - help\n0 - wyjscie\n");
}


int main() {
    int capacity, n;

    printf("pojemnosc plecaka: ");
    scanf("%d", &capacity);

    printf("ile przedmiotow: ");
    scanf("%d", &n);

    Item *items = (Item *)malloc(n * sizeof(Item));

    for (int i = 0; i < n; i++) {
        printf("przedmiot %d:\n", i + 1);
        printf(" nazwa: ");
        scanf(" %[^\n]", items[i].name); 
        printf(" masa: ");
        scanf("%d", &items[i].weight);
        printf(" wartosc: ");
        scanf("%d", &items[i].value);
    }

    int choice;
    do {
        printf("\nwybierz (1,2,3,0): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                knapsack_PD(items, n, capacity);
                break;
            case 2:
                knapsack_brute_force(items, n, capacity);
                break;
            case 3:
                print_help();
                break;
            case 0:
                break;
            default:
                printf("blad.\n");
        }
    } while (choice != 0);

    free(items);
    return 0;
}