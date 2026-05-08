#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnrealTypes { class FieldClass; }
namespace UnrealTypes { class IFieldVariant; }
namespace UnrealTypes { class Property; }

#define UNREALTYPES_FIELD_ADDCPPPROPERTY_OFFSET UNITYSDK_OFFSET(0x1ADA2A10)
#define UNREALTYPES_FIELD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ADA29D0)
#define UNREALTYPES_FIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADA2930)

namespace UnrealTypes
{
	inline static constexpr unsigned int Field_TypeDefinitionIndex = 25236;

	class Field : public ::System::Object
	{
	public:
		::UnrealTypes::Field* Next; // 0x10
		::UnrealTypes::FieldClass* ClassPrivate; // 0x18
		::System::String* Name; // 0x20
		::UnrealTypes::IFieldVariant* Owner; // 0x28
		::Foundation::Unreal::FName NamePrivate; // 0x30

		::System::Void _ctor(::UnrealTypes::IFieldVariant* owner, ::Foundation::Unreal::FName name)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + UNREALTYPES_FIELD__CTOR_OFFSET))(this, owner, name);
		}

		::System::Void _ctor_1(::UnrealTypes::IFieldVariant* owner, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::System::String*))((::PBYTE)hIl2Cpp + UNREALTYPES_FIELD__CTOR_1_OFFSET))(this, owner, name);
		}

		::System::Void AddCppProperty(::UnrealTypes::Property* property)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::Property*))((::PBYTE)hIl2Cpp + UNREALTYPES_FIELD_ADDCPPPROPERTY_OFFSET))(this, property);
		}
	};
}
