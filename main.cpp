#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int d1=0;
    float array[d1];
    float max=0;
    cin>>d1;
    for (int i = 0; i<d1 ; i++) {
        cin>>array[i];
    }
cout<<Max(array,d1,max);

    return 0;
}
