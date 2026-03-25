#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define XLUA_UTILS___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10484BD0)
#define XLUA_UTILS___C__DISPLAYCLASS7_0__GENENUMCASTFROM_B__0_OFFSET UNITYSDK_OFFSET(0x10494070)

namespace XLua
{
	inline static constexpr unsigned int Utils___c__DisplayClass7_0_TypeDefinitionIndex = 40553;

	class Utils___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Type* type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _genEnumCastFrom_b__0(::System::IntPtr L)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS7_0__GENENUMCASTFROM_B__0_OFFSET))(this, L);
		}
	};
}
