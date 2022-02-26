#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    char sir[256], *cuvant;
    char cuvinte[256][256];
    scanf("%[^\n]s", sir);
    cuvant = strtok(sir, " ");
    int i  = 0;
    while (cuvant != NULL) {
        strcpy(cuvinte[i], cuvant);
        i++;
        cuvant = strtok(NULL, " ");
    }
    char copie[128];
    for (int j = 0; i < i - 1; j++) {
        for (int m = j + 1; m < i; m++) {
            if (strlen(cuvinte[j]) < strlen(cuvinte[m]) || (strlen(cuvinte[j]) == strlen(cuvinte[m]) && strcmp(cuvinte[j], cuvinte[m]) < 0)) {
                strcpy(copie, cuvinte[m]);
                strcpy(cuvinte[m], cuvinte[m + 1]);
                strcpy(cuvinte[m + 1], copie);
            }
        }
    }
    for (int j = 0; j < i; j++) {
        printf("%s\n", cuvinte[j]);
    }
    return 0;
}
