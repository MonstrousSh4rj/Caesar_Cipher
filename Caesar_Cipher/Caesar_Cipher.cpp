#include<iostream>
#include<cstring>
using namespace std;
void user_input(char text[], int& shift);
int encryption(char text[], int shift);
int decryption(char text[], int shift);
void display(char text[]);
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
    switch (choice)
    {
    case 1:
    {
        char text[100];
        int shift;
        user_input(text, shift);
        encryption(text, shift);
        display(text);
        break;
    }
    case 2:
    {
        char text[100];
        int shift;
        user_input(text, shift);
        decryption(text, shift);
        display(text);
        break;
    }
    case 3:
    {

    }
    case 4:
    {
        cout << "Program Exited Successfully!";
        return 0;
    }
    }
}
void user_input(char text[], int& shift)
{
    cin.ignore();
    bool valid = 1;
    do
    {
        cout << "Please Enter your text: ";
        cin.getline(text, 100);
        for (int b = 0; text[b] != '\0'; b++)
        {
            if (!(text[b] >= 'A' && text[b] <= 'Z') && !(text[b] >= 'a' && text[b] <= 'z') && text[b]!=' ')
            {
                cout << "Invalid! Letters only." << endl;
                valid = 0;
                break;
            }
        }
    }
    while (valid == 0);
    do
    {
        cout << "Please Enter number to shift: ";
        cin >> shift;
        if (shift < 1 || shift > 25)
        {
            cout << "Invalid! Enter between 1 and 25." << endl;
        }
    } 
    while (shift < 1 || shift > 25);
} 
int encryption(char text[], int shift)
{
    for (int a = 0; text[a] != '\0'; a++)
    {
        if (text[a] >= 65 && text[a] <= 90)
        {
            text[a] = (text[a] - 'A' + shift) % 26 + 'A';
        }
        else if (text[a] == ' ')
        {
            text[a] = text[a];
        }
        else if (text[a] >= 97 && text[a] <= 122)
        {
            text[a] = (text[a] - 'a' + shift) % 26 + 'a';
        }
    }
    return text[100];
}
int decryption(char text[], int shift)
{
    for (int a = 0; text[a] != '\0'; a++)
    {
        if (text[a] >= 65 && text[a] <= 90)
        {
            text[a] = (text[a] - 'A' - shift) % 26 + 'A';
        }
        else if (text[a] == ' ')
        {
            text[a] = text[a];
        }
        else if (text[a] >= 97 && text[a] <= 122)
        {
            text[a] = (text[a] - 'a' - shift) % 26 + 'a';
        }
    }
    return text[100];
}
void display(int text[])
{
    for (int c = 0; text[c] < '\0'; c++)
    {
        cout << text[c];
    }
    cout << endl;
}