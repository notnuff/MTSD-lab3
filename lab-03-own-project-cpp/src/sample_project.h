#ifndef SAMPLE_HELLO_WORLD_H
#define SAMPLE_HELLO_WORLD_H

namespace sample {

    struct HelloWorld {
        template<class OS>
        friend OS& operator<<(OS& os, const HelloWorld&) {
            os << "Hello World!";
            return os;
        }
    };

}

#endif // SAMPLE_HELLO_WORLD_H