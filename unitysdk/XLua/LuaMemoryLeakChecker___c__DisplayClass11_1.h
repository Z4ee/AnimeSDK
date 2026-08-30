#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/XLua/LuaMemoryLeakChecker_RefInfo.h"

#define XLUA_LUAMEMORYLEAKCHECKER___C__DISPLAYCLASS11_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14B2D8A0)
#define XLUA_LUAMEMORYLEAKCHECKER___C__DISPLAYCLASS11_1__MEMORYLEAKREPORT_B__6_OFFSET UNITYSDK_OFFSET(0x14B2D8B0)

namespace XLua
{
	inline static constexpr unsigned int LuaMemoryLeakChecker___c__DisplayClass11_1_TypeDefinitionIndex = 50435;

	class LuaMemoryLeakChecker___c__DisplayClass11_1 : public ::System::Object
	{
	public:
		::XLua::LuaMemoryLeakChecker_RefInfo info; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER___C__DISPLAYCLASS11_1__CTOR_OFFSET))(this);
		}

		::XLua::LuaMemoryLeakChecker_RefInfo _MemoryLeakReport_b__6(::XLua::LuaMemoryLeakChecker_RefInfo a1)
		{
			return ((::XLua::LuaMemoryLeakChecker_RefInfo(*)(::PVOID, ::XLua::LuaMemoryLeakChecker_RefInfo))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER___C__DISPLAYCLASS11_1__MEMORYLEAKREPORT_B__6_OFFSET))(this, a1);
		}
	};
}
