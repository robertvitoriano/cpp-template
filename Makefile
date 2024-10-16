CXX = g++
CXXFLAGS = `pkg-config --cflags gtk+-3.0`
LDFLAGS = `pkg-config --libs gtk+-3.0` `pkg-config`
TARGET = Application.out
SOURCES = main.cpp Application.cpp MainWindow.cpp
all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

clean:
	rm -f $(TARGET)
