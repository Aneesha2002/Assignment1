/* 1. Given a string s consisting of words and spaces, return the length of the last word in the string.
A word is a maximal 
substring consisting of non-space characters only.*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s;
    getline(cin,s); // I am ambitious
    vector<string> s1;
    string temp;
    for(char i:s){
        if(i!=' '){
          temp =temp+i;}
          else{
              if(!temp.empty()){
            s1.push_back(temp);
            temp="";}}
    }
     if (!temp.empty()){
        s1.push_back(temp);
    }
    int vecLen = s1.size();
   // cout<<vecLen<<endl; //3
   
    cout<<"Length of last word is: "<<s1[vecLen-1].length()<<endl; //9
}
