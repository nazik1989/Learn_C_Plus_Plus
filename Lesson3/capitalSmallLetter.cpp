/*
Задача 9: Փոքրատառ և մեծատառ
Գրել ծրագիր, որը մուտքում ստանում է N թիվը [1, 26] միջակայքից և
արտածում լատինական այբուբենի N-րդ փոքրատառն ու մեծատառը: (դաս 3)
*/
/*
#include <iostream>
int main () {
	short N;
	std::cin >> N;
	std::cout << char(N + 96) << " " << char(N + 64);
	return 0;
}
*/
#include <iostream>
int main () {
	short N;
	std::cin >> N;
	char smallLet, capitalLet;
	capitalLet = N + 64,   
	smallLet = N + 96;   
	std::cout << smallLet << " " << capitalLet;
	return 0;
}
