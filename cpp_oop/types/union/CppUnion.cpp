
union RecordType {
    char   ch;
    int    i;
    long   l;
    float  f;
    double d;
    int *int_ptr;
};

union MyUnion {
    int my_int;
    char my_char;
    bool my_bool;
};

int main() {
    RecordType t;
    t.i = 5; // t holds an int
    t.f = 7.25; // t now holds a float

    MyUnion mu1{ 'a' }; // my_int = 97, my_char = 'a', my_bool = true, {myInt = 97, myChar = '\0'}
    MyUnion mu2{ 1 };   // my_int = 1, my_char = 'x1', my_bool = true, {myInt = 1, myChar = '\0'}
    MyUnion mu3{};             // my_int = 0, my_char = '\0', my_bool = false, {myInt = 0, myChar = '\0'}
    MyUnion mu4 = mu3;         // my_int = 0, my_char = '\0', my_bool = false, {myInt = 0, myChar = '\0'}

    // TODO. Union数据类型指定初始化其中一个数据
    // MyUnion mu5{ 1, 'a', true };  // compiler error: C2078: too many initializers
    // MyUnion mu6 = 'a';            // compiler error: C2440: cannot convert from 'char' to 'MyUnion'
    // MyUnion mu7 = 1;              // compiler error: C2440: cannot convert from 'int' to 'MyUnion'
}
