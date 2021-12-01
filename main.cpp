#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    int numero,divisore=0;
    cin>>numero;
    divisore= numero-1;
    if(num_primi(numero, divisore)){
        cout<<"numero primo";
    }else{
        cout<<"numero non primo";
    }
    return 0;
}
