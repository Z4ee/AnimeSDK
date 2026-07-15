#pragma once
#include "unitysdk/unitysdk.h"

namespace XLua
{
	inline static constexpr unsigned int LuaGCOptions_TypeDefinitionIndex = 47995;

	enum class LuaGCOptions : ::System::Int32
	{
		LUA_GCSTOP = 0,
		LUA_GCRESTART = 1,
		LUA_GCCOLLECT = 2,
		LUA_GCCOUNT = 3,
		LUA_GCCOUNTB = 4,
		LUA_GCISRUNNING = 5,
		LUA_GCSTEP = 6,
		LUA_GCSETGOAL = 7,
		LUA_GCSETSTEPMUL = 8,
		LUA_GCSETSTEPSIZE = 9,
	};
}
