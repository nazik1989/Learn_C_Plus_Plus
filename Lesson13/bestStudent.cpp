/*
Задача 8: Լավագույն աշակերտ
Գրել ծրագիր, որը մուտքում կստանա դասարանի աշակերտների քանակը ապա յուրաքանչյուրի անունն 
և 5 առարկաների քննությունների գնահատականները։ 
Ծրագիրը պետք է արտածի ամենաբարձր միջին որակական գնահատական ունեցող աշակերտի անունը։ (դաս 13)
*/

#include <iostream>
#include <string>
class student
{
 std::string name;
 std::string surname;
 short subject1grade;
 short subject2grade;
 short subject3grade;
 short subject4grade;
 short subject5grade;
 public:
 student(std::string nameK, std::string surnameK,
 short grade1, 
 short grade2, 
 short grade3,
 short grade4,
 short grade5
 ):name(nameK), surname(surnameK),
 subject1grade(grade1), 
 subject2grade(grade2), 
 subject3grade(grade3), 
 subject4grade(grade4),
 subject5grade(grade5)
 {}
 double count = 5;
 double getAverageQuality(){ return (subject1grade + subject2grade + subject3grade + subject4grade + subject5grade)/count;}
 std::string getFullName(){return name + " " + surname;};
};
///////////////////////////////
int main()
{ 
  int N; std::cin >> N;
  student **p = new student*[N];
  std::string name; 
  std::string surname;
  short grade1Cin;
  short grade2Cin;
  short grade3Cin;
  short grade4Cin;
  short grade5Cin;
  double maxAverage = 0;
  int index = 0;

  for(int i = 0; i < N; i++)
  {
    std::cin >> name >> surname;
    std::cin >> grade1Cin >> grade2Cin >> grade3Cin >> grade4Cin >> grade5Cin;
    p[i] = new student(name, surname, grade1Cin,grade2Cin,grade3Cin,grade4Cin,grade5Cin);
    if(p[i] -> getAverageQuality() > maxAverage)
    {
      maxAverage = p[i] -> getAverageQuality();
      index = i;
    }
  
  }

  std::cout << p[index] -> getFullName();

    for(int i = 0; i < N; i++)
    {
    delete p[i];
    }
    delete [] p;

}