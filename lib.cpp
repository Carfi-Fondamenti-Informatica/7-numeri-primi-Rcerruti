#include <iostream>
#include "lib.h"
bool num_primi(int a, int b){
    if(b==1 or b==0){
        return true;
    }else {
        int resto = a % b;
        if (resto != 0) {
            num_primi(a, b - 1);
        }else{
            return false;
        }
    }
}
