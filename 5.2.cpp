#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string fileName;
    string line;
    int characters = 0;
    int words = 0;
    int lines = 0;

    cout << "Enter file name: ";
    cin >> fileName;

    ifstream file(fileName);

    if (!file)
    {
        cout << "Error: File does not exist or cannot be opened." << endl;
        return 1;
    }

    while (getline(file, line))
    {
        lines++;
        characters = characters + line.length();

        bool insideWord = false;

        for (int i = 0; i < line.length(); i++)
        {
            if (line[i] == ' ' || line[i] == '\t')
            {
                insideWord = false;
            }
            else if (insideWord == false)
            {
                words++;
                insideWord = true;
            }
        }
    }

    file.close();

    cout << "Total characters: " << characters << endl;
    cout << "Total words: " << words << endl;
    cout << "Total lines: " << lines << endl;

    return 0;
}
