//
//  ch02_13.cpp
//  cppexample
//
//  Created by 강정모 on 2017. 7. 26..
//  Copyright © 2017년 berdnamu. All rights reserved.
//

#include <iostream>

int main(void) {
    using namespace std;
    int *p_var = new int;
    double *p_arr = new double[3];
    
    *p_var = 1001;
    p_arr[0] = 20001.0;
    p_arr[1] = 0.5;
    p_arr[2] = 10000001.0;
    
    cout << "값: " << *p_var << endl;
    cout << "주소: " << p_var << endl;
    cout << "사이즈: " << sizeof(p_var) << endl;
    
    cout << "p_arr = " << p_arr << ", *p_arr = " << *p_arr << endl;
    p_arr = p_arr + 1;
    cout << "p_arr = " << p_arr << ", *p_arr = " << *p_arr << endl;
    p_arr = p_arr - 1;
    
    cout << "p_arr[0] = " << p_arr[0] << ", p_arr[1] = " << p_arr[1] << endl;
    cout << "*p_arr = " << *p_arr << ", *(p_arr+1) = " << *(p_arr + 1) << endl;
    
    delete p_var;
    delete [] p_arr;
    
    return 0;
}
