#include<iostream>
using namespace std;
int main()
{
    float far,cel;

cout<<"Enter temperature in Fahrenheit to convert into Celsius"<<endl;
cin>>far;
cel=5*(far-32)/9;
cout<<far<<" Farenheit = "<<cel<<" Degree Celcius.";

return 1;
}
