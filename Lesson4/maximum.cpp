/*
Задача 12: Երկուսից մեծը
Գրել ծրագիր, որը մուտքում կստանա 2 դրական ամբողջ թիվ և 
կարտածի այդ թվերց մեծը։ (դաս 4)
*/

#include <iostream>
int main () {
	unsigned int a, b, max;
	std::cin >> a >> b;
	max = (a > b) ? a : b ;
	std::cout << max;
return 0;
}