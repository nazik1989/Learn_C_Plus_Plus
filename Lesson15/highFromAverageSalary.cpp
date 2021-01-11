/*
Задача 17: Միջինից բարձր աշխատավարձ
Պահանջվում է գրել ծրագիր որում իրականցված են Person և Employee դասերը։ 
Person դասի օբյեկտները մարդիկ են, իսկ Employee դասը ժառանգված է Person դասից, և այդ դասի օբյեկտները աշխատողներ են:
Դասերի դաշտեր.
Person դասում առնվազն պետք է լինեն անուն, ազգանուն դաշտերը
Employee դասում առնվազն պետք է լինեն պաշտոն և աշխատավարձ դաշտերը
Ծրագիրը մուտքում պետք է ստանա N աշխատողների տվյալները հերթականությամբ՝ 
անուն, ազգանուն, պաշտոն և աշխատավարձ։ 
Որպես ծրագրի աշխատանքի արդյունք այն պետք է արտածի 
բոլոր աշխատողների ազգանունները և պաշտոնները, 
որոնց աշխատավարձը միջին աշխատավարձից ցածր չէ։ (դաս 15)
*/
 #include <iostream>
 class Person
 {
	 protected:
	 std::string fName;
	 std::string lName;
	 
	 public:
	 Person(std::string fn, std::string ln):fName(fn), lName(ln){}
	 ~Person(){}
	 std::string getLastName(){return lName;}
 };
//////////////////////////////////////////////////////////////
 class Employee : public Person
 {	
	 private:
	 std::string position;
	 unsigned salary;
	 
	 public:
	 Employee(std::string fn, std::string ln, std::string p, unsigned s):Person(fn, ln), position(p), salary(s){}
	 ~Employee(){}
	 std::string getPosition (){return position;}
	 unsigned getSalary () {return salary;}
 };
///////////////////////////////////////////////////////////////

 int main()
 {
	 unsigned N;
	 std::cin >> N;
	 Employee * pointerEmployee [N];
   double sumOfSalary = 0;
   double averageSalary;
	 for (int i = 0; i < N; i++)
		 
		 {
			 std::string fName;
			 std::string lName;
			 std::string position;
			 unsigned salary;
			 std::cin >> fName >> lName >> position >> salary;
			 pointerEmployee[i] = new Employee(fName, lName, position, salary);
       sumOfSalary += pointerEmployee[i] -> getSalary ();
        
		 }

     averageSalary = sumOfSalary / N;
		 
		 	 for (int i = 0; i < N; i++)
		 
		 {
       if(pointerEmployee[i] -> getSalary () >= averageSalary)
       {
          std::cout << pointerEmployee[i] -> getLastName () << " ";
          std::cout << pointerEmployee[i] -> getPosition () << "\n";
       }

			 delete pointerEmployee[i];
		 }
	 
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 