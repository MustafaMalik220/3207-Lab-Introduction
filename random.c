#include "random.h"
char randchar(void) {
    short numLetters = 26;
    return (rand()%numLetters+'A');
}