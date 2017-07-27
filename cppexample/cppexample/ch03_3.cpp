//
//  ch03_3.cpp
//  cppexample
//
//  Created by 강정모 on 2017. 7. 27..
//  Copyright © 2017년 berdnamu. All rights reserved.
//

#include <iostream>

int doFactorial(int n);

int main() {
    using namespace std;
    int n, result;
    
    cout << "숫자를 입력하시오 : ";
    cin >> n;
    
    result = doFactorial(n);
    cout << n << "! = " << result << endl;
    
    return 0;
}

int doFactorial(int n) {
    return (n <= 1) ? 1 : n * doFactorial(n-1);
}
