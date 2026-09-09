#ifndef CPP_MASTER_ENUMCOLORS_H
#define CPP_MASTER_ENUMCOLORS_H

// TODO. 枚举声明的两种类型
// 1. unscoped enum -> must have type specified
// enum [identifier] [: type] {enum-list};
enum A : int;

// 2. scoped enum -> must have class or struct
// enum [class|struct] [identifier] [: type] {enum-list};
enum class B;
enum class C : short;

// 3. [type] 枚举器的基础类型, 所有枚举器都具有相同的基础类型, 可能是任何整型
// 4. {enum-list} 枚举器列表, 每个枚举器或变量名必须是唯一的, 但是值可以重复
enum Colors: short { red, blue, purple,azure };

// TODO. 枚举器对应的数值，每个枚举器将被视为常量 ！！
// - 默认枚举器的第一个值分配0，后续值依次累加1
// - 自定义声明设置第一个值，后续值依次累加1
// - 分别在不同位置设置值，则后续依次累加1，允许值重复
enum Suit { Diamonds = 1, Hearts, Clubs, Spades }; // 1 2 3 4
enum Suit2 { Diamonds2 = 5, Hearts2, Clubs2 = 4, Spades2 }; // 5 6 4 5

// TODO. Enumerator 枚举器的可访问性
// - 非限定枚举器在声明enum的整个范围中
// - 在区分范围的枚举中，枚举器名称必须由enum类型名称限定
namespace CardGame_NonScoped {
    enum Suit { Diamonds, Hearts, Clubs, Spades };

    // Enumerator is visible without qualification
    void PlayCard(Suit suit) {
        if (suit == Clubs) {}
    }
}

namespace CardGame_Scoped {
    enum class Suit { Diamonds, Hearts, Clubs, Spades };

    // Enumerator must be qualified by enum type
    void PlayCard(Suit suit) {
        if (suit == Suit::Clubs) {}
    }
}

#endif //CPP_MASTER_ENUMCOLORS_H
