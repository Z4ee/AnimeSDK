#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/FInstancedStruct.h"

namespace UnrealTypes { class PropertyBag; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define UNREALTYPES_FINSTANCEDPROPERTYBAG_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x9DCA20)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x9DC920)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_CREATE_OFFSET UNITYSDK_OFFSET(0x1D1B0340)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x9DC8A0)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DCA50)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x9DC770)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_MUTABLEVALUE_OFFSET UNITYSDK_OFFSET(0x9DC810)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_PROPERTYBAGSTRUCT_OFFSET UNITYSDK_OFFSET(0x9DC790)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x9DC840)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x9DCA70)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9DC810)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_MIGRATETONEWBAGSTRUCT_OFFSET UNITYSDK_OFFSET(0x9DC830)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x9DCA30)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x9DC9F0)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_RESET_OFFSET UNITYSDK_OFFSET(0x9DCA40)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG_UNREALTYPES_ISTRUCT_UNREALTYPES_FINSTANCEDPROPERTYBAG__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x9DCA20)
#define UNREALTYPES_FINSTANCEDPROPERTYBAG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1B0B40)

namespace UnrealTypes
{
	inline static constexpr unsigned int FInstancedPropertyBag_TypeDefinitionIndex = 27805;

	struct alignas(8) FInstancedPropertyBag
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(FInstancedPropertyBag_TypeDefinitionIndex)->GetStaticField(0x22820);
		}
		::UnrealTypes::FInstancedStruct _value; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_ISVALID_OFFSET))(this);
		}

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::PropertyBag*> get_PropertyBagStruct()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::PropertyBag*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_PROPERTYBAGSTRUCT_OFFSET))(this);
		}
		*/

		/*
		::UnrealTypes::FReadOnlyStructView get_Value()
		{
			return ((::UnrealTypes::FReadOnlyStructView(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_VALUE_OFFSET))(this);
		}
		*/

		/*
		::UnrealTypes::FStructView get_MutableValue()
		{
			return ((::UnrealTypes::FStructView(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_MUTABLEVALUE_OFFSET))(this);
		}
		*/

		::System::Void MigrateToNewBagStruct(::UnrealTypes::PropertyBag* newPropertyBag)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::PropertyBag*))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_MIGRATETONEWBAGSTRUCT_OFFSET))(this, newPropertyBag);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::UnrealTypes::FInstancedPropertyBag Create(::Unity::Collections::Allocator allocator)
		{
			return ((::UnrealTypes::FInstancedPropertyBag(*)(::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_CREATE_OFFSET))(allocator);
		}

		::UnrealTypes::FInstancedPropertyBag DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::UnrealTypes::FInstancedPropertyBag(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::UnrealTypes::FInstancedPropertyBag CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::UnrealTypes::FInstancedPropertyBag(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_COPYCREATE_OFFSET))(this, allocator);
		}

		::UnrealTypes::FInstancedPropertyBag MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::UnrealTypes::FInstancedPropertyBag(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::UnrealTypes::FInstancedPropertyBag& other)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FInstancedPropertyBag&))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::UnrealTypes::FInstancedPropertyBag& temp)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FInstancedPropertyBag&))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_UnrealTypes_FInstancedPropertyBag__CopyAssign(::UnrealTypes::FInstancedPropertyBag& other)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FInstancedPropertyBag&))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDPROPERTYBAG_UNREALTYPES_ISTRUCT_UNREALTYPES_FINSTANCEDPROPERTYBAG__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
