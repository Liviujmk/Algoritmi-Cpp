#include <iostream>

using namespace std;

// toti algoritmii vor fi descrisi fiecare in functii individuale

void eliminareCifrePareSauImpare(int n) {
	//acest algoritm este doar pentru cele pare. La fel se face si cu cele impare
	
    int p=1,m=0;
    while(n>0){
        if(n%2!=0){
            m=(n%10)*p+m;
            p*=10;
        }
        n/=10;
    }
    
    if(p==1)
        cout<<"Doar nr pare";
    else
        cout<<"Prin eliminarea cifrelor pare ale lui n se obtine numarul: "<<m<<endl;
}



int main()
{
    eliminareCifrePareSauImpare(2345);
	cout<<endl;
    return 0;
}
