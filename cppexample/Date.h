//
//  Date.h
//  cppexample
//
//  Created by 강정모 on 2017. 7. 31..
//  Copyright © 2017년 berdnamu. All rights reserved.
//

#include <iostream>
using namespace std;

class Date {
private:
    int year, month, day;
    char *dName;
public:
    //Date(); // 디폴트 생성자
    //Date(int sy, int sm, int sd); // 생성자
    Date(const char *sName, int sy, int sm, int sd); // 생성자
    void GetDate();
    ~Date(); // 소멸자
};
