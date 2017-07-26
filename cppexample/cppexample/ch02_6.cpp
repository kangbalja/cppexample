//
//  ch02_6.cpp
//  cppexample
//
//  Created by 강정모 on 2017. 7. 26..
//  Copyright © 2017년 berdnamu. All rights reserved.
//

#include <iostream>

int main() {
    using namespace std;
    string word;
    char temp;
    
    cout << "뒤집을 단어를 입력하세요: ";
    cin >> word;
    
    int i, j;
    for (j=0, i=word.size()-1; j<i; --i, ++j) {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    cout << word << endl;
    return 0;
}
