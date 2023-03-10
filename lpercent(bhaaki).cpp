/*#include<bits/stdc++.h>
using namespace std;
int main()
{    
    string name1,name2,s;
    cin>>name1;
    cin>>name2;
    int size;
    s=name1;
    unordered_map<char,int> m;
    unordered_map<char,int>::iterator itr;
    for(int i=0;i<s.length();i++)
    {
        m[s[i]]++;
    }
    for(int itr=m.begin();itr!=m.end();i++)
    {
        cout<<itr->first<<" - "<<itr->second<<endl;
    }

}
*/
// C++ program for the above approach
#include <iostream>
#include <unordered_map>
void frequency_of_characters(std::string s)
{
    std::unordered_map <char , int> hash; 
    std::cout<<"Test string - "<<s<<"\n";  
    for(int i=0;i<s.length();i++)
    {         
        hash[s[i]]++;
    }
    for(int i=0;i<s.length();i++)
    {        
        if(hash[s[i]])
        {               
            std::cout<<"Frequncy of "<<s[i]<<" is "<<hash[s[i]]<<"\n";
            hash[s[i]]=0;
        }
    }
}
int main() 
{
    std::string name1,name2,both;
    std::cin>>name1;
    std::cin>>name2;
    both=name1+name2;
    frequency_of_characters(both);
    return 0;
}