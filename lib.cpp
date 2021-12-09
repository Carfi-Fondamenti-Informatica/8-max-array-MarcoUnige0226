#include "lib.h"
float Max(const float array[],int d1,float max){
    max=array[0];
    for (int i = 0; i < d1; i++) {
        if(array[i]>max){
            max=array[i];
        }
    }
    return max;
}
