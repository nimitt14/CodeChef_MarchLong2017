/*Chef likes to mix colors a lot. Recently, she was gifted N colors A1, A2, ..., AN by her friend.

Chef wants to make the values of all her colors pairwise distinct, as they will then look stunningly beautiful. In order to achieve that, she can perform the following mixing operation zero or more times:

Choose any two colors. Let's denote their values by x and y.
Mix the color with value x into the color with value y. After the mixing, the value of the first color remains x, but the value of the second color changes to x + y.
Find the minimum number of mixing operations Chef needs to perform to make her colors beautiful.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,count=0;
		cin>>n;
		int in[n];
		for(i=0;i<n;i++)
		{
			cin>>in[i];
		}		
		sort(&in[0],&in[n]);
		
				
					for(i=0;i<n-1;i++)
					{						
							if(in[i]==in[i+1])
							{
								
											count++;
											
								}
							}
						
					
						cout<<count<<endl;
				}
	system("pause");
		return 0;				
			
			
	}
		


