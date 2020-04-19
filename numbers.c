int is_monotonic(int);
int is_regular(int);
int is_cyclic(int);

int is_monotonic(int n) {
    int base = n%10;
    while (n /= 10) {
        if (--base != n%10)
            return 0; /* You're not monotonic. Stop here! */
    }
    /**
     * If you reached this point, you deserve to be called monotonic!
     */
    return 1;
}

int is_regular(int n) {
    int base = n%10;
    while (n /= 10) {
        if (base <= n%10)
            return 0; /* You're not regular. Stop here! */
        base = n%10;
    }
    /**
     * If you reached this point, you deserve to be called regular!
     */
    return 1;
}

int is_cyclic(int n) {
    int base = n%10;
    while (n >= 10) {
        n /= 10;
    }
    /**
     * So now, let's see! l'heure de la vérité!
     */
    return base == n;
}
