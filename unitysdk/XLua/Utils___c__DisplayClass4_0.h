#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Reflection { class FieldInfo; }

#define XLUA_UTILS___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1516F460)
#define XLUA_UTILS___C__DISPLAYCLASS4_0__GENFIELDSETTER_B__0_OFFSET UNITYSDK_OFFSET(0x151822C0)
#define XLUA_UTILS___C__DISPLAYCLASS4_0__GENFIELDSETTER_B__1_OFFSET UNITYSDK_OFFSET(0x15182960)

namespace XLua
{
	inline static constexpr unsigned int Utils___c__DisplayClass4_0_TypeDefinitionIndex = 50606;

	class Utils___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Reflection::FieldInfo* field; // 0x10
		::System::Type* type; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _genFieldSetter_b__0(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS4_0__GENFIELDSETTER_B__0_OFFSET))(this, a1);
		}

		::System::Int32 _genFieldSetter_b__1(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS4_0__GENFIELDSETTER_B__1_OFFSET))(this, a1);
		}
	};
}
