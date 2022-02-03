// variable - 변할 수 있는 데이터
// constant - 변할 수 없는 데이터


 //  - 나이 (변수) 


// && = 모두가 true 여야   true 리턴;
// || = 모두가 false 여야만 false 리턴함
// ! = 어떤 결과가 나오늗 부정 / 반대를 나타냄



// if ~ 이면 ~다. 그래서 그 결과값에 맞으면 ~ printf 출력한다
// else if -> if 했는데 안 맞다. 아랠로 내려가보니까 이 조건이 있다 맞으면~ else if에 맞게 출력한다
// else -> if 도 아니고 else if 도 아니면~ else 사용한다. 


//Q1. add 함수를 만들어서 예를 들어 add(5,6) 이런 상황이면 알아서 5와 6을 더해주는 상황을 만들려면 어떻게 해야 하는가?

#include <stdio.h>
#include <string.h>

int main() {

	char str[] = "This is a sample string";
	char* pch;
	printf("Looking for the 's' character in \"%s\"... \n", str);
	pch = strchr(str, 's');
	while (pch != NULL) {
		printf("found at %d\n", pch - str + 1);
		pch = strchr(pch + 1, 's');
	}

	return 0;

}