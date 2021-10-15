#include<iostream>
using namespace std;
string usuario, password, user = "NatirenF", pass = "chispicas",saludo = "Hola buen dia";
int main(){
char opc, letra;
int tope = 2021, an, mino, meses = 12, mes, dia = 31, dias, horas = 24, hrs, min = 60, minutos, seg = 60, segundos;
cout<<"Bienvenido al sistema C++  "<<endl;
cout<<"Por favor ingresa tu usuario"<<endl;
cin>>usuario;
cout<<"Por favor ingresa tu contrase�a"<<endl;
if(user == usuario && pass == password){
   cout<<"Bienvenido al sistema:"<<usuario<<endl;
   cout<<"Seleciona una de las opciones que se te ofrese"<<endl;
   cout<<"1. Guatas que el programa te salude"<<endl;
   cout<<"2. Gustas saver tu edad, meses, horas, ninutos y segundos de vida"<<endl;
   cout<<"3. Gustas saver si la letra que digitas es vocal o consonante"<<endl;
   cin>>opc;
   if(opc == '1'){
   cout<<saludo<<"  "<<usuario<<endl;
   
   }
   else if(opc == '2'){
   cout<<"Elegiste la opcion 2"<<endl;
   cout<<"Es un gusto saludarte:"<<usuario<<"Por favor ingresa el a�o de tu nasimiento ejemplo 1997"<<endl;
   cout<<"Para que puedas saber tu edad, meses, horas, ninutos y segundos de vida"<<endl;
   cin>>an;
   mino = tope - an;
   mes = an * meses;
   dias = mes * dia;
   hrs = dias * horas;
   minutos = hrs * min;
   segundos = minutos * seg;
   cout<<"Genial"<<usuario<<"tu edad actual es de:"<<mino<<"a�o"<<endl;
   cout<<"Los meses equivalentes a tus"<<mino<<"a�os son"<<mes<<"meses"<<endl;
   cout<<"Los dias equivalentes a tus"<<mes<<"meses son"<<dias<<"dias"<<endl;
   cout<<"Los horas equivalentes a tus"<<dias<<"dias son"<<hrs<<"horas"<<endl;
   cout<<"Los minutos equivalentes a tus"<<hrs<<"horas son"<<minutos<<"minutos"<<endl;
   cout<<"Los segundos equivalentes a tus"<<minutos<<"minutos son"<<segundos<<"segundos"<<endl;
   }
   else if(opc == '3'){
   	cout<<"Elegiste la opcion 3"<<endl;
   	cout<<"Digita la letra de tu preferensia para validar"<<endl;
   	cin>>letra;
   	if(letra == 'a'){
	   cout<<"La letra que colocastes es:"<<letra<<"la cual es vocal"<<endl;
	   }
	else if(letra == 'e'){
	   cout<<"La letra que colocastes es:"<<letra<<"la cual es vocal"<<endl;
	   }  
	else if(letra == 'i'){
	   cout<<"La letra que colocastes es:"<<letra<<"la cual es vocal"<<endl;
	   }
    else if(letra == 'o'){
	   cout<<"La letra que colocastes es:"<<letra<<"la cual es vocal"<<endl;
	   }
	else if(letra == 'u'){
	   cout<<"La letra que colocastes es:"<<letra<<"la cual es vocal"<<endl;
	   }
   	else{
	   cout<<"La letra que colocastes es:"<<letra<<"la cual es una consonante"<<endl;
	   }
   }
   else{
    cout<<"No exixte la opcion que elegiste"<<endl;
   }
   
   
}
else{
  cout<<"Lo sentimos no puedes ingresar al sistema no tienes permiso"<<endl;
  
}


 return 0;
 cin.get();
}

