#pragma once

#include "RE/Skyrim.h"
#include "SKSE/SKSE.h"

//we are not making nasa sw, so stfu
#pragma warning( disable : 4100 ) 
#pragma warning( disable : 4244 )

using namespace std::literals;

#define PAPYRUSFUNCHANDLE RE::StaticFunctionTag*
#define PAPYRUSUNHOOKFPS true


#define ROUND(x) std::floor(static_cast<float>(x + 0.5f))

#include <spdlog/sinks/basic_file_sink.h>

//1=ON,0=OFF
#define LOGGING 0

#if(LOGGING > 0)
    #define SKSELOG(...) {SKSE::log::info(__VA_ARGS__);}
#else
    #define SKSELOG(...) {}
#endif

#define ERRORLOG(...) {SKSE::log::info(__VA_ARGS__);}