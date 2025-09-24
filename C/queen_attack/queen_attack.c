#include "queen_attack.h"

attack_status_t can_attack(position_t queen_1, position_t queen_2) {
    int off_board = queen_1.row > 7 || queen_1.column > 7 || queen_2.row > 7 || queen_2.column > 7;
    int on_square = queen_1.row == queen_2.row && queen_1.column == queen_2.column;
    
    if (off_board || on_square)
        return INVALID_POSITION;

    int on_row = queen_1.row == queen_2.row;
    int on_column = queen_1.column == queen_2.column;
    int on_diagonal1 = queen_1.row - queen_2.row == queen_1.column - queen_2.column;
    int on_diagonal2 = queen_1.row - queen_2.row == queen_2.column - queen_1.column;

    return on_row || on_column || on_diagonal1 || on_diagonal2;
}
