#include "random.h"
#include <stdlib.h>
char randchar(void) {
    short numLetters = 26;
    return (rand()%numLetters+'A');
}