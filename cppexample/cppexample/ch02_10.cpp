//
//  ch02_10.cpp
//  cppexample
//
//  Created by 강정모 on 2017. 7. 26..
//  Copyright © 2017년 berdnamu. All rights reserved.
//

#include <iostream>

int main() {
    using namespace std;
    int i, score[4][2], sum[2];
    float average[2];
    
    // 영어 성적
    score[0][0] = 90;
    score[1][0] = 87;
    score[2][0] = 100;
    score[3][0] = 85;
    
    // 수학 성적
    score[0][1] = 98;
    score[1][1] = 84;
    score[2][1] = 69;
    score[3][1] = 90;
    
    for(i=0, sum[0]=0, sum[1]=0; i<4; i++) {
        sum[0] += score[i][0]; // 영어 성적 총합
        sum[1] += score[i][1]; // 수학 성적 총합
    }
    
    average[0] = sum[0]/4; // 영어 성적 평균
    average[1] = sum[1]/4; // 수학 성적 평균
    
    cout << "영어 전체 성적 : " << sum[0] << ", 영어 평균 성적 : " << average[0] << endl;
    cout << "수학 전체 성적 : " << sum[1] << ", 수학 평균 성적 : " << average[1] << endl;
    
    return 0;
}
