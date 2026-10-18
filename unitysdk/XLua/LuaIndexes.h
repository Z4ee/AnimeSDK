#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define XLUA_LUAINDEXES_GET_LUA_REGISTRYINDEX_OFFSET UNITYSDK_OFFSET(0x14DAD1D0)
#define XLUA_LUAINDEXES_SET_LUA_REGISTRYINDEX_OFFSET UNITYSDK_OFFSET(0x14DB3D10)
#define XLUA_LUAINDEXES__CTOR_OFFSET UNITYSDK_OFFSET(0x14DB6860)

namespace XLua
{
	inline static constexpr unsigned int LuaIndexes_TypeDefinitionIndex = 50252;

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

		static ::System::Void set_LUA_REGISTRYINDEX(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUAINDEXES_SET_LUA_REGISTRYINDEX_OFFSET))(a1);
		}
	};
}
