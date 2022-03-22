#include <boost/stacktrace.hpp>

#include <fmt/core.h>
#include <iostream>

// #define BOOST_STACKTRACE_LINK 1
// #define BOOST_STACKTRACE_USE_BACKTRACE 1

namespace my {
    struct my_struct {
        void bar() {
            auto counter = [i = 0]() mutable {
                return i++;
            };
            auto s = boost::stacktrace::stacktrace();
            for (auto const& f : s) {
                //fmt::print("{} {}: {} {}:{}\n", counter(), f.address(), f.name(), f.source_file(), f.source_line());
            }
            std::cout << s << '\n';
        }
    };
}

void stack_3() {
    auto stack_2 = []{ my::my_struct().bar(); };
    stack_2();
}

void stack_4() {
    stack_3();
}

int main() {
   stack_4();
//    std::cout << boost::stacktrace::stacktrace();
}