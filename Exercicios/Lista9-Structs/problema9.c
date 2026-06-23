#include <stdio.h>
#include <math.h>

typedef struct {
    float real, imag;
} Complexo;

Complexo soma(Complexo z, Complexo w) {
    Complexo r;

    r.real = z.real + w.real;
    r.imag = z.imag + w.imag;

    return r;
}

Complexo subtracao(Complexo z, Complexo w) {
    Complexo r;

    r.real = z.real - w.real;
    r.imag = z.imag - w.imag;

    return r;
}

Complexo produto(Complexo z, Complexo w) {
    Complexo r;

    r.real = z.real * w.real - z.imag * w.imag;
    r.imag = z.real * w.imag + z.imag * w.real;

    return r;
}

float modulo(Complexo z) {
    return sqrt(z.real * z.real + z.imag * z.imag);
}

int main() {
    Complexo z, w, s, sub, pro;

    scanf("%f %f", &z.real, &z.imag);
    scanf("%f %f", &w.real, &w.imag);

    s = soma(z, w);
    sub = subtracao(z, w);
    pro = produto(z, w);

    printf("Soma: %.2f + %.2fi\n", s.real, s.imag);

    printf("Subtracao: %.2f + %.2fi\n", sub.real, sub.imag);

    printf("Produto: %.2f + %.2fi\n", pro.real, pro.imag);

    printf("Modulo de z: %.2f\n", modulo(z));
    printf("Modulo de w: %.2f\n", modulo(w));

    return 0;
}