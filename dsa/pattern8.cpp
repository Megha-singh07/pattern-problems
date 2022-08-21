#include <iostream>
using namespace std;

int main()
{
    int n=16;
    // hallow half pyramid
    for(int row=1; row<=n; row++){

        //condition for first and last row
        if(row==1|| row==n){
            for(int col=1; col<=n-row+1; col++){
                cout<<"* ";
            }
        }
        else{
            cout<<"* ";

            // for printing space
            for(int col=1; col<=n-row-1;col++){
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}