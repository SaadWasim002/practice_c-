#include "bits/stdc++.h"
#include <cmath>
using namespace std;
int main() {
	int n;
	cin >> n;    //Reading input from STDIN
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
    int b=pow(10,9)+7;
	int f=1;
	for(int i=0;i<n;i++)
	{
		f=(f*a[i])%b;
	}
	cout<<f;
	return 0;
	
}