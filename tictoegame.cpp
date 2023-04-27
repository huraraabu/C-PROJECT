#include <iostream>
using namespace std;
char matrix[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

int rightDiagnol();
int leftDiagnol();
int horizontal();
int vertical();

void result(int rowSize,int colsize);
int input(int counter);

void maze();
int condition = 0;

void store();
void findIndex(char playerSymbol, char index);
main()
{
    int counterForplayer = 1, hori = 0, vert = 0, leftd = 0, rightd = 0;
    bool flag = true;
    int number;
    while (flag != false)
    {
    backtomain:
        maze();
        hori = horizontal();
        vert = vertical();
        leftd = leftDiagnol();
        rightd = rightDiagnol();
        if (hori > 2)
        {
            
            break;
        }
        // cout<<vert;
        else if (vert > 2)
        {

            break;
        }
        else if (rightd >= 2)
        {
            cout << rightd;
            break;
        }
        else if (leftd >= 2)
        {
            break;
        }

        counterForplayer = input(counterForplayer);
        goto backtomain;
    }
}
int input(int counter)
{

    char colInput, player1Symbol = 'O', player2Symbol = 'X';
    // int row, col;
    char square;
    cout << " PLAYER\t" << counter << endl;
    cout << "ENTER NUMBER" << endl;
    cin >> square;
    // cout << "column" << endl;
    // cin >> colInput;
    // col = colInput - 'A';
    if (counter == 1)
    {

        system("cls");
        findIndex(player1Symbol, square);
        // matrix[row][col] ='O';
        return counter + 1;
    }
    else if (counter == 2)
    {
        system("cls");
        findIndex(player2Symbol, square);
        // matrix[row][col] = 'X';
        return counter - 1;
    }
}
void findIndex(char playerSymbol, char index)
{
    for (int rowcheck = 0; rowcheck < 3; rowcheck++)
    {
        for (int colcheck = 0; colcheck < 3; colcheck++)
        {
            if (matrix[rowcheck][colcheck] == index)
            {
                matrix[rowcheck][colcheck] = playerSymbol;
            }
        }
    }
}
int horizontal()
{

    int count = 0;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 2; col++)
        {

            if (matrix[row][col] == matrix[row][col + 1])
            {
            if(count>1){
                result(row,col);}
                count++;
            }
        }
    }
    return count;
}
void result(int rowSize,int colsize)
{
    if(matrix[rowSize][colsize]=='O')
    {
        cout<<"PLAYER 1 IS WINNNER";
    }
    else if(matrix[rowSize][0]=='X')
    {
        cout<<"PLAYER 2 IS WINNNER";
    }
}
int vertical()
{
    int count = 0;
    for (int col = 0; col < 3; col++)
    {
        for (int row = 0; row < 2; row++)
        {
            if (matrix[row][col] == matrix[row + 1][col])
            {
                count++;
            }
        }
    }

    return count;
}

int rightDiagnol()
{
    int col = 0;
    int count = 0;
    for (int row = 0; row < 2; row++)
    {
        if (matrix[row][col] == matrix[row + 1][col + 1])
        {
            count++;
        }

        col++;
    }
    return count;
}
int leftDiagnol()
{
    int row = 0;
    int count = 0;
    for (int col = 2; col > 0; col--)
    {
        if (matrix[row][col] == matrix[row + 1][col - 1])
        {

            count++;
        }
        row++;
    }
    return count;
}
void maze()
{
    system("cls");
    cout << "TIC TOE GAME" << endl;
    cout << endl;
    char stright = '|', underscore = '-';
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << "\t" << stright << matrix[row][col];
        }
        cout << endl;
        cout << "\t------------------" << endl;
    }
}
