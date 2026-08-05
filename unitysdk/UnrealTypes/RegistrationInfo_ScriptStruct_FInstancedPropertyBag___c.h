#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FINSTANCEDPROPERTYBAG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E393670)
#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FINSTANCEDPROPERTYBAG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3936B0)
#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FINSTANCEDPROPERTYBAG___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1E3936C0)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_FInstancedPropertyBag___c_TypeDefinitionIndex = 28424;

	class RegistrationInfo_ScriptStruct_FInstancedPropertyBag___c : public ::System::Object
	{
	public:
		static ::UnrealTypes::RegistrationInfo_ScriptStruct_FInstancedPropertyBag___c** StaticGet___9()
		{
			return (::UnrealTypes::RegistrationInfo_ScriptStruct_FInstancedPropertyBag___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FInstancedPropertyBag___c_TypeDefinitionIndex)->GetStaticField(0x24170);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FINSTANCEDPROPERTYBAG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FINSTANCEDPROPERTYBAG___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__4_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FINSTANCEDPROPERTYBAG___C___CCTOR_B__4_0_OFFSET))(this);
		}
	};
}
