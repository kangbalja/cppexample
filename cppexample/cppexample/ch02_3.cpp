//
//  ch02_3.cpp
//  cppexample
//
//  Created by 강정모 on 2017. 7. 26..
//  Copyright © 2017년 berdnamu. All rights reserved.
//

#include <iostream>

int main()
{
    using namespace std;
    int i, oneDigit;
    string text;
    
    cout << "숫자를 입력하세요 : ";
    cin >> i;
    
    // 일의 자리 수 구하기
    oneDigit = i % 10;
    
    // 2,4,5,9 출력텍스트 "는" 설정 이외의 수는 "은" 설정
    if (i == 2 or i == 4 or i == 5 or i == 9)
        text = "는";
    else
        text = "은";
    
    if(i<0)
        cout << i << text << " 음수입니다. \n";
    else if(i>0)
        cout << i << text << " 양수입니다. \n";
    else if(i==0)
        cout << i << text << " 0입니다. \n";
    
    return 0;
}
