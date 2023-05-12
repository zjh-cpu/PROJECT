//board基类
#include <vector>

const int board_hight = 12;
const int board_width = 20;
//界面大小

class board{
    public:
    Board() {
        grid = std::vector<std::vector<int>>(board_hight , std::vector<int>(board_width, 0));
    }
    int checkLines() {
    for (int i = 0; i < board_hight; ++i) {
        bool full = true;
        for (int j = 0; j < board_width; ++j) {
            if (grid[i][j] == 0) {
                full = false;
                break;
                //0表示没有方块，1表示有方块
            }
        }
        if (full) return i;
    }
    return -1;
}
//检查界面上是否有填满的行
void removeLine(int line) {
    for (int i = line; i > 0; --i) {
        for (int j = 0; j < board_width; ++j) {
            grid[i][j] = grid[i-1][j];
        }
    }
    for (int j = 0; j < board_width; ++j) {
        grid[0][j] = 0;
    }
}
//删除被填满的行
    bool isValidPosition(const std::vector<std::vector<int>>& block, int x, int y) {
        for (int i = 0; i < block.size(); ++i) {
            for (int j = 0; j < block[0].size(); ++j) {
                if (block[i][j]) {
                    if (x + j < 0 || x + j >= board_width || y + i < 0 || y + i >= board_hight) return false;
                    if (grid[y + i][x + j] != 0) return false;
                }
            }
        }
        return true;
    }
    //检查新方块放置
     private:
        std::vector<std::vector<int>> grid;
    //检查区域内有没有方块
};