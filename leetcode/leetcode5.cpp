class Solution {
public:
    string longestPalindrome(string s) 
    {
        string lps="";
        if(s.length()<=1)
            return s;
        for(int i=1;i<s.length();i++)
        {
            int low=i;
            int high=i;
            while(s.at(low)==s.at(high))
            {
                low--;
                high++;
                if(low == -1 || high == s.length())
                    break;
            }
            string palindrome = s.substr(low+1,high);
            if(palindrome.length()>lps.length())
            {
                lps=palindrome;
            }


            //even


            low=i-1;
            high=i;
            while(s.at(low)==s.at(high))
            {
                low--;
                high++;
                if(low == -1 || high == s.length())
                    break;
            }
            palindrome = s.substr(low+1,high);
            if(palindrome.length()>lps.length())
            {
                lps=palindrome;
            }
    

        }
        return lps;
    }
};