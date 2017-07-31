//
//  Date.cpp
//  cppexample
//
//  Created by 강정모 on 2017. 7. 31..
//  Copyright © 2017년 berdnamu. All rights reserved.
//

#include <iostream>
#include <cstring>
#include "Date.h"

/*
Date::Date() { // 디폴트 생성자
    std::cout << "디폴트 생성자 호출!!\n";
    year = 2000;
    month = 1;
    day = 1;
}

Date::Date(int sy, int sm, int sd) { // 생성자
    std::cout << "생성자 호출!!\n";
    year = sy;
    month = sm;
    day = sd;
}
// ch04_4
*/

// 생성자
Date::Date(const char *sName, int sy, int sm, int sd) {
    std::cout << "생성자 호출!!\n";
    dName = new char[std::strlen(sName)+1];
    std::strcpy(dName, sName);
    year = sy;
    month = sm;
    day = sd;
}

// 소멸자
Date::~Date() {
    std::cout << "소멸자 호출!!\n";
    delete [] dName;
}

/*
void Date::GetDate() {
    cout << "오늘은 " << year << "년 " << month << "월 " << day << "일 입니다." << endl;
}
// ch04_4
*/

void Date::GetDate() {
    cout << dName << "은 " << year << "년 " << month << "월 " << day << "일 입니다.\n";
}
