CXX = g++
CXXFLAGS = -std=c++17 -Wall -O2

TARGET = k

SRC = main.cpp \
      RubiksCube.cpp \
      RubiksCube3dArray.cpp \
      RubiksCube1dArray.cpp \
      DataBases/math.cpp \
      DataBases/NibbleArray.cpp

OBJ = $(SRC:.cpp=.o)

all: $(TARGET)
	./k

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
