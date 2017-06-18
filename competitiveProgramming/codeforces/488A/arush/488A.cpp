#include<bits/stdc++.h>
#define lli long long int
#define gc getchar_unlocked
#define INT_MAX1 100000000000
using namespace std;


void scan(lli &x)
{
	register lli c = gc();
	x = 0;
	lli neg = 0;
	for(;((c<48 || c>57) && c != '-');c = gc());
	if(c=='-') {neg=1;c=gc();}
	for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
	if(neg) x=-x;
}

lli numHas8(lli num)
{
    lli digit;
    bool found=false;
    while(num!=0){
        digit=num%10;
        if(digit==8){
            found=true;
            break;
        }
            num=num/10;
    }
    return found;
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    lli num;
    cin>>num;
    cout<<num<<endl;
    if(numHas8(num)){
        cout<<0<<endl;
    }
    else{
        lli count=0,i;
        num++;
        for(i=1;((num%10!=8)&&((num/10)%10!=8));i++){
            num++;
        }
        cout<<i<<endl;
    }
    return 0;
}
