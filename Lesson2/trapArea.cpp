/*
Задача 4: Սեղանի մակերես
Պահանջվում է գրել ծրագիր, որը մուտքում կստանա ուղղանկյուն սեղանի հիմքերը ու բարձրությունը և կհաշվի այդ սեղանի մակերեսը: 
Սեղանի հիմքերը և բարձրությունը կարող են լինել ոչ ամբողջ թվեր։ (դաս 2)
*/
#include <iostream>
int main () {
	double base1, base2, height,trapArea;
	std:: cin >> base1 >> base2 >> height;
	trapArea = (base1 + base2)/2 * height;
	std::cout << trapArea;
	return 0;
}