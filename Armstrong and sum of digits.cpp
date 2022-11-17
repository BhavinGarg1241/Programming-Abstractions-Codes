#include <iostream>

using namespace std;

int reverse(int n){
    int rev=0;
    while(n!=0){
        rev = (rev*10)+(n%10);
        n/=10;
    }
    return rev;
}


void sumeven(int n){
    n=reverse(n);
    int sumofodd=0,c=1;
    while(n!=0){
        if(c%2!=0){
            sumofodd+=n%10;
        }
        n/=10;
        c++;
    }
    cout<<"Sum of digits at even places : "<<sumofodd<<endl<<endl;
}
void sumodd(int n){
    n=reverse(n);
    int sumofeven=0,c=1;
    while(n!=0){
        if(c%2==0){
            sumofeven+=n%10;
        }
        n/=10;
        c++;
    }
    cout<<"Sum of digits at odd places : "<<sumofeven<<endl<<endl;
}

int main()
{
    int num,rem,arm=0;
    cout<<"Enter Number : ";
    cin>>num;
    int number=num;
    while(num!=0){
        rem=num%10;
        arm+=rem*rem*rem;
        num/=10;
    }
    if(number==arm){
        sumeven(number);
    }else{
        sumodd(number);
    }

    return 0;
}
