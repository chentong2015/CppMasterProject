#ifndef CPP_MASTER_INLINEMEMBER_H
#define CPP_MASTER_INLINEMEMBER_H

struct widget {
    widget()=default;

    inline widget& operator=(const widget&);
};

// 只要特殊成员函数可内联，便可以在类主体外部默认设置它
inline widget& widget::operator=(const widget&) =default;

#endif //CPP_MASTER_INLINEMEMBER_H
