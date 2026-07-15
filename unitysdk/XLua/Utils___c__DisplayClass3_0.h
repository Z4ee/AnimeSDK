#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Reflection { class FieldInfo; }

#define XLUA_UTILS___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE9661E0)
#define XLUA_UTILS___C__DISPLAYCLASS3_0__GENFIELDGETTER_B__0_OFFSET UNITYSDK_OFFSET(0xE978360)
#define XLUA_UTILS___C__DISPLAYCLASS3_0__GENFIELDGETTER_B__1_OFFSET UNITYSDK_OFFSET(0xE978450)

namespace XLua
{
	inline static constexpr unsigned int Utils___c__DisplayClass3_0_TypeDefinitionIndex = 48018;

	class Utils___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Type* type; // 0x10
		::System::Reflection::FieldInfo* field; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _genFieldGetter_b__0(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS3_0__GENFIELDGETTER_B__0_OFFSET))(this, a1);
		}

		::System::Int32 _genFieldGetter_b__1(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS3_0__GENFIELDGETTER_B__1_OFFSET))(this, a1);
		}
	};
}
