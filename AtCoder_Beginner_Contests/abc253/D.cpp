    #include<iostream>
    #include<numeric>
    using namespace std;

    int main(){
        long long int n,a,b;
        cin>>n>>a>>b;
        long long int sum=0;
        long long int ab = lcm(a,b);
        sum+=n*(n+1)/2;
        sum-=(n/a)*(n/a*a+a)/2;
        sum-=(n/b)*(n/b*b+b)/2;
        sum+=(n/ab)*(n/ab*ab+ab)/2;
        if(sum<0)sum=0;
        cout<<sum<<endl;
        return 0;
    }