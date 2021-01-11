/*
Задача 19: Ամենաբարձր ժողովրդականություն
Պահանջվում է գրել ծրագիր, որում իրականցված են հետևյալ դասերը՝ Book, FictionBook, ScientificBook

Book դասի օբյեկտները գրքեր են
FictionBook դասը ժառանված է Book դասից և այդ դասի օբյեկտները գեղարվեստական գրքեր են:
ScientificBook դասը ժառանված է Book դասից և այդ դասի օբյեկտները գիտական գրքեր են:
Դասերի դաշտեր.

Book դասում պետք է լինի վերնագիր դաշտը
FictionBook դասում պետք է լինեն վաճառված օրինակների քանակ և տպաքանակ դաշտերը:
ScientificBook դասում պետք է լինեն գրքի գին, էջերի քանակ և գրադարաններին տրված օրինակների քանակ դաշտերը:
Դասերի մեթոդներ.

Book, FictionBook, ScientificBook դասի օբյեկտներ ստեղծելու համար անհրաժեշտ կոնստրուկտորներ.

popularity անունով ֆունկցիա, որը հաշվում է գեղարվեստական գրքի ժողովրդականությունը 
(որպես սահող ստորակետով թիվ) հետևյալ բանաձևով՝ (s / c) * (s / 1000), 
որտեղ s-ը գրքի վաճառված օրինակների քանակն է, իսկ c-ն գրքի տպաքանակն է:

expensive անունով ֆունկցիա, որը հաշվում է գիտական գրքի թանկարժեքության աստիճանը 
(որպես սահող ստորակետով թիվ) հետևյալ բանաձևով՝ գին/էջերի քանակ:
Ծրագիրը մուտքում պետք է ստանա N գեղարվեստական գրքերի տվյալները հերթականությամբ՝ 
վերնագիր, տպաքանակ, վաճառված օրինակների քանակ։ 
Ապա M գիտական գրքերի տվյալներ հերթականությամբ՝ վերնագիր, գին, էջերի քանակ,
գրադարաններին տրված գրքերի քանակ։
Որպես ծրագրի աշխատանքի արդյունք այն պետք է արտածի այն գեղարվեստական գրքերի վերնագրերը, 
որոնք ունեն ամենաբարձր ժողովրդականությունը։ 
Ինչպես նաև այն գիտական գրքի վերնագիը, որը ամենաշատն է տրվել գրադարաններին 
և ունի միջինից ցածր թանկարժեքություն, այդպիսին չլինելու դեպքում արտածել "Not found!"։ (դաս 15)
*/
#include <iostream>
class Book 
{
	protected:
	std::string header;
	
	public:
	Book(std::string h):header(h){}
	~Book(){}
	
	std::string getHeader(){return header;}
	
};
///////////////////////////////////////////////////
class FictionBook : public Book //գեղարվեստական գրքեր
{
	private:
	unsigned printBookCount;
	unsigned soldBookCount;

	public:
	FictionBook(std::string h, unsigned pBCount, unsigned sBCount): Book(h), printBookCount(pBCount), soldBookCount(sBCount){}
	~FictionBook(){}
	
	double popularity()
	{
		double s = soldBookCount;
		double c = printBookCount;
		return (s / c) * (s / 1000);
		// որտեղ s-ը գրքի վաճառված օրինակների քանակն է, իսկ c-ն գրքի տպաքանակն է
	}
	
};
///////////////////////////////////////////////////
class ScientificBook : public Book // գիտական գրքեր
{
	private:
	unsigned price;
	unsigned pageCount;
	unsigned givenLibraryCount;
	
	public:
	
	ScientificBook(std::string h,unsigned pr,unsigned pCount,unsigned gLibCount):Book(h), price(pr), pageCount(pCount), givenLibraryCount(gLibCount){}
	~ScientificBook(){}
	
	double expensive()
	{
		double priceDouble = price;
		return priceDouble / pageCount;
	}
	
    unsigned givenLibCountFunc(){return givenLibraryCount;}
	
};
///////////////////////////////////////////////////

int main()
{
	
	unsigned N, M;
	std::cin >> N;
	double maxPopularity = 0;
	FictionBook * fictionBookPointer[N];
	for(int i = 0; i < N; i++)
	{
		std::string header, newLine;
		unsigned soldCount;
		unsigned printCount;
		std::getline(std::cin, newLine);
		std::getline(std::cin, header);
		std::cin >> printCount;
		std::cin >> soldCount;
		
		fictionBookPointer[i] = new FictionBook(header, printCount, soldCount);
		if(fictionBookPointer[i] -> popularity() > maxPopularity)
		{
			maxPopularity = fictionBookPointer[i] -> popularity();
		}
	}
	///////////////////////////////////////////////////////////////////////////////////
	std::cin >> M;
	ScientificBook * scientificBookPointer[M];
	double sumOfExpensive = 0;
	unsigned maxGivLibCount = 0;
	double averageExpensive;
	for(int i = 0; i < M; i++)
	{
		std::string header, newLine;
		unsigned price;
		unsigned pageCount;
		unsigned givenLibraryCount;
		
		std::getline(std::cin, newLine);
		std::getline(std::cin, header);
		std::cin >> price;
		std::cin >> pageCount;
		std::cin >> givenLibraryCount;
		scientificBookPointer[i] = new ScientificBook(header, price, pageCount, givenLibraryCount);
		if(scientificBookPointer[i] -> givenLibCountFunc() > maxGivLibCount)
		{
			maxGivLibCount = scientificBookPointer[i] -> givenLibCountFunc();
		}
		
		sumOfExpensive += scientificBookPointer[i] -> expensive();
		
	}

	averageExpensive = sumOfExpensive / M;
	////////////////////////////////////////////////////////////////////////////////////////////
	bool isMaxPop = false;
		for(int i = 0; i < N; i++)
	{

		if(fictionBookPointer[i] -> popularity() == maxPopularity)
		{
			std::cout << fictionBookPointer[i] -> getHeader() << "\n";
			isMaxPop = true;
		}
		delete fictionBookPointer[i];
	}
	/////////////////////////////////////////////////////////////////////
	bool isScentBook = false;
		for(int i = 0; i < M; i++)
	{

		if(scientificBookPointer[i] -> givenLibCountFunc() == maxGivLibCount && scientificBookPointer[i] -> expensive() < averageExpensive)
		{
			std::cout << scientificBookPointer[i] -> getHeader() << "\n";
			isScentBook = true;
		}
		
		delete scientificBookPointer[i];
		
	}

	if(isScentBook == false)
	{
		std::cout << "Not found!";
	}



	
}
