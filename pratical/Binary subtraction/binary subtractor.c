#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter two binary numbers: ");
    scanf("%d %d", &n1, &n2);

    int res, b, m;
    res = 0;
    b = 0;
    m = 1;

    while (n1 > 0 || n2 > 0) {
        int d1, d2, t;
        d1 = n1 % 10;
        d2 = n2 % 10;
        t = d1 - d2 - b;

        if (t < 0) {
            t = t + 2;
            b = 1;
        } else {
            b = 0;
        }

        res = res + (t % 2) * m;
        m = m * 10;
        n1 = n1 / 10;
        n2 = n2 / 10;
    }

    printf("Difference: %d\n", res);
    return 0;
}

