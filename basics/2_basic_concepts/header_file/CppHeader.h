#ifndef CPP_MASTER_CPPHEADER_H
#define CPP_MASTER_CPPHEADER_H

// TODO. 头文件中不允许以下操作
// 命名空间或全局范围内的内置类型定义
// 非内联函数定义
// 非常量变量定义
// 聚合定义
// 未命名的命名空间
// using 指令：它将命名空间引入每个直接或间接包含该标头的 .cpp 文件中的范围

#include <vector> // #include directive
#include <string>

// 头文件声明的完整案例
namespace N {

    class MyClass {
    public:
        virtual void doSomething();
    };

    // 可声明内联的名称空间
    inline namespace P {
        class InlineClass {
            virtual void doOtherThing();
        };
    }

    enum class colors : short { red, blue, purple, azure };

    const double PI = 3.14;  // const and constexpr definitions

    constexpr int MeaningOfLife { 42 };

    constexpr int get_meaning() {
        static_assert(MeaningOfLife == 42, "unexpected!"); // static_assert
        return MeaningOfLife;
    }
    using vstr = std::vector<int>;  // type alias
    extern double d; // extern variable

    #define LOG   // macro definition
    #ifdef LOG   // conditional compilation directive
    void print_to_log();
    #endif

    // regular class definition, but no non-inline function definitions
    class my_class {
        friend class other_class;
    public:
        void do_something();   // definition in my_class.cpp
            inline void put_value(int i) {
            vals.push_back(i);
        } // inline OK
    private:
        vstr vals;
        int i;
    };

    struct RGB {
        short r { 0 };  // member initialization
        short g { 0 };
        short b { 0 };
    };

    template <typename T>  // template definition
    class value_store {
    public:
        value_store<T>() = default;
        void write_value(T val) {
            //... function definition OK in template
        }
    private:
        std::vector<T> vals;
    };

    template <typename T>  // template declaration
    class value_widget;
}

#endif //CPP_MASTER_CPPHEADER_H
