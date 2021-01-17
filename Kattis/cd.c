#include <stdio.h>

int a[1000005],k;
int main() {
    int n, m, i, sum, h, d, mid;
    while (scanf("%d%d", &n, &m) > 0 && (n != 0 || m != 0)) {
        sum = 0;
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        while (m--) {
            scanf("%d", &k);
            h = 0;
            d = n - 1;
            while (h <= d) {
                mid = (h + d) / 2;
                if (a[mid] > k)
                    d = mid - 1;
                if (a[mid] < k)
                    h = mid + 1;
                if (a[mid] == k) {
                    sum++;
                    break;
                }
            }
        }
        printf("%d\n", sum);
    }
}