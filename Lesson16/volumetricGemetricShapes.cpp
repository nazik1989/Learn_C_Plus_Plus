/*
Задача 16: Երկրաչափական մարմիններ
Պահանջվում է գրել ծրագիր որում իրականցված են հետևյալ դասերը՝ Shape, Cube, Pyramid, Ball

Shape դասը հանդիսանում է բազային աբստրակտ դաս մնացած դասերի համար 
և դրանից ժառանգված դասերի օբյեկտներն իրենցից ներկայացնում են երկրաչափական եռաչափ մարմիններ

Cube դասի օբյեկտները խորանարդներ են
Pyramid դասի օբյեկտներն քառակուսի բուրգեր են
Ball դասի օբյեկտները գնդեր են
Դասերի մեթոդներ.
Shape դասից ժառանգված բոլոր դասերը պետք է պարունակեն 
տվյալ դասի օբյեկտ ստեղծելու համար անհրաժեշտ կոնստրուկտոր(ներ) կամ մեթոդներ:
Մարմինների ծավալ հաշվող ֆունկցիա, 
որը Shape դասում պետք է սահմանված լինի որպես մաքուր վիրտուալ ֆունկցիա:
Ծրագիրը մուտքում կստանա N մարմինների անունները և նրանց չափերը (բուրգի դեպքում նախ հիմք կողմի երկարությունը ապա բարձրությունը)։
Որպես ծրագրի աշխատանքի արդյունք այն պետք է արտածի բոլոր մարմինների ծավալների գումարը։ (դաս 15)
*/

#include <iostream>

class Shape
{
	protected:
	static unsigned shapeCount;// փորձենք օգտագործել նաև 
	
	public:
	virtual double getVolume() = 0;
	virtual ~ Shape(){}
	void printVolume()
	{
		std::cout << getVolume() << std::endl;
	}
	static unsigned getShapeCount(){return shapeCount;}
	
};
unsigned Shape::shapeCount = 0;
////////////////////////////////////////////////////
class Cube : public Shape
{
	private: 
	double pros;
	
	public:
	Cube(double p):pros(p){shapeCount++;}
	virtual ~ Cube(){}
	virtual double getVolume()
	{
		return pros * pros * pros;
	}
	
};
//////////////////////////////////////////////////////
class Pyramid : public Shape
{
	private:
	double pros;
	double height;
	
	public:
	Pyramid(double p, double h):pros(p), height(h){shapeCount++;}
	virtual ~ Pyramid(){}
	virtual double getVolume()
	{
		return (pros * pros)/3 * height;
	}
};
////////////////////////////////////////////////////////
class Ball : public Shape
{
	private:
	double radius;
	double pi = 3.1415;
	
	public:
	Ball(double r):radius(r){shapeCount++;}
	virtual ~ Ball (){}
	virtual double getVolume()
	{
		return 4 * (pi * radius * radius * radius)/3;
	}
	
};
///////////////////////////////////////////////////////////
int main()
{
	unsigned N;
	char charShapeName;
	double sumVolume = 0;
	
	std::cin >> N;
	Shape * shapePointerArr[N];
	for (int i = 0; i < N; i++)
	{
		std::string shapeName;
		std::cin >> shapeName;
		if (shapeName == "Cube")
		{
			charShapeName = 'C';
		}
		else if(shapeName == "Pyramid")
		{
			charShapeName = 'P';
		}
		else
		{
			charShapeName = 'B';
		}
		
		switch (charShapeName)
		{
			case 'C':
			double prosCube;
			std::cin >> prosCube;
			shapePointerArr[i] = new Cube(prosCube);
			break;
			
			case 'P':
			double pros;
			double height;
			std::cin >> pros >> height;
			shapePointerArr[i] = new Pyramid(pros, height);
			break;
			
			case 'B':
			double radius;
			std::cin >> radius;
			shapePointerArr[i] = new Ball(radius);
		}
		
		sumVolume += shapePointerArr[i] -> getVolume();
	}
	std::cout << sumVolume << std::endl;
	//std::cout << Shape::getShapeCount();//փորձենք ստատիկ ֆունկցիայի աշխտանքը
	
}
