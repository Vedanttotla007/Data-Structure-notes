#include<iostream>
using namespace std;

bool isPalindrome(int x) {
           
            int num = x;
            int rev = 0;
            if(num < 0)
               return false;
            while(num)
            {
               rev = rev*10 + num%10;
               num = num/10;
            }
            return x == rev;
    }

int main()
{
    int x = 121;
    cout<<isPalindrome(x);
}