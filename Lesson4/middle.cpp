/*
Задача 15: Մեծությամբ երկրորդը
Գրել ծրագիր, որը մուտքում կստանա 3 ամբողջ թիվ և 
կարտածի այդ թվերից մեծությամբ երկրորդը։ (դաս 4)
*/
#include <iostream>
int main()
{
        int a, b, c;
 std::cin >> a >> b >> c;
		if(a>b){
			if(b>c){std::cout << b;}
			else if(c>a){std::cout << a;}
			else{std::cout << c ;}
		}
		else{
			if(b<c){std::cout << b;}
			else if(c<a){std::cout << a;}
			else{std::cout << c;}
		}
        return 0;
}
/*
#include <iostream>
  int main()
{
        int a, b, c;
        std::cin >> a >> b >> c;
        
        if( b>a && a>c || c>a && a>b ){
			std::cout << a;}
        if( a>b && b>c || c>b && b>a ){
			std::cout<< b;}
        if( a>c && c>b || b>c && c>a ){
			std::cout << c;}
		return 0;
}

////////////////////////////////////////////////////////
#include<iostream>
 int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << (a>b)?  ( (c>a)? a : ((b>c)? b:c) )  :  ( (c>b)? b : ((a>c)? a:c) ) ;
    return 0;      	  
}
///////////////////////////////////////////////////////////
*/