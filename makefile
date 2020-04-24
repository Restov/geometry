CFLAGS = -Wall -Werror --std=c++17

USER_DIR_S = build/src

EXECUTABLE = bin/program

TESTS = bin/test

USER_DIR_T = build/test

GTEST_DIR = thirdparty/googletest

GOOGLE_TEST_INCLUDE = thirdparty/googletest/include

CPPFLAGS += -isystem thirdparty/googletest/include

CXXFLAGS += -g -Wall -Wextra -pthread -std=c++17

all: $(EXECUTABLE) $(TESTS)

$(EXECUTABLE): $(USER_DIR_S)/main.o $(USER_DIR_S)/circle.o
	g++ $(CFLAGS) $(USER_DIR_S)/main.o $(USER_DIR_S)/circle.o -o $(EXECUTABLE)

$(USER_DIR_S)/main.o: src/main.cpp
	g++ $(CFLAGS) -c src/main.cpp -o $(USER_DIR_S)/main.o

$(USER_DIR_S)/Verbs.o: src/circle.cpp
	g++ $(CFLAGS) -c src/circle.cpp -o $(USER_DIR_S)/circle.o


$(TESTS): $(USER_DIR_T)/test.o $(USER_DIR_S)/circle.o
	g++ $(CPPFLAGS) $(CXXFLAGS) -L$(GTEST_DIR)/lib -lgtest_main -lpthread $(USER_DIR_T)/test.o $(USER_DIR_S)/circle.o -o $(TESTS)

$(USER_DIR_T)/test.o: test/test.cpp 
	g++ $(CPPFLAGS) $(CXXFLAGS) -I $(GOOGLE_TEST_INCLUDE) -I src -c test/test.cpp -o $@

clean:
	rm -rf $(USER_DIR_S)/*.o
	rm -rf $(USER_DIR_T)/*.o
	rm -rf bin/*