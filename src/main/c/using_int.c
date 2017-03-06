#include <stdio.h>

#define TWELVE 12

using_int() {
    int eggs;
    int dozens = 4;

    eggs = dozens * TWELVE;

    printf("There're %d eggs in % dozens\n", eggs, dozens);

    final();
}

final() {
    printf("This is where the execution ends\n");
}
