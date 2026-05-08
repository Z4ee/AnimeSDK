#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_PROPERTYBAGMISSINGSTRUCT_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1ADA7DF0)
#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_PROPERTYBAGMISSINGSTRUCT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADA7CB0)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_PropertyBagMissingStruct_TypeDefinitionIndex = 25331;

	class RegistrationInfo_ScriptStruct_PropertyBagMissingStruct : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_PropertyBagMissingStruct_TypeDefinitionIndex)->GetStaticField(0x1ED00);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_PropertyBagMissingStruct_TypeDefinitionIndex)->GetStaticField(0x1ED08);
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
