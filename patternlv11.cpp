/* 

A
B C
D E F
G H I J

*/


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int i=1;
    char alphabet='a';
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<alphabet<<" ";
            alphabet++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
