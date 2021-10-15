#include<iostream>
using namespace std;
string user= "NatirenF", pass="chispitas", usuario, password, saludo= "hola bienbenido";
int main(){
	int nombre, edad, grupo;
	char opc;
	cout<<"Bienvenido al sistema"<<endl;
	cout<<"Por favor digita tu usuario y password"<<endl;
	cout<<"Usuario:"<<endl;
	cin>>usuario;
	cout<<"Password";
	cin>>password;
	if(usuario == user && password == pass){   
	cout<<saludo<<": "<<usuario<<endl;
	cout<<"Por favor selesiona una opcion"<<endl;
	do{
		cout<<"1- Registar usuario "<<endl;
		cout<<"2- Ver perfil"<<endl;
		cout<<"3- salir"<<endl;
		if (opc == '1'){
		cout<<"Registra un usuario"<<endl;
		cout<<"Ingresa tu nombre completo"<<endl;
		cin>>nombre;
		cout<<"Ingresa tu edad"<<endl;
		cin>>edad;
		cout<<"Ingresa tu grupo"<<endl;
		cin>>grupo;
		}
		else if(opc == '2'){
		cout<<"Verifica datos del usuario"<<endl;
		cout<<"genial"<<usuario<<endl;
		cout<<"tu nombre es:"<<nombre<<endl;
		cout<<"tu edad es:"<<edad<<endl;
		cout<<"tu grupo es:"<< grupo<<endl;
		}
		else{
		cout<<"Opcion no valida"<<endl;
		}
		
	
	}
	while(opc = '3');
  }
  else{}
  
  return 0;
 cin.get();




}
