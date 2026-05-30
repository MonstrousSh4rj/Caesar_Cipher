#include<iostream>
#include<cstring>
using namespace std;
void user_input(char text[], int& shift);
void encryption(char text[], int shift);
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
	char text[100];
	int shift;
	user_input(text, shift);
    encryption(text, shift);
}
void user_input(char text[], int& shift)
{
    cin.ignore();
    cout << "Please Enter your text: ";
    cin.getline(text, 100);
    cout << "Please Enter number to shift: ";
    cin >> shift;
}
void encryption(char text[], int shift)
{
    for (int a = 0; text[a] != '\0'; a++)
    {
        if (text[a] > 65 && text[a] < 90)
        {
            text[a] = (text[a] - 'A' + shift) % 26 + 'A';
        }
        else
            text[a] = (text[a] - 'a' + shift) % 26 + 'a';
    }
        for (int a = 0; text[a] != '\0'; a++)
        {
            cout << text[a];
        }
}