//
//  ch02_4.cpp
//  cppexample
//
//  Created by 강정모 on 2017. 7. 26..
//  Copyright © 2017년 berdnamu. All rights reserved.
//

#include <iostream>

int main()
{
    using namespace std;
    char i;
    
    cout << "등급을 소문자로 입력하세요(범위 a~d까지) : ";
    cin >> i;
    
    switch(i) {
        case 'a':
            cout << "A등급입니다.\n";
            break;
            
        case 'b':
            cout << "B등급입니다.\n";
            break;
            
        case 'c':
            cout << "C등급입니다.\n";
            break;
            
        case 'd':
            cout << "D등급입니다.\n";
            break;
            
        default:
            cout << "다시 입력하세요.\n";
    }
    
    return 0;
}
