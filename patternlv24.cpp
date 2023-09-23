/*
     1
   1 2 1
 1 2 3 2 1
*/



#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    
    // print space (1st triangle)
    int row = 1;
    while(row<=n){
        int space = n-row;
        while(space){
            cout<<" ";
            space--;
        }
        
    // print the 2 ns triangle 
        int col=1;
        while(col<=row){
            cout<<col;
            col++;            
        }
        int start = row - 1;
        while(start){
            cout<<start;
            start--;
        }
        cout<<endl;
        row++;
    }
    
    
}