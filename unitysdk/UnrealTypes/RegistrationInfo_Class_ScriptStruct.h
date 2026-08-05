#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }

#define UNREALTYPES_REGISTRATIONINFO_CLASS_SCRIPTSTRUCT_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E392D00)
#define UNREALTYPES_REGISTRATIONINFO_CLASS_SCRIPTSTRUCT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E392BF0)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_Class_ScriptStruct_TypeDefinitionIndex = 28326;

	class RegistrationInfo_Class_ScriptStruct : public ::System::Object
	{
	public:
		static ::UnrealTypes::Class** StaticGet_Class()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_ScriptStruct_TypeDefinitionIndex)->GetStaticField(0x24100);
		}
		static ::UnrealTypes::ClassParams** StaticGet_ClassParams()
		{
			return (::UnrealTypes::ClassParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_ScriptStruct_TypeDefinitionIndex)->GetStaticField(0x24108);
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
