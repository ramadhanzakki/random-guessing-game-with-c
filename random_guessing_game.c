#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int max = 100;
    int min = 1;
    int guess = 0;
    bool isTrue = false;

    int randomNumber = (rand() % (max - min + 1)) + min;

    printf("=== GUESSING NUMBER GAME ===\n");
    
    while (isTrue == false) {
        printf("Guess the number in 1-100: ");
        scanf("%d", &guess);

        if (guess > randomNumber) {
            printf("To high\n");
        } else if (guess < randomNumber) {
            printf("To low\n");
        } else {
            printf("Correct\n");
            isTrue = true;
        }
    }
    

    return 0;
}
