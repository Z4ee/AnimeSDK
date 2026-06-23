#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FPROPERTYBAGPROPERTYDESC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1BAF60)
#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FPROPERTYBAGPROPERTYDESC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1BAFA0)
#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FPROPERTYBAGPROPERTYDESC___C___CCTOR_B__9_0_OFFSET UNITYSDK_OFFSET(0x1D1BAFB0)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_FPropertyBagPropertyDesc___c_TypeDefinitionIndex = 27818;

	class RegistrationInfo_ScriptStruct_FPropertyBagPropertyDesc___c : public ::System::Object
	{
	public:
		static ::UnrealTypes::RegistrationInfo_ScriptStruct_FPropertyBagPropertyDesc___c** StaticGet___9()
		{
			return (::UnrealTypes::RegistrationInfo_ScriptStruct_FPropertyBagPropertyDesc___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FPropertyBagPropertyDesc___c_TypeDefinitionIndex)->GetStaticField(0x22A40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FPROPERTYBAGPROPERTYDESC___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FPROPERTYBAGPROPERTYDESC___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__9_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FPROPERTYBAGPROPERTYDESC___C___CCTOR_B__9_0_OFFSET))(this);
		}
	};
}
