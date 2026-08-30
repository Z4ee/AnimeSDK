#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }
namespace System::Dynamic { class ExpandoClass; }
namespace System::Dynamic { class ExpandoObject_ExpandoData; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDOCONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x19A28C20)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_GETEXPANDOENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19A29E60)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_GET_CLASS_OFFSET UNITYSDK_OFFSET(0x19A28730)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_ISDELETEDMEMBER_OFFSET UNITYSDK_OFFSET(0x19A274D0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_PROMOTECLASSCORE_OFFSET UNITYSDK_OFFSET(0x19A27FE0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_PROMOTECLASS_OFFSET UNITYSDK_OFFSET(0x19A289D0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___ADD_OFFSET UNITYSDK_OFFSET(0x19A29390)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___CLEAR_OFFSET UNITYSDK_OFFSET(0x19A29400)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___CONTAINS_OFFSET UNITYSDK_OFFSET(0x19A29690)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___COPYTO_OFFSET UNITYSDK_OFFSET(0x19A29820)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___GET_COUNT_OFFSET UNITYSDK_OFFSET(0x19A29370)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x19A29380)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___REMOVE_OFFSET UNITYSDK_OFFSET(0x19A29DD0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__ADD_OFFSET UNITYSDK_OFFSET(0x19A290E0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x19A29150)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19A28F10)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__GET_KEYS_OFFSET UNITYSDK_OFFSET(0x19A28CB0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__GET_VALUES_OFFSET UNITYSDK_OFFSET(0x19A28DE0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__REMOVE_OFFSET UNITYSDK_OFFSET(0x19A29290)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__SET_ITEM_OFFSET UNITYSDK_OFFSET(0x19A29070)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x19A29340)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19A29E00)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19A29EC0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COMPONENTMODEL_INOTIFYPROPERTYCHANGED_ADD_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x19A29F30)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COMPONENTMODEL_INOTIFYPROPERTYCHANGED_REMOVE_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x19A29F70)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_TRYADDMEMBER_OFFSET UNITYSDK_OFFSET(0x19A28B40)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_TRYDELETEVALUE_OFFSET UNITYSDK_OFFSET(0x19A28190)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_TRYGETVALUEFORKEY_OFFSET UNITYSDK_OFFSET(0x19A28BF0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x19A27660)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_TRYSETVALUE_OFFSET UNITYSDK_OFFSET(0x19A278F0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A29FB0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19A275E0)

namespace System::Dynamic
{
	inline static constexpr unsigned int ExpandoObject_TypeDefinitionIndex = 3675;

