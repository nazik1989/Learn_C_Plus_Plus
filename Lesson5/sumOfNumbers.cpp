/*
Задача 5: Թվերի գումար
Պահանջվում է գրել ծրագիր, որը մուտքում կստանա ամբողջ թիվ այնքան ժամանակ 
քանի դեռ չի ներմուծվել 0։ Եվ կարտածի ներմուծված թվերի գումարը։ 
Խնդիրը լուծել առանց զանգված օգտագործելու։ (դաս 5, 6)
*/
#include <iostream>
int main ()
{
    int num,sum = 0;
    do
    {
        std::cin >> num;
        sum += num; 
    }
    while(num != 0);
    std::cout << sum;
}
