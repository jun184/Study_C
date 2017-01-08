//
//  Hello.c
//  SampleProject
//
//  Created by seokjun lee on 2017. 1. 2..
//  Copyright © 2017년 seokjun lee. All rights reserved.
//

//#include <stdio.h>
//
//int main(void)
//{
//    printf("hello world! \n");
//    return 0;
//}

//책에는 기본 '.c' 파일이 없었고, '.c' 파일을 만들고 해당 내용을 입력하라고 하였다.
//실행하니 오류 발생
//'main' 함수가 두개가 있어 빌드를 하지 못하는 상황이였고
//한 블로거는 다음과 같이 작성해 두었다.

/*
C소스의 main() 이라는 메인 함수는 평범한 함수가 아니라, "프로그램 그 자체"입니다.
그리고 C에서는 모든 것이 함수들로 이루어져 있습니다.
그래서 어느 함수부터 코드를 실행할지 지정해야 할 것입니다.
그 시작점이 바로 main() 함수입니다.
main() 함수가 없으면 exe 같은 실행 파일을 만들 수 없습니다.
 
http://mwultong.blogspot.com/2007/06/c-main-main-function.html
*/

//이렇게 중요한 아이가 한 프로젝트에 2개나 있으니..
//그래서 main.c(프로젝트 기본) 파일의 내용을 주석처리하고 빌드하였더니 실행이 되었다.
