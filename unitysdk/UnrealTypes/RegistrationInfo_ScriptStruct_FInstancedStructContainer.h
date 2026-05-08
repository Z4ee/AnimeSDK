#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FINSTANCEDSTRUCTCONTAINER_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1ADA6E90)
#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FINSTANCEDSTRUCTCONTAINER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADA6D50)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_FInstancedStructContainer_TypeDefinitionIndex = 25304;

	class RegistrationInfo_ScriptStruct_FInstancedStructContainer : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FInstancedStructContainer_TypeDefinitionIndex)->GetStaticField(0x1EC30);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FInstancedStructContainer_TypeDefinitionIndex)->GetStaticField(0x1EC38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FINSTANCEDSTRUCTCONTAINER__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FINSTANCEDSTRUCTCONTAINER_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
