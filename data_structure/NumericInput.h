class NumericInput : public TestInput {
public:
	void add(char c) {
		//对于子类来说 重定义之后 只是数字的字符会添加到里面
		//C++ 判断是否为数字
		if (isdigit(c)) {
			character += c;
		}
	}
};