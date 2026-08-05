#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class EnumParams; }

#define UNREALTYPES_REGISTRATIONINFO_ENUM_PROPERTYBAGMISSINGENUM_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E392F40)
#define UNREALTYPES_REGISTRATIONINFO_ENUM_PROPERTYBAGMISSINGENUM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E392E30)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_Enum_PropertyBagMissingEnum_TypeDefinitionIndex = 28425;

	class RegistrationInfo_Enum_PropertyBagMissingEnum : public ::System::Object
	{
	public:
		static ::UnrealTypes::Enum** StaticGet_Enum()
		{
			return (::UnrealTypes::Enum**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_PropertyBagMissingEnum_TypeDefinitionIndex)->GetStaticField(0x24130);
		}
		static ::UnrealTypes::EnumParams** StaticGet_EnumParams()
		{
			return (::UnrealTypes::EnumParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_PropertyBagMissingEnum_TypeDefinitionIndex)->GetStaticField(0x24138);
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
