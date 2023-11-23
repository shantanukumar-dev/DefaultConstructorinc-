         //EXAMPLE OF DEFAULT CONSTRUCTOR
#include <iostream>
#include <conio.h>
using namespace std;
class student
{
private:
    int Roll_number;
    string Name;

public:
    student();//DECLARATION OF THE DEFAULT CONSTRUCTOR
    void showdetails();
};
student::student()//DEFINITION OF THE DEFAULT CONSTRUCTOR
{
    Name = "Shantanu Kumar mahanta";
    Roll_number = 24;
}
void student::showdetails()
{
    cout << "Name of the student is:" << Name << endl;
    cout << "Roll_number is-" << Roll_number << endl;
}
int main()
{
    student shantanu;//CREATION OF THE OBJECT
    shantanu.showdetails();
    getch();
    return 0;
}