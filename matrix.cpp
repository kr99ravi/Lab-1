// Ravi Kumar Roll no. - 202115
#include<iostream>
using namespace std;

void getarray (int a[20][20],int p,int q);
int main(){
    int a[20][20],r,c,i,j;
    cout<<"ENTER THE NUMBER OF ROWS AND COLUMNS : "<<endl;
    cin>>r>>c;
    cout<<"ENTER THE ELEMENTS OF MATRIX "<<endl;
    getarray(a,r,c);
    cout<<endl;

    // For display the matrix
    cout<<"DISPLAY THE ENTERED MATRIX"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
void getarray(int a[20][20],int p,int q)
{
    int i,j;
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            cin>>a[i][j];
        }
    }
}
