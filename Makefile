# 指定编译器
CXX = g++

# 编译器标志，-Wall 和 -Wextra 开启警告，-g 开启调试信息
CXXFLAGS = -Wall -Wextra -g

# 指定可执行文件名称
EXEC = tetris

# 你的源文件
SRCS = main.cpp Board.cpp Tetrimino.cpp I_Tetrimino.cpp

# 对象文件（由源文件生成）
OBJS = $(SRCS:.cpp=.o)

# 默认目标，编译并链接你的程序
all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# 清理目标，删除生成的文件
clean:
	rm -f $(OBJS) $(EXEC)

# .PHONY 声明的目标不对应于实际的文件
.PHONY: all clean
