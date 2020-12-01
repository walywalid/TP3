//Problem 1: 
class ZooAnimal_1
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      ZooAnimal_1(char *, int, int, int); // Create Function (Constructor)
      void Destroy (); // destroy function
      char* reptName ();
      int daysSinceLastWeighed (int today);
   };

///////////////////////////////////////////
//Problem 2:

// ZooAnimal #2 (2):
class ZooAnimal_2
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      ZooAnimal_2(char *, int, int, int); // Create Function (Constructor)
      void Destroy (); // destroy function
      char* reptName ();
      int daysSinceLastWeighed (int today);
   };
void ZooAnimal_2::Destroy ()
   {
    delete [] name;
   }
   // -------- member function to return the animal's name
   char* ZooAnimal_2::reptName ()
   {
    return name;
   }

   // -------- member function to return the number of days
   // -------- since the animal was last weigh ed
int ZooAnimal_2::daysSinceLastWeighed(int today)
   {
    int startday, thisday;
    thisday = today/100*30 + today - today/100*100;
    startday = weightDate/100*30 + weightDate - weightDate/100*100;
    if (thisday < startday)
        thisday += 360;
    return (thisday-startday);
   }


/////////////////////////////////////////////////
// Problem 3

#include <iostream>

using namespace std;

class ZooAnimal_3
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      void Create (char*, int, int, int); // create function
      void Destroy (); // destroy function
      char* reptName ();
      int daysSinceLastWeighed (int today);
   };

   // -------- member function to return the animal's name
   char* ZooAnimal_3::reptName ()
   {
    return name;
   }

   // ========== an application to use the ZooAnimal class
   int main ()
   {
    ZooAnimal_3 bozo;
    bozo.Create ("Bozo", 408, 1027, 400);
    
    std::cout << "This animal's name is " << bozo.reptName() << std::endl;

    bozo.Destroy ();
    return 0;
   }
