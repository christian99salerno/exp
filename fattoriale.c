#include <stdio.h>

int main ()
{

int i;
int n;
int fattoriale=1;

do{
printf("Inserisci un numero per conoscere il suo fattoriale: ");
scanf("%d", &n);
}
while(n<0);

for (i=0; i<n; i++){
  fattoriale *= (n-i);

}

printf("%d!: %d\n", n, fattoriale);

return 0;
}
