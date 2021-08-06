#pragma once
#include <iostream>
#include <algorithm>

namespace {
    template<typename Function>
    void loop(int n, const Function& f)
    {
        for (int i = 0; i < n; ++i) {
            f(i);
        }
    }

    template<typename Function>
    void repeat(int n, const Function& f)
    {
        while (n--) {
            f();
        }
    }

    template<typename T>
    T clamp(T value, T minimum, T maximum)
    {
        return std::min(maximum, std::max(minimum, value));
    }

    namespace container {
        template<typename C, typename T=typename C::value_type>
        void print_contents(C const &container, const char* delimiter=" ")
        /*
         * All standard containers have a member type named value_type
         * which is the type of the thing inside the collection.
         */
        {
            std::copy(container.begin(), container.end(), std::ostream_iterator<T>(std::cout, delimiter));
        }
    }
}
