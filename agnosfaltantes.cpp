#include <iostream>
using namespace std;

 int main(){
            int agno1,agno2;
  
            cin>>agno1;
            cin>>agno2;
    
            if(agno1>=agno2){
                          int pasados=agno1-agno2;
            cout<< "Han pasado "<< pasados <<" agnos";}
          
           else{
               int faltantes=agno2-agno1;
               cout<<"Faltan " <<faltantes<< " agnos";}

          return 0;
}