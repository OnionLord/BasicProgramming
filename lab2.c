/*
 20142기초프로그래밍 LAB 2
 */

/*
 //1. 정수를 저장하는 변수 두 개를 만들어 각각 100과 200을 저장하여 두 수의 가감승제의 연산결과를 출력하는 프로그램을 작성하라.
 
 #include<stdio.h>
 
int main()
{
    int x = 100;
    int y = 200;
    
    printf("%d + %d = %d\n", x,y,x+y);
    printf("%d - %d = %d\n", x,y,x-y);
    printf("%d * %d = %d\n", x,y,x*y);
    printf("%d / %d = %d\n", x,y,x/y);
    printf("%d / %d = %lf\n", x,y,(double)x/(double)y);
 //마지막 부분 소수점 나오도록 형변환 시켜준다.
    return 0;
}*/

/*
 //2. 시험을 세번 시행하여 각각 백점 만점에 87,92,95 점을 받았다 평균 점수가 얼마인지 출력하는 프로그램을 만들라. 소수점으로 점수가 나오도록 한다.
 
 
#include<stdio.h>

int main()
{
    int a = 87, b = 92, c = 85;
    printf("평균 점수는 %lf입니다.\n",(double)(a+b+c)/(double)3);
 //소수점이 나오도록 해야 한다.
 //처음 세개의 변수를 출력할 필요 없으니 아예 처음부터 double/float에 저장해도 된다.
    return 0;
}*/

/*
 
 //3. 표준 입력으로 두 개의 실수를 입력 받아 두 수의 나누기를 구하여 출력하는 프로그램을 다음 조건에 따라 만들라. 두 수의 나누기를 수행하는 매크로를 정의하여 사용하라. 출력할 숫자의 소수점과 폭을 설정해야 한다.
 
#include<stdio.h>
#define DIV(X,Y) (X/Y) //나누기 매크로

int main()
{
    double a, b;
    printf("실수 1 입력? ");
    scanf("%lf", &a);
    printf("실수 2 입력? ");
    scanf("%lf", &b);
    printf("%10.2lf / %10.2lf = %10.3lf\n",a,b,DIV(a,b));
 //숫자 10칸, 소숫점 2째자리.
    return 0;
}*/


//4. 두 수를 곱하는 매크로 MULT(x,y)를 정의하여 다음과 같은 문장이 실행되도록 프로그램을 작성하라.
//result = MULT(10,20)
#include<stdio.h>
#define MULT(X,Y) (X*Y) //곱셈 매크로.

int main()
{
    int a = 10, b = 20, result;
    
    result = MULT(a,b);
    
    printf("%d와 %d의 곱은 %d입니다.\n",a,b,result);
    
    return 0;
}
