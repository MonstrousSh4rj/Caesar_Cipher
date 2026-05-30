#include<iostream>
#include<string>
using namespace std;
void user_input(string &text, int &shift);
int main()
{
	string text;
	int shift;
	user_input(text, shift);
}
void user_input(string &text, int &shift)
{
	cout << "Please Enter your text: ";
	getline(cin, text);
	cout << "Please Enter number to shift: ";
	cin >> shift;
}