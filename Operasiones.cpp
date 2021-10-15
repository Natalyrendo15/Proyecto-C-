#include<stdio.h>
using namespace std;
string usuario ="", pass = "", user = "JlchavezG", password = "315";
int main()
{
	cout<<"Bienvenido por favor igrasa tu credencial:"<<endl;
	cout<<"Por favor ingresa tu usuario:"<<endl;
	cin>>usuario;
	cout<<"Digita tu Password:"<<endl;
	cin>>pass;
	if(usuario == user && pass == password){
		   cout<<"Bienvenido:"<<usuario<<"al sistema por favor selecciona una opcion"<<endl;
	} 
	else{
	       cout<<"Lo sentimos no eres un usuario del sistema por favor verifica a soporte"<<endl;
	} 
	
	
	return 0;
	cin.get();


} 