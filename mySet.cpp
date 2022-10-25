#include "mySet.h"
// set intersec
template <class InputIterator1, class InputIterator2, class OutputIterator>
OutputIterator set_intersection(InputIterator1 first1, InputIterator1 last1,
    InputIterator2 first2, InputIterator2 last2,
    OutputIterator result)
{
    while (first1 != last1 && first2 != last2)
    {
        if (*first1 < *first2) ++first1;
        else if (*first2 < *first1) ++first2;
        else {
            *result = *first1;
            ++result; ++first1; ++first2;
        }
    }
    return result;
}

// set diff
template<class InputIt1, class InputIt2, class OutputIt>
OutputIt set_difference(InputIt1 first1, InputIt1 last1,
    InputIt2 first2, InputIt2 last2,
    OutputIt d_first)
{
    while (first1 != last1) {
        if (first2 == last2) return std::copy(first1, last1, d_first);

        if (*first1 < *first2) {
            *d_first++ = *first1++;
        }
        else {
            if (*first2 < *first1) {
                *d_first++ = *first2;
            }
            else {
                ++first1;
            }
            ++first2;
        }
    }
    return std::copy(first2, last2, d_first);
}

//set comb

template<class InputIt1, class InputIt2, class OutputIt>
OutputIt set_comb(InputIt1 first1, InputIt1 last1,
    InputIt2 first2, InputIt2 last2,
    OutputIt d_first)
{
    for (; first1 != last1; ++d_first) {
        if (first2 == last2)
            return std::copy(first1, last1, d_first);
        if (*first2 < *first1) {
            *d_first = *first2++;
        }
        else {
            *d_first = *first1;
            if (!(*first1 < *first2))
                ++first2;
            ++first1;
        }
    }
    return std::copy(first2, last2, d_first);
}