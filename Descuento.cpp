#include<iostream>
using namespace std;
int compra, pago = 0;
int main()
{
cout<<"Ingresa los datos de la compra �Cuantas prendas se llevan? "<<endl;
cin>>compra;
pago = compra * 250;
if (compra < 10 ){
   cout<<"No se cumplio con la promocion el monto a pagar es de : "<<pago<<endl;
   
} 
else if (compra > 10){
   cout<<"Se cumple la promocion el monto a apagar ya con el descuento del 40% es de: "<<pago - (pago * 0.40)<<endl;

} 
else if (compra > 25){
   cout<<"Se cumple la promocion el monto a apagar ya con el descuento del 25% es de: "<<pago - (pago * 0.25)<<endl;

} 
else if (compra > 35){
   cout<<"Se cumple la promocion el monto a apagar ya con el descuento del 40% es de: "<<pago - (pago * 0.40)<<endl;

} 
else{
   cout<<"No se aplico el descuento el monto a pagar es de:"<<pago<<endl;
   
} 

return 0;
} 
