#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    int count = 0;
    int input = 0;
    string info;
    ifstream fin("student.txt");
    string students[9];
    if (fin.is_open())
    {
        for (int i = 0, count = 0; i < 9 && !fin.eof(); i++, count++)
            getline(fin, students[i]);
        fin.close();
    }
    else
    {
        for (int i = 0; i < 9; i++)
            students[i] = "0";
    }

    cout << "Select One of the following:" << endl;
    cout << "1.Add" << endl;
    cout << "2.Read" << endl;
    cout << "3.Remove" << endl;
    cin >> input;
    if (input == 1)
    {
        if (count == 0)
        {
            int i = 0;
            if (students[0] == "0")
            {
                cout << "Your Details" << endl;
                cout << "Name:";
                cin >> students[i];
                cout << "Roll no.:";
                cin >> students[i + 1];
                cout << "Email:";
                cin >> students[i + 2];
            }
            else
            {
                cout << "Your detail is avaiable" << endl;
            }
            if (students[3] == "0")
            {
                cout << "Student 1 Details" << endl;
                i = 3;
                cout << "Name:";
                cin >> students[i];
                cout << "Roll no.:";
                cin >> students[i + 1];
                cout << "Email:";
                cin >> students[i + 2];
            }
            else
            {
                cout << "Student 1 detail is avaiable" << endl;
            }
            if (students[6] == "0")
            {
                cout << "Student 2 Details" << endl;
                i = 6;
                cout << "Name:";
                cin >> students[i];
                cout << "Roll no.:";
                cin >> students[i + 1];
                cout << "Email:";
                cin >> students[i + 2];
            }
            else
            {
                cout << "Student 2 detail is avaiable" << endl;
            }
        }
    }
    else if (input == 2)
    {
        int x = 0;
        int i = 0;
        cout << "Enter number 0,1,2 to read details : ";
        cin >> x;
        if (x == 0)
        {
            if (students[x * 3] != "0")
            {
                cout << "Your Details" << endl;
                cout << "Name:";
                cout << "Name:";
                cout << students[i] << endl;
                cout << "Roll no.:";
                cout << students[i + 1] << endl;
                cout << "Email:";
                cout << students[i + 2] << endl;
            }
            else
            {
                cout << "Your detail is not avaiable" << endl;
            }
        }
        else if (x == 1)
        {

            if (students[x * 3] != "0" && x == 1)
            {
                cout << "Student 1 Details" << endl;
                i = 3;
                cout << "Name:";
                cout << students[i] << endl;
                cout << "Roll no.:";
                cout << students[i + 1] << endl;
                cout << "Email:";
                cout << students[i + 2] << endl;
            }
            else
            {
                cout << "Student 1 detail is not avaiable" << endl;
            }
        }
        else if (x == 2)
        {
            if (students[x * 3] != "0" && x == 2)
            {
                cout << "Student 2 Details" << endl;
                i = 6;
                cout << "Name:";
                cout << students[i] << endl;
                cout << "Roll no.:";
                cout << students[i + 1] << endl;
                cout << "Email:";
                cout << students[i + 2] << endl;
            }
            else
            {
                cout << "Student 2 detail is not avaiable" << endl;
            }
        }
    }
    else if (input == 3)
    {
        int x = 0;
        int i = 0;
        cout << "Enter number 0,1,2 to delete details : ";
        cin >> x;
        if (x == 0)
        {
            if (students[x * 3] != "0")
            {
                students[i] = "0";
                students[i + 1] = "0";
                students[i + 2] = "0";
                cout << "Your Details Deleted Successfully" << endl;
            }
            else
            {
                cout << "Your detail is not avaiable" << endl;
            }
        }
        if (x == 1)
        {
            if (students[x * 3] != "0")
            {

                i = 3;
                students[i] = "0";
                students[i + 1] = "0";
                students[i + 2] = "0";
                cout << "Student 1 Details Deleted Successfully" << endl;
            }
            else
            {
                cout << "Student 1 detail is not avaiable" << endl;
            }
        }
        if (x == 2)
        {
            if (students[x * 3] != "0")
            {

                i = 6;
                students[i] = "0";
                students[i + 1] = "0";
                students[i + 2] = "0";
                cout << "Student 2 Details Deleted Successfully" << endl;
            }
            else
            {
                cout << "Student 2 detail is not avaiable" << endl;
            }
        }
    }
    ofstream fout("student.txt");
    for (int i = 0; i < 9; i++)
        fout << students[i] << endl;
    fout.close();
}