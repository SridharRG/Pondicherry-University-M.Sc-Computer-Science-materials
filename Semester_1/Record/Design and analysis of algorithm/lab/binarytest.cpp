#include<iostream>
using namespace std;
class binary
{
	int a[20], low, high, mid, n, x;
	public:
		void get(){
			int i;
			cout<<"number of values";
			cin>>n;
			cout<<"Given value";
			for(i=0;i<n;i++)
			cin>>a[i];
		}
		int binsearch(){
			low = 0;
			high = n;
			cout<<"Enter search number";
			cin>>x;
			while(low<high)
			{
				mid = (low + high)/2;
				if(x>a[mid])
					low = mid +1;
				else if(x<a[mid])
					high = mid -1;
				else 
					return mid;
					
			}
			return 0;
		}
};
main(){
	int i;
	binary bsearch;
	bsearch.get();
	i = bsearch.binsearch();
	if(i>=0)
	cout<<"the no is found at localtion"<<i;
	else
	cout<<"not fount";
}
