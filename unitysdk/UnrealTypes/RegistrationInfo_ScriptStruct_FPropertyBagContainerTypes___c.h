#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FPROPERTYBAGCONTAINERTYPES___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E393D00)
#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FPROPERTYBAGCONTAINERTYPES___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E393D40)
#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FPROPERTYBAGCONTAINERTYPES___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x1E393D50)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_FPropertyBagContainerTypes___c_TypeDefinitionIndex = 28419;

	class RegistrationInfo_ScriptStruct_FPropertyBagContainerTypes___c : public ::System::Object
	{
	public:
		static ::UnrealTypes::RegistrationInfo_ScriptStruct_FPropertyBagContainerTypes___c** StaticGet___9()
		{
			return (::UnrealTypes::RegistrationInfo_ScriptStruct_FPropertyBagContainerTypes___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FPropertyBagContainerTypes___c_TypeDefinitionIndex)->GetStaticField(0x241A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FPROPERTYBAGCONTAINERTYPES___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FPROPERTYBAGCONTAINERTYPES___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__2_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FPROPERTYBAGCONTAINERTYPES___C___CCTOR_B__2_0_OFFSET))(this);
		}
	};
}
