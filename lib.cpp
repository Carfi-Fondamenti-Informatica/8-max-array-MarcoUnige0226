#include "lib.h"
float Max(float array[],int d1,float a){
    for (int i = 0; i < d1; i++) {
        if(array[i]>a){
            a=array[i];
        }
    }
    return a;
}
