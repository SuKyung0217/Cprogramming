/*
	C프로그래밍 실습
	2021.3.15.
*/
#include <stdio.h> //헤더파일은 전처리 명령으로 포함
int main(void) { //C프로그램의 시작점. 시작은 main()부터.. 

	//변수 선언
	int age;
	
	printf("당신의 나이:\a"); //입력 안내문. 
	scanf("%d", &age);//키보드에서 십진수를 읽어 age에 저장 
	printf("입력된 값:%d\a", age);
		
} 

