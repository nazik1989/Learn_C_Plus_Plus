/*
Задача 18: Առավելագույն աշխատավարձ ստացող նվազագույն տարիքով
Պահանջվում է գրել ծրագիր, որում իրականցված են Person և Employee դասերը։ 
Person դասի օբյեկտները մարդիկ են, իսկ Employee դասը ժառանգված է Person դասից, 
և այդ դասի օբյեկտները աշխատողներ են:
Դասերի դաշտեր.
Person դասում առնվազն պետք է լինեն անուն, ազգանուն և ծննդյան տարեթիվ դաշտերը
Employee դասում առնվազն պետք է լինի աշխատավարձ դաշտերը
Ծրագիրը մուտքում պետք է ստանա N աշխատողների տվյալները հերթականությամբ՝ 
անուն, ազգանուն, ծննդյան տարեթիվ և աշխատավարձ։ 
Որպես ծրագրի աշխատանքի արդյունք այն պետք է արտածի առավելագույն աշխատավարձ ստացող 
նվազագույն տարիքով աշխատողների ազգանունները, 
այդպիսիք չլինելու դեպքում արտածի "Not found!": (դաս 15)
*/
#include <iostream>
#include <limits.h>
class Person 
{
	protected:
	std::string fName;
	std::string lName;
	unsigned bornYear;
	
	public:
	Person(std::string fn, std::string ln, unsigned y):fName(fn), lName(ln), bornYear(y){}
	~ Person(){}
	std::string getLastName(){return lName;}
	unsigned getBornYear(){return bornYear;}
};
/////////////////////////////////////////////
class Employee : public Person
{
	private:
	unsigned salary;
	
	public:
	Employee(std::string fn, std::string ln, unsigned y, unsigned s): Person (fn, ln, y), salary(s){}
	~ Employee (){}
	unsigned getSalary(){return salary;}
};
////////////////////////////////////////////////
int main ()
{
	unsigned N;
	std::cin >> N;
	Employee * pointerEmployee[N];
	unsigned maxSalary = 0;
	unsigned minAge = 0;
	for(int i = 0; i < N; i++)
	{
		std::string fName;
		std::string lName;
		unsigned bornYear;
		unsigned salary;		
		std::cin >> fName >> lName >> bornYear >> salary;
		pointerEmployee[i] = new Employee(fName, lName, bornYear, salary);
		
		if (pointerEmployee[i] -> getSalary() > maxSalary)
		{
			maxSalary = pointerEmployee[i] -> getSalary();
		}
		
		if(pointerEmployee[i] -> getBornYear() > minAge)
		{
			minAge = pointerEmployee[i] -> getBornYear();
		}
	}


	bool isMaxSalaryMinAge = false;
		for(int i = 0; i < N; i++)
	{
		
		if ((pointerEmployee[i] -> getSalary() == maxSalary) && (pointerEmployee[i] -> getBornYear() == minAge))
		{
			isMaxSalaryMinAge = true;
			std::cout << pointerEmployee[i] -> getLastName() << std::endl;
		}
	delete pointerEmployee[i];	
	}

	if(isMaxSalaryMinAge == false)
	{
		std::cout << "Not found!";
	}	
	
	
}