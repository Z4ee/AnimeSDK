#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ICppStructOps; }

#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FINSTANCEDSTRUCTCONTAINER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E393AD0)
#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FINSTANCEDSTRUCTCONTAINER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E393B10)
#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FINSTANCEDSTRUCTCONTAINER___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x1E393B20)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_FInstancedStructContainer___c_TypeDefinitionIndex = 28399;

	class RegistrationInfo_ScriptStruct_FInstancedStructContainer___c : public ::System::Object
	{
	public:
		static ::UnrealTypes::RegistrationInfo_ScriptStruct_FInstancedStructContainer___c** StaticGet___9()
		{
			return (::UnrealTypes::RegistrationInfo_ScriptStruct_FInstancedStructContainer___c**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FInstancedStructContainer___c_TypeDefinitionIndex)->GetStaticField(0x24190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FINSTANCEDSTRUCTCONTAINER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FINSTANCEDSTRUCTCONTAINER___C__CTOR_OFFSET))(this);
		}

		::UnrealTypes::ICppStructOps* __cctor_b__2_0()
		{
			return ((::UnrealTypes::ICppStructOps*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FINSTANCEDSTRUCTCONTAINER___C___CCTOR_B__2_0_OFFSET))(this);
		}
	};
}
