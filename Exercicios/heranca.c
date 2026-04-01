#include <stdio.h>

int main() {
    double alice, benice, clarice;

    scanf("%lf %lf %lf", &alice, &benice, &clarice);

    // 1. Alice distribui 30%
    double dist = alice * 0.30;
    alice -= dist;
    benice += dist / 2;
    clarice += dist / 2;

    // 2. Benice move 30g da mais rica para a mais pobre
    double maior = alice, menor = alice;

    if (benice > maior) maior = benice;
    if (clarice > maior) maior = clarice;

    if (benice < menor) menor = benice;
    if (clarice < menor) menor = clarice;

    if (maior == alice) alice -= 30;
    else if (maior == benice) benice -= 30;
    else clarice -= 30;

    if (menor == alice) alice += 30;
    else if (menor == benice) benice += 30;
    else clarice += 30;

    // 3. Clarice furta
    double rouboA = alice * 0.20;
    double rouboB = benice * 0.10;

    alice -= rouboA;
    benice -= rouboB;
    clarice += rouboA + rouboB;

    double temp = alice;
    alice = benice;
    benice = temp;

    if (clarice >= 100)
        clarice -= 100;
    else
        clarice = 0;

    alice /= 2;

    if (!(alice > benice && alice > clarice)) {
        if (benice > clarice) {
            double val = benice * 0.20;
            benice -= val;
            alice += val;
        } else {
            double val = clarice * 0.20;
            clarice -= val;
            alice += val;
        }
    }

    printf("Alice: %.1lf\n", alice);
    printf("Benice: %.1lf\n", benice);
    printf("Clarice: %.1lf\n", clarice);

    return 0;
}