#include<iostream>
#include<stdio.h>
using namespace std;
string username,pass , user="Ferren12", passw="5678";
char menu, opc1, opc2, opc3, opc4, opc5, vocal;
int a,b,c,d,resp;
int main(){
	cout<<"Bienvenido a nuestro aplicativo"<<endl;
	cout<<"Por favor identificate"<<endl;
	cout<<"Ingresa tu usuario:";
	cin>>username;
	cout<<"Ingresa tu passwoed:";
	cin>>pass;   
	   if(username == user && pass == passw){
	     do{
	     	cout<<"por favor selecciona alguna opcion del menu"<<username<<endl;
	     	cout<<"a) Programa de suma"<<endl;
	     	cout<<"b) Programa de resta"<<endl;
	     	cout<<"c) Estudia las tablas de multiplicar"<<endl;
	     	cout<<"d) Vocal o consonante"<<endl;
	     	cin>>menu;
	     	if(menu ==  'a'){
			 
			 do{
			 	cout<<"Bienvenido al programa de suma"<<endl;
			 	cout<<"Ingresa el primer numero a sumar";
			 	cin>>a;
			 	cout<<"Ingresa el segundo numero a sumar";
			 	cin>>b;
			 	cout<<"Ingresa el terser numero a sumar";
			 	cin>>c;
			 	cout<<"Ingresa el cuarto numero a sumar";
			 	cin>>d;
			 	resp = a+b+c+d;
			 	cout<<"La respuesta de la suma:"<<a<<" + "<<b<<" + "<<c<<" + "<<"d"<<" = "<<resp;
			 	cout<<"�Quieres segir sumando (s/n)?"<<endl;
			 
			 }
			 while(opc2 = 'n');
			 }
			 else if (menu ==  'b'){
			 do{
			 	cout<<"Bienvenido al programa de resta"<<endl;
			 	cout<<"Ingresa el primer numero a resta";
			 	cin>>a;
			 	cout<<"Ingresa el segundo numero a resta";
			 	cin>>b;
			 	cout<<"Ingresa el terser numero a resta";
			 	cin>>c;
			 	cout<<"Ingresa el cuarto numero a resta";
			 	cin>>d;
			 	resp = a-b-c-d;
			 	cout<<"La respuesta de la suma:"<<a<<" - "<<b<<" - "<<c<<" - "<<"d"<<" = "<<resp;
			 	cout<<"�Quieres segir sumando (s/n)?"<<endl;
			 
			 }
			 while(opc3 ='n' );
			 
			 }
			 else if (menu ==  'c'){
			 int multiplica, numero, i;
			 do{ 
			 cout<<"Bienvenido a las tablas de multiplicar"<<endl;
			 cout<<"P�rfavor ingresa el numero de la tabla a generar";
			 cin>>numero;
			 for(int i = 1; i<= 10; i++){
			 multiplica = i*numero;
			 cout<<numero<<" * "<<i<<" = "<<multiplica<<endl;
			 }
			 cout<<"�Quieres generar otra tabla de multiplicar (s/n)?"<<endl;
			 
			 }
			 while(opc5 = 'n' );
			 
			    }
			 
			 
			 else if (menu ==  'd'){
			 cout<<"vocal o consonante"<<endl;
			 cout<<"Coloca una letra para saber si es vocal o consonante"<<endl;
cin>>vocal;
do{   
  switch(vocal){
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      	cout<<"La letra colocada es: vocal"<<endl;
      	break;
      	default:
      		cout<<"La letra colocada es: consonante"<<endl;
  } 
   cout<<"�Quieres generar otra letra para evaluar (s/n)?"<<endl;
			 
			 }
			 while(opc4 = 'n' );
  			 
			 }
			 else {
			 cout<<"Opcion invalida �quieres regresar al menu (s/n)?"<<endl;
			 cin>>opc1;
			 }
	     	
	   
	   
	   
	     }
	     while(opc1 = 's' );
	   

	    }  else{
	     cout<<"Usuario no indentificado"<<endl;
	     cout<<"Por favor contanta a soporte"<<endl;
	   }
	     
	   
}
