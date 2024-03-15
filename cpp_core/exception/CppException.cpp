// CPP 异常的处理
// throw std::logic_error("Waiting to be implemented");

// noexcept
// C++11：指定某个函数是否可能会引发异常

noexcept(is_nothrow_move_constructible<_T1>::value && is_nothrow_assignable<_T1&, _T2>::value)

// 构造器可以使用noexcept标记
Box(Box&& other) noexcept : m_width(other.m_width), m_height(other.m_height), m_length(other.m_length) {
m_contents = std::move(other.m_contents);
std::cout << "move" << std::endl;
}