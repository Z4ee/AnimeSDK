#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }

#define UNREALTYPES_REGISTRATIONINFO_CLASS_PROPERTYBAG_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E392AC0)
#define UNREALTYPES_REGISTRATIONINFO_CLASS_PROPERTYBAG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3929B0)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_Class_PropertyBag_TypeDefinitionIndex = 28429;

	class RegistrationInfo_Class_PropertyBag : public ::System::Object
	{
	public:
		static ::UnrealTypes::ClassParams** StaticGet_ClassParams()
		{
			return (::UnrealTypes::ClassParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_PropertyBag_TypeDefinitionIndex)->GetStaticField(0x24110);
		}
		static ::UnrealTypes::Class** StaticGet_Class()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_PropertyBag_TypeDefinitionIndex)->GetStaticField(0x24118);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_PROPERTYBAG__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_PROPERTYBAG_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
