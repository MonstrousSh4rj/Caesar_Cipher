#include<iostream>
#include<string>
using namespace std;
void user_input(string &text, int &shift);
int main()
{
    int choice;
    do
    {
        cout << "========================================" << endl;
        cout << "        CAESAR CIPHER PROGRAM          " << endl;
        cout << "========================================" << endl;
        cout << "  1. Encrypt                           " << endl;
        cout << "  2. Decrypt                           " << endl;
        cout << "  3. Brute Force                       " << endl;
        cout << "  4. Exit                              " << endl;
        cout << "========================================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice < 1 || choice > 4)
        {
            cout << "Invalid choice! Try again." << endl;
        }
    } 
    while (choice < 1 || choice > 4);
	string text;
	int shift;
	user_input(text, shift);
}
void user_input(string &text, int &shift)
{
    cin.ignore();
	cout << "Please Enter your text: ";
	getline(cin, text);
	cout << "Please Enter number to shift: ";
	cin >> shift;
}