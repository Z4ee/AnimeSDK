#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Reflection { class FieldInfo; }

#define XLUA_UTILS___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11748720)
#define XLUA_UTILS___C__DISPLAYCLASS4_0__GENFIELDSETTER_B__0_OFFSET UNITYSDK_OFFSET(0x117566E0)
#define XLUA_UTILS___C__DISPLAYCLASS4_0__GENFIELDSETTER_B__1_OFFSET UNITYSDK_OFFSET(0x117569F0)

namespace XLua
{
	inline static constexpr unsigned int Utils___c__DisplayClass4_0_TypeDefinitionIndex = 46463;

	class Utils___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Type* type; // 0x10
		::System::Reflection::FieldInfo* field; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _genFieldSetter_b__0(::System::IntPtr L)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS4_0__GENFIELDSETTER_B__0_OFFSET))(this, L);
		}

		::System::Int32 _genFieldSetter_b__1(::System::IntPtr L)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS4_0__GENFIELDSETTER_B__1_OFFSET))(this, L);
		}
	};
}
