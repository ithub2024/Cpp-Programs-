# include<iostream>
using namespace std;
int main(){
    char str[] = {'A','M','I','T','A','B','H'}; // Array of Char datatype

    cout<<str<<endl;
    cout<<str[0]<<endl;
    cout<<str[1]<<endl;
   

//     cout<<str[7]<<endl;  // This is not possible in int array.Index should always be strickly less than size of array.
//     //this '/0'  which is consider as a special character.


//                        Another Imp Point 
    // char str[] = {'A','M','I','T','\0','B','H'};
    // cout<<str<<endl;
    // cout<<str[8];
}