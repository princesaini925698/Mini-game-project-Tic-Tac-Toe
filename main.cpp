#include <iostream>
using namespace std;

char board[3][3];

void initBoard() {
    char ch = '1';
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            board[i][j] = ch++;
        }
    }
}

void displayBoard() {
    cout << "\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << " " << board[i][j];
            if(j<2) cout << " |";
        }
        cout << "\n";
        if(i<2) cout << "---|---|---\n";
    }
    cout << "\n";
}

bool checkWin(char player) {
    for(int i=0;i<3;i++){
        if(board[i][0]==player && board[i][1]==player && board[i][2]==player)
            return true;
        if(board[0][i]==player && board[1][i]==player && board[2][i]==player)
            return true;
    }
    if(board[0][0]==player && board[1][1]==player && board[2][2]==player)
        return true;
    if(board[0][2]==player && board[1][1]==player && board[2][0]==player)
        return true;

    return false;
}

bool isDraw() {
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(board[i][j] != 'X' && board[i][j] != 'O')
                return false;
    return true;
}

void makeMove(int choice, char player) {
    int row = (choice-1)/3;
    int col = (choice-1)%3;

    if(board[row][col] != 'X' && board[row][col] != 'O')
        board[row][col] = player;
    else {
        cout << "Invalid move! Try again.\n";
        makeMove(choice, player);
    }
}

int main() {
    char player = 'X';
    int choice;
    char replay;

    do {
        initBoard();
        player = 'X';

        while(true) {
            displayBoard();
            cout << "Player " << player << ", enter position (1-9): ";
            cin >> choice;

            makeMove(choice, player);

            if(checkWin(player)) {
                displayBoard();
                cout << "Player " << player << " wins!\n";
                break;
            }

            if(isDraw()) {
                displayBoard();
                cout << "It's a draw!\n";
                break;
            }

            player = (player == 'X') ? 'O' : 'X';
        }

        cout << "Play again? (y/n): ";
        cin >> replay;

    } while(replay == 'y' || replay == 'Y');

    return 0;
}
