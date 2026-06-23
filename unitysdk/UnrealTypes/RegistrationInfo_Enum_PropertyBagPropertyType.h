#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class EnumParams; }

#define UNREALTYPES_REGISTRATIONINFO_ENUM_PROPERTYBAGPROPERTYTYPE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1B99E0)
#define UNREALTYPES_REGISTRATIONINFO_ENUM_PROPERTYBAGPROPERTYTYPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1B98D0)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_Enum_PropertyBagPropertyType_TypeDefinitionIndex = 27813;

	class RegistrationInfo_Enum_PropertyBagPropertyType : public ::System::Object
	{
	public:
		static ::UnrealTypes::Enum** StaticGet_Enum()
		{
			return (::UnrealTypes::Enum**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_PropertyBagPropertyType_TypeDefinitionIndex)->GetStaticField(0x229D0);
		}
		static ::UnrealTypes::EnumParams** StaticGet_EnumParams()
		{
			return (::UnrealTypes::EnumParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_PropertyBagPropertyType_TypeDefinitionIndex)->GetStaticField(0x229D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_ENUM_PROPERTYBAGPROPERTYTYPE__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_ENUM_PROPERTYBAGPROPERTYTYPE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
