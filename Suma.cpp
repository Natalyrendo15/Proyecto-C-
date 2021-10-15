#include<stdio.h>
float prom1, peom2;
int main()
{
float cal1, cal2, cal3, prom;

printf("Por favor digita la primera calificacion: \n");
scanf("%f" ,&cal1);

printf("Por favor digita la segunda calificacion: \n");
scanf("%f" ,&cal2);

printf("Por favor digita la tersera calificacion: \n");
scanf("%f" ,&cal3);

prom1= (cal1+cal2+cal3) /3

printf("tu calificacion es de: %f \n" , prom1);
if(prom>= 7){
   printf("Tu calificacion es aprobatoria \n");
}
else{
	printf("Tu calificacion no es aprobatoria \n");

}


return 0;

}