#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,noX,noO,flag,winX,winO;

    while(1)
    {
        string str;
        cin>>str;
        noX = noO = flag = winX = winO = 0;

        if(str[0]=='e')
            break;

        for(i=0;    i<9;    i++)
        {
            if(str[i] == 'X')
                noX++;
            else if(str[i] == 'O')
                noO++;
        }

        if(str[4] != '.')
        {
            if(str[4] == 'O')
            {
                if((str[0] == 'O' && str[8] == 'O') || (str[1] == 'O' && str[7] == 'O') || (str[2] == 'O' && str[6] == 'O') || (str[3] == 'O' && str[5] == 'O'))
                    winO = 1;
            }
            else
            {
                if((str[0] == 'X' && str[8] == 'X') || (str[1] == 'X' && str[7] == 'X') || (str[2] == 'X' && str[6] == 'X') || (str[3] == 'X' && str[5] == 'X'))
                    winX = 1;
            }
        }

        if(str[1] != '.')
        {
            if(str[0] == 'O')
            {
                if((str[3] == 'O' && str[6] == 'O') || (str[1] == 'O' && str[2] == 'O'))
                    winO =1;
            }

            else
            {
                if((str[3] == 'X' && str[6] == 'X') || (str[1] == 'X' && str[2] == 'X'))
                    winX =1;
            }
        }

        if(str[8] != '.')
        {
            if(str[8] == 'O')
            {
                if((str[5] == 'O' && str[2] == 'O') || (str[7] == 'O' && str[6] == 'O'))
                    winO = 1;
            }
            else
            {
                if((str[5] == 'X' && str[2] == 'X') || (str[7] == 'X' && str[6] == 'X'))
                    winX = 1;
            }
        }

        if(winX == 1 && winO == 1)
            flag = 1;

        else
        {
            if(winX == 1 && winO == 0 && noX != noO + 1)
                flag = 1;

            else if(winX == 0 && winO == 1 && noX != noO)
                flag = 1;

            else if(winX == 0 && winO == 0 && (noX != 5 || noO != 4))
            {
                flag = 1;
            }
        }


        if(flag)
            printf("invalid\n");
        else
            printf("valid\n");

    }
    return 0;
}
