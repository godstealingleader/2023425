#include <iostream>

int main()
{
	using namespace std;
	cout << "I'm going to calculate the sum of all the values you put in" << endl;
	cout << "and when you input '0', I will be end" << endl;
	for (int times = 1, you_input = 1, sum = 0; you_input != 0;)
	{
		cout << "please enter your " << times++ << " number:"; cin >> you_input;//but you can't make the number > 2^31-1
		sum = sum + you_input;
		cout << "after input " << you_input << ", sum = " << sum << endl;
	}
	return 0;
}