#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }

#define UNREALTYPES_REGISTRATIONINFO_CLASS_SCRIPTSTRUCT_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1B9680)
#define UNREALTYPES_REGISTRATIONINFO_CLASS_SCRIPTSTRUCT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1B9570)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_Class_ScriptStruct_TypeDefinitionIndex = 27723;

	class RegistrationInfo_Class_ScriptStruct : public ::System::Object
	{
	public:
		static ::UnrealTypes::ClassParams** StaticGet_ClassParams()
		{
			return (::UnrealTypes::ClassParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_ScriptStruct_TypeDefinitionIndex)->GetStaticField(0x22990);
		}
		static ::UnrealTypes::Class** StaticGet_Class()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_ScriptStruct_TypeDefinitionIndex)->GetStaticField(0x22998);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_SCRIPTSTRUCT__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_SCRIPTSTRUCT_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
