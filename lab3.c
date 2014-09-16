/*
 20142기초프로그래밍 LAB 3
 */
/*
#include<stdio.h>
//1. 문자 'a'를 담는 변수를 하나 만들고, 이 변수의 산술연산을 이용하여 문자 'f'를 출력하는 프로그램을 작성하시오.
int main()
{
    char a = 'a';

    printf("%c\n", a + 5);
    a += 5;
    printf("%c\n",a);
    
    return 0;
}*/

/*

#include<stdio.h>
//2. 정수 65를 문자형 변수에 저장한 후, 이 문자를 출력하고, 이 정보를 이용하여 문자 'C'도 출력하는 프로그램을 작성하시오.
int main()
{
    int a = 65;
    
    printf("아스키 코드 %d의 문자 : %c\n",a,a);
    printf("ch + 2를 문자로 출력하면 : %c\n", a + 2);
    
    return 0;
}*/
/*
#include<stdio.h>
//3. 경보음이 울리고 다음 문장이 출력되는 프로그램을 작성하시오.
int main()
{
    printf("\a수업시간입니다.\n");
    return 0;
}*/
/*
#include <stdio.h>
//4. 알파벳 소문자를 입력하면 대문자를 출력하는 프로그램을 작성하시오.
int main()
{
    char c;
    
    printf("알파벳 소문자 입력 : ");
    scanf("%c",&c);
    printf("입력한 알파벳 소문자 %c의 대문자는 %c\n",c,c-('a'-'A')); //보통 대문자가 아스키 숫자가 작다.
    
    
    return 0;
}*/

#include<stdio.h>

int main()
{
    int n;
    
    printf("정수 천만 이하의 하나의 수를 입력 >>");
    scanf("%d", &n);
    printf("입력한 수 %d는 %d만 %d천 %d백 %d십 %d입니다.\n", n, n/10000, (n%10000)/1000, (n%1000)/100, (n%100)/10, (n%10));
    
    return 0;
}
