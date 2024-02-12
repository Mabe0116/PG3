#pragma once

template <typename Type1, typename Type2>
class Comparer {
public:
	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	/// <param name="value1"></param>
	/// <param name="value2"></param>
	Comparer(Type1 value1, Type2 value2) :value1(value1), value2(value2) {};

	/// <summary>
	/// ��r�֐�
	/// </summary>
	/// <returns></returns>
	Type1 Min() {
		if (value1 < value2) {
			return value1;
		}
		return static_cast<Type2>(value2);
	}

private:
	Type1 value1;
	Type2 value2;

};