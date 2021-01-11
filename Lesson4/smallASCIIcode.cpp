/*
Задача 16: Փոքր ASCII կոդ
Պահանջվում է գրել ծրագիր, որը մուտքում կստանա 2 սիմվոլ ASCII աղյուսակից և 
կարտածի YES, եթե երկրորդ սիմվոլն ունի ավելի փոքր ASCII կոդ քան առաջինը, 
EQUAL, եթե մուտքագրված են նույն սիմվոլները և 
NO` հակառակ դեպքում։ (դաս 4)
*/
#include <iostream>
int main()
{
	char firstSim, secSim;
	std::cin >> firstSim >> secSim;
	if (secSim < firstSim)
	{
    std::cout << "YES";
	}
	else if (secSim == firstSim)
	{
    std::cout << "EQUAL";
	}
	else 
	{
    std::cout << "NO";
	}
return 0;
}