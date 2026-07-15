#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace XLua { class LuaMemoryLeakChecker_Data; }

#define XLUA_LUAMEMORYLEAKCHECKER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10BEB940)
#define XLUA_LUAMEMORYLEAKCHECKER___C__DISPLAYCLASS4_0__GETSIZEREPORT_B__0_OFFSET UNITYSDK_OFFSET(0x10BED3B0)

namespace XLua
{
	inline static constexpr unsigned int LuaMemoryLeakChecker___c__DisplayClass4_0_TypeDefinitionIndex = 47851;

	class LuaMemoryLeakChecker___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::XLua::LuaMemoryLeakChecker_Data* data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _getSizeReport_b__0(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER___C__DISPLAYCLASS4_0__GETSIZEREPORT_B__0_OFFSET))(this, a1, a2);
		}
	};
}
