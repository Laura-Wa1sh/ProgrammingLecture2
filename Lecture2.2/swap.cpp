//
//  swap.cpp
//  Lecture2.2
//
//  Created by Laura Walsh on 12/11/2018.
//  Copyright © 2018 Laura Walsh. All rights reserved.
//

#include "swap.hpp"

void swap(int &x, int &y){
    int temp = x;
    x=y;
    y = temp;
}
