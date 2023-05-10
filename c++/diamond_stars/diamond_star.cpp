#include <iostream>
#include <string>
using namespace std;

void drawStars (int n) {
    char star='*';
    char stars[n][n];
    if(n%2!=0){
        int starsForRow,middlePoint=n/2;
        int columnStartingPoint=middlePoint;
        int columnEndPoint=middlePoint;
        int numberOfstarsOnEachMiddlePointSide=n/4+1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                stars[i][j]=' ';
            }
        }
        stars[0][middlePoint]=star;
        columnStartingPoint--;
        columnEndPoint++;
        for(int i=1;i<n;i++){
            starsForRow=2*i+1;
            for(int j=columnStartingPoint;j<=columnEndPoint;j++){
                stars[i][j]=star;
            }
            if(i>=middlePoint){
                columnStartingPoint++;
                columnEndPoint--;
            }
            else{
                columnStartingPoint--;
                columnEndPoint++;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<stars[i][j];
            }
            cout<<endl;
        }
    }
}

int main(){
    int n;
    cout<<"Enter an odd number: ";
    cin>>n;
    if(n%2==0)
        cout<<"The number is not odd"<<endl;
    else
        drawStars(n);
    return 0;
}