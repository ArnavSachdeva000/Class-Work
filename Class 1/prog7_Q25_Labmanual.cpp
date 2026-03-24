/* Q25) The school report card system stores subject marks for each student.
Implement a solution to accept marks in 5 subjects, compute the total and percentage, and display the result.*/

#include <iostream>
using namespace std;
int main() {
float x,y,z,a,b,total,percentage;
cout<<"Enter your marks in English: ";
cin>>x;

cout<<"Enter your marks in Science: ";
cin>>y;

cout<<"Enter your marks in Computer science: ";
cin>>z;

cout<<"Enter your marks in Mathematics: ";
cin>>a;

cout<<"Enter your marks in Social Science: ";
cin>>b;

total = a+b+x+y+z;

percentage = (a+b+x+y+z)/5;

cout<<"Total marks in the five subjects are: "<<total;
cout<<"\nPercentage: "<<percentage<<"%";



return 0;
}