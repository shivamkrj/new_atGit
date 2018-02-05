
#include<iostream>
using namespace std;
int main()
{
    //1 jan 1920 is thursday
    int y,m,n,i,t=3,j,k,ty=0,d=0,a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    l:
    cout<<"Enter the year :"<<endl;
    cin>>y;
    cout<< "enter month no. :" <<endl;
    cin>>m;

    cout<<endl<<endl<<endl;
    if(y%4==0)
        ty=1;

    if(m==2)
        k=28+ty;
    else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    k=31;
    else
    k=30;

    for(i=1920;i<y;i++)
    {
        if(i%4==0)
            t+=2;
        else
            t++;
    }

    if(y%4==0)
        ty=1;
    d+=t;
    for(i=1;i<m;i++){
        d+=a[i-1];
    }

    if(m>2)
    d+=ty;


    j=d%7;
    j++;

    cout<< "Mo Tu We Th Fr Sa Su"<<endl;


    for(i=1;i<j;i++)
    {
        cout<< "   ";
    }


    for(i=1;i<=k;i++){
        if(i<10)
            cout<<" ";
        cout<<i<< " ";

        if((j+i-1)%7==0)
            cout<< endl;

    }
    cout<<endl<<endl<<endl;
   goto l;
}
