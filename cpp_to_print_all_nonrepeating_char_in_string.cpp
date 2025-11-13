#include <iostream>
#include <cstring>
using namespace std;

char nonRepeatingChars(const char str[])
{
    int len = strlen(str);

    cout << "Non-repeating characters: ";

    for (int i = 0; i < len; i++)
    {
        bool isRepeated = false;

        // Skip spaces if not needed
        if (str[i] == ' ')
            continue;

        for (int j = 0; j < len; j++)
        {
            if (i != j && str[i] == str[j])
            {
                isRepeated = true;
                break;
            }
        }

        if (!isRepeated)
            cout << str[i] << " ";
    }

    cout << endl;
}

int main()
{
    char str[] = "Helloe World";
    nonRepeatingChars(str);
    return 0;
}
