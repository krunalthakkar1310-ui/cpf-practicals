#include <iostream>
#include <string>
using namespace std;

int main()
{
    string p, np, keyword, word;
    int i = 0, letters = 0, words = 0;
    int digits = 0, special = 0, firstSpace = -1, lastSpace = -1;


    cout<<"\n********************************************";
    cout<<"\n       DOCUMENT TEXT ANALYZER";
    cout<<"\n********************************************";
    cout<<endl;
    cout<<endl;

    cout << "Enter paragraph: ";
    getline(cin, p);

    while (p[i] != '\0')
    {
        if (p[i] == ' ')
            words++;
        else if ((p[i] >= 'a' && p[i] <= 'z') ||
                 (p[i] >= 'A' && p[i] <= 'Z'))
            letters++;
        else if (p[i] >= '0' && p[i] <= '9')
            digits++;
        else
            special++;

        if (p[i] == ' ')
        {
            if (firstSpace == -1)
                firstSpace = i;
            lastSpace = i;
        }

        i++;
    }

    if (p.length() > 0 && p[p.length() - 1] != ' ')
        words++;

    cout << "Number of characters: " << p.length() << endl << endl;
    cout << "Number of words: " << words << endl << endl;
    cout << "Number of letters: " << letters << endl << endl;
    cout << "Number of digits: " << digits << endl << endl;
    cout << "Number of special characters: " << special << endl << endl;

    if (p.length() > 0)
    {
        if (firstSpace == -1)
        {
            cout << "First word: " << p << endl << endl;
            cout << "Last word: " << p << endl << endl;
        }
        else
        {
            cout << "First word: " << p.substr(0, firstSpace) << endl << endl;
            cout << "Last word: " << p.substr(lastSpace + 1) << endl << endl;
        }

        cout << "First character: " << p[0] << endl << endl;
        cout << "Last character: " << p[p.length() - 1] << endl << endl;
    }

    cout << "\nEnter another paragraph: ";
    getline(cin, np);

    p = p + " " + np;
    cout<<endl;
    cout << "Updated paragraph: " << p << endl << endl;

    cout << "\nEnter a keyword to search: ";
    getline(cin, keyword);

    int position = p.find(keyword);

    if (position == -1)
        cout << "Keyword not found." << endl << endl;
    else
        cout << "Keyword found at position: " << position << endl << endl;

    cout << "\nUppercase: ";
    for (i = 0; i < p.length(); i++)
    {
        if (p[i] >= 'a' && p[i] <= 'z')
            cout << char(p[i] - 32);
        else
            cout << p[i];
    }
    cout << endl << endl;

    cout << "Lowercase: ";
    for (i = 0; i < p.length(); i++)
    {
        if (p[i] >= 'A' && p[i] <= 'Z')
            cout << char(p[i] + 32);
        else
            cout << p[i];
    }
    cout << endl << endl;

    cout << "Reversed paragraph: ";
    for (i = p.length() - 1; i >= 0; i--)
        cout << p[i];
    cout << endl << endl;

    cout << "Enter a word to check: ";
    getline(cin, word);

    int palindrome = 1;
    for (i = 0; i < word.length() / 2; i++)
    {
        if (word[i] != word[word.length() - 1 - i])
            palindrome = 0;
    }

    if (palindrome == 1)
        cout << "It is a palindrome." << endl << endl;
    else
        cout << "It is not a palindrome." << endl << endl;

    return 0;
}
