/*===================== begin_copyright_notice ==================================

Copyright (c) 2017 Intel Corporation

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be included
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


======================= end_copyright_notice ==================================*/
#ifndef IGA_BACKEND_ENCODEROPTS
#define IGA_BACKEND_ENCODEROPTS

#include "../api/iga_types_swsb.hpp"

namespace iga
{
    struct EncoderOpts {
        bool autoCompact = false;
        bool explicitCompactMissIsWarning = false;
        bool ignoreNoCompactFormFound = false;
        bool autoDepSet = false;
        // Specify the swsb encoding mode. If not specified, the encoding mode will
        // be derived from platform by SWSB::getEncodeMode
        SWSB_ENCODE_MODE swsbEncodeMode = SWSB_ENCODE_MODE::SWSBInvalidMode;
        // Specify number of sbid that can be used
        uint32_t sbidCount = 16;

        EncoderOpts(
            bool _autoCompact = false,
            bool _explicitCompactMissIsWarning = false
            )
        : autoCompact(_autoCompact),
          explicitCompactMissIsWarning(_explicitCompactMissIsWarning)
        { }
    };
}

#endif // IGA_BACKEND_ENCODEROPTS
