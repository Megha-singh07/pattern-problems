#include<iostream>
using namespace std;

int main()
{
    int n = 10;
    for(int row=1; row<=n; row++){

        // for printing spaces

        for(int col = 1; col<= n-row ; col++){
            cout<< "  ";
        }

        // for printing stars

        for(int col = 1; col <= row; col++){
            cout<< "* ";
        }
        cout<<endl;
    }
    return 0;
}