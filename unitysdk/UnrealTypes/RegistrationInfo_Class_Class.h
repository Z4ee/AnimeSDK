#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }

#define UNREALTYPES_REGISTRATIONINFO_CLASS_CLASS_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E392780)
#define UNREALTYPES_REGISTRATIONINFO_CLASS_CLASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E392670)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_Class_Class_TypeDefinitionIndex = 28325;

	class RegistrationInfo_Class_Class : public ::System::Object
	{
	public:
		static ::UnrealTypes::Class** StaticGet_Class()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_Class_TypeDefinitionIndex)->GetStaticField(0x240D0);
		}
		static ::UnrealTypes::ClassParams** StaticGet_ClassParams()
		{
			return (::UnrealTypes::ClassParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_Class_TypeDefinitionIndex)->GetStaticField(0x240D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_CLASS__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_CLASS_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
