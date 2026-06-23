#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class EnumParams; }

#define UNREALTYPES_REGISTRATIONINFO_ENUM_PROPERTYBAGRESULT_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1B9B00)
#define UNREALTYPES_REGISTRATIONINFO_ENUM_PROPERTYBAGRESULT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1B99F0)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_Enum_PropertyBagResult_TypeDefinitionIndex = 27816;

	class RegistrationInfo_Enum_PropertyBagResult : public ::System::Object
	{
	public:
		static ::UnrealTypes::Enum** StaticGet_Enum()
		{
			return (::UnrealTypes::Enum**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_PropertyBagResult_TypeDefinitionIndex)->GetStaticField(0x229E0);
		}
		static ::UnrealTypes::EnumParams** StaticGet_EnumParams()
		{
			return (::UnrealTypes::EnumParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_PropertyBagResult_TypeDefinitionIndex)->GetStaticField(0x229E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_ENUM_PROPERTYBAGRESULT__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_ENUM_PROPERTYBAGRESULT_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
