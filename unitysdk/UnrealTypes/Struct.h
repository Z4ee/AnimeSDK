#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/UnrealTypes/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnrealTypes { class Field; }
namespace UnrealTypes { class Property; }

#define UNREALTYPES_STRUCT_ADDCPPPROPERTY_OFFSET UNITYSDK_OFFSET(0x1D1B8C70)
#define UNREALTYPES_STRUCT_BIND_OFFSET UNITYSDK_OFFSET(0x1D1B8C90)
#define UNREALTYPES_STRUCT_FINDPROPERTYBYNAME_OFFSET UNITYSDK_OFFSET(0x1D1BBBC0)
#define UNREALTYPES_STRUCT_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x1D1ACE90)
#define UNREALTYPES_STRUCT_GET_INHERITANCESUPER_OFFSET UNITYSDK_OFFSET(0x1D1BB5E0)
#define UNREALTYPES_STRUCT_GET_STRUCTURESIZE_OFFSET UNITYSDK_OFFSET(0x1D1B1FC0)
#define UNREALTYPES_STRUCT_ISCHILDOF_1_OFFSET UNITYSDK_OFFSET(0x1D1BBA90)
#define UNREALTYPES_STRUCT_ISCHILDOF_OFFSET UNITYSDK_OFFSET(0x1D1BBA60)
#define UNREALTYPES_STRUCT_LINK_OFFSET UNITYSDK_OFFSET(0x1D1BB5F0)
#define UNREALTYPES_STRUCT_STATICLINK_OFFSET UNITYSDK_OFFSET(0x1D1AD910)
#define UNREALTYPES_STRUCT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1AC6F0)

namespace UnrealTypes
{
	inline static constexpr unsigned int Struct_TypeDefinitionIndex = 27709;

	class Struct : public ::UnrealTypes::Object
	{
	public:
		::UnrealTypes::Field* ChildProperties; // 0x38
		::System::Type* Type; // 0x40
		::UnrealTypes::Property* PropertyLink; // 0x48
		::System::String* NamespaceName; // 0x50
		::UnrealTypes::Struct* SuperStruct; // 0x58
		::System::Int32 MinAlignment; // 0x60
		::System::Int32 PropertiesSize; // 0x64
		::System::UInt32 TypeId; // 0x68

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
