#include<bits/stdc++.h>
using namespace std;

int interPolationSearch(int a[] , int l , int h , int x)
{
	int pos;
	if(l <= h && a[l] <= x && x <= a[h])
	{
		pos = l + (((double)(x - l)/(a[h] - a[l]))*(h - l));
		if(a[pos] == x)
		   return pos;
		if(a[pos] < x)
		   return interPolationSearch(a,pos+1,h,x);
		else
		   return interPolationSearch(a,l,pos-1,x);
		
	}
	else
	  return -1;
}

int main()
{
	int a[] = {8,11,23,51,78,92,17,36};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<"Element index : "<<interPolationSearch(a,0,7,17);
}