/*Question number 6*/
#include<iostream>
#include<cstring>
using namespace std;

 enum scale {ounces, kilograms};

   class ZooAnimal  
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
      
    public:
      void Create (char* nm, int a, int b, int d){ // create function
	name=nm;cageNumber=a;weightDate=b;weight=d;
      }
      void Destroy (); // destroy function 
      void changeWeight (int pounds);
      inline void changeWeightDate (int today){
		weightDate=today;
	}
      char* reptName ();
      int reptWeight ();
      void reptWeight (scale which);
      int reptWeightDate (){
		return weightDate;
	}
      int daysSinceLastWeighed (int today);
   };
//define mainfunction	
int main(){
	//define variables
	int c,wd,w,t;char ar[50];
	//ask the user about the name of the reptile
	cout<<"What is the name?"<<endl;
	cin>>ar;
	//ask user about the reptile weight date
	cout<<"Give the cage number, reptile weight date, weight, date of today"<<endl;
	cin>>c>>wd>>w>>t;
	//define object 
	ZooAnimal obj;
	//callby Create function
	obj.Create(ar,c,wd,w);
	//callby the reptWeightDate function
	obj.reptWeightDate ();
	//callby changeWeightDate function
	obj.changeWeightDate (t);
	return 0;
}

