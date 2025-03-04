#include <iostream>
using namespace std;

int main(){
         int num1,num2,residuo;

         cin>>num1;
         cin>>num2;
   
        residuo=num1 % num2;

        if (residuo==0){
                       cout<<"La division es exacta";}
        else{
            cout<<"La division NO es exacta";}

         return 0;
}