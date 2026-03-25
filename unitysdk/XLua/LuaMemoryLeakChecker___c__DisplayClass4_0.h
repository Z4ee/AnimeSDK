#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace XLua { class LuaMemoryLeakChecker_Data; }

#define XLUA_LUAMEMORYLEAKCHECKER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xFF6CED0)
#define XLUA_LUAMEMORYLEAKCHECKER___C__DISPLAYCLASS4_0__GETSIZEREPORT_B__0_OFFSET UNITYSDK_OFFSET(0xFF6E8C0)

namespace XLua
{
	inline static constexpr unsigned int LuaMemoryLeakChecker___c__DisplayClass4_0_TypeDefinitionIndex = 40387;

	class LuaMemoryLeakChecker___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::XLua::LuaMemoryLeakChecker_Data* data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _getSizeReport_b__0(::System::IntPtr p, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER___C__DISPLAYCLASS4_0__GETSIZEREPORT_B__0_OFFSET))(this, p, size);
		}
	};
}
