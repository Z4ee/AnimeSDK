#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_PROPERTYBAGMISSINGSTRUCT_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1BB3B0)
#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_PROPERTYBAGMISSINGSTRUCT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1BB270)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_PropertyBagMissingStruct_TypeDefinitionIndex = 27822;

	class RegistrationInfo_ScriptStruct_PropertyBagMissingStruct : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_PropertyBagMissingStruct_TypeDefinitionIndex)->GetStaticField(0x22930);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_PropertyBagMissingStruct_TypeDefinitionIndex)->GetStaticField(0x22938);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_PROPERTYBAGMISSINGSTRUCT__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_PROPERTYBAGMISSINGSTRUCT_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
