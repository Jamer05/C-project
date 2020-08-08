#include<iostream>
#include<string>
#include<stdlib.h>
#include <chrono>
#include<stdio.h>
#include <thread>
#include <conio.h>
using namespace std;


class SimpleCalculator
{

public:
    char op;
    int n1;
    int n2;
    SimpleCalculator()
    {
        cout << "Enhanced Simple Calculator!" <<endl;
    }
    void calc()
    {
        double total;
        string num []= {"Enter First  ","Enter Second "};
        for(int i=0; i<1; i++)
        {
            cout <<num[0]<<"number: ";
            cin >>n1;
            cout <<num[1]<<"number: ";
            cin >> n2;
        }
        cout<< "[Addition['+'] || Subtraction ['-'] || Multipilcation ['*'] || Division ['*']"<<endl;;
        cout << "Enter an operator : ";
        cin >> op;
        cout << "------------------------------------------"<<endl;
        switch(op)
        {
        case '+':
            total =n1 + n2;
            cout << "Sum of two number is: " <<total<<"\n"<<endl;
            break;
        case '/':
            total = n1 / n2;
            cout << "Qoutient of two number is: " <<total<<"\n"<<endl;
            break;
        case '*':
            total =n1 * n2;
            cout << "Product of two number is: " <<total<<"\n"<<endl;
            break;
        case '-':
            total= n1 - n2;
            cout << "Difference of two number is: " <<total<<"\n"<<endl;
            break;

        }
        cout << "-------------------------------------------"<<endl;
        cout << "\n\n*****************************************"<<endl;
        printf("|Entered first number: \'%d\'              |\n",n1);
        printf("|Entered Second number: \'%d\'             |\n",n2);
        printf("|Operator used \'%c\'                      |",op);
        cout << "\n*****************************************"<<endl;
    }
    getch();
};


void sleep(float seconds)
{
    clock_t startClock = clock();
    float secondsAhead = seconds * CLOCKS_PER_SEC;
    // do nothing until the elapsed time has passed.
    while(clock() < startClock+secondsAhead);
    return;
}
int main()
{
    string ans;
    SimpleCalculator sc1;
    sleep(2.0);
    cout << "Type \" Yes\" to start" << "-> ";
    cin >>ans;
    if(ans == "Yes")
    {
        sc1.calc();
    }
    else
    {
        cout << "Okay Thank you!";
        exit(1);
    }
    return 0;
}

