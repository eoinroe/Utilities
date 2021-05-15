#pragma once
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
}
