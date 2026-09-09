
class Box {
public:
    // Default constructor
    Box() {}

    // Initialize a Box with equal dimensions (i.e. a cube)
    // with delegating constructor
    Box(int i) :  Box(i, i, i) {}

    // Initialize a Box with custom dimensions
    Box(int width, int length, int height): m_width(width), m_length(length), m_height(height) {}

private:
    int m_width;
    int m_length;
    int m_height;
};