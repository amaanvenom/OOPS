Implement a C++ program to find the non-repeating characters in string
#include <iostream>
using namespace std;
//Brute Force Approach - Time : O(n2), Space : O(1)
void printCharacter (string & inputStr){
 cout<<"Non-Repeating Characters : ";
 for (int i = 0; inputStr[i] != '\0'; i++){
 char curChar = inputStr[i];
 bool doPrint = true;
 for (int j = 0; inputStr[j] != '\0'; j++){
 if(curChar == inputStr[j] && i != j) {
 doPrint = false; 
 break;
 }
 }
 if (doPrint == true) cout<<curChar<<" ";
 }
 cout<<endl; 
 return;
}
int main(){
 string inputStr;
 cout<<"\nEnter the string : ";
 getline(cin, inputStr);
 printCharacter(inputStr);
 return 0;
}

optimisation-
#include <iostream>
#include <map>
using namespace std;
//Hashing Approach - Time : O(n), Space : O(n)
void printCharacter (string & inputStr){
 cout<<"Non-Repeating Characters : ";
 map <char, int> hash;
 for (const char & i : inputStr) hash[i]++;
 for (const pair <char, int> & i : hash)
 if (i.second == 1) 
 cout<<i.first<<" ";
 cout<<endl;
}
int main(){
 string inputStr;
 cout<<"\nEnter the string : ";
 getline(cin, inputStr);
 printCharacter(inputStr);
 return 0;
}

