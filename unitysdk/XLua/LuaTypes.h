#pragma once
#include "unitysdk/unitysdk.h"

namespace XLua
{
	inline static constexpr unsigned int LuaTypes_TypeDefinitionIndex = 47994;

	enum class LuaTypes : ::System::Int32
	{
		LUA_TNONE = -1,
		LUA_TNIL = 0,
		LUA_TBOOLEAN = 1,
		LUA_TLIGHTUSERDATA = 2,
		LUA_TNUMBER = 3,
		LUA_TVECTOR = 4,
		LUA_TSTRING = 5,
		LUA_TTABLE = 6,
		LUA_TFUNCTION = 7,
		LUA_TUSERDATA = 8,
		LUA_TTHREAD = 9,
		LUA_TPROTO = 10,
		LUA_TUPVAL = 11,
		LUA_TDEADKEY = 12,
		LUA_T_COUNT = 10,
	};
}