	class ExpandoObject : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_ExpandoTrySetValue()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(ExpandoObject_TypeDefinitionIndex)->GetStaticField(0x3A60);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ExpandoTryGetValue()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(ExpandoObject_TypeDefinitionIndex)->GetStaticField(0x3A68);
		}
		static ::System::Object** StaticGet_Uninitialized()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ExpandoObject_TypeDefinitionIndex)->GetStaticField(0x3A70);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ExpandoPromoteClass()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(ExpandoObject_TypeDefinitionIndex)->GetStaticField(0x3A78);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ExpandoCheckVersion()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(ExpandoObject_TypeDefinitionIndex)->GetStaticField(0x3A80);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ExpandoTryDeleteValue()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(ExpandoObject_TypeDefinitionIndex)->GetStaticField(0x3A88);
		}
		::System::Dynamic::ExpandoObject_ExpandoData* _data; // 0x10
		::System::Object* LockObject; // 0x18
		::System::ComponentModel::PropertyChangedEventHandler* _propertyChanged; // 0x20
		::System::Int32 _count; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT__CCTOR_OFFSET))();
		}

		::System::Boolean TryGetValue(::System::Object* a1, ::System::Int32 a2, ::System::String* a3, ::System::Boolean a4, ::System::Object*& a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_TRYGETVALUE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void TrySetValue(::System::Object* a1, ::System::Int32 a2, ::System::Object* a3, ::System::String* a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Object*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_TRYSETVALUE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean TryDeleteValue(::System::Object* a1, ::System::Int32 a2, ::System::String* a3, ::System::Boolean a4, ::System::Object* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_TRYDELETEVALUE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean IsDeletedMember(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_ISDELETEDMEMBER_OFFSET))(this, a1);
		}

		::System::Dynamic::ExpandoClass* get_Class()
		{
			return ((::System::Dynamic::ExpandoClass*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_GET_CLASS_OFFSET))(this);
		}

		::System::Dynamic::ExpandoObject_ExpandoData* PromoteClassCore(::System::Dynamic::ExpandoClass* a1, ::System::Dynamic::ExpandoClass* a2)
		{
			return ((::System::Dynamic::ExpandoObject_ExpandoData*(*)(::PVOID, ::System::Dynamic::ExpandoClass*, ::System::Dynamic::ExpandoClass*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_PROMOTECLASSCORE_OFFSET))(this, a1, a2);
		}

		::System::Void PromoteClass(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_PROMOTECLASS_OFFSET))(this, a1, a2);
		}

		::System::Void TryAddMember(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_TRYADDMEMBER_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetValueForKey(::System::String* a1, ::System::Object*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_TRYGETVALUEFORKEY_OFFSET))(this, a1, a2);
		}

		::System::Boolean ExpandoContainsKey(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDOCONTAINSKEY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::ICollection_1<::System::String*>* System_Collections_Generic_IDictionary_System_String_System_Object__get_Keys()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__GET_KEYS_OFFSET))(this);
		}

		::System::Collections::Generic::ICollection_1<::System::Object*>* System_Collections_Generic_IDictionary_System_String_System_Object__get_Values()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__GET_VALUES_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IDictionary_System_String_System_Object__get_Item(::System::String* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void System_Collections_Generic_IDictionary_System_String_System_Object__set_Item(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Void System_Collections_Generic_IDictionary_System_String_System_Object__Add(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__ADD_OFFSET))(this, a1, a2);
		}

		::System::Boolean System_Collections_Generic_IDictionary_System_String_System_Object__ContainsKey(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__CONTAINSKEY_OFFSET))(this, a1);
		}

		::System::Boolean System_Collections_Generic_IDictionary_System_String_System_Object__Remove(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__REMOVE_OFFSET))(this, a1);
		}

		::System::Boolean System_Collections_Generic_IDictionary_System_String_System_Object__TryGetValue(::System::String* a1, ::System::Object*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__TRYGETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Int32 System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_System_Object___get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___GET_COUNT_OFFSET))(this);
		}

		::System::Boolean System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_System_Object___get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___GET_ISREADONLY_OFFSET))(this);
		}

		::System::Void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_System_Object___Add(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___ADD_OFFSET))(this, a1);
		}

		::System::Void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_System_Object___Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___CLEAR_OFFSET))(this);
		}

		::System::Boolean System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_System_Object___Contains(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___CONTAINS_OFFSET))(this, a1);
		}

		::System::Void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_System_Object___CopyTo(::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Boolean System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_System_Object___Remove(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___REMOVE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>>* System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_Object___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>>* GetExpandoEnumerator(::System::Dynamic::ExpandoObject_ExpandoData* a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>>*(*)(::PVOID, ::System::Dynamic::ExpandoObject_ExpandoData*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_GETEXPANDOENUMERATOR_OFFSET))(this, a1, a2);
		}

		::System::Void System_ComponentModel_INotifyPropertyChanged_add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COMPONENTMODEL_INOTIFYPROPERTYCHANGED_ADD_PROPERTYCHANGED_OFFSET))(this, a1);
		}

		::System::Void System_ComponentModel_INotifyPropertyChanged_remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COMPONENTMODEL_INOTIFYPROPERTYCHANGED_REMOVE_PROPERTYCHANGED_OFFSET))(this, a1);
		}
	};
}
