#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructOpsTraitsBase; }
namespace UnrealTypes { template <typename T> class ManagedStructList_1; }

#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_APPEND_1_OFFSET UNITYSDK_OFFSET(0xA150C0)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_APPEND_2_OFFSET UNITYSDK_OFFSET(0xA150D0)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_APPEND_OFFSET UNITYSDK_OFFSET(0xA150B0)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_ASSIGN_OFFSET UNITYSDK_OFFSET(0xA15100)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_CLEAR_OFFSET UNITYSDK_OFFSET(0xA15070)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA14FD0)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_COPYCREATE_OFFSET UNITYSDK_OFFSET(0xA14EC0)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xA14EA0)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA15030)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_EQUALS_OFFSET UNITYSDK_OFFSET(0x331010)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA151A0)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_GETITEMSTRIDE_OFFSET UNITYSDK_OFFSET(0x1E38E110)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_GETITEM_OFFSET UNITYSDK_OFFSET(0xA15150)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x330F60)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA15160)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xA151C0)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA15220)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_INSERTAT_OFFSET UNITYSDK_OFFSET(0xA15080)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_ISVALIDINDEX_OFFSET UNITYSDK_OFFSET(0xA14E80)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0xA14FE0)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_MOVECREATE_OFFSET UNITYSDK_OFFSET(0xA14F10)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E38C110)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_RESERVEBYTES_OFFSET UNITYSDK_OFFSET(0xA15130)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_RESET_OFFSET UNITYSDK_OFFSET(0xA14FF0)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_SETNUM_OFFSET UNITYSDK_OFFSET(0xA15140)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_UNREALTYPES_ISTRUCT_UNREALTYPES_FINSTANCEDSTRUCTCONTAINER__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA14FD0)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E38E220)
#define UNREALTYPES_FINSTANCEDSTRUCTCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0xA14E90)

namespace UnrealTypes
{
	inline static constexpr unsigned int FInstancedStructContainer_TypeDefinitionIndex = 28394;

	struct alignas(8) FInstancedStructContainer
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(FInstancedStructContainer_TypeDefinitionIndex)->GetStaticField(0x23FC0);
		}
		static ::System::Int32* StaticGet_ItemAlignment()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FInstancedStructContainer_TypeDefinitionIndex)->GetStaticField(0x77D0);
		}
		static ::System::Int32* StaticGet_ItemStride()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FInstancedStructContainer_TypeDefinitionIndex)->GetStaticField(0x77D4);
		}
		static ::System::Int32* StaticGet_DefaultMinAlignment()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FInstancedStructContainer_TypeDefinitionIndex)->GetStaticField(0x77D8);
		}
		::System::Void* _memory; // 0x10
		::System::Int32 _allocatedSize; // 0x18
		::System::Int32 _numItems; // 0x1C
		::Unity::Collections::Allocator _allocator; // 0x20

		::System::Void _ctor(::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER__CTOR_OFFSET))(this, allocator);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER__CCTOR_OFFSET))();
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean IsValidIndex(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_ISVALIDINDEX_OFFSET))(this, index);
		}

		::UnrealTypes::FInstancedStructContainer DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::UnrealTypes::FInstancedStructContainer(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::UnrealTypes::FInstancedStructContainer CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::UnrealTypes::FInstancedStructContainer(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_COPYCREATE_OFFSET))(this, allocator);
		}

		::UnrealTypes::FInstancedStructContainer MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::UnrealTypes::FInstancedStructContainer(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::UnrealTypes::FInstancedStructContainer& other)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FInstancedStructContainer&))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::UnrealTypes::FInstancedStructContainer& temp)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FInstancedStructContainer&))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_DISPOSE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_CLEAR_OFFSET))(this);
		}

		/*
		::System::Void InsertAt(::System::Int32 insertAtIndex, ::UnrealTypes::ReadOnlyNativeListView_1<::UnrealTypes::FReadOnlyStructView> valuesToInsert)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnrealTypes::ReadOnlyNativeListView_1<::UnrealTypes::FReadOnlyStructView>))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_INSERTAT_OFFSET))(this, insertAtIndex, valuesToInsert);
		}
		*/

		::System::Void Append(::UnrealTypes::FInstancedStructContainer& other)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FInstancedStructContainer&))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_APPEND_OFFSET))(this, other);
		}

		/*
		::System::Void Append_1(::UnrealTypes::ManagedStructList_1<::UnrealTypes::FInstancedStruct>* newItemValues)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::ManagedStructList_1<::UnrealTypes::FInstancedStruct>*))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_APPEND_1_OFFSET))(this, newItemValues);
		}
		*/

		/*
		::System::Void Append_2(::UnrealTypes::ReadOnlyNativeListView_1<::UnrealTypes::FReadOnlyStructView> newItemValues)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::ReadOnlyNativeListView_1<::UnrealTypes::FReadOnlyStructView>))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_APPEND_2_OFFSET))(this, newItemValues);
		}
		*/

		/*
		::System::Void Assign(::UnrealTypes::ManagedStructList_1<::UnrealTypes::FInstancedStruct>* newItemValues)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::ManagedStructList_1<::UnrealTypes::FInstancedStruct>*))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_ASSIGN_OFFSET))(this, newItemValues);
		}
		*/

		::System::Void ReserveBytes(::System::Int32 numBytes, ::System::Int32 minAlignment)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_RESERVEBYTES_OFFSET))(this, numBytes, minAlignment);
		}

		::System::Void SetNum(::System::Int32 newNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_SETNUM_OFFSET))(this, newNum);
		}

		/*
		::UnrealTypes::FInstancedStructContainer_FItem& GetItem(::System::Int32 index)
		{
			return ((::UnrealTypes::FInstancedStructContainer_FItem&(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_GETITEM_OFFSET))(this, index);
		}
		*/

		/*
		::UnrealTypes::FStructView get_Item(::System::Int32 index)
		{
			return ((::UnrealTypes::FStructView(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_GET_ITEM_OFFSET))(this, index);
		}
		*/

		static ::System::Int32 GetItemStride()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_GETITEMSTRIDE_OFFSET))();
		}

		/*
		::UnrealTypes::FInstancedStructContainer_Enumerator GetEnumerator()
		{
			return ((::UnrealTypes::FInstancedStructContainer_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_GETENUMERATOR_OFFSET))(this);
		}
		*/

		::System::Boolean Equals(::UnrealTypes::FInstancedStructContainer other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FInstancedStructContainer))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_EQUALS_OFFSET))(this, other);
		}

		static ::System::Boolean op_Inequality(::UnrealTypes::FInstancedStructContainer& lhs, ::UnrealTypes::FInstancedStructContainer& rhs)
		{
			return ((::System::Boolean(*)(::UnrealTypes::FInstancedStructContainer&, ::UnrealTypes::FInstancedStructContainer&))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_GET_STATICSTRUCT_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_UnrealTypes_FInstancedStructContainer__CopyAssign(::UnrealTypes::FInstancedStructContainer& other)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FInstancedStructContainer&))((::PBYTE)hIl2Cpp + UNREALTYPES_FINSTANCEDSTRUCTCONTAINER_UNREALTYPES_ISTRUCT_UNREALTYPES_FINSTANCEDSTRUCTCONTAINER__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
