/*Winter has finally come to Chefland, so Chef bought a glove for herself. Chef has a hand with N fingers (for the sake of simplicity, let us consider the thumb a finger too) numbered 1 through N and the glove has N sheaths numbered 1 through N. Exactly one finger has to be inserted into each sheath. You are given the lengths of Chef's fingers, as seen from left to right. You are also given the lengths of the sheaths of the glove, from left to right, as seen from the front.

Chef can wear the glove normally (the front side of the glove matching the front of Chef's hand), or she can flip the glove and then insert her hand in it. In the first case, the first finger will go into the first sheath, the second finger into the second one, and so on. However, when she flips the glove, her first finger will go into the N-th sheath, the second finger into the (N-1)-th and so on — the i-th finger will go into the N+1-i-th sheath for each valid i. Of course, for her to wear the glove comfortably, each finger's length should be less than or equal to the length of the sheath it goes into.

Find out whether Chef can wear the glove by keeping its front side facing her, or if she can wear it by flipping it over and facing its back side. If she can only wear the glove in the former way, output "front"; if she can wear it only in the latter way, output "back". If both front and back orientations can be used, output "both", and if she can't wear it either way, output "none".
*/

#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int c,i,j;
	cin>>c;
	while(c--)
	{
		int ch,ba=0,fr=0;
		int *fing,*ss;
		cin>>ch;
		fing = (int*) malloc(ch*sizeof(int));
		ss = (int*) malloc(ch*sizeof(int));
		for(i=0;i<ch;i++)
			cin>>fing[i];
		for(i=0;i<ch;i++)
			cin>>ss[i];
		for(i=0;i<ch;i++)
			{
				if(fing[i]<=ss[i])	
					fr++;
			}
		for(i=ch,j=0;i>0;i--,j++)
		{
				if(fing[i-1]<=ss[j])
					ba++;
		}
		if(ba==ch && fr==ch)
		cout<<"both"<<endl;
		else if(fr==ch && ba!=ch)
		cout<<"front"<<endl;
		else if(fr!=ch && ba==ch)
		cout<<"back"<<endl;
		else
		cout<<"none"<<endl;
	}			
}#include<bits/stdc++.h>
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
		if(n==h)
		{
			cout<<max<<endl;
		}
		else
		{
			long long int oavg=avg;
			long long int m=100000000;
			while(1)
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
						oavg=avg;
						avg+=m;
						continue;
					}		
					avg=oavg;
					m/=10;
					if(m==10)
						break;
			}
			while(1)
			{	
				long long int i;
				long long int s=0;
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
					cout<<avg<<endl; break;
				}			
			}
		}
	}
	system("pause");
	return(0);
}
