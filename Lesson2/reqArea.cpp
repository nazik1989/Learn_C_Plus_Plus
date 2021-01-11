/*
Задача 2: Ուղղանկյան մակերես
Գրել ծրագիր, որը մուտքում կստանա ուղղանկյան 2 կողմերի երկարությունը և կարտածի այդ ուղղանկյան մակերեսը։
Ներմուծված կողմերի երկարությունները պատկանում են [0; 2147483647] միջակայքին և ամբողջ թվեր են։ (դաս 2)
*/
#include<iostream>
int main() {
	int length;
	long width, reqArea;
	std::cin >> length >> width;
	reqArea = length * width;
	std::cout << reqArea;
	return 0;
}
