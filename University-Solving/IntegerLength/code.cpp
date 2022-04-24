#include <bits/stdc++.h>
using namespace std;
int countDigit(long n)
{
	int count = 0;
	while (n != 0)
	{
		n = n / 10;
		++count;
	}
	return count;
}
int main(void)
{
	long n;
    cin>>n;
    if(countDigit(n)==11){
        cout<<"Generating OTP"<<endl;
    }
    else
	cout << "Invalid Number"<<endl;
	return 0;
}
