#include <iostream>
#include <string>
#include <conio.h>


int age = 21;
bool sw = true;
char initial = 'm';
std::string Fullname = "";
double pi = 3.14;
int a = 10;
int b = 5;
int c = 20;
int z = 10;

int main() {

    
    system("cls");
    system("pause");

    //if only works if true, not if false
    if (a > b) {
        std::cout << "A is greater than B\n";
    }
    else {
        std::cout << "B is greater than A\n";
    }

    if (a == z) { // a = 5 makes a have the valute 5 a == makes if check if a equels 5
        std::cout << "A and Z are equal \n";
    }

    if (a < b) { //if (a > z &&(and)  a == z)
        std::cout << "Nothing happens here \n";
    }

    if (a != b) {
        std::cout << "a and b are not equal \n"; 
    }


    // This is to ad coments
    std::cout << "Enter your full name";
    std::getline(std::cin, Fullname);
    std::cout << "your full name is :" << Fullname;
    std::cin >> Fullname;
    std::cout << "enter your age :";
 
        std::cout << "Your age is * " << age << "\n";
    std::cout << "you are young";
    
} 

