/*
Задача 2: Միջակայքի զույգ թվեր
Գրել ծրագիր, որը մուտքում կստանա A և B ամբողջ թվերը և 
կարտածի [A, B] միջակայքի բոլոր զույգ թվերը։ 
Արտածվող թվերը միմյանցից պետք է բաժանված լինեն բացատանիշով։ (դաս 5, 6)
*/
#include <iostream>
int main () 
{
    int A, B;
    std::cin >> A >> B;
    if (A % 2 == 0)
    {
        while(A <= B)
        {
            std::cout << A << " ";
            A += 2;
        }
    }
    else
    {
        ++A;
        while(A <=B)
        {
            std::cout << A << " ";
            A += 2;
        }
    }
}