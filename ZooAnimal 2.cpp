// Problem 1
enum scale {ounces, kilograms};

class ZooAnimal_1
{
 private:
   char *name;
   int cageNumber;
   int weightDate;
   int weight;
 public:
   void Create (char*, int, int, int); // create function
   void Destroy (); // destroy function
   void changeWeight (int pounds);
   void changeWeightDate (int today);
   char* reptName ();
   int reptWeight ();
   void reptWeight (scale which);
   inline int reptWeightDate ();
   int daysSinceLastWeighed (int today);
};

ZooAnimal_1::reptWeightDate()
{
    return weightDate;
}

////////////////////////////////////
// Problem 2 

   class ZooAnimal_2
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      void Create (char*, int, int, int); // create function
      void Destroy (); // destroy function
      void changeWeight (int pounds);
      inline void changeWeightDate (int today);
      char* reptName ();
      int reptWeight ();
      void reptWeight (scale which);
      int reptWeightDate ();
      int daysSinceLastWeighed (int today);
   };

   void ZooAnimal_2::changeWeightDate(int today)
   {
       weightDate = today;
   }

/////////////////////////////////////
// Problem 3

enum scale {ounces, kilograms};

class ZooAnimal_3
 {
  private:
    char *name;
    int cageNumber;
    int weightDate;
    int weight;
    ZooAnimal_3 *mother;
  public:
    void Create (char*, int, int, int); // create function
    void Destroy (); // destroy function
    void isMotherOf (ZooAnimal_3&);
    void changeWeight (int pounds);
    void changeWeightDate (int today);
    char* reptName ();
    int reptWeight ();
    void reptWeight (scale which);
    inline int reptWeightDate () {return weightDate;};
    int daysSinceLastWeighed (int today);
 };

 void ZooAnimal_3::isMotherOf(ZooAnimal_3& kid)
 {
     kid.mother = this;
 }

