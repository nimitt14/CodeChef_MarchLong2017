/*Minion Chef likes to eat bananas a lot. There are N piles of bananas in front of Chef; for each i (1 = i = N), the i-th pile contains Ai bananas.

Chef's mother wants her to eat the bananas and be healthy. She has gone to the office right now and will come back in H hours. Chef would like to make sure that she can finish eating all bananas by that time.

Suppose Chef has an eating speed of K bananas per hour. Each hour, she will choose some pile of bananas. If this pile contains at least K bananas, then she will eat K bananas from it. Otherwise, she will simply eat the whole pile (and won't eat any more bananas during this hour).

Chef likes to eat slowly, but still wants to finish eating all the bananas on time. Therefore, she would like to choose the minimum K such that she is able to eat all the bananas in H hours. Help Chef find that value of K.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int c;
	cin>>c;
	while(c--)
	{
		
		long long int n,h,i,max=0,s=0;
		//double new_a;
		cin>>n>>h;
		long long int in[n];
		for(i=0;i<n;i++)
		{
			cin>>in[i];	
			s=s+in[i];
			if(in[i]>max)
			max=in[i];		
		}
		long long int avg=s/h;
	if(avg==0)
			avg++;
	while(1)
	{	
		if(n==h)
		{
			cout<<max<<endl;
			break;
		}
		else
		{
			long long int i,s=0;
			for(i=0;i<n;i++)
			{
				double a=in[i]*1.0/avg;
				long long int aa=ceil(a);
				s=s+aa;
			}
			if(s>h)
			{
				avg++;
				continue;
			}
			
			else
			{
				cout<<avg; break;
			}		
		}	
	}
}
	system("pause");
	return(0);
}
