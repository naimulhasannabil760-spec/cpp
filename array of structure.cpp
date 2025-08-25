#include<iostream>
using namespace std;
//global structure
struct person
{
    int age;
    int salary;
};
int main()
{
    person people[4];
    people[0].age=10;
    people[0].salary=1000;
    people[1].age=20;
    people[1].salary=2000;
    people[2].age=30;
    people[2].salary=3000;
    people[3].age=40;
    people[3].salary=4000;




for (int i=0;i<4;i++)
{
    cout<<"people"<< i+1 << "age" << people[i].age<<endl;
     cout<<"person"<< i+1 << "salary" << people[i].salary<<endl;

}
}
