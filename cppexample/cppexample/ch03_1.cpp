//
//  ch03_1.cpp
//  cppexample
//
//  Created by 강정모 on 2017. 7. 27..
//  Copyright © 2017년 berdnamu. All rights reserved.
//

#include <iostream>

using namespace std;
void swap(int var1, int var2);

int main() {
    int a = 10, b = 20;
    
    swap(a, b);
    cout << "a = " << a << " b = " << b << endl;
    
    return 0;
}

void swap(int var1, int var2) {
    int temp;
    
    temp = var1;
    var1 = var2;
    var2 = temp;
    
    cout << "var1 = " << var1 << " var2 = " << var2 << endl;
}
