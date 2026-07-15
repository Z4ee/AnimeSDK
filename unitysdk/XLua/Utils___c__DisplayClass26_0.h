#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define XLUA_UTILS___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE973770)
#define XLUA_UTILS___C__DISPLAYCLASS26_0__REGISTERREFLECTIONFUNC_B__0_OFFSET UNITYSDK_OFFSET(0xE978290)

namespace XLua
{
	inline static constexpr unsigned int Utils___c__DisplayClass26_0_TypeDefinitionIndex = 48016;

	class Utils___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::String* name; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _RegisterReflectionFunc_b__0(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS26_0__REGISTERREFLECTIONFUNC_B__0_OFFSET))(this, a1);
		}
	};
}
