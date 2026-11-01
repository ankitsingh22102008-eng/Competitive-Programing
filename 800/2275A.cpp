#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

class solution
{
    public:
        void R_away(int R,int x,int y)
        {
            bool notfound = true;
            int i = -10;
            while(notfound)
            {
                for(int j = -10;j <= 10;j++)
                {
                    if((std::pow(std::pow(x-i,2)+std::pow(y-j,2),0.5))==R)
                    {
                        cout << i << j;
                        notfound = false;
                        break;
                    }
                }
                i++;
            }
        }
};

int main()
{
    int n,R,x,y;
    solution s;
    cin>>n;
    while(n--)
    {
        cin>>R>>x>>y;
        s.R_away(R,x,y);
    }

    return 0;
}