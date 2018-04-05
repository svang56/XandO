//Author: Sunny Vang
#include <iostream>

using namespace std;

//GLOBAL CONSTANTS
const int ROWS = 3;
const int COLUMNS = 3;
const char BLANK = ' ';
const char X = 'X';
const char O = 'O';
const int QUIT = -1;

int main()
{
  //3x3 matrix of characters, initially with blank spaces in each position
  char board[ROWS][COLUMNS] = {{BLANK, BLANK, BLANK},
                               {BLANK, BLANK, BLANK},
                               {BLANK, BLANK, BLANK}};

  char turn = X; //Player X always goes first
  int row;
  int column;
  bool playing = true; //Continue playing by default
  char winner = ' ';

  do
  {
    cout<<turn<<"'s turn.\n";
    cout<<"Which column and row (0-2, or -1 for both to quit)?\n";
    cin>>column;
    cin>>row;

    //Make sure the user isn't quitting
    if(column == QUIT && row == QUIT)
    {
      playing = false;
    }
    //Print error if the column and/or row is out of bounds of 0-2
    else if( column < 0 || row < 0 || column > 2 || row > 2 )
    {
      cout<<"Values must be between 0 and 2.\n";
    }
    
    //TODO: Place the piece and swap turns
    //Outline
    //1. When neither of the (above) if nor else if statements are true, then...
    else
    {

        board[row][column] = turn;
       if( turn == 'X')
       {
        turn = 'O';
       }
       else
       {
        turn = 'X';
       }
    
    }
    
    //1-A.  Assign the board location of row and column to the value of turn
    //1-B.  When turn has the value 'X', then...
    //1-B-1.  turn should be assigned the value 'O'
    //1-C.  In any other case, then...
    //1-C-1.  turn should be assigned the value 'X'
    
    cout<<"\nBOARD\n-----\n";
    for(int r = 0; r < 3; r++)
    {
        for(int c = 0; c < 3; c++)
        {cout <<board[r][c]<<" ";
        }
        cout<<endl;
        }
        
    //TODO: Print the current board
    //Outline
    //1. Traverse through each row, calling the current row r
    //1-A. Traverse through each column in row r, calling the current column c
    //1-A-1.  Display the value of the board at location of r and c
    //1-A-2. Display a space
    //1-B. Display an newline to move to the next row of the board

    if( board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X')
    {
        winner = 'X';
        playing = false;
        cout<<"Winner is "<<winner<<endl;
    }
   if( board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X')
    {
        winner = 'X';
        playing = false;
        cout<<"Winner is "<<winner<<endl;
    }
    if( board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X')
    {
        winner = 'X';
        playing = false;
        cout<<"Winner is "<<winner<<endl;
    }
// these are the 3 verticals  X
    if(board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X')
    {
        winner = 'X';
        playing = false;
        cout<<"Winner is "<<winner<<endl;
    }
    if(board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X')
    {
        winner = 'X';
        playing = false;
        cout<<"Winner is "<<winner<<endl;
    }
    if(board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')
    {
        winner = 'X';
        playing = false;
        cout<<"Winner is "<<winner<<endl;
    }
    //horizontal 3 X
    if((board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') || (board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X' ))
    {
        winner = 'X';
        playing = false;
        cout<<"Winner is "<<winner<<endl;
    }
    //diagonals for X

     

     if( board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O')
    {
        winner = 'X';
        playing = false;
        cout<<"Winner is "<<winner<<endl;
    }
   if( board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O')
    {
        winner = 'X';
        playing = false;
        cout<<"Winner is "<<winner<<endl;
    }
    if( board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O')
    {
        winner = 'X';
        playing = false;
        cout<<"Winner is "<<winner<<endl;
    }
// these are the 3 verticals  O

    if(board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O')
    {
        winner = 'X';
        playing = false;
        cout<<"Winner is "<<winner<<endl;
    }
    if(board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O')
    {
        winner = 'X';
        playing = false;
        cout<<"Winner is "<<winner<<endl;
    }
    if(board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O')
    {
        winner = 'X';
        playing = false;
        cout<<"Winner is "<<winner<<endl;
    }
    //horizontal 3 O

     if((board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') || (board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O' ))
    {
        winner = 'X';
        playing = false;
        cout<<"Winner is "<<winner<<endl;
    }  
    //diagonals for O

  }while( playing );
    


  cout<<"Goodbye!\n";

  return 0;
}
