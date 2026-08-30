#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define XLUA_UTILS___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCDEFBB0)
#define XLUA_UTILS___C__DISPLAYCLASS17_0__REFLECTIONWRAP_B__0_OFFSET UNITYSDK_OFFSET(0xCDF7D20)

namespace XLua
{
	inline static constexpr unsigned int Utils___c__DisplayClass17_0_TypeDefinitionIndex = 50602;

	class Utils___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::Type* type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _ReflectionWrap_b__0(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS17_0__REFLECTIONWRAP_B__0_OFFSET))(this, a1);
		}
	};
}
