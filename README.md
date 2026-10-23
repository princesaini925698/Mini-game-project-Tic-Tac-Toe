# Tic Tac Toe (C++)

## 📌 Description
A simple console-based Tic Tac Toe game built in C++. Two players take turns entering positions on a 3x3 grid, and the game checks for a win, a draw, or invalid moves along the way.

## 🚀 Features
* 3x3 board with numbered positions (1-9) for easy input
* Two-player turn-based gameplay (X and O)
* Win detection (rows, columns, and diagonals)
* Draw detection when the board is full
* Invalid move handling (won't let you overwrite a taken cell)
* Play again option after each game

## 🛠️ Technologies Used
* C++
* Basic Arrays (2D char array for the board)
* Recursion (used for retrying invalid moves)

## ▶️ How to Run
1. Compile: `g++ TicTacToe.cpp -o tictactoe`
2. Run: `./tictactoe`

## 🎮 How to Play
1. The board positions are numbered 1 to 9, left to right, top to bottom.
2. Player X goes first, then players alternate turns.
3. Enter a number to place your mark in that position.
4. First player to line up 3 marks in a row, column, or diagonal wins.
5. If the board fills up with no winner, it's a draw.
6. After the game ends, choose to play again (y/n).

## 📂 Functions Used
* `initBoard()` — resets the board and fills it with position numbers
* `displayBoard()` — prints the current board to the console
* `checkWin()` — checks rows, columns, and diagonals for a winning line
* `isDraw()` — checks if the board is full with no winner
* `makeMove()` — places a player's mark, retries on invalid input

## 👨‍💻 Author
PRINCE SAINI
