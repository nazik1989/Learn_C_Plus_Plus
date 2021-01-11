/*
Задача 14: Լավագույն դասարան
Գրել ծրագիր, որը մուտքում կստանա դպրոցի ընտրված դասարանների քանակը, 
ապա յուրաքանյուր դասարանի անվանումը, դասարանում սովորող աշակերտների քանակը, 
յուրաքանչյուրի անունն ու 5 առարկաների քննությունների գնահատականները։ 
Ծրագիրը պետք է արտածի ամենաբարձր առաջադիմությամբ դասարանի անվանումը։ 
Խնդիրը լուծելիս օգտագործել Class և Student դասերը։ 
Դասարանի առաջադիմությունը դա աշակերտների գնահատականների հանրագումարի 
և աշակերտների քանակի հարաբերությունն է։ (դաս 15)
*/

 #include <iostream>
 class Pupil
 {
	 private:
	 std::string fName;
	 std::string lName;
	 unsigned gradeSum;
	 
	 public:
	 Pupil(std::string fn, std::string ln, unsigned gS): fName(fn), lName(ln), gradeSum(gS){}
	 Pupil(){fName = ""; lName = "", gradeSum = 0;}
	 ~Pupil(){}
 };
 ///////////////////////////////////////////////////////
 
 class ClassRoom
 {
	 private:
	 std::string className;
	 unsigned pupilCount;
	 Pupil* pupilArray;
	 float averageRating;
	 
	 public:
	 ClassRoom():className(""), pupilCount(0), pupilArray(nullptr), averageRating(0) {}
	 ClassRoom(std::string cName, unsigned size, Pupil pupilArr[], float avRate)
	 {
		 className = cName;
		 pupilCount = size;
		 pupilArray = new Pupil[pupilCount];
		 for(int i = 0; i < pupilCount; i++)
		 {
			 pupilArray[i] = pupilArr[i];
		 }
		 averageRating = avRate;
	 }
	 
	 ~ClassRoom(){delete [] pupilArray;}
	  //unsigned  getPupilCount() {return pupilCount;}
	  //Pupil* getPupils(){return pupilArray;} 
	  std::string getClassName(){return className;}
	  float getAverageRating(){return averageRating;}
 };

  int main()
  {
	  unsigned size;
	  std::cin >> size;
	  ClassRoom ** classPointer = new ClassRoom*[size];
	  for(int i = 0; i < size; i++)
	{
		  std::string className;
		  unsigned pupilCount;
		  unsigned classGrade = 0; //առանց սրա սխալ է աշխատելու, որովհետև 78 տողում այս փոփոխականը կունենա կոմպիլյատորի կողմից գեներացվող ինչ-որ արժեք, որը կհանգեցնի կոդի սխալ աշխատանքի
		  float averageRating;
		  
		  std::cin >> className >> pupilCount;
		  Pupil* pupilPointer = new Pupil[pupilCount];
		  for (int j = 0; j < pupilCount; j++)
		  {
			  std::string fName;
			  std::string lName;
			  int grade1, grade2, grade3, grade4, grade5;
			  std::cin >> fName >> lName >> grade1 >> grade2 >> grade3 >> grade4 >> grade5;
			  unsigned gradeSum = grade1 + grade2 + grade3 + grade4 + grade5;
			  pupilPointer[j] = Pupil(fName, lName, gradeSum);
			  classGrade += gradeSum;
		  }
		  float ClassGradeFloat = classGrade;// change type
		  averageRating = ClassGradeFloat / pupilCount;
		  classPointer[i] = new ClassRoom(className, pupilCount, pupilPointer, averageRating);
		  delete [] pupilPointer;
		  
	}
	//////////////////////////////////////////////////////////////////////////////////////////////////////
  
	float  max = classPointer[0] -> getAverageRating();
	int index = 0;
	 for(int i = 0; i < size; i++)
	 {
		 if(classPointer[i] -> getAverageRating() >= max)
		 {
			max = classPointer[i] -> getAverageRating();
			index = i;
		 }
	 }
	 
	 std::cout << classPointer[index] -> getClassName();
  }