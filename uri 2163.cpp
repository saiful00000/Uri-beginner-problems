#include<iostream>
using namespace std;
int main()
{
    int rw,colm, flag=0, n=0, m=0, i, j;
    cin>>rw>>colm;
    int arr[rw][colm];

    for(i=0; i<rw; i++)
        for(j=0; j<colm; j++)
            cin>>arr[i][j];

    for(i=1; i<rw-1; i++){
        for(j=1; j<colm; j++){
            if(arr[i][j] == 42)
                if(arr[i-1][j-1] == 7 && arr[i-1][j] == 7 && arr[i-1][j+1] == 7)
                    if(arr[i][j-1] == 7 && arr[i][j+1] == 7)
                        if(arr[i+1][j-1] == 7 && arr[i+1][j] == 7 && arr[i+1][j+1] == 7)
                    {
                        flag = 1;
                        n = i+1;
                        m = j+1;
                    }
        }
    }
    cout<<n<<" "<<m<<endl;

    return 0;
}
