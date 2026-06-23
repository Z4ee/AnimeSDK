#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }

#define UNREALTYPES_REGISTRATIONINFO_CLASS_CLASS_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1B9100)
#define UNREALTYPES_REGISTRATIONINFO_CLASS_CLASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1B8FF0)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_Class_Class_TypeDefinitionIndex = 27722;

	class RegistrationInfo_Class_Class : public ::System::Object
	{
	public:
		static ::UnrealTypes::ClassParams** StaticGet_ClassParams()
		{
			return (::UnrealTypes::ClassParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_Class_TypeDefinitionIndex)->GetStaticField(0x22960);
		}
		static ::UnrealTypes::Class** StaticGet_Class()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_Class_TypeDefinitionIndex)->GetStaticField(0x22968);
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
