#include <stdio.h>

int main ()
{

int i;
double e_1=1;
double e_2=1;
int fattoriale = 1;

for(i=1; i<=10; i++) {
fattoriale*=i;
e_1 += 1/(fattoriale);

}

printf("Numero di nepero in 10 termini: %f\n", e_1);


  return 0;
}
