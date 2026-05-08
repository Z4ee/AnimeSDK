#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/UnrealTypes/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnrealTypes { class Field; }
namespace UnrealTypes { class Property; }

#define UNREALTYPES_STRUCT_ADDCPPPROPERTY_OFFSET UNITYSDK_OFFSET(0x1ADA5790)
#define UNREALTYPES_STRUCT_BIND_OFFSET UNITYSDK_OFFSET(0x1ADA57B0)
#define UNREALTYPES_STRUCT_FINDPROPERTYBYNAME_OFFSET UNITYSDK_OFFSET(0x1ADA8610)
#define UNREALTYPES_STRUCT_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x1AD999F0)
#define UNREALTYPES_STRUCT_GET_INHERITANCESUPER_OFFSET UNITYSDK_OFFSET(0x1ADA8020)
#define UNREALTYPES_STRUCT_GET_STRUCTURESIZE_OFFSET UNITYSDK_OFFSET(0x1AD9EA10)
#define UNREALTYPES_STRUCT_ISCHILDOF_1_OFFSET UNITYSDK_OFFSET(0x1ADA84E0)
#define UNREALTYPES_STRUCT_ISCHILDOF_OFFSET UNITYSDK_OFFSET(0x1ADA84B0)
#define UNREALTYPES_STRUCT_LINK_OFFSET UNITYSDK_OFFSET(0x1ADA8030)
#define UNREALTYPES_STRUCT_STATICLINK_OFFSET UNITYSDK_OFFSET(0x1AD9A470)
#define UNREALTYPES_STRUCT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD99440)

namespace UnrealTypes
{
	inline static constexpr unsigned int Struct_TypeDefinitionIndex = 25219;

	class Struct : public ::UnrealTypes::Object
	{
	public:
		::UnrealTypes::Property* PropertyLink; // 0x38
		::UnrealTypes::Field* ChildProperties; // 0x40
		::System::String* NamespaceName; // 0x48
		::System::Type* Type; // 0x50
		::UnrealTypes::Struct* SuperStruct; // 0x58
		::System::Int32 MinAlignment; // 0x60
		::System::UInt32 TypeId; // 0x64
		::System::Int32 PropertiesSize; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCT__CTOR_OFFSET))(this);
		}

		::System::String* get_FullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCT_GET_FULLNAME_OFFSET))(this);
		}

		::UnrealTypes::Struct* get_InheritanceSuper()
		{
			return ((::UnrealTypes::Struct*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCT_GET_INHERITANCESUPER_OFFSET))(this);
		}

		::System::Int32 get_StructureSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCT_GET_STRUCTURESIZE_OFFSET))(this);
		}

		::System::Void AddCppProperty(::UnrealTypes::Property* property)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::Property*))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCT_ADDCPPPROPERTY_OFFSET))(this, property);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCT_BIND_OFFSET))(this);
		}

		::System::Void StaticLink(::System::Boolean relinkExistingProperties)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCT_STATICLINK_OFFSET))(this, relinkExistingProperties);
		}

		::System::Void Link(::System::Boolean relinkExistingProperties)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCT_LINK_OFFSET))(this, relinkExistingProperties);
		}

		::System::Boolean IsChildOf(::UnrealTypes::Struct* someBase)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::Struct*))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCT_ISCHILDOF_OFFSET))(this, someBase);
		}

		::System::Boolean IsChildOf_1(::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> someBase)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCT_ISCHILDOF_1_OFFSET))(this, someBase);
		}

		::UnrealTypes::Property* FindPropertyByName(::Foundation::Unreal::FName name)
		{
			return ((::UnrealTypes::Property*(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCT_FINDPROPERTYBYNAME_OFFSET))(this, name);
		}
	};
}
