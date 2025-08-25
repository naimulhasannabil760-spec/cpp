#include<iostream>
using namespace std;
//global structure
struct person
{//naabil
    gi

    int age;
    float salary;
};
int main()
{
    struct person person1,person2,person3;
    person1.age=22;
    person1.salary=12000.65;
    person3.age=30;
    person3.salary=25000.50;
    person3=person2;
    if(person3.age==person2.age && person3.salary==person2.salary)
        cout<<"equal";
    else
        cout<<"not equal";



}
