#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace XLua { class MethodWrapsCache___c__DisplayClass7_0; }
namespace XLua::LuaDLL { class lua_CSFunction; }

#define XLUA_METHODWRAPSCACHE___C__DISPLAYCLASS7_1__CTOR_OFFSET UNITYSDK_OFFSET(0xFF709A0)
#define XLUA_METHODWRAPSCACHE___C__DISPLAYCLASS7_1__GETCONSTRUCTORWRAP_B__1_OFFSET UNITYSDK_OFFSET(0xFF72530)

namespace XLua
{
	inline static constexpr unsigned int MethodWrapsCache___c__DisplayClass7_1_TypeDefinitionIndex = 40498;

	class MethodWrapsCache___c__DisplayClass7_1 : public ::System::Object
	{
	public:
		::XLua::MethodWrapsCache___c__DisplayClass7_0* CS___8__locals1; // 0x10
		::XLua::LuaDLL::lua_CSFunction* ctor; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_METHODWRAPSCACHE___C__DISPLAYCLASS7_1__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetConstructorWrap_b__1(::System::IntPtr L)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_METHODWRAPSCACHE___C__DISPLAYCLASS7_1__GETCONSTRUCTORWRAP_B__1_OFFSET))(this, L);
		}
	};
}
