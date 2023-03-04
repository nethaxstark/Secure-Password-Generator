#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define pas_length 10

int main() {
    char password[pas_length + 1];
    int i, random;

    srand(time(NULL));

    for (i = 0; i < pas_length; i++) {
        random = rand() % 62;
        if (random < 26) {
            password[i] = 'A' + random;
        } else if (random < 52) {
            password[i] = 'a' + (random - 26);
        } else {
            password[i] = '0' + (random - 52);
        }
    }

    password[pas_length] = '\0';

    printf("Secured password is: %s\n", password);

    return 0;
}
