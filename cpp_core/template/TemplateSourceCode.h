#ifndef CPP_MASTER_TEMPLATESOURCECODE_H
#define CPP_MASTER_TEMPLATESOURCECODE_H

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

#endif //CPP_MASTER_TEMPLATESOURCECODE_H
