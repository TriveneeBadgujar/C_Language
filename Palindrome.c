#include <stdio.h>

int main() {
    int n = 121, rev = 0, temp = n;

    while(temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    if(rev == n) printf("Palindrome");
    else printf("Not Palindrome");

    return 0;
}
