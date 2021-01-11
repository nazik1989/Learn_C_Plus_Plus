
/*
Задача 12: 1974 թվականից հետո
Հայտնի է, արտադրամասում կան առանձին բանվորական խմբեր, որոնք ունեն անվանումներ։ 
Պահանջվում է գրել ծրագիր, որը մուտքում կստանա խմբերի քանակը, 
ապա ըստ հերթականության յուրաքանչյուր խմբի անվանումը, 
խմբում բանվորների քանակը և յուրաքանչյուր բանվորի անունն ու ծննդյան թիվը։ 
Ծրագիրը պետք է արտածի բոլոր այն խմբերի անվանումները, 
որոնց բոլոր բանվորները ծնվել են 1974 թվականից հետո։ 
Այդպիսիք չլինելու դեպքում արտածել “Not found!” հաղորդագրությունը։ 
Ծրագիրը լուծելիս օգտագործել Group և Worker դասերը։ (դաս 15)
*/
#include <iostream>
class Worker
{
  public:
  Worker(std::string fn, std::string ln, unsigned y):fname(fn), lname(ln), year(y){}
  Worker(){fname = ""; lname = ""; year = 0;}
  ~ Worker(){}
  std::string getFName(){return fname;}
  std::string getLName(){return lname;}
  unsigned    getYear(){return year;}

  private:
  std::string fname;
  std::string lname;
  unsigned  year;
};
/////////////////////////////////////////////////////////////////////////
class Group
{
  public:
  Group():gName(""), workerCount(0), workerArray(nullptr){}
  Group(std::string gn, unsigned size,Worker wn[])
  {
    gName = gn;
    workerCount = size;
    workerArray = new Worker[workerCount];
    for(int i = 0; i < workerCount; i++)
    {
      workerArray[i] = wn[i];
    }
  }

  ~ Group(){delete [] workerArray;}

  unsigned getWorkerCount(){return workerCount;}
  Worker * getWorkers(){return workerArray;}
  std::string getName(){return gName;}


  protected:
  std::string gName;
  unsigned workerCount;
  Worker* workerArray;

};
//////////////////////////////////////////////////////////////////
int main ()
{
  unsigned size;
  std::cin >> size;
  Group ** pg = new Group*[size];
  for(int i = 0; i < size; i++)
  {
    std::string groupName;
    unsigned year, workersCount;
    std::cin >> groupName >> workersCount;
    Worker*workers = new Worker[workersCount];
    for(int j = 0; j < workersCount; j++)
    {
      std::string workerFName, workerLName;
      unsigned year;
      std::cin >> workerFName >> workerLName >> year;
      workers[j] = Worker(workerFName,workerLName,year);
    }

    pg[i] = new Group (groupName, workersCount, workers );
    delete [] workers;
  }
/////////////////////////////////////////////////////////////////
bool isGroup = false;
for(int i = 0; i < size; i++)
{
  Worker * workers = pg[i] -> getWorkers();
  bool print = true;
  for(int j = 0; j < pg[i] -> getWorkerCount(); j++)
  {
    if(workers[j].getYear() <= 1974)
    {
      print = false;
    }
  }

  if(print)
  {
    isGroup = true;
    std::cout << pg[i] -> getName() << "\n";
  }

  delete pg[i];
}

if(isGroup == false)
{
  std::cout << "Not found!";
}
delete [] pg;

}

