#include <stdio.h>

int main() {
    int amount, remainder;
    int notes_1000, notes_500, notes_100, notes_50, notes_20, notes_10, notes_5, notes_2, notes_1;

    
    printf("Input the amount: ");
    scanf("%d", &amount);

  
    notes_1000 = amount / 1000;
    remainder = amount % 1000;

    notes_500 = remainder / 500;
    remainder %= 500;

    notes_100 = remainder / 100;
    remainder %= 100;

    notes_50 = remainder / 50;
    remainder %= 50;

    notes_20 = remainder / 20;
    remainder %= 20;

    notes_10 = remainder / 10;
    remainder %= 10;

    notes_5 = remainder / 5;
    remainder %= 5;

    notes_2 = remainder / 2;
    remainder %= 2;

    notes_1 = remainder;

   
    printf("The smallest number of banknotes:\n");
    printf("1000 Note(s) of: %d\n", notes_1000);
    printf(" 500 Note(s) of: %d\n", notes_500);
    printf(" 100 Note(s) of: %d\n", notes_100);
    printf("  50 Note(s) of: %d\n", notes_50);
    printf("  20 Note(s) of: %d\n", notes_20);
    printf("  10 Note(s) of: %d\n", notes_10);
    printf("   5 Note(s) of: %d\n", notes_5);
    printf("   2 Note(s) of: %d\n", notes_2);
    printf("   1 Note(s) of: %d\n", notes_1);

    return 0;
}