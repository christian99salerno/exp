#include <stdio.h>

int main ()
{

int i;
int n;
int fattoriale;

do{
printf("Inserisci un numero per conoscere il suo fattoriale: ");
scanf("%d", &n);
}
while(n<0);


fattoriale=n;

for (i=1; i<n; i++){
  fattoriale *= i;

}

printf("%d!: %d\n", n, fattoriale);

return 0;
}
