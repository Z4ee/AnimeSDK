#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class EnumParams; }

#define UNREALTYPES_REGISTRATIONINFO_ENUM_PROPERTYBAGMISSINGENUM_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1B98C0)
#define UNREALTYPES_REGISTRATIONINFO_ENUM_PROPERTYBAGMISSINGENUM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1B97B0)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_Enum_PropertyBagMissingEnum_TypeDefinitionIndex = 27821;

	class RegistrationInfo_Enum_PropertyBagMissingEnum : public ::System::Object
	{
	public:
		static ::UnrealTypes::EnumParams** StaticGet_EnumParams()
		{
			return (::UnrealTypes::EnumParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_PropertyBagMissingEnum_TypeDefinitionIndex)->GetStaticField(0x229C0);
		}
		static ::UnrealTypes::Enum** StaticGet_Enum()
		{
			return (::UnrealTypes::Enum**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_PropertyBagMissingEnum_TypeDefinitionIndex)->GetStaticField(0x229C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_ENUM_PROPERTYBAGMISSINGENUM__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_ENUM_PROPERTYBAGMISSINGENUM_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
