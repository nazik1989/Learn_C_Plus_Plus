/*
Задача 7: Սահող կետով և ամբողջ թվեր
Գրել ծրագիր, որը մուտքում կստանա 3 ամբողջ թիվ և 1 սահող կետով թիվ։ 
Ծրագիրը որպես արդյունք պետք է արտածի ամբողջ թվերի գումարի և 
սահող կետով թվի բաժանման արդյունքում ստացված քանորդը։ 
Հայտնի է, որ սահող կետով թիվը հավասար չէ 0֊ի։ (դաս 3)
*/
#include <iostream>
int main () {
int a, b, c;
float d,quotient;
std::cin >> a >> b >> c >> d;
quotient = (a + b + c)/d;
std::cout << quotient;
}