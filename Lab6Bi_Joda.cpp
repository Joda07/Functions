///////////////////////////////////////////////////////
// Name:Emmanuel Joda	
// Date:03/23/17
// Description: Calculating Using the Square root function
///////////////////////////////////////////////////////

#include <iostream> //Includes the iostream library
#include <string> //Includes the string library
#include <iomanip>    //for setw and setprecision
#include <cmath>

using namespace std; //Assume the use of the standard (std) family

int main()  //the main function
{ //Start of main

	double userinput, result;
	cout << "Please enter a number to calculate the square root: ";
 
cin >> userinput;

  
result = sqrt (userinput);
 
 cout << "The Square root of " << userinput << " is equal to " << result << endl;


	
	system("pause");  //Prevents the console from closing on exit.  This line is
			  //not needed in Xcode (Mac OS X)
	return 0;  //Returns whatever is defined by the function return type

} //End of main