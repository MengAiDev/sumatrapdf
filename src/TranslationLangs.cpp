/*
 DO NOT EDIT MANUALLY !!!
 Generated with .\doit.bat -trans-regen
*/

#include "base/Base.h"

namespace trans {

using SeqStrings = const char*;

constexpr int kLangsCount = 2;

SeqStrings gLangCodes =
    "en\0"
    "cn\0"
    "\0";

SeqStrings gLangNames =
    "English\0"
    "Chinese Simplified (简体中文)\0"
    "\0";

// from https://msdn.microsoft.com/en-us/library/windows/desktop/dd318693(v=vs.85).aspx
// those definition are not present in 7.0A SDK my VS 2010 uses
#ifndef LANG_CENTRAL_KURDISH
#define LANG_CENTRAL_KURDISH 0x92
#endif

#ifndef SUBLANG_CENTRAL_KURDISH_CENTRAL_KURDISH_IRAQ
#define SUBLANG_CENTRAL_KURDISH_CENTRAL_KURDISH_IRAQ 0x01
#endif

#define _LANGID(lang) MAKELANGID(lang, SUBLANG_NEUTRAL)
const LANGID gLangIds[kLangsCount] = {_LANGID(LANG_ENGLISH),
                                      MAKELANGID(LANG_CHINESE, SUBLANG_CHINESE_SIMPLIFIED)};
#undef _LANGID

bool IsLangRtl(int idx) {
    return false;
}

int gLangsCount = kLangsCount;

const LANGID* GetLangIds() {
    return &gLangIds[0];
}

} // namespace trans
