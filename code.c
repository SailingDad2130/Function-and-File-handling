#include <iostream>
#include <fstream>
#include<string>
using namespace std;
void Marks(float marks[45], int i, string name[45]);
int main()
{
    string name[45];
    int i = 0;
    float marks[45];
    Marks(marks, i, name);
    system("pause>0");
    return 0;
}
void Marks(float marks[45], int i, string name[45])
{
    fstream studentFile("TALENT DEVELOPMENT MARKS.txt", ios::in |ios::out | ios::app);
    if (!studentFile.is_open())
    {
        cout << "FILE HAS NOT OPENED SUCCESSFULL!\n";
    }
    else
    {
        cout << "FILE HAS OPENED SUCCESSFULL! ENTER STUDENT MARKS.";
        cout<<"\n-------------------------------------------------\n";
        for (i = 0; i < 45; i++)
        {
            cout << "Enter name of student "<<i+1<<": ";
            getline(cin, name[i]);
            cout << "Enter marks of " << name[i]<< ": ";
            cin >> marks[i];
            cout << "\n";
            getline(cin, name[i]);
        }
        studentFile << "TALENT DEVELOPMENT MARKS\n";
        cout << "\nYou entered marks as follows\n";
        for (i = 0; i < 45; i++)
        {
            cout << " Marks of student " << i+1 << " is " << marks[i] << endl;
            studentFile << " Marks of student " << i+1 << " is " << marks[i] << endl;
        }
        studentFile << "\n";
     }
     studentFile.close();
}
