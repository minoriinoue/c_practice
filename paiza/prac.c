int main(void) {
    int n = 8;
    int a[n];
    int *q, r;
    int *q = a + n;
    int sum = 0;
    for (r = a; r < q; r ++) {
        int x = *r;
        sum += x;
    }
}
