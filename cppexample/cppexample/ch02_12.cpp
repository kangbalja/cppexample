//
//  ch02_12.cpp
//  cppexample
//
//  Created by 강정모 on 2017. 7. 26..
//  Copyright © 2017년 berdnamu. All rights reserved.
//

#include <iostream>

int main() {
    using namespace std;
    int var = 10;
    int * p_var;
    
    p_var = &var;
    
    cout << "Value: var = " << var;
    cout << ", *p_var = " << *p_var << endl;
    cout << "Address : &var = " << &var;
    cout << ", p_var = " << p_var << endl;
    
    *p_var = 20;
    
    cout << "Value: var = " << var;
    cout << ", *p_var = " << *p_var << endl;
    cout << "Address: &var = " << &var;
    cout << ", p_var = " << p_var << endl;
    
    return 0;
}
