#include <stdio.h>

int main ()
{

int i;
float e_1=1.0;
float e_2=1.0;
int fattoriale = 1;

for(i=1; i<=10; i++) {
fattoriale*=i;
e_1 += 1.0/(float)fattoriale;

}

printf("Numero di nepero in 10 termini: %f\n", e_1);

fattoriale =1;

for(i=1; i<=6; i++) {
fattoriale*=i;
e_2 += 1.0/(float)fattoriale;

}

printf("Numero di nepero in 6 termini: %f\n", e_2);

  return 0;
}
