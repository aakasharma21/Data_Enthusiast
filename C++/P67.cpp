#include"iostream"
#include"cstdlib"
using namespace std;

class Solution 
{
public:
    int romanToInt(string s) 
    {
        for (int i = 0; i < sizeof(s); i++)
        {
            switch (s[i])
            {
            case 'I':
                cout<<+1;
                break;
            case 'V':
                cout<<5;
                break;
            case 'X':
                cout<<10;
                break;
            case 'L':
                cout<<50;
                break;
            case 'C':
                cout<<100;
                break;
            case 'D':
                cout<<500;
                break;
            case 'M':
                cout<<1000;
                break;
                
                default:
                break;
            }



        }

        
    }
};
 
main()
{   
  system("cls"); // for clear screen

  Solution s1;
  string s;
  cout<<"\n enter the roman value: ";
  cin>>s;
  s1.romanToInt(s);

  

  return 0;
}
  