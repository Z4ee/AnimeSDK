#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Specialized/NameObjectCollectionBase.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class DBNull; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class IEqualityComparer; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1867C0F0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GETASONESTRING_OFFSET UNITYSDK_OFFSET(0x1867BF30)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GETASSTRINGARRAY_OFFSET UNITYSDK_OFFSET(0x1867C080)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GETKEY_OFFSET UNITYSDK_OFFSET(0x1867C690)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GETVALUES_1_OFFSET UNITYSDK_OFFSET(0x1867C590)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GETVALUES_OFFSET UNITYSDK_OFFSET(0x1867C320)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GET_1_OFFSET UNITYSDK_OFFSET(0x1867C4F0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GET_ALLKEYS_OFFSET UNITYSDK_OFFSET(0x1867C6F0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1867C4D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GET_OFFSET UNITYSDK_OFFSET(0x1867C270)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_INVALIDATECACHEDARRAYS_OFFSET UNITYSDK_OFFSET(0x1867BF20)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1867C4C0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1867C4E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_SET_OFFSET UNITYSDK_OFFSET(0x1867C420)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1867BDF0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1867BE30)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1867BED0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1867BEF0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1867BDA0)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int NameValueCollection_TypeDefinitionIndex = 2987;

	class NameValueCollection : public ::System::Collections::Specialized::NameObjectCollectionBase
	{
	public:
		::Il2CppArray<::System::String*>* _allKeys; // 0x50
		::Il2CppArray<::System::String*>* _all; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_1_OFFSET))(this, capacity);
		}

		::System::Void _ctor_2(::System::Int32 capacity, ::System::Collections::IEqualityComparer* equalityComparer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_2_OFFSET))(this, capacity, equalityComparer);
		}

		::System::Void _ctor_3(::System::DBNull* dummy)
		{
			return ((::System::Void(*)(::PVOID, ::System::DBNull*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_3_OFFSET))(this, dummy);
		}

		::System::Void _ctor_4(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_4_OFFSET))(this, info, context);
		}

		::System::Void InvalidateCachedArrays()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_INVALIDATECACHEDARRAYS_OFFSET))(this);
		}

		static ::System::String* GetAsOneString(::System::Collections::ArrayList* list)
		{
			return ((::System::String*(*)(::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GETASONESTRING_OFFSET))(list);
		}

		static ::Il2CppArray<::System::String*>* GetAsStringArray(::System::Collections::ArrayList* list)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GETASSTRINGARRAY_OFFSET))(list);
		}

		::System::Void Add(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_ADD_OFFSET))(this, name, value);
		}

		::System::String* Get(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GET_OFFSET))(this, name);
		}

		::Il2CppArray<::System::String*>* GetValues(::System::String* name)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GETVALUES_OFFSET))(this, name);
		}

		::System::Void Set(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_SET_OFFSET))(this, name, value);
		}

		::System::Void Remove(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_REMOVE_OFFSET))(this, name);
		}

		::System::String* get_Item(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GET_ITEM_OFFSET))(this, name);
		}

		::System::Void set_Item(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_SET_ITEM_OFFSET))(this, name, value);
		}

		::System::String* Get_1(::System::Int32 index)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GET_1_OFFSET))(this, index);
		}

		::Il2CppArray<::System::String*>* GetValues_1(::System::Int32 index)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GETVALUES_1_OFFSET))(this, index);
		}

		::System::String* GetKey(::System::Int32 index)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GETKEY_OFFSET))(this, index);
		}

		::Il2CppArray<::System::String*>* get_AllKeys()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GET_ALLKEYS_OFFSET))(this);
		}
	};
}
