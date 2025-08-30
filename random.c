// Name & class section: Tomas Chaparro, CIS 3207 section 3
// Last modification: 8/30/2025

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar();

//Description: return a random capital letter from the alphabet
char randchar() {
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    return alphabet[rand()%26];
}
