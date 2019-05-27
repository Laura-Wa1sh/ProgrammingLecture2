//
//  main.cpp
//  Lecture2.2
//
//  Created by Laura Walsh on 12/11/2018.
//  Copyright © 2018 Laura Walsh. All rights reserved.
//

#include <iostream>
#include "reverse_array.hpp"
#include "swap.hpp"
using namespace std;
#define DATA_LENGTH 10


int main() {
    
    int data[DATA_LENGTH];
    for(int n =0; n< DATA_LENGTH; n++) data[n] = n;
    
    //display data
    cout << "Before reverse" <<endl;
    for(int n =0; n < DATA_LENGTH; n++) cout << data[n] << " ";
    
    //reverse array
    reverse_array(data, DATA_LENGTH);
    
    //display data after reverse
    cout << "After reverse" << endl;
    for(int n=0; n< DATA_LENGTH; n++) cout << data[n] << " ";
    
    //before swapp
    cout << endl << "Before swap" << endl;
    int a = 12, b = 6;
    
    cout << "a = " << a << " b = " << b << endl;
    
    //after swap
    swap(a,b);
    cout << endl << "After swap" << endl;
    cout << "a = " << a << " b = " << b << endl;
    
    
    return 0;
}
