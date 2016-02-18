#include <iostream>

using namespace std;
int main()
{
	int x=0;

	for (x = 0; x < 21; x++)

		if (x%3=0){

			cout<< "fizz";
		}
		else if(x%5=0){
			cout << "Buzz";
		}
		else if (x % 3 =0 & x % 5 = 0){
			cout << "FizzBuzz";
		}

}