//
//  ch04_1.cpp
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
public:
    void SetDate(int y, int m, int d);
    void GetDate();
};

void Date::SetDate(int y, int m, int d) {
    year = y;
    month = m;
    day = d;
}

void Date::GetDate() {
    cout << "오늘은 " << year << "년 " << month << "월 " << day << "일 입니다." << endl;
}

int main() {
    Date Today; // 객체 선언
    Today.SetDate(9999, 12, 31);
    Today.GetDate();
    
    return 0;
}
