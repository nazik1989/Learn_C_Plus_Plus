/*
Задача 25: Հաջորդականությունների միավորում
Պահանջվում է գրել ծրագիր, որը մուտքում կստանա երկու 10 երկարության սորտավորված զանգված 
և կարտածի այդ զանգվածների միավորման արդյունքում ստացված սորտավորված զանգվածը։ (դաս 12)
*/
#include <iostream>

int main()
{
	const int size1 = 10;
	const int size2 = 10;
	const int size = 20;
	int a[size1], b[size2], c[size];
	
	for(int i = 0; i < size1; i++)
	{
		std::cin >> a[i];
	}
		for(int i = 0; i < size2; i++)
	{
		std::cin >> b[i];
	}
	
	 int i = 0, j = 0, k = 0;
	while (i < size1 && j < size1)
	{
		if(a[i] < b[j])
		{
			c[k] = a[i];
			i++;
		}
		else
		{
			c[k] = b[j];
			j++;
		}
		k++;
	}
	
	while(i < size1)
	{
		c[k] = a[i];
		i++;
		k++;
	}
	
	while(j < size2)
	{
		c[k] = b[j];
		j++;
		k++;
	}
	 for (int i = 0; i < size; i++)
	 {
		 std::cout << c[i] << " ";
	 }
}