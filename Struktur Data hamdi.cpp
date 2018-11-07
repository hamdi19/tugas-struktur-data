#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int mat[100][100];
    int m,n;
    cout<<" MEMBUAT MATRIKS "<<endl;
    cout<<" --------------- "<<endl;
    cout<<" Baris Matriks : ";
    cin>>m;
    cout<<" Kolom Matriks : ";
    cin>>n;
    cout<<endl;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<"Matriks ["<<i<<"]["<<j<<"] : ";
            cin>>mat[i][j];
           if ((m==j+i-1) && (n==j+i-1))
            {
                mat[i][j]=0;
            }
        }
    }
    cout<<endl;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout<<setw(5)<<mat[i][j];
        }
        cout<<endl;
    }
    return 0;
}
