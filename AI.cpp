class TicTacToe:
    def __init__(self):
        self.board = [' ' for _ in range(9)]
        self.current_player = 'X'

    def print_board(self):
        for i in range(0, 9, 3):
            print(f"{self.board[i]} | {self.board[i+1]} | {self.board[i+2]}")
            if i < 6:
                print("-" * 9)

    def is_board_full(self):
        return ' ' not in self.board

    def is_winner(self, player):
        win_combinations = [
            [0, 1, 2], [3, 4, 5], [6, 7, 8],  # Rows
            [0, 3, 6], [1, 4, 7], [2, 5, 8],  # Columns
            [0, 4, 8], [2, 4, 6]             # Diagonals
        ]
        for comb in win_combinations:
            if all(self.board[i] == player for i in comb):
                return True
        return False

    def make_move(self, move, player):
        self.board[move] = player

    def get_available_moves(self):
        return [i for i, cell in enumerate(self.board) if cell == ' ']

    def switch_player(self):
        self.current_player = 'X' if self.current_player == 'O' else 'O'

    def minimax(self, depth, maximizing_player):
        if self.is_winner('X'):
            return -10 + depth
        if self.is_winner('O'):
            return 10 - depth
        if self.is_board_full():
            return 0

        if maximizing_player:
            max_eval = float('-inf')
            for move in self.get_available_moves():
                self.make_move(move, 'O')
                eval = self.minimax(depth + 1, False)
                self.make_move(move, ' ')
                max_eval = max(max_eval, eval)
            return max_eval

        else:
            min_eval = float('inf')
            for move in self.get_available_moves():
                self.make_move(move, 'X')
                eval = self.minimax(depth + 1, True)
                self.make_move(move, ' ')
                min_eval = min(min_eval, eval)
            return min_eval

    def get_best_move(self):
        best_move = -1
        best_eval = float('-inf')
        for move in self.get_available_moves():
            self.make_move(move, 'O')
            eval = self.minimax(0, False)
            self.make_move(move, ' ')
            if eval > best_eval:
                best_eval = eval
                best_move = move
        return best_move


# Usage
if __name__ == "__main__":
    game = TicTacToe()

    while True:
        game.print_board()

        if game.is_winner('X'):
            print("You win!")
            break

        if game.is_winner('O'):
            print("AI wins!")
            break

        if game.is_board_full():
            print("It's a draw!")
            break

        if game.current_player == 'X':
            while True:
                try:
                    move = int(input("Enter your move (0-8): "))
                    if move in game.get_available_moves():
                        break
                    print("Invalid move. Try again.")
                except ValueError:
                    print("Invalid input. Try again.")
            game.make_move(move, 'X')
        else:
            ai_move = game.get_best_move()
            game.make_move(ai_move, 'O')

        game.switch_player()
