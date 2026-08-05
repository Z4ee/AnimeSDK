#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }

#define UNREALTYPES_REGISTRATIONINFO_CLASS_PROPERTYBAGMISSINGOBJECT_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E392BE0)
#define UNREALTYPES_REGISTRATIONINFO_CLASS_PROPERTYBAGMISSINGOBJECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E392AD0)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_Class_PropertyBagMissingObject_TypeDefinitionIndex = 28428;

	class RegistrationInfo_Class_PropertyBagMissingObject : public ::System::Object
	{
	public:
		static ::UnrealTypes::ClassParams** StaticGet_ClassParams()
		{
			return (::UnrealTypes::ClassParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_PropertyBagMissingObject_TypeDefinitionIndex)->GetStaticField(0x24120);
		}
		static ::UnrealTypes::Class** StaticGet_Class()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_PropertyBagMissingObject_TypeDefinitionIndex)->GetStaticField(0x24128);
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
