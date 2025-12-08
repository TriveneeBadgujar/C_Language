#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    strcpy(s, "Trivenee");

    int i, len = strlen(s);
    for(i = len - 1; i >= 0; i--)
        printf("%c", s[i]);

    return 0;
}
