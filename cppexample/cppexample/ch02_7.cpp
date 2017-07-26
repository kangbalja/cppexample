//
//  ch02_7.cpp
//  cppexample
//
//  Created by 강정모 on 2017. 7. 26..
//  Copyright © 2017년 berdnamu. All rights reserved.
//

#include <iostream>
const int answer = 15;

int main() {
    using namespace std;
    int i;
    
    cout << "1~30 사이의 수 중 정답을 맞춰주세요 : ";
    while(i != answer) {
        cin >> i;
        if(i<answer)
            cout << i << "보다 큽니다. : ";
        else if(i>answer)
            cout << i << "보다 작습니다. : ";
        else
            cout << i << "맞았습니다!!\n";
    }
    return 0;
}
