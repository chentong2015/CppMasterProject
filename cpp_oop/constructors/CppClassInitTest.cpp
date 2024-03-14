#include <ctime>

// No constructor
struct TempData {
    int StationId;
    time_t timeSet;
    double current;
    double maxTemp;
    double minTemp;
};

// Has a constructor
struct TempDataWithConstructor {
    int stationId;
    time_t timeSet;
    double current;
    double maxTemp;
    double minTemp;
    TempDataWithConstructor(double minimum, double maximum, double cur, int id, time_t t) :
            stationId{id}, timeSet{t}, current{cur}, maxTemp{maximum}, minTemp{minimum} {}
};

int main() {
    time_t time_to_set;

    // TODO. 没有显式声明构造器，则必须按照成员的声明顺序初始化(in order of declaration)
    TempData td{ 45978, time(&time_to_set), 28.9, 37.0, 16.7 };

    // 无构造器时，使用大括号进行默认值的初始化 {0,0,0,0,0}
    TempData td_emptyInit {};

    // 没有对数据进行必要的初始化 Uninitialized
    TempData td_noInit;

    // TODO. 含有构造器时，根据参数类型顺序完成初始化(in order of ctor parameters)
    TempDataWithConstructor td2{ 16.7, 37.0, 28.9, 45978, time(&time_to_set) };
    return 0;
}