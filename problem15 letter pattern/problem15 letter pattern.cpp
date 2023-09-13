#include <iostream>
#include <string>
using namespace std;



int readNumber(string msg)
{
    int num;
    cout << msg << endl;
    cin >> num;
    return num;
}

void printInvertedPattern(int num)
{
    string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (int x = 0; x <= num - 1; x++)
    {
        for (int i = 0; i <= x; i++)
        {
            cout << str[x];
        }
        cout << "\n";
    }
}

int main()
{
    printInvertedPattern(readNumber("Please enter number?"));

    return main();
}