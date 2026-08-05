#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FGUID_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E3932D0)
#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FGUID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E393190)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_FGuid_TypeDefinitionIndex = 28287;

	class RegistrationInfo_ScriptStruct_FGuid : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FGuid_TypeDefinitionIndex)->GetStaticField(0x23F50);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FGuid_TypeDefinitionIndex)->GetStaticField(0x23F58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FGUID__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FGUID_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
