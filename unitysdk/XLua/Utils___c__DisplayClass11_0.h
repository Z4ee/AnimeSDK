#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class PropertyInfo; }

#define XLUA_UTILS___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCDE7C90)
#define XLUA_UTILS___C__DISPLAYCLASS11_0__GETINTEGERUSERDATAPROPERTY_B__0_OFFSET UNITYSDK_OFFSET(0xCDF7AE0)

namespace XLua
{
	inline static constexpr unsigned int Utils___c__DisplayClass11_0_TypeDefinitionIndex = 50599;

	class Utils___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* getter; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetIntegerUserDataProperty_b__0(::System::Reflection::PropertyInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS11_0__GETINTEGERUSERDATAPROPERTY_B__0_OFFSET))(this, a1);
		}
	};
}
