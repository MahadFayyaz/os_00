#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int count = 0;
    string arr = "312312i3b1o23i1b23k13 i1b23i12b3ou2bib313";
    for (int i = 0; arr[i] != 0; i++)
        if (arr[i] >= '0' && arr[i] <= '9')
            count++;
    cout<<count<<endl;
}