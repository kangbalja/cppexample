//
//  ch03_4.cpp
//  cppexample
//
//  Created by 강정모 on 2017. 7. 27..
//  Copyright © 2017년 berdnamu. All rights reserved.
//

#include <iostream>

inline int simple(int n) {
    int result = 1;
    for (int i=1; i<=n; i++)
        result *= i;
    return result;
}

int main() {
    using namespace std;
    int a, b, c;
    
    a = simple(5);
    b = simple(4);
    c = simple(7);
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    
    return 0;
}
