#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define XLUA_UTILS___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1516F260)
#define XLUA_UTILS___C__DISPLAYCLASS2_0__GETALLTYPES_B__0_OFFSET UNITYSDK_OFFSET(0x15181BE0)

namespace XLua
{
	inline static constexpr unsigned int Utils___c__DisplayClass2_0_TypeDefinitionIndex = 50604;

	class Utils___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Func_2<::System::Type*, ::System::Boolean>* __9__0; // 0x10
		::System::Boolean exclude_generic_definition; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAllTypes_b__0(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__DISPLAYCLASS2_0__GETALLTYPES_B__0_OFFSET))(this, a1);
		}
	};
}
