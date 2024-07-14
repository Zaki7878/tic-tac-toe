#include <iostream>
using namespace std;

char choice[3][3] = {{'1', '2', '3'},
                     {'4', '5', '6'},
                     {'7', '8', '9'}};
char yourChoice ;
char  yourTurn = 'X';
int row, column;

void dispaly_Board()
{
    system("cls");
    cout << "\n\n\t\t\tT I C   T A C   T O E" << endl;
    cout << "\n\tPlayer : 1[X]\n\tPlayer : 2[O]" << endl;
    cout << "\t\t     "
         << "|"
         << "     "
         << "|"
         << "     " << endl;
    cout << "\t\t   " << choice[0][0] << " |\t" << choice[0][1] << "  |  " << choice[0][2] << endl;
    cout << "\t\t_____"
         << "|"
         << "_____"
         << "|"
         << "_____" << endl;
    cout << "\t\t     "
         << "|"
         << "     "
         << "|"
         << "     " << endl;
    cout << "\t\t   " << choice[1][0] << " |\t" << choice[1][1] << "  |  " << choice[1][2] << endl;
    cout << "\t\t_____"
         << "|"
         << "_____"
         << "|"
         << "_____" << endl;
    cout << "\t\t     "
         << "|"
         << "     "
         << "|"
         << "     " << endl;
    cout << "\t\t   " << choice[2][0] << " |\t" << choice[2][1] << "  |  " << choice[2][2] << endl;
    cout << "\t\t     "
         << "|"
         << "     "
         << "|"
         << "     " << endl;

    cout << "palayer :" << yourTurn << endl;
    cin >> yourChoice;
    cin.ignore();
}
void updation()
{
     
    switch (yourChoice)
    {
    case '1':
        row = 0;
        column = 0;
        break;
    case '2':
        row = 0;
        column = 1;
        break;
    case '3':
        row = 0;
        column = 2;
        break;
    case '4':
        row = 1;
        column = 0;
        break;
    case '5':
        row = 1;
        column = 1;
        break;
    case '6':
        row = 1;
        column = 2;
        break;
    case '7':
        row = 2;
        column = 0;
        break;
    case '8':
        row = 2;
        column = 1;
        break;
    case '9':
        row = 2;
        column = 2;
        break;

    default:  "invalid move";
        break;
    }
    if(yourTurn== 'X'){
    choice[row][column] = 'X';
    yourTurn = 'O';
    }
    else if(yourTurn== 'O'){
    choice[row][column] = 'O';
    yourTurn = 'X';
    }

}

int main()
{
    int i = 0;
    while (i<4)
    {
         dispaly_Board();
    updation();
    dispaly_Board();
    i++;
    }
    
  

    return 0;
}