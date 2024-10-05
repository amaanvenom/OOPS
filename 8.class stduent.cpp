8. Anna is a contender for valedictorian of her high school. She wants to know how many students (if any) have scored higher than her in the exams given during this semester. Create a class named Student with the following specifications:
#include <iostream>
using namespace std;
class Student {
 private:
 int scores [5];
 public:
 void input() {
for (int i = 0; i < 5; ++i) 
 cin >> scores[i];
 }
 int calculateTotalScore() {
 int totalScore = 0;
 for (int i = 0; i < 5; ++i)
 totalScore += scores[i];
 return totalScore;
 }
};
int main() {
 int n;
 cout<<"\nEnter number of students : "; 
 cin >> n;
 Student students[n];
 cout<<"\nEnter Marks in different Subjects : "<<endl<<endl;
 for (int i = 0; i < n; ++i){
 cout<<"Student "<<i + 1<<" : ";
 students[i].input();
 }
 int annaTotalScore = students[0].calculateTotalScore();
 int countHigher = 0;
 for (int i = 1; i < n; ++i){
 if (students[i].calculateTotalScore() > annaTotalScore) { 
countHigher++; }
 }
 cout<<"\nNumber of students having better grades than Anna : 
"<<countHigher << endl;
 return 0;
}
