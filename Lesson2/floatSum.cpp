/*
Задача 5: Սահող կետով թվերի գումար
Պահանջվում է գրել ծրագիր, որը մուտքում կստանա 4 սահող կետով թվեր և
կարտածի առաջին երկուսի գումարի և մյուս երկուսի գումարների տարբերությունը։ (դաս 2)
*/
#include <iostream>
int main () {
	float a, b, c;
	double d, result;
	std:: cin >> a >> b >> c >> d;
	result = (a + b)-(c + d);
	std::cout << result;
	return 0;
}