#include <iostream>
using namespace std;

int main()
{
    int n=10;
    // full pyramid

    for(int row = 1; row<=n; row++){

        // spaces
        for(int col=1; col<=n-row; col++){
            cout<<" ";
        }

        // stars

        for(int col=1; col<=row; col++){
            cout<<"* ";
        }

        // after each row
        cout<<endl;
    }
    

    return 0;
    
}