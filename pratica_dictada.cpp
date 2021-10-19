#include<iostream>
#include<stdio.h>
#include<windows.h>
using namespace std;
int main(){
int segundos=10;
for(int i=0; i<=21; i++)
cout<<"\n";
cout<<"\t\t\t CARGANDO"<<endl;


for(int i=0; i<=79; i++)
cout<<"_";

for(int i=0; i<=79; i++){
cout<<char(219);
Sleep(segundos*100/80);

}
cout<<"COMPLETANDO"<<endl;
return 0;
cin.get();
}