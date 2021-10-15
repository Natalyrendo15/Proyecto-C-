#include<iostream>
using namespace std;
int main(){
 
  char vocal;
  cout<<"Coloca una letra para saber si es vocal o consonante"<<endl;
  cin>>vocal;
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
return 0;
cin.get();

} 
