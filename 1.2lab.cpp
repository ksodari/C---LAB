#include<iostream>
using namespace std;
int main()
{
int n, *num, temp,i,small,big;

cout<<"How many numbers to enter? "<<endl;
cin>>n;
num = new int[n];
for(int i=0;i<n;i++)
        {
    cout<<"Enter the numbers"<<endl;
    cin>>num[i];
   }
small=num[0];
big=num[0];
for(i=1;i<n;i++){
    if(num[i]<small)
        small=num[i];
}

     for(i=1;i<n;i++){
    if(num[i]>big)
        big=num[i];
}

cout<<"  Smallest is"<<small<<" And Largest is"<<big<<endl;

delete []num;
return 1;
}
