#include <iostream>
using namespace std;

int main(){
          int agno;
          cin>>agno;

         if((agno % 4 == 0 && agno % 100 != 0) || (agno % 400 == 0)){
         cout<<"Es bisiesto\n";
}
         else{
         cout<<"No es bisiesto\n";
}

          return 0;
}