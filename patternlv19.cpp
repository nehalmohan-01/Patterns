/*

A B C 
B C D
C D E

*/

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int row =1;
    while(row<=n){
        int col = 1;
        char start = 'A'+row-1;
        while(col<=n){
            cout<<start<<" ";
            start++;
            col++;
        }
        cout<<endl;
        row++;
    }
}