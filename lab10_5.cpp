/*Question number 5.*/
//include library
#include<iostream>
#include<cstring>
using namespace std;

class ZooAnimal{
	private:
 	char *name;
	int cageNumber;
	int weightDate;
	int weight;
	public:
	//define create function
	void create(char *nm,int a,int b,int d){
		//input the values given by the user
		name=nm;
		cageNumber=a;
		weightDate=b;
		weight=d;
		
	}
	void Destroy (); // destroy function
	char* reptName ();
	int daysSinceLastWeighed (int today);
};
 void ZooAnimal::Destroy ()
   {    
    delete [] name;
   }

   // -------- member function to return the animal's name
   char* ZooAnimal::reptName ()
   {
    return name;
   }
   
   // -------- member function to return the number of days
   int ZooAnimal::daysSinceLastWeighed (int today)
   // -------- since the animal was last weighed
   {
    int startday, thisday;
    //** Edits on Nov 17, 2018
    thisday = today/100*30 + today - today/100*100;
    startday = weightDate/100*30 + weightDate - weightDate/100*100;

    if (today < weightDate) 
        today += 360;
      return (today-weightDate);
    }


//define main function
int main(){
	 //define object
	ZooAnimal al;
	//define variables
	char ar[50];
	int c,wd,w,td;
	//ask the user
	cout<<"What is the name of the animal."<<endl;
	cin>>ar;
	cout<<"What is the cagenumber, weightdate, weight, dateoftoday give serially."<<endl;
	cin>>c>>wd>>w>>td;
	//call by create function that takes the values to the class
	al.create(ar,c,wd,w);
	//call by daySinceLastWeighted function in class
	al.daysSinceLastWeighed (td); 
	//define another object bozo
	ZooAnimal bozo;
	char st[]="bozo";
        bozo.create (st, 408, 1027, 400);

        cout << "This animal's name is " << bozo.reptName() << endl;
	return 0;
}


