#include <stdio.h>
#include <string.h>

struct source {
    char *name;
    char *value;
};

char* ccat(char *left, char *right) {
    printf("concatenating %s + %s\n", left, right);

    char valuel = *left;
    char valuer = *right;

    char str[2048];

    strcat(str, left);
    strcat(str, right);

    return str;
}

char* ccat3(char *first, char *second, char *third) {
    return ccat(ccat(first, second), third);
}

char* ccat4(char *first, char *second, char *third, char *fourth) {
    return ccat(ccat3(first, second, third), fourth);
}

char* ccat5(char *first, char *second, char *third, char *fourth, char *fifth) {
    return ccat(ccat4(first, second, third, fourth), fifth);
}

char* toJSON(struct source m) {
    return ccat5("{\"", m.name, "\": \"", m.value, "\"}");
}

void printPeople() {
    struct source entry;
    struct source *entryo = &entry;

    entryo->name = "name";
    entryo->value = "john";

    printf("==========>%s", toJSON(entry));
}
