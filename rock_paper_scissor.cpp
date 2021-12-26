#include <iostream>
#include <time.h>
using namespace std;

class RockPaperScissor
{
public:
    int Game(char you, char comp)
    {
        // char you,comp;
        if (you == comp)
        {
            // cout<<"Game Draw"<<endl;
            return 0;
        }
        if (you == 'r' && comp == 'p')
        {
            // cout<<"You loose"<<endl;
            return -1;
        }
        if (you == 'p' && comp == 'r')
        {
            // cout<<"You Win"<<endl;
            return 1;
        }
        if (you == 'r' && comp == 's')
        {
            // cout<<"You Win"<<endl;
            return 1;
        }
        if (you == 's' && comp == 'r')
        {
            // cout<<"You Loose"<<endl;
            return -1;
        }
        if (you == 'p' && comp == 's')
        {
            // cout<<"You Loose"<<endl;
            return -1;
        }
        if (you == 's' && comp == 'p')
        {
            // cout<<"You Win"<<endl;
            return 1;
        }
        return 1;
    }
};
int main()
{
    char you, comp;
    int num, result;
    RockPaperScissor g;
    srand(time(0));
    num = rand() % 100 + 1;
    if (num < 33)
    {
        comp = 'r';
    }
    else if (num > 33 && num < 66)
    {
        comp = 'p';
    }
    else
    {
        comp = 's';
    }
    cout << "Enter the charecter 'r' for Rock, 'p' for Paper and 's' for Scissor" << endl;
    cin >> you;
    result = g.Game(you, comp);
    cout << "You choose " << you << " and comp choose " << comp<<endl;
    if (result == 0)
    {
        cout << "Game Draw" << endl;
    }
    else if (result == 1)
    {
        cout << "You Win" << endl;
    }
    else
    {
        cout << "You loose" << endl;
    }
    return 0;
}