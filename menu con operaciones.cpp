#include<stdio.h>
using namespace std;
string usuario ="", pass = "", user = "JlchavezG", password = "315";
int numero1, numero2, numero3, resultado;
int main()
{
	int opc;
	cout<<"Bienvenido por favor igrasa tu credencial:"<<endl;
	cout<<"Por favor ingresa tu usuario:"<<endl;
	cin>>usuario;
	cout<<"Digita tu Password:"<<endl;
	cin>>pass;
	if(usuario == user && pass == password){
		   cout<<"Bienvenido:"<<usuario<<"al sistema por favor selecciona una opcion"<<endl;
           cout<<"1.- Suma"<<endl;
           cout<<"2.- Resta"<<endl;
           cout<<"3.- Multiplicacion"<<endl;
           cin>>opc;
 }          
        if(opc == '1'){
		    cout<<"Bienvenido a la suma"<<endl;
		    cout<<"Porfavor ingrese 3 numeros a sumar"<<endl;
		    cout<<"ingresa el primer numero"<<endl;
		    cin>>numer1;
		    cout<<"ingresa el segundo numero"<<endl;
		    cin>>numer2;
		    cout<<"ingresa el terser numero numero"<<endl;
		    cin>>numer3;
		    resultado = numero1 + numero2 + numero3;
		    cout<<"el resultado de la suma es:"<<resultado;
		} 
		else if(opc == '2'){
		   cout<<"resta"<<endl;
		} 
		else if(opc == '3'){
		  cout<<"multiplicacion"<<endl;
		}
		else{
			cout<<"no es funcion permitida";
		
		}
	else{
	       cout<<"Lo sentimos no eres un usuario del sistema por favor verifica a soporte"<<endl;
	} 
	
	
	return 0;
	cin.get();


} 
