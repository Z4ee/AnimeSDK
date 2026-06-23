#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/FPropertyBagContainerTypes___types_e__FixedBuffer.h"
#include "unitysdk/UnrealTypes/PropertyBagContainerType.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_ADD_OFFSET UNITYSDK_OFFSET(0x9DD740)
#define UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x486280)
#define UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x460A70)
#define UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_CREATE_OFFSET UNITYSDK_OFFSET(0x1D1B4F80)
#define UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x9DD8A0)
#define UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_EQUALS_OFFSET UNITYSDK_OFFSET(0x9DD7E0)
#define UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_GETTYPEHASH_OFFSET UNITYSDK_OFFSET(0x1D1B4DA0)
#define UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9DD760)
#define UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_GET_NUM_OFFSET UNITYSDK_OFFSET(0x3E4240)
#define UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x9DD840)
#define UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x9DD8B0)
#define UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x460A70)
#define UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1D1B4EB0)
#define UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_UNREALTYPES_ISTRUCT_UNREALTYPES_FPROPERTYBAGCONTAINERTYPES__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x486280)
#define UNREALTYPES_FPROPERTYBAGCONTAINERTYPES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1B50D0)

namespace UnrealTypes
{
	inline static constexpr unsigned int FPropertyBagContainerTypes_TypeDefinitionIndex = 27799;

	struct alignas(1) FPropertyBagContainerTypes
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(FPropertyBagContainerTypes_TypeDefinitionIndex)->GetStaticField(0x22880);
		}
		::UnrealTypes::FPropertyBagContainerTypes___types_e__FixedBuffer _types; // 0x10
		::System::Byte _numContainers; // 0x12

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGCONTAINERTYPES__CCTOR_OFFSET))();
		}

		::System::UInt32 get_Num()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_GET_NUM_OFFSET))(this);
		}

		::System::Boolean Add(::UnrealTypes::PropertyBagContainerType propertyBagContainerType)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::PropertyBagContainerType))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_ADD_OFFSET))(this, propertyBagContainerType);
		}

		::UnrealTypes::PropertyBagContainerType get_Item(::System::Int32 index)
		{
			return ((::UnrealTypes::PropertyBagContainerType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_GET_ITEM_OFFSET))(this, index);
		}

		static ::System::UInt32 GetTypeHash(::UnrealTypes::FPropertyBagContainerTypes& value)
		{
			return ((::System::UInt32(*)(::UnrealTypes::FPropertyBagContainerTypes&))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_GETTYPEHASH_OFFSET))(value);
		}

		::System::Boolean Equals(::UnrealTypes::FPropertyBagContainerTypes other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FPropertyBagContainerTypes))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_EQUALS_OFFSET))(this, other);
		}

		static ::System::Boolean op_Inequality(::UnrealTypes::FPropertyBagContainerTypes& lhs, ::UnrealTypes::FPropertyBagContainerTypes& rhs)
		{
			return ((::System::Boolean(*)(::UnrealTypes::FPropertyBagContainerTypes&, ::UnrealTypes::FPropertyBagContainerTypes&))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::UnrealTypes::FPropertyBagContainerTypes Create()
		{
			return ((::UnrealTypes::FPropertyBagContainerTypes(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_CREATE_OFFSET))();
		}

		::UnrealTypes::FPropertyBagContainerTypes DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::UnrealTypes::FPropertyBagContainerTypes(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::UnrealTypes::FPropertyBagContainerTypes CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::UnrealTypes::FPropertyBagContainerTypes(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_COPYCREATE_OFFSET))(this, allocator);
		}

		::UnrealTypes::FPropertyBagContainerTypes MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::UnrealTypes::FPropertyBagContainerTypes(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::UnrealTypes::FPropertyBagContainerTypes& other)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FPropertyBagContainerTypes&))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_UnrealTypes_FPropertyBagContainerTypes__CopyAssign(::UnrealTypes::FPropertyBagContainerTypes& other)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FPropertyBagContainerTypes&))((::PBYTE)hIl2Cpp + UNREALTYPES_FPROPERTYBAGCONTAINERTYPES_UNREALTYPES_ISTRUCT_UNREALTYPES_FPROPERTYBAGCONTAINERTYPES__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
