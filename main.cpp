#include <iostream>
#include <string>
using namespace std;

int main()
{
    string liczby;
    string done;
    int a[100];
    int x = 0;
    getline(cin, liczby);

    liczby = liczby + " ";
    for (int i = 0; i < liczby.length(); i++)
    {
        if (liczby[i] != ' ')
        {
            done = done + liczby[i];
        }
        else
        {
            a[x] = stoi(done);
            x++;
            done = "";
        }
    }
    x--;
    for (int i = x; i > -1; i--)
    {
        cout << a[i] << " ";
    }
}

//https://pl.spoj.com/problems/TABLICA/
