#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnrealTypes { class Object; }

#define UNREALTYPES_GLOBALTRANSIENTPACKAGE_ADDOBJECT_OFFSET UNITYSDK_OFFSET(0x1ADA2EE0)
#define UNREALTYPES_GLOBALTRANSIENTPACKAGE_FINDOBJECTBYNAME_OFFSET UNITYSDK_OFFSET(0x1ADA2D70)
#define UNREALTYPES_GLOBALTRANSIENTPACKAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADA3000)

namespace UnrealTypes
{
	inline static constexpr unsigned int GlobalTransientPackage_TypeDefinitionIndex = 25267;

	class GlobalTransientPackage : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnrealTypes::Object*>** StaticGet_ObjectList()
		{
			return (::System::Collections::Generic::List_1<::UnrealTypes::Object*>**)Il2CppClass::FromTypeDefinitionIndex(GlobalTransientPackage_TypeDefinitionIndex)->GetStaticField(0x1ECF0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_ObjectNameToIndexMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GlobalTransientPackage_TypeDefinitionIndex)->GetStaticField(0x1ECF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_GLOBALTRANSIENTPACKAGE__CCTOR_OFFSET))();
		}

		static ::UnrealTypes::Object* FindObjectByName(::System::String* name)
		{
			return ((::UnrealTypes::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNREALTYPES_GLOBALTRANSIENTPACKAGE_FINDOBJECTBYNAME_OFFSET))(name);
		}

		static ::System::Void AddObject(::UnrealTypes::Object* obj)
		{
			return ((::System::Void(*)(::UnrealTypes::Object*))((::PBYTE)hIl2Cpp + UNREALTYPES_GLOBALTRANSIENTPACKAGE_ADDOBJECT_OFFSET))(obj);
		}
	};
}
