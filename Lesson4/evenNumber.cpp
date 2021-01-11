/*
Задача 14: Զույգ է և ոչ միայն
Գրել ծրագիր, որը մուտքում կստանա ամբողջ թիվ և կարտածի YES, 
եթե այդ թիվը զույգ է և 7֊ի բաժանելիս մնացորդում կմնա 3 և NO հակառակ դեպքում։ 
(դաս 4)
*/

#include <iostream>
int main() {
	int number;
	std::cin >> number;
	if (number%2 == 0 && number%7 == 3){
	std::cout << "YES";
	}
	else{
	std::cout << "NO";
	}
	return 0;
}