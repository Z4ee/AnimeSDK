#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace XLua { class MethodWrapsCache; }

#define XLUA_METHODWRAPSCACHE___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14B30420)
#define XLUA_METHODWRAPSCACHE___C__DISPLAYCLASS7_0__GETCONSTRUCTORWRAP_B__0_OFFSET UNITYSDK_OFFSET(0x14B32A60)

namespace XLua
{
	inline static constexpr unsigned int MethodWrapsCache___c__DisplayClass7_0_TypeDefinitionIndex = 50549;

	class MethodWrapsCache___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::XLua::MethodWrapsCache* __4__this; // 0x10
		::System::Type* type; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_METHODWRAPSCACHE___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetConstructorWrap_b__0(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_METHODWRAPSCACHE___C__DISPLAYCLASS7_0__GETCONSTRUCTORWRAP_B__0_OFFSET))(this, a1);
		}
	};
}
