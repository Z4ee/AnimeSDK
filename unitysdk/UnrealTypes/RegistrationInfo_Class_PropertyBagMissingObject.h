#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }

#define UNREALTYPES_REGISTRATIONINFO_CLASS_PROPERTYBAGMISSINGOBJECT_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1ADA5FC0)
#define UNREALTYPES_REGISTRATIONINFO_CLASS_PROPERTYBAGMISSINGOBJECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADA5EC0)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_Class_PropertyBagMissingObject_TypeDefinitionIndex = 25333;

	class RegistrationInfo_Class_PropertyBagMissingObject : public ::System::Object
	{
	public:
		static ::UnrealTypes::ClassParams** StaticGet_ClassParams()
		{
			return (::UnrealTypes::ClassParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_PropertyBagMissingObject_TypeDefinitionIndex)->GetStaticField(0x1ED80);
		}
		static ::UnrealTypes::Class** StaticGet_Class()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_PropertyBagMissingObject_TypeDefinitionIndex)->GetStaticField(0x1ED88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_PROPERTYBAGMISSINGOBJECT__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_PROPERTYBAGMISSINGOBJECT_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
