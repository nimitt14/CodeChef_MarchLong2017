/*Chef recently opened a big e-commerce website where her recipes can be bought online. It's Chef's birthday month and so she has decided to organize a big sale in which grand discounts will be provided.

In this sale, suppose a recipe should have a discount of x percent and its original price (before the sale) is p. Statistics says that when people see a discount offered over a product, they are more likely to buy it. Therefore, Chef decides to first increase the price of this recipe by x% (from p) and then offer a discount of x% to people.

Chef has a total of N types of recipes. For each i (1 = i = N), the number of recipes of this type available for sale is quantityi, the unit price (of one recipe of this type, before the x% increase) is pricei and the discount offered on each recipe of this type (the value of x) is discounti.

Please help Chef find the total loss incurred due to this sale, if all the recipes are sold out.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int c,ch,i,p,q,d;
	double dp,np,dqp;
	cin>>c;
	while(c--)
	{
		double fp=0.0;
		cin>>ch;
		for(i=0;i<ch;i++)
		{
			cin>>p>>q>>d;
			np=p+((d/100.0)*p);
			dp=p-(np-((d/100.0)*np));
			dqp=dp*q;
			fp=fp+dqp;
		}cout << setprecision(11) << fp << endl;
	}
	return 0;
}
