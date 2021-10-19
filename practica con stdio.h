#include<stdio.h>
   float prom1, prom2;
int main()
{
float cat1, cat2, cat3;

printf("Por favor digita la primera calificacion: \n");
scanf("%f" ,&cat1);

printf("Por favor digita la segunda calificacion: \n");
scanf("%f" ,&cat2);

printf("Por favor digita la tersera calificacion: \n");
scanf("%f" ,&cat3);

prom1= (cat1+cat2+cat3) /3;

printf("tu calificacion es de: %f \n" , prom1);
if(prom1>= 7){
   printf("Tu calificacion es aprobatoria \n");
}
else{
   printf("Tu calificacion no es aprobatoria \n");

}

return 0;
cin.get();

}

