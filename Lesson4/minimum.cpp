/*
Задача 13: Երեքից փոքրը
Գրել ծրագիր, որը մուտքում կստանա 3 ամբողջ թիվ և կարտածի այդ թվերից փոքրը։ (դաս 4)
*/
#include <iostream>
int main(){
	int a, b, c, d, min;
	std::cin >> a >> b >> c;
	d = (a < b) ? a : b ;
	min = (d < c)? d : c;
	std::cout << min;
	return 0;
}