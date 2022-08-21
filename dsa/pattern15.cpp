#include <iostream>
using namespace std;

int main()
{
    int n=5;
    int col;

    for(int row=1;row<=n; row++){

        for(int col=1;col<=n;col++){

            if(row==1){
                cout<<col<<" ";
            }

            else if(col==row){
                cout<<row <<" ";
            }
            else if(col==n){
                cout<< n <<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
        
    }
    return 0;
}