//
//  OperatorSeven.c
//  SampleProject
//
//  Created by seokjun lee on 2017. 1. 7..
//  Copyright © 2017년 seokjun lee. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int num1=10;
    int num2=12;
    int result1, result2, result3;

    result1=(num1==10 && num2==12);
    result2=(num1<12 || num2>12);
    result3=(!num1);

    printf("result1: %d \n", result1);
    printf("result2: %d \n", result2);ㅕ
    printf("result3: %d \n", result3);

    return 0;
}

// 논리연산자

// && - 양쪽 다 참이면 참을 반환 (AND)
// || - 둘중 하나라도 참이면 참 (OR)
// ! - 참 이면 거짓 / 거짓 이면 참 (NOT)

// C언어는 0이 아니면 모두 '참'으로 간주한다!!!
// 거짓을 의미하는 숫자는 유일하게 0 이다
