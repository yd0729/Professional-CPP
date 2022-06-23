# 3 �� ordering

## ���⣺�������û���⣬`==` ���в����ߡ�

Ӧ���� VS �� C++ 20 ��֧�ֻ������ã�

�� 3 �� ordering ������ `<compare>` �У�ʵ�������Ƕ������˸��ֱȽ������������ C++ 20 �ı�׼û�й涨�Ƚ϶���ľ������ͣ�����[�κ�δʹ�ù��ģ��ܽ���һ���������ʵ�ε��βζ�����](https://en.cppreference.com/w/cpp/utility/compare/partial_ordering)��

����� unused Ӧ����ָ��û���ڱ�ĵط�ʹ�ù���Ҳ����˵Ҫ����һ���µ����͡�

MSVC �� `<compare>` ��ʹ�� `using _Literal_zero = decltype(nullptr);` ����ʾ��һ���͡�`nullptr` [�ܹ����ֿ�ָ�볣�������������㣩�ĺ��壬��ʹ��������������](https://zh.cppreference.com/w/cpp/language/nullptr)���� `decltype(nullptr)` �� [`nullptr` ������](https://zh.cppreference.com/w/cpp/types/nullptr_t)��

## �������

Ŀǰ������ `<compare>` ����� `is_eq(order)` �� `is_neq(order)` �� `is_lt(order)` �� `is_lteq(order)` �Ⱥ���������������⣨ʵ���Ͼ����� order ֱ���� 0 �Ƚϣ������Ƕ��� `partial_ordering::unordered` �����ܾ���Ҫ��ʹ��ǰ�ж� 2 ���������ǲ��� `nan` ����Ҳ����һ����߼���