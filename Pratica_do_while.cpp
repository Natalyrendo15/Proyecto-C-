#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
 string user, pass, usuario="Nati098", password="1234";
 char seguir;
 int multi, numero;
   cout<<"bienvenido"<<endl;
   cout<<"Por favor ingresa al sistema"<<endl;
   cout<<"Ingresa tu usuario"<<endl;
   cin>>user;
   cout<<"Ingresa tu password"<<endl;
   cin>>pass;
   if(user == usuario && pass == password){  
    do{
	   cout<<"Por favor ingresa el numero de la tabla de pultiplicar que quieras generar"<<endl;
	   cin>>numero;
	   for(int i = 1; i<= 10; i++){
	       multi = i * numero;
	       cout<<numero<<" x "<<i<<" = "<<multi<<endl;
	   }
    cout<<"quieres qenerar otra tabla de multiplicar (s/n)?"<<endl;
    fflush(stdin);
    cin>>seguir;
	}
    while(seguir!= 'n');
    }
	else {
	 cout<<"Tu usuario no el varido"<<endl;
	}
	
	cin.get();
    return 0;
}
