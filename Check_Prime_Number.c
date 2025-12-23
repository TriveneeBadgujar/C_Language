#include <stdio.h>

int main() {
    int n = 17, i, flag = 1;

    for(i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            flag = 0;
            break;
        }
    }

    if(flag) printf("Prime");
    else printf("Not Prime");

    return 0;
}
