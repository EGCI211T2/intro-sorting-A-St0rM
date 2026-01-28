DEPS= test
compile: main.cpp
	 g++ main.cpp -o $(DEPS)

run: $(DEPS)
	 ./$(DEPS)  $(var)

run1: $(DEPS)
	./$(DEPS)  8 5 3 9 1

clean: $(DEPS)
	 rm $(DEPS)
