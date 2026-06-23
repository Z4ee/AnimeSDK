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

#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FPROPERTYBAGPROPERTYDESC_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1BAF50)
#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FPROPERTYBAGPROPERTYDESC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1BA770)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_FPropertyBagPropertyDesc_TypeDefinitionIndex = 27817;

	class RegistrationInfo_ScriptStruct_FPropertyBagPropertyDesc : public ::System::Object
	{
	public:
		static ::UnrealTypes::NamePropertyParams** StaticGet_Property_Name()
		{
			return (::UnrealTypes::NamePropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FPropertyBagPropertyDesc_TypeDefinitionIndex)->GetStaticField(0x22890);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FPropertyBagPropertyDesc_TypeDefinitionIndex)->GetStaticField(0x22898);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_ID()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FPropertyBagPropertyDesc_TypeDefinitionIndex)->GetStaticField(0x228A0);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_ContainerTypes()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FPropertyBagPropertyDesc_TypeDefinitionIndex)->GetStaticField(0x228A8);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FPropertyBagPropertyDesc_TypeDefinitionIndex)->GetStaticField(0x228B0);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_ValueType_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FPropertyBagPropertyDesc_TypeDefinitionIndex)->GetStaticField(0x228B8);
		}
		static ::UnrealTypes::ObjectPropertyParams** StaticGet_Property_ValueTypeObject()
		{
			return (::UnrealTypes::ObjectPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FPropertyBagPropertyDesc_TypeDefinitionIndex)->GetStaticField(0x228C0);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FPropertyBagPropertyDesc_TypeDefinitionIndex)->GetStaticField(0x228C8);
		}
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_ValueType()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FPropertyBagPropertyDesc_TypeDefinitionIndex)->GetStaticField(0x228D0);
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
