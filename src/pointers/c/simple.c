#include <stdio.h>

struct person {
    char *name;
    int age;
};

int printPeople() {
    struct person john;
    struct person *johnacc = &john;

    //    (*johnacc).name
    johnacc->name = "John Doe";
    johnacc->age = 29;

    printPersonAsJson(*johnacc);
}

int printPersonAsJson(struct person p) {
    //    char *name = p.name;
    int age = p.age;

    printf("{\"name\": \"%s\"}", p.name);
    return 0;
}
