// Prime no.
 #include<iostream>
 using namespace std;
 bool checkprime(int n)
 {
    if(n<=1)
     return false;
     for(int i=2;i<n;i++)
     {
        if(n%i==0)
        return false;
     }
     return true;
 }
 int main(){
    bool prime = checkprime(2);
    if(prime)
        cout<<"5 is a prime number"<<endl;
    else
        cout<<"5 is not a prime number"<<endl;
        return 0;
 }
 