/*

1234554321
1234**4321
123****321
12******21
1********1

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n-row+1){
            cout<<col;
            col++;
        }
        
        //middle stars pattern
        
        int star1 = row-1;
        while(star1){
            cout<<"*";
            star1--;
        }
        int star2 = row - 1;
        while (star2)
        {
            cout << "*";
            star2--;
        }
        
        //print 3rd pattern
        int count = n-row+1;
        while(count){
            cout<<count;
            count--;
        }
        cout<<endl;
        row++;
    }
    
    
}