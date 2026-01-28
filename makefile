DEPS= test
compile: main.cpp
	 g++ main.cpp -o $(DEPS)

run: $(DEPS)
	 ./$(DEPS)  $(var)

run1: $(DEPS)
	./$(DEPS)  3 432 1 3 4 32 3

clean: $(DEPS)
	 rm $(DEPS)
