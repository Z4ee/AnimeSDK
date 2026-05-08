#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define UNREALTYPES_PROPERTYBAGMISSINGSTRUCT_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define UNREALTYPES_PROPERTYBAGMISSINGSTRUCT_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define UNREALTYPES_PROPERTYBAGMISSINGSTRUCT_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define UNREALTYPES_PROPERTYBAGMISSINGSTRUCT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define UNREALTYPES_PROPERTYBAGMISSINGSTRUCT_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x93B2D0)
#define UNREALTYPES_PROPERTYBAGMISSINGSTRUCT_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x93B330)
#define UNREALTYPES_PROPERTYBAGMISSINGSTRUCT_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define UNREALTYPES_PROPERTYBAGMISSINGSTRUCT_UNREALTYPES_ISTRUCT_UNREALTYPES_PROPERTYBAGMISSINGSTRUCT__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define UNREALTYPES_PROPERTYBAGMISSINGSTRUCT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADA5A30)

namespace UnrealTypes
{
	inline static constexpr unsigned int PropertyBagMissingStruct_TypeDefinitionIndex = 25317;

	struct alignas(1) PropertyBagMissingStruct
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(PropertyBagMissingStruct_TypeDefinitionIndex)->GetStaticField(0x1ED10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTYBAGMISSINGSTRUCT__CCTOR_OFFSET))();
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTYBAGMISSINGSTRUCT_GET_STATICSTRUCT_OFFSET))(this);
		}

		::UnrealTypes::PropertyBagMissingStruct DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::UnrealTypes::PropertyBagMissingStruct(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTYBAGMISSINGSTRUCT_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::UnrealTypes::PropertyBagMissingStruct CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::UnrealTypes::PropertyBagMissingStruct(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTYBAGMISSINGSTRUCT_COPYCREATE_OFFSET))(this, allocator);
		}

		::UnrealTypes::PropertyBagMissingStruct MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::UnrealTypes::PropertyBagMissingStruct(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTYBAGMISSINGSTRUCT_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::UnrealTypes::PropertyBagMissingStruct& other)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::PropertyBagMissingStruct&))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTYBAGMISSINGSTRUCT_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTYBAGMISSINGSTRUCT_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTYBAGMISSINGSTRUCT_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_UnrealTypes_PropertyBagMissingStruct__CopyAssign(::UnrealTypes::PropertyBagMissingStruct& other)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::PropertyBagMissingStruct&))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTYBAGMISSINGSTRUCT_UNREALTYPES_ISTRUCT_UNREALTYPES_PROPERTYBAGMISSINGSTRUCT__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
