int reverse(int x) {
       int y=x,count=0;
       long a=0;
        while(y!=0)
        {
            y=y/10;
            count++;
        }
        while(x!=0)
        {
            a=a+(x%10)*pow(10,count-1);
            x=x/10;
            count--;
        }
        if((a>=2147483647 || a<=-2147483647))
        {
            a=0;
            x=0;
        }
        return a;