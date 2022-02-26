#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int StringToNumber(const char* nr) {
    int numarul = 0;
    for (int i = 0; nr[i] >= '0' && nr[i] <= '9'; i++) {
        numarul = numarul * 10 + (nr[i] - '0');
    }
    return numarul;
}
bool NumberSum(int &suma) {
    char numar[128];
    int sumanumere   = 0;
    FILE* fin = fopen("in.txt", "r");
    if (fin == NULL) {
        return false;
    }
    while (fgets(numar, sizeof(numar), fin) != NULL) {
        int copie  = StringToNumber(numar);
        sumanumere = sumanumere + copie;
    }
    suma = sumanumere;
    fclose(fin);
    return true;
}
int main() {
    int suma;
    if (NumberSum(suma) == true)
        printf("Suma =%d", suma);
    else
        printf("fisier incorect");
    return 0;
}