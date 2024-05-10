//New median.h
#ifndef GUARD_median_h
#define GUARD_median_h

#include <algorithm>
#include <stdexcept>
#include <vector>

using namespace std;

// vector<double>�� �߾Ӱ��� ����.
// �Լ��� ȣ���ϸ� �μ��� ������ ���͸� ��°�� ����
template<class T>
T median(vector<T> v) {
	typedef typename vector<T>::size_type vec_sz;
	vec_sz size = v.size();

	// ���� ������ �Է� ������ Ȯ��
	if (size == 0)
		throw domain_error("median of empty vector!");

	// ������ ����
	sort(v.begin(), v.end()); //<algorithm> �ʿ�
	vec_sz mid = size / 2;

	// ���� ������ �߾Ӱ��� ����
	return size % 2 == 0 ?
		(vec[mid] + vec[mid - 1]) / 2 :
		vec[mid];
}

#endif