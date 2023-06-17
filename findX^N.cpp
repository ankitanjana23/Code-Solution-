#include <iostream>
#include <vector>
using namespace std;



    double myPow(double x, int n) {
        /* if x pow zero than print 1 */
        if(x==1 || n == 0){
            return 1;
        }
        long long nn = n;
        if(n<0){ 
            /* this line is most important other wise give error */
            /* T.C O(log base 2 n) S.C O(1) */
            nn = -static_cast<long long int >(n) ;
        }
        double ans = 1.0;
        while(nn){
           if(nn%2){
               ans = ans*x;
               nn= nn-1;
               
           }
           else {
               x = x*x;
               nn = nn/2;
           }
        }
        if(n<0){
            ans =  (double)(1.0)/(double)ans ;
        }
        return ans ;
    }

int main () {
    double x = 2.1000;
    int n = 5 ;
    cout << myPow(x,n) << " " <<endl;
}