#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FPROPERTYBAGCONTAINERTYPES_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E393CF0)
#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FPROPERTYBAGCONTAINERTYPES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E393BB0)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_FPropertyBagContainerTypes_TypeDefinitionIndex = 28418;

	class RegistrationInfo_ScriptStruct_FPropertyBagContainerTypes : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FPropertyBagContainerTypes_TypeDefinitionIndex)->GetStaticField(0x23FE0);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FPropertyBagContainerTypes_TypeDefinitionIndex)->GetStaticField(0x23FE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FPROPERTYBAGCONTAINERTYPES__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FPROPERTYBAGCONTAINERTYPES_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
