NAME = glfw.so
COMPILATOR = g++
INC	= -I .. -I . -I ../Entity -Iglfw/include -fPIC
GLFW = -framework GLUT -framework Cocoa -framework OpenGL -framework IOKit -framework CoreVideo -shared -undefined dynamic_lookup -force_load ./glfw/src/libglfw3.a


SRC = WindowGlfw.cpp \
	../Entity/Entity.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "✏️ \033[33;5m[OPENGL] Creating extern lib\033[0m"
	@$(COMPILATOR) -fPIC $(OBJ) -shared $(GLFW) -o $(NAME)


%.o: %.cpp
	@$(COMPILATOR) $(INC) -o $@ -c $< $(FLAGS)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY : re fclean clean all