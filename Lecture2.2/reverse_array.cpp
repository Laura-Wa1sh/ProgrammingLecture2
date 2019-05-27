//
//  reverse_array.cpp
//  Lecture2.2
//
//  Created by Laura Walsh on 12/11/2018.
//  Copyright © 2018 Laura Walsh. All rights reserved.
//

#include "reverse_array.hpp"

void reverse_array(int data[], int data_length){
    
    //point a to the 1st element of data
    int* a =data;
    
    //point b to the last element of data
    int* b = &(data[data_length - 1]);
    
    //swap elements
    int half_data_length = data_length/2;
    for(int i = 0; i<half_data_length; i++){
        int temp = *a;
        *a++ = *b;
        *b-- = temp;
    }
}
