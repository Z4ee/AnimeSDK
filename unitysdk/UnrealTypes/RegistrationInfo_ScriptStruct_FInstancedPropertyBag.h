#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }

#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FINSTANCEDPROPERTYBAG_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E393660)
#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FINSTANCEDPROPERTYBAG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3933C0)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_FInstancedPropertyBag_TypeDefinitionIndex = 28423;

	class RegistrationInfo_ScriptStruct_FInstancedPropertyBag : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FInstancedPropertyBag_TypeDefinitionIndex)->GetStaticField(0x23F70);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FInstancedPropertyBag_TypeDefinitionIndex)->GetStaticField(0x23F78);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FInstancedPropertyBag_TypeDefinitionIndex)->GetStaticField(0x23F80);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_value()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FInstancedPropertyBag_TypeDefinitionIndex)->GetStaticField(0x23F88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FINSTANCEDPROPERTYBAG__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FINSTANCEDPROPERTYBAG_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
