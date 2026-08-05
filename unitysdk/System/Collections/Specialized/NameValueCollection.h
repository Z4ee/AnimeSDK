#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Specialized/NameObjectCollectionBase.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Array; }
namespace System { class DBNull; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IEqualityComparer; }
namespace System::Collections { class IHashCodeProvider; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_ADD_1_OFFSET UNITYSDK_OFFSET(0x1D226B30)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1D225F90)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D226760)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1D226830)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GETASONESTRING_OFFSET UNITYSDK_OFFSET(0x1D226520)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GETASSTRINGARRAY_OFFSET UNITYSDK_OFFSET(0x1D2266D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GETKEY_OFFSET UNITYSDK_OFFSET(0x1D227360)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GETVALUES_1_OFFSET UNITYSDK_OFFSET(0x1D2271D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GETVALUES_OFFSET UNITYSDK_OFFSET(0x1D226E30)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GET_1_OFFSET UNITYSDK_OFFSET(0x1D2270D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GET_ALLKEYS_OFFSET UNITYSDK_OFFSET(0x1D227400)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1D2273F0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D2270B0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GET_OFFSET UNITYSDK_OFFSET(0x1D226D20)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_HASKEYS_OFFSET UNITYSDK_OFFSET(0x1D226AF0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_INTERNALHASKEYS_OFFSET UNITYSDK_OFFSET(0x1D226B00)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_INVALIDATECACHEDARRAYS_OFFSET UNITYSDK_OFFSET(0x1D226510)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1D2270A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D2270C0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_SET_OFFSET UNITYSDK_OFFSET(0x1D226FC0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D225EC0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D2260E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D226180)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1D2261E0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1D2262A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1D226310)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1D2263F0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_8_OFFSET UNITYSDK_OFFSET(0x1D226460)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_9_OFFSET UNITYSDK_OFFSET(0x1D2264B0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D225E60)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int NameValueCollection_TypeDefinitionIndex = 3923;

	class NameValueCollection : public ::System::Collections::Specialized::NameObjectCollectionBase
	{
	public:
		::Il2CppArray<::System::String*>* _allKeys; // 0x50
		::Il2CppArray<::System::String*>* _all; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Collections::Specialized::NameValueCollection* col)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NameValueCollection*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_1_OFFSET))(this, col);
		}

		::System::Void _ctor_2(::System::Collections::IHashCodeProvider* hashProvider, ::System::Collections::IComparer* comparer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IHashCodeProvider*, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_2_OFFSET))(this, hashProvider, comparer);
		}

		::System::Void _ctor_3(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_3_OFFSET))(this, capacity);
		}

		::System::Void _ctor_4(::System::Collections::IEqualityComparer* equalityComparer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_4_OFFSET))(this, equalityComparer);
		}

		::System::Void _ctor_5(::System::Int32 capacity, ::System::Collections::IEqualityComparer* equalityComparer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_5_OFFSET))(this, capacity, equalityComparer);
		}

		::System::Void _ctor_6(::System::Int32 capacity, ::System::Collections::Specialized::NameValueCollection* col)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Specialized::NameValueCollection*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_6_OFFSET))(this, capacity, col);
		}

		::System::Void _ctor_7(::System::Int32 capacity, ::System::Collections::IHashCodeProvider* hashProvider, ::System::Collections::IComparer* comparer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::IHashCodeProvider*, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_7_OFFSET))(this, capacity, hashProvider, comparer);
		}

		::System::Void _ctor_8(::System::DBNull* dummy)
		{
			return ((::System::Void(*)(::PVOID, ::System::DBNull*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_8_OFFSET))(this, dummy);
		}

		::System::Void _ctor_9(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_9_OFFSET))(this, info, context);
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

		::System::Void Add(::System::Collections::Specialized::NameValueCollection* c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NameValueCollection*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_ADD_OFFSET))(this, c);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_CLEAR_OFFSET))(this);
		}

		::System::Void CopyTo(::System::Array* dest, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_COPYTO_OFFSET))(this, dest, index);
		}

		::System::Boolean HasKeys()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_HASKEYS_OFFSET))(this);
		}

		::System::Boolean InternalHasKeys()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_INTERNALHASKEYS_OFFSET))(this);
		}

		::System::Void Add_1(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_ADD_1_OFFSET))(this, name, value);
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

		::System::String* get_Item_1(::System::Int32 index)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GET_ITEM_1_OFFSET))(this, index);
		}

		::Il2CppArray<::System::String*>* get_AllKeys()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GET_ALLKEYS_OFFSET))(this);
		}
	};
}
