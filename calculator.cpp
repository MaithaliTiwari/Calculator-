#include <iostream>
using namespace std;

int main()
{
    system("cls");
	system("Color A0"); 
	char op;
	float num1, num2;
    cout<<"\n\n\t\t\t\tWelcome to Calculator:"<<endl;
    cout<<"Enter the two number:";
	cin >> num1 >> num2;
    cout << "Choose an operator (+,-,*,/) : ";
	cin >> op;
	
	switch (op) {
	case '+':
		cout << num1 + num2;
		break;
	case '-':
		cout << num1 - num2;
		break;
	case '*':
		cout << num1 * num2;
		break;
	case '/':
		cout << num1 / num2;
		break;
	default:
		cout << "Error! operator is not correct";
	}
	return 0;
}
