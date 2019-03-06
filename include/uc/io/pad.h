#pragma once

#include <cstdint>
#include <windows.h>


#include <uc/util/bits.h>
#include <uc/util/noncopyable.h>

#if defined(_PC)
    #include <uc/io/platforms/pc/native_pad.h>
#endif



namespace uc
{
    namespace io
    {
        struct pad : public native_pad, private util::noncopyable
        {
            using base = native_pad;

            pad_state update(const pad_state& o) const
            {
                return base::update(o);
            }
        };
    };
}

