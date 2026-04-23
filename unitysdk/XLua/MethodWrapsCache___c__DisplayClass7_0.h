#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace XLua { class MethodWrapsCache; }

#define XLUA_METHODWRAPSCACHE___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1123A6E0)
#define XLUA_METHODWRAPSCACHE___C__DISPLAYCLASS7_0__GETCONSTRUCTORWRAP_B__0_OFFSET UNITYSDK_OFFSET(0x1123C230)

namespace XLua
{
	inline static constexpr unsigned int MethodWrapsCache___c__DisplayClass7_0_TypeDefinitionIndex = 46410;

	class MethodWrapsCache___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Type* type; // 0x10
		::XLua::MethodWrapsCache* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_METHODWRAPSCACHE___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetConstructorWrap_b__0(::System::IntPtr L)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_METHODWRAPSCACHE___C__DISPLAYCLASS7_0__GETCONSTRUCTORWRAP_B__0_OFFSET))(this, L);
		}
	};
}
