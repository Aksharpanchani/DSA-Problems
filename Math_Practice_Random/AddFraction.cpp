void addFraction(int num1, int den1, int num2,int den2)
{
    int num = num1*den2 + num2*den1;
    int den = den1*den2;
    int gcd = __gcd(num,den);
    cout<<num/gcd<<"/"<<den/gcd<<endl;
    
 }