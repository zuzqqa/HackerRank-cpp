#include <stdio.h>

void update(int *a,int *b) {
    int c = *a; /* zapisujemy wartosc *a, poniewaz pozniej zmieniamy wartosc *a i wyniki bylyby nieprawidlowe */
     
    *a = *a + *b; //zmieniamy wartosc *a
    
    if(*b > c) { /* wartosc bezwzgledna, jest to mozliwe, poniewaz *b jest intem i c jest intem */
        *b = *b - c;
    }
    else {
        *b = c - *b; /* tak samo odejmowanie jest mozliwe, poniewaz obie zmienne sa intem */
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
