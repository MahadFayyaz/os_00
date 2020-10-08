#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int count = 0;
    string arr = "312312i3b1o23i1b23k13 i1b23i12b3ou2bib313";
    int i = 0;
    int j = arr.size() - 1;
    cout << arr << endl;
    while (i < j)
    {
        swap(arr[i++], arr[j--]);
    }
    cout << arr << endl;
}