#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }

#define UNREALTYPES_REGISTRATIONINFO_CLASS_OBJECT_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E3929A0)
#define UNREALTYPES_REGISTRATIONINFO_CLASS_OBJECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3928B0)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_Class_Object_TypeDefinitionIndex = 28334;

	class RegistrationInfo_Class_Object : public ::System::Object
	{
	public:
		static ::UnrealTypes::Class** StaticGet_Class()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_Object_TypeDefinitionIndex)->GetStaticField(0x240E0);
		}
		static ::UnrealTypes::ClassParams** StaticGet_ClassParams()
		{
			return (::UnrealTypes::ClassParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_Object_TypeDefinitionIndex)->GetStaticField(0x240E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_OBJECT__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_OBJECT_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
