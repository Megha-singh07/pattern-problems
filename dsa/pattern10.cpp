#include <iostream>
using namespace std;

int main()
{
    int n = 15;

    // printing first half of the solid diamond

    for(int row=1; row<=n; row++){

        for(int col=1;col <= n-row; col++){
            cout<<" ";
        }

        for(int col=1; col<=row;col++){
            cout<<"* ";
        }

        cout<<endl;
    }

    // printing second half of the solid diamond 

     for(int row=2; row<=n; row++){


        for(int col=1;col<=row-1; col++){
            cout<<" ";
        }

        for(int col=1; col<=n-row+1; col++){
            cout<<"* ";
        }
        cout<<endl;
        
    }
    return 0;
}