#pragma once
#include "unitysdk/unitysdk.h"

namespace XLua
{
	inline static constexpr unsigned int LuaThreadStatus_TypeDefinitionIndex = 47996;

	enum class LuaThreadStatus : ::System::Int32
	{
		LUA_OK = 0,
		LUA_YIELD = 1,
		LUA_ERRRUN = 2,
		LUA_ERRSYNTAX = 3,
		LUA_ERRMEM = 4,
		LUA_ERRERR = 5,
		LUA_BREAK = 6,
	};
}
