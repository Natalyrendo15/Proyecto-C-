#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int main(){
 int m=0, s=0, h=0;
   while(1){
   if(s>=50){
      s = 0;
      m++;
      if(m>=60){
	    m = 0;
	    h++;
	  } 
   
   } 
   system("cls");
   cout<<h<<":"<<m<<":"<<s;
   Sleep(1000);
   s++;
   } 

cin.get();
} 
