//
//  ch03_2.cpp
//  cppexample
//
//  Created by 강정모 on 2017. 7. 27..
//  Copyright © 2017년 berdnamu. All rights reserved.
//

#include <iostream>

void swap(int *var1, int *var2);

int main() {
    using namespace std;
    int a = 10, b = 20;
    
    swap(&a, &b);
    cout << "a = " << a << " b = " << b << endl;
    return 0;
}

// Call by Reference
void swap(int *var1, int *var2) {
    using namespace std;
    int temp;
    
    temp = *var1;
    *var1 = *var2;
    *var2 = temp;
    
    cout << "var1 = " << *var1 << " var2 = " << *var2 << endl;
}
