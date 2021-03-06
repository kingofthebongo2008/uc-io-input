#pragma once

#include <cstdint>
#include <windows.h>

#include <uc/util/bits.h>
#include <uc/util/noncopyable.h>

#if defined(_PC)
    #include <uc/io/platforms/pc/native_keyboard.h>
#endif

namespace uc
{
    namespace io
    {
        struct keyboard : public native_keyboard, private util::noncopyable
        {
            using base = native_keyboard;

            keyboard_state update(const keyboard_state& o)
            {
                return base::update(o);
            }
        };
    };
}
