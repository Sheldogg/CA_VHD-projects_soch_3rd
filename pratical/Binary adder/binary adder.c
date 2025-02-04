#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter two binary numbers: ");
    scanf("%d %d", &n1, &n2);

    int res, c, m;
    res = 0;
    c = 0;
    m = 1;

    while (n1 > 0 || n2 > 0 || c > 0) {
        int d1, d2, t;
        d1 = n1 % 10;
        d2 = n2 % 10;
        t = d1 + d2 + c;

        res = res + (t % 2) * m;
        c = t / 2;
        m = m * 10;
        n1 = n1 / 10;
        n2 = n2 / 10;
    }

    printf("Sum: %d\n", res);
    return 0;
}
