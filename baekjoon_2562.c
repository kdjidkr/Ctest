#include <stdio.h>

int main() {

    // max : ÃÖ´ñ°ª, index : ÃÖ´ñ°ªÀÇ index
    int max = 0, index = 1, i, a;
    for (i = 0; i < 9; i++) {
        scanf("%d", &a);
        if (max < a) {
            max = a;
            index = i + 1;
        }
    }
    printf("%d\n%d", max, index);

    return 0;
}