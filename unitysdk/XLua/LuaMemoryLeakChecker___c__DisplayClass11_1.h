#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/XLua/LuaMemoryLeakChecker_RefInfo.h"

#define XLUA_LUAMEMORYLEAKCHECKER___C__DISPLAYCLASS11_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11238550)
#define XLUA_LUAMEMORYLEAKCHECKER___C__DISPLAYCLASS11_1__MEMORYLEAKREPORT_B__6_OFFSET UNITYSDK_OFFSET(0x11238560)

namespace XLua
{
	inline static constexpr unsigned int LuaMemoryLeakChecker___c__DisplayClass11_1_TypeDefinitionIndex = 46295;

	class LuaMemoryLeakChecker___c__DisplayClass11_1 : public ::System::Object
	{
	public:
		::XLua::LuaMemoryLeakChecker_RefInfo info; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER___C__DISPLAYCLASS11_1__CTOR_OFFSET))(this);
		}

		::XLua::LuaMemoryLeakChecker_RefInfo _MemoryLeakReport_b__6(::XLua::LuaMemoryLeakChecker_RefInfo pinfo)
		{
			return ((::XLua::LuaMemoryLeakChecker_RefInfo(*)(::PVOID, ::XLua::LuaMemoryLeakChecker_RefInfo))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER___C__DISPLAYCLASS11_1__MEMORYLEAKREPORT_B__6_OFFSET))(this, pinfo);
		}
	};
}
