///////////////////////////////////////////////////////
// Name:Emmanuel Joda
// Date:30/03/17
// Description:Finding the CUbe-root of a number using the Power function
///////////////////////////////////////////////////////

#include <iostream> 
#include <string> 
#include <iomanip>    
using namespace std; 

int main()  //the main function
{ //Start of main




int base = 0;

int exp1=0.33333;

double result = pow(base, exp1);

for(int i = 1; i <= 10; i++)

{


	
result = pow(i, 0.3333);

	cout << result << endl;

}

	


system("pause");

return 0;


}