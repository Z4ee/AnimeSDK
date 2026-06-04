#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define XLUA_UTILS___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13447B50)
#define XLUA_UTILS___C__DISPLAYCLASS15_0__REFLECTIONWRAP_B__0_OFFSET UNITYSDK_OFFSET(0x1344DED0)

namespace XLua
{
	inline static constexpr unsigned int Utils___c__DisplayClass15_0_TypeDefinitionIndex = 47049;

	class Utils___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::Type* type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _ReflectionWrap_b__0(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS15_0__REFLECTIONWRAP_B__0_OFFSET))(this, a1);
		}
	};
}
