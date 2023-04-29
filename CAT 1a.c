#include <stdio.h>
#include <string.h>

int main() {
    char p[100];
    int q, r, s = 0, t[256] = {0};
    scanf("%s", p);

    q = strlen(p);
    printf("Length of the string is: %d\n", q);

    for(r = 0; r < q; r++) {
        t[p[r]]++;
    }

    for(r = 0; r < 256; r++) {
        if(t[r] > 0) {
            s++;
        }
    }

    printf("Word frequency is: %d\n", s);

    char *u = NULL, *v = NULL;
    for(r = 0; r < q; r++) {
        int found = 0;
        for(int w = r + 1; w < q; w++) {
            if(p[r] == p[w]) {
                u = &p[r];
                found = 1;
                break;
            }
        }
        if(!found && !v) {
            v = &p[r];
        }
    }

    if(u) {
        printf("First repeated character is: %c\n", *u);
    } else {
        printf("No repeated characters found in the string.\n");
    }

    if(v) {
        printf("First non-repeated character is: %c\n", *v);
    } else {
        printf("No non-repeated characters found in the string.\n");
    }

    return 0;
}