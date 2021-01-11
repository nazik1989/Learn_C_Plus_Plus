/*
Задача 15: Երկրաչափական պատկերներ
Պահանջվում է գրել ծրագիր որում իրականցված են հետևյալ դասերը՝ Shape, Triangle, Rectangle, Circle

Shape դասը հանդիսանում է բազային աբստրակտ դաս մնացած դասերի համար 
և դրանից ժառանգված դասերի օբյեկտներն իրենցից ներկայացնում են երկրաչափական պատկերներ`

Triangle դասի օբյեկտները եռանկյուններ են
Rectangle դասի օբյեկտներն ուղղանկյուններ են
Circle դասի օբյեկտները շրջաններ են
Դասերի մեթոդներ.

Shape դասից ժառանգված բոլոր դասերը պետք է պարունակեն 
տվյալ դասի օբյեկտ ստեղծելու համար անհրաժեշտ կոնստրուկտոր(ներ) կամ մեթոդներ:
Պատկերի մակերեսը հաշվող ֆունկցիա, 
որը Shape դասում պետք է սահմանված լինի որպես մաքուր վիրտուալ ֆունկցիա:
Ծրագիրը մուտքում կստանա N մարմինների անունները և նրանց չափերը (եռանկյան դեպքում հիմքը ապա բարձրությունը)։ 
Որպես ծրագրի աշխատանքի արդյունք այն պետք է արտածի բոլոր մարմինների մակերեսները աճման կարգով։ (դաս 15)
*/

#include <iostream>

class Shape
{
	public: 
	virtual double getArea() = 0;
	virtual ~Shape(){}
	void printArea() 
		{
			std::cout << getArea() << std::endl;
		}
	
};
/////////////////////////////////////////////////////////////////////
class Triangle : public Shape
{
	private:
	double base;
	double height;
	
	public:
	Triangle(double b, double h):base(b), height(h){}
	~Triangle() override {}
	double getArea() override
		{
		return (base/2 * height);
		}
	
};
///////////////////////////////////////////////////////////////////
class Rectangle : public Shape
{
	private:
	double height;
	double width;
	
	public:
	Rectangle(double h, double w):height(h), width(w){}
	~ Rectangle() override {}
	double getArea() override {return height * width;}
};
///////////////////////////////////////////////////////////////////
class Circle : public Shape
{
	private:
	double radius;
	double pi = 3.1415;
	
	public:
	Circle(double r):radius(r){}
	~ Circle() override {}
	double getArea()override {return pi * radius * radius;}
};
//////////////////////////////////////////////////////
void insertionSort(double ourArray[],unsigned N )
{
  unsigned i, j;
  double swapp;
  for (i = 1; i < N; i++)
  {
    for (j = i; j > 0; j--)
    {
      if (ourArray[j-1] > ourArray[j])
      {
        swapp = ourArray[j-1];
        ourArray[j -1] = ourArray[j];
        ourArray[j] = swapp;
      }
    }
  }
  ////////////////////////////
  for( i = 0; i < N; i++)
  {
    std::cout << ourArray[i] << " ";
  }

}
//////////////////////////////////////////////////////////
int main()
{
	unsigned N;
	std::cin >> N;
	Shape * din_shapePointerArr[N] ;
  double * din_AreasArr = new double[N];
	for(int i = 0; i < N; i++)
	{
		std::string  shapeName;
    char charShape;
		std::cin >> shapeName;
    if(shapeName == "Triangle"){charShape = 'T';}//սա պետք է դարձնեմ else if-ով
    if(shapeName == "Rectangle"){charShape = 'R';}
    if(shapeName == "Circle"){charShape = 'C';}
			switch(charShape) 
			{
				case 'T'  :
				double base;
				double height;
				std::cin >> base >> height;
				din_shapePointerArr[i] = new Triangle(base, height);
				break;
				
				case 'R'  :
				double heightR;
				double width;
				std::cin >> heightR >> width;
				din_shapePointerArr[i] = new Rectangle(heightR, width);
				break;
				
				case 'C'  :
				double radius;
				std::cin >> radius;
				din_shapePointerArr[i] = new Circle(radius);
				break; 
  
			}
     
    din_AreasArr[i] = din_shapePointerArr[i] -> getArea();
    delete din_shapePointerArr[i]; 
	}

 insertionSort(din_AreasArr,N);
	
delete []	din_AreasArr;


}