#include <iostream>
#include <climits>
#include "kd_tree.h"

int main(){

    auto KD =  Kd_tree<int,int>("points.txt");
    KD.print();

    
    return 0;
}