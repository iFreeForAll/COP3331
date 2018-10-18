#include <iostream>
#include <string>
using namespace std;

/*
   This program replays the moves in a chess match.
   The user will first enter the number of moves, then they will type in moves of the form: 
   [a][#]-[a][#] 
   where [a] can be any letter a-h (representing a column on the board),
   [#] can be 1-8 (representing a row on the board),
   and the move takes the piece at the first position and moves it to the second.
*/



enum piece_t {EMPTY, PAWN, ROOK, KNIGHT, BISHOP, QUEEN, KING};
enum side_t {WHITE, BLACK};

struct chess_t {
   piece_t piece;
   side_t side;
};

int main()
{
   const int ROWS = 8;
   const int COLS = 8;
   
   int numOfMoves;
   
   //array of type chess_t
   chess_t board[ROWS * COLS];

   //Setting up the board
   //First setting up the color of pieces
   for(int i = 0; i < 2; i++) {                 //first two rows, 0-1
      for(int j = 0; j < COLS; j++) {           //cols 0-7, 8 in total
         board[i * 8 + j].side = WHITE;
      }
   }
   for(int i = 0; i < 2; i++) {                 //last two rows, 6-7; 48-55, and 56-63
      for(int j = 0; j < COLS; j++) {
         board[i * 8 + j + 48].side = BLACK;   
      }
   }
   //setting up empty spaces
   for(int i = 2; i < 6; i++) {                 //rows 2-5 are empty pieces
      for(int j = 0; j < COLS; j++) {
         board[i * 8 + j].piece = EMPTY;   
      }
   }
   //setting up pieces, pawns for row 1
   for(int i = 1; i < 2; i++) {
      for(int j = 0; j < COLS; j++) {
         board[i * 8 + j].piece = PAWN; 
      }   
   }
   //pawns for row 6
   for(int i = 0; i < 1; i++) {
      for(int j = 0; j < COLS; j++) {
         board[i * 8 + j + 48].piece = PAWN;  
      }   
   }
   //setting other pieces
   board[0].piece = ROOK;
   board[1].piece = KNIGHT;
   board[2].piece = BISHOP;
   board[3].piece = QUEEN;
   board[4].piece = KING;
   board[5].piece = BISHOP;
   board[6].piece = KNIGHT;
   board[7].piece = ROOK;
   board[56].piece = ROOK;
   board[57].piece = KNIGHT;
   board[58].piece = BISHOP;
   board[59].piece = QUEEN;
   board[60].piece = KING;
   board[61].piece = BISHOP;
   board[62].piece = KNIGHT;
   board[63].piece = ROOK;
   
   //Get # of moves
   cin >> numOfMoves;
   
   //Read in and perform moves
   for(int i = 0; i < numOfMoves; i++) {
      string move;
      cin >> move;
      int start = move[0] - 'a' + (move[1] - '1') * ROWS;
      int end = move[3] - 'a' + (move[4] - '1') * ROWS;
      board[end] = board[start];
      board[start].piece = EMPTY;
   }
   
   //Print out the board
   for(int i = 0; i < ROWS * COLS; i++) {
      char c = '.';
      switch (board[i].piece)
      {
      case PAWN:
         c = 'P';
         break;
      case ROOK:
         c = 'R';
         break;
      case KNIGHT:
         c = 'N';
         break;
      case BISHOP:
         c = 'B';
         break;
      case QUEEN:
         c = 'Q';
         break;
      case KING:
         c = 'K';
         break;
      case EMPTY:
         default:
         break;
      }
      
      if(board[i].side == BLACK && c != '.') {
         c += 0x20;                                   //if you add 32 (0x20) to the ASCII code for an uppercase letter, you can get the ASCII code for the lowercase version of that letter
      }
      
      cout << c;
      if(i == 7 || i == 15 || i == 23 || i == 31 || i == 39 || i == 47 || i == 55 || i == 63) {
         cout << endl;   
      }
   }
   
   return 0;
}