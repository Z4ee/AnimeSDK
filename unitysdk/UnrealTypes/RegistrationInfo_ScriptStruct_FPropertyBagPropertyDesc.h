#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class EnumPropertyParams; }
namespace UnrealTypes { class NamePropertyParams; }
namespace UnrealTypes { class ObjectPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }
namespace UnrealTypes { class UInt8PropertyParams; }

#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FPROPERTYBAGPROPERTYDESC_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E3945C0)
#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FPROPERTYBAGPROPERTYDESC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E393DE0)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_FPropertyBagPropertyDesc_TypeDefinitionIndex = 28421;

	class RegistrationInfo_ScriptStruct_FPropertyBagPropertyDesc : public ::System::Object
	{
	public:
		static ::UnrealTypes::NamePropertyParams** StaticGet_Property_Name()
		{
			return (::UnrealTypes::NamePropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FPropertyBagPropertyDesc_TypeDefinitionIndex)->GetStaticField(0x24000);
		}
		static ::UnrealTypes::ObjectPropertyParams** StaticGet_Property_ValueTypeObject()
		{
			return (::UnrealTypes::ObjectPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FPropertyBagPropertyDesc_TypeDefinitionIndex)->GetStaticField(0x24008);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FPropertyBagPropertyDesc_TypeDefinitionIndex)->GetStaticField(0x24010);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_ValueType_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FPropertyBagPropertyDesc_TypeDefinitionIndex)->GetStaticField(0x24018);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_ContainerTypes()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FPropertyBagPropertyDesc_TypeDefinitionIndex)->GetStaticField(0x24020);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_ID()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FPropertyBagPropertyDesc_TypeDefinitionIndex)->GetStaticField(0x24028);
		}
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_ValueType()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FPropertyBagPropertyDesc_TypeDefinitionIndex)->GetStaticField(0x24030);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FPropertyBagPropertyDesc_TypeDefinitionIndex)->GetStaticField(0x24038);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FPropertyBagPropertyDesc_TypeDefinitionIndex)->GetStaticField(0x24040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FPROPERTYBAGPROPERTYDESC__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FPROPERTYBAGPROPERTYDESC_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
