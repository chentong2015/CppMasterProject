#ifndef CPP_MASTER_TEMPLATESOURCECODE_H
#define CPP_MASTER_TEMPLATESOURCECODE_H

#include <tuple>
#include <iostream>

// CPP 源代码中的模版函数定义
// _F 和 __f 的标识符由C++de实现所保留
template <class _ForwardIterator, class _Tp, class _Compare>
bool binary_search(_ForwardIterator __first, _ForwardIterator __last, const _Tp& __value, _Compare __comp) {
    return __first != __last && !__comp(__value, *__first);
}

// 使用时，传递lambda表达式给Predicate用于判读
template <class _InputIterator, class _Predicate>
bool any_of(_InputIterator __first, _InputIterator __last, _Predicate __pred) {
    for (; __first != __last; ++__first)
        if (__pred(*__first))
            return true;
    return false;
}

// 声明泛型方法特定的返回值
template <size_t _Ip, class ..._Tp>
inline _LIBCPP_INLINE_VISIBILITY _LIBCPP_CONSTEXPR_SINCE_CXX14
typename tuple_element<_Ip, tuple<_Tp...> >::type&
get(std::tuple<_Tp...>& __t) _NOEXCEPT {
    // 为复杂的泛型返回类型typename定义一个别名
    typedef _LIBCPP_NODEBUG typename tuple_element<_Ip, tuple<_Tp...> >::type type;
    return static_cast<__tuple_leaf<_Ip, type>&>(__t.__base_).get();
}

#endif //CPP_MASTER_TEMPLATESOURCECODE_H
