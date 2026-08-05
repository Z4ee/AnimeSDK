#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }

#define UNREALTYPES_REGISTRATIONINFO_CLASS_ENUM_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E3928A0)
#define UNREALTYPES_REGISTRATIONINFO_CLASS_ENUM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E392790)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_Class_Enum_TypeDefinitionIndex = 28323;

	class RegistrationInfo_Class_Enum : public ::System::Object
	{
	public:
		static ::UnrealTypes::Class** StaticGet_Class()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_Enum_TypeDefinitionIndex)->GetStaticField(0x240F0);
		}
		static ::UnrealTypes::ClassParams** StaticGet_ClassParams()
		{
			return (::UnrealTypes::ClassParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_Enum_TypeDefinitionIndex)->GetStaticField(0x240F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_ENUM__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_ENUM_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
