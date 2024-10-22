#include <stdio.h>

int main(void) {
    int n1, n2, ntot=0;
    printf("inserisci i due numeri: \n");
    scanf("%d %d", &n1, &n2);
    for (int i = 1; i <= n2; i++) {
        ntot += n1;
    }
    printf("la moltiplicazione tra %d*%d e': %d\n",n1, n2, ntot);
}
