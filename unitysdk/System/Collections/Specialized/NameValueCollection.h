#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Specialized/NameObjectCollectionBase.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class DBNull; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class IEqualityComparer; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1AF20540)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GETASONESTRING_OFFSET UNITYSDK_OFFSET(0x1AF20210)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GETASSTRINGARRAY_OFFSET UNITYSDK_OFFSET(0x1AF204D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GETKEY_OFFSET UNITYSDK_OFFSET(0x1AF20B10)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GETVALUES_1_OFFSET UNITYSDK_OFFSET(0x1AF20A10)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GETVALUES_OFFSET UNITYSDK_OFFSET(0x1AF20790)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GET_1_OFFSET UNITYSDK_OFFSET(0x1AF20970)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GET_ALLKEYS_OFFSET UNITYSDK_OFFSET(0x1AF20B80)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AF20950)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GET_OFFSET UNITYSDK_OFFSET(0x1AF206D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_INVALIDATECACHEDARRAYS_OFFSET UNITYSDK_OFFSET(0x1AF20200)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1AF20940)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AF20960)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_SET_OFFSET UNITYSDK_OFFSET(0x1AF208A0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AF200D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AF20110)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1AF201B0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1AF201D0)
#define SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF20080)

namespace System::Collections::Specialized
{
	inline static constexpr unsigned int NameValueCollection_TypeDefinitionIndex = 2988;

	class NameValueCollection : public ::System::Collections::Specialized::NameObjectCollectionBase
	{
	public:
		::Il2CppArray<::System::String*>* _all; // 0x50
		::Il2CppArray<::System::String*>* _allKeys; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Int32 a1, ::System::Collections::IEqualityComparer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::DBNull* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::DBNull*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_3_OFFSET))(this, a1);
		}

		::System::Void _ctor_4(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION__CTOR_4_OFFSET))(this, a1, a2);
		}

		::System::Void InvalidateCachedArrays()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_INVALIDATECACHEDARRAYS_OFFSET))(this);
		}

		static ::System::String* GetAsOneString(::System::Collections::ArrayList* a1)
		{
			return ((::System::String*(*)(::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GETASONESTRING_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::String*>* GetAsStringArray(::System::Collections::ArrayList* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GETASSTRINGARRAY_OFFSET))(a1);
		}

		::System::Void Add(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_ADD_OFFSET))(this, a1, a2);
		}

		::System::String* Get(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GET_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* GetValues(::System::String* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GETVALUES_OFFSET))(this, a1);
		}

		::System::Void Set(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_SET_OFFSET))(this, a1, a2);
		}

		::System::Void Remove(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_REMOVE_OFFSET))(this, a1);
		}

		::System::String* get_Item(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::String* Get_1(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GET_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* GetValues_1(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GETVALUES_1_OFFSET))(this, a1);
		}

		::System::String* GetKey(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GETKEY_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* get_AllKeys()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_SPECIALIZED_NAMEVALUECOLLECTION_GET_ALLKEYS_OFFSET))(this);
		}
	};
}
