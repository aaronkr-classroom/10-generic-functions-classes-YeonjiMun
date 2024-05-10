//New median.h
#ifndef GUARD_median_h
#define GUARD_median_h

#include <algorithm>
#include <stdexcept>
#include <vector>

using namespace std;

// vector<double>의 중앙값을 구함.
// 함수를 호출하면 인수로 제공된 백터를 통째로 복사
template<class T>
T median(vector<T> v) {
	typedef typename vector<T>::size_type vec_sz;
	vec_sz size = v.size();

	// 과제 점수의 입력 유무를 확인
	if (size == 0)
		throw domain_error("median of empty vector!");

	// 점수를 정렬
	sort(v.begin(), v.end()); //<algorithm> 필요
	vec_sz mid = size / 2;

	// 과제 점수의 중앙값을 구함
	return size % 2 == 0 ?
		(vec[mid] + vec[mid - 1]) / 2 :
		vec[mid];
}

#endif