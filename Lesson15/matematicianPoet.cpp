/*
Задача 20: Մաթեմատիկոս պոետը
Պահանջվում է գրել ծրագիր, որում իրականցված են հետևյալ դասերը՝ 
Book, FictionBook, ScientificBook

Book դասի օբյեկտները գրքեր են
FictionBook դասը ժառանված է Book դասից և այդ դասի օբյեկտները գեղարվեստական գրքեր են
ScientificBook դասը ժառանված է Book դասից և այդ դասի օբյեկտները գիտական գրքեր են
Դասերի դաշտեր.

Book դասում պետք է լինեն հեղինակի անուն և ազգանուն դաշտերը
FictionBook դասում պետք է լինի ժանր դաշտը՝ 
՛novel՛, ՛story՛ և ՛poem՛ արժեքներից մեկով:
ScientificBook դասում պետք է լինի բնագավառ դաշտը՝ 
՛informatics՛, ‘physics’, ‘mathematics’ և ‘chemistry’ արժեքներից մեկով:
Ծրագիրը մուտքում պետք է ստանա N գեղարվեստական գրքերի տվյալները հերթականությամբ՝ 
հեղինակի անուն, ազգանուն և ժանր։ 
Ապա M գիտական գրքերի տվյալներ հերթականությամբ՝ հեղինակի անուն և բնագավառ։

Որպես ծրագրի աշխատանքի արդյունք այն պետք է արտածի այն մաթեմատիկոսների անունները, 
որոնք ունեն հրատարակված պոեմներ, եթե չկան այդպիսիք արտածի “Not found!”։ (դաս 15)
*/

#include <iostream>

class Book
{
	protected:
	std::string fName;
	std::string lName;
	
	public:
	Book(std::string fn, std::string ln):fName(fn), lName(ln){}
	~Book(){}
	
	std::string getFullName(){return (fName+ " " +lName);}
};
///////////////////////
class FictionBook : public Book
{
	private:
	std::string genre;  
	
	public:
	FictionBook(std::string fn, std::string ln,std::string g):Book(fn, ln),genre(g){}
	~FictionBook(){}
	
	std::string getGenre(){return genre;}
};
///////////////////////
class ScientificBook : public Book
{ 
	private:
	std::string field;
	
	public:
	ScientificBook(std::string fn, std::string ln, std::string f):Book(fn, ln), field(f){}
	~ScientificBook(){}
	
	std::string getField(){return field;}
};
//////////////////////
int main ()
{
	unsigned N, M;
	
	std::cin >> N;
	FictionBook * ficBookPointer[N];
	for(int i = 0; i < N; i++)
	{
		std::string fName;
		std::string lName;
		std::string genre;
		std::cin >> fName >> lName >> genre;
		ficBookPointer[i] = new FictionBook(fName, lName, genre);
	}
	
	///////////////////////////////////////
	
	std::cin >> M;
	ScientificBook * scBookPointer[M];
	for(int i = 0; i < M; i++)
	{
		 std::string fName;
		 std::string lName;
		 std::string field;
		 std::cin >> fName >> lName >> field;
		 scBookPointer[i] = new ScientificBook(fName, lName, field);
	}
	
	////////////////////////////////////////
	bool isMatPoet = false;
	for (int i = 0; i < M; i++)
	{
		if (scBookPointer[i] -> getField() == "mathematics")
		{
			for(int j = 0; j < N;  j++)
			{
				if(ficBookPointer[j] -> getGenre() == "poem")
				{
					if(ficBookPointer[j] -> getFullName() == scBookPointer[i] -> getFullName())
					{
						std:: cout << scBookPointer[i] -> getFullName() << std::endl;
						isMatPoet = true;
					}
				}
				
			}
		}
	}

	if(isMatPoet == false)
	{
		std::cout << "Not found!";
	}
	
}


