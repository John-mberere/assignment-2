#include <iostream>
#include <string.h>

using namespace std;

class person{


	   private://creating a private access modifier
		int age;//declaring member age
		string firstname;//declaring member firstname
		string lastname;//declaring member lastname
	   public://creating a public access modifier
	   	void setvalues(int personAge,string personfirstname,string personlastname){//creating a parametrized setValues method
			 age =  personAge;
			firstname = personfirstname;//accessing members from the private access modifiers
			lastname =  personlastname;
		   }
	   	void getvalues(){//creating get values method
			   cout <<"age: " <<age <<endl;
			   cout <<"firstname: " <<firstname <<endl;
			   cout <<"lastname: " <<lastname << endl;
		   }

	person(){//creating a constructor
	age = 50;//innitializing members age
	firstname = "john";//innitializing members firstname
	lastname = "kimani";//innitializing members lastname

	}

};

int main(){
	 person get;//creating an object get from the class person
	 get.getvalues();//accessing the method getValues in order to see the members details

	return 0;
}
