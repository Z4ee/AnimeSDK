#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define XLUA_LUAINDEXES_GET_LUA_REGISTRYINDEX_OFFSET UNITYSDK_OFFSET(0xFF622B0)
#define XLUA_LUAINDEXES_SET_LUA_REGISTRYINDEX_OFFSET UNITYSDK_OFFSET(0xFF69A00)
#define XLUA_LUAINDEXES__CTOR_OFFSET UNITYSDK_OFFSET(0xFF6CC70)

namespace XLua
{
	inline static constexpr unsigned int LuaIndexes_TypeDefinitionIndex = 40531;

	class LuaIndexes : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAINDEXES__CTOR_OFFSET))(this);
		}

		static ::System::Int32 get_LUA_REGISTRYINDEX()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + XLUA_LUAINDEXES_GET_LUA_REGISTRYINDEX_OFFSET))();
		}

		static ::System::Void set_LUA_REGISTRYINDEX(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUAINDEXES_SET_LUA_REGISTRYINDEX_OFFSET))(value);
		}
	};
}
