#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }

#define UNREALTYPES_REGISTRATIONINFO_CLASS_PROPERTYBAG_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1B9440)
#define UNREALTYPES_REGISTRATIONINFO_CLASS_PROPERTYBAG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1B9330)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_Class_PropertyBag_TypeDefinitionIndex = 27825;

	class RegistrationInfo_Class_PropertyBag : public ::System::Object
	{
	public:
		static ::UnrealTypes::Class** StaticGet_Class()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_PropertyBag_TypeDefinitionIndex)->GetStaticField(0x229A0);
		}
		static ::UnrealTypes::ClassParams** StaticGet_ClassParams()
		{
			return (::UnrealTypes::ClassParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_PropertyBag_TypeDefinitionIndex)->GetStaticField(0x229A8);
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
