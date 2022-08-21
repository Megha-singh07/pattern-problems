#include <iostream>
using namespace std;

int main(){
    int n=5;
    int col;
    for(int row=1; row<=n; row++){

            for(col=1; col<=row; col++){
                if(row==1|| row==n||col==1||col==row){
                cout<<col<<" ";
                 }
                 else{
                    cout<<"  ";
                 }          
        }
        
        cout<<endl;
    }
    return 0;
}