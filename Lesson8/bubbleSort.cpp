/*
Задача 19: Bubble sort
Պահանջվում է գրել ծրագիր, որը մուտքում ստանում է N (N ≤ 1000) բնական թիվ, 
ապա հաջորդականություն N ամբողջ տարրերից կազմված։ 
Անհրաժեշտ է, որ ծրագիրը արտածի հաջորդականության տարրերը դասավորված նվազման կարգով։ 
Արտածվող թվերը միմյանցից պետք է բաժանված լինեն բացատանիշով։ 
Խնդիրը լուծելիս օգտագործել զանգված և bubble sort ալգորիթմ։ (դաս 8)
*/
#include <iostream>
int main ()
{
unsigned int N, i, j;
const int size = 1000;
int a[size], num, pop;
bool swapp;
std::cin >> N;
for ( i = 0; i < N ; i++)
{
std::cin >> num;
a[i] = num;
}
/////////////////////////////////
for (i = 0; i < N ; i++)
{
swapp = false;
for ( j = 0; j < N - i - 1; j++)
{
if(a[j] < a[j+1])
{
swapp = true;
pop = a[j];
a[j] = a[j+1];
a[j+1] = pop;
}
}
if(swapp == false)
{
break;
}
}
////////////////////////////////////
for(i = 0; i < N; i++)
{
std::cout << a[i] << " ";
}
}