#include<iostream>
#include<cstring>
using namespace std;
void user_input(char text[], int& shift);
void user_input_brute(char text[]);
int encryption(char text[], int shift);
int decryption(char text[], int shift);
void brute_force(char text[]);
void display(char text[]);
int main()
{
    int choice;
    do
    {
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
            if ((choice < 1 || choice > 4) || cin.fail() )
             {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid choice! Try again." << endl;
            }
        } while (choice < 1 || choice > 4);
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
            char text[100];
            int shift;
            user_input_brute(text);
            brute_force(text);
            break;
        }
        case 4:
        {
            cout << "Program Exited Successfully!";
            return 0;
        }
        }
    } while (choice != 4);
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
void display(char text[])
{
    for (int c = 0; text[c] != '\0'; c++)
    {
        cout << text[c];
    }
    cout << endl;
}
void brute_force(char text[])
{
    int count = 1;
    for(count=1; count<=25; count++)
    {
        char temp[100];
        strcpy_s(temp, text);
        for (int a = 0; temp[a] != '\0'; a++)
        {
            if (temp[a] >= 65 && temp[a] <= 90)
            {
                temp[a] = (temp[a] - 'A' - count +26) % 26 + 'A';
            }
            else if (temp[a] == ' ')
            {
                temp[a] = temp[a];
            }
            else if (temp[a] >= 97 && temp[a] <= 122)
            {
                temp[a] = (temp[a] - 'a' - count +26) % 26 + 'a';
            }
        }
        cout << "With Shift " << count << ": " << endl;
        for (int e = 0; temp[e] != '\0'; e++)
        {
            cout << temp[e];
        }
        cout << endl;
    }
}
void user_input_brute(char text[])
{
    cin.ignore();
    bool valid = 1;
    do
    {
        cout << "Please Enter your text: ";
        cin.getline(text, 100);
        for (int b = 0; text[b] != '\0'; b++)
        {
            if (!(text[b] >= 'A' && text[b] <= 'Z') && !(text[b] >= 'a' && text[b] <= 'z') && text[b] != ' ')
            {
                cout << "Invalid! Letters only." << endl;
                valid = 0;
                break;
            }
        }
    } while (valid == 0);
}