
#include<iostream>
#include<math.h>

/* Define function here */
#define f(x) 1/x

using namespace std;
int main()
{
 float lower, upper, integration=0.0, h, k;
 int i, subInterval;

 /* Input */
 cout<<"Enter lower limit of integration: ";
 cin>>lower;
 cout<<"Enter upper limit of integration: ";
 cin>>upper;
 cout<<"Enter number of sub intervals: ";
 cin>>subInterval;

 /* Calculation */

 /* Finding step size */
h = (upper - lower)/subInterval;

 /* Finding Integration Value */
 integration = f(lower) + f(upper);

 for(i=1; i<= subInterval-1; i++)
 {
  k = lower + i*h;

  if(i%2==0)
  {
    integration = integration + 2 * (f(k));
  }
  else
  {
    integration = integration + 4 * (f(k));
  }

 }

 integration = integration * h/3;

 cout<< endl <<"Required value of integration is: "<< integration;

 return 0;
}


