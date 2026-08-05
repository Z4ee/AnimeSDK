#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FPROPERTYHANDLE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E3947F0)
#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FPROPERTYHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3946B0)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_FPropertyHandle_TypeDefinitionIndex = 28277;

	class RegistrationInfo_ScriptStruct_FPropertyHandle : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FPropertyHandle_TypeDefinitionIndex)->GetStaticField(0x24060);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FPropertyHandle_TypeDefinitionIndex)->GetStaticField(0x24068);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FPROPERTYHANDLE__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FPROPERTYHANDLE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
