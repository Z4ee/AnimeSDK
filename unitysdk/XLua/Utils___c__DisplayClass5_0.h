#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Reflection { class PropertyInfo; }

#define XLUA_UTILS___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCDE5B00)
#define XLUA_UTILS___C__DISPLAYCLASS5_0__GENITEMGETTER_B__1_OFFSET UNITYSDK_OFFSET(0xCDF9760)

namespace XLua
{
	inline static constexpr unsigned int Utils___c__DisplayClass5_0_TypeDefinitionIndex = 50607;

	class Utils___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Type*>* params_type; // 0x10
		::Il2CppArray<::System::Object*>* arg; // 0x18
		::System::Type* type; // 0x20
		::Il2CppArray<::System::Reflection::PropertyInfo*>* props; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _genItemGetter_b__1(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS5_0__GENITEMGETTER_B__1_OFFSET))(this, a1);
		}
	};
}
