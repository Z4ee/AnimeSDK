#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }
namespace System::Dynamic { class DynamicMetaObject; }
namespace System::Dynamic { class ExpandoClass; }
namespace System::Dynamic { class ExpandoObject_ExpandoData; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDOCONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x1BBD7460)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_GETEXPANDOENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1BBD83A0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_GET_CLASS_OFFSET UNITYSDK_OFFSET(0x1BBD7130)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_ISDELETEDMEMBER_OFFSET UNITYSDK_OFFSET(0x1BBD7090)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_PROMOTECLASSCORE_OFFSET UNITYSDK_OFFSET(0x1BBD6B30)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_PROMOTECLASS_OFFSET UNITYSDK_OFFSET(0x1BBD7150)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___ADD_OFFSET UNITYSDK_OFFSET(0x1BBD7A60)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___CLEAR_OFFSET UNITYSDK_OFFSET(0x1BBD7B20)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___CONTAINS_OFFSET UNITYSDK_OFFSET(0x1BBD7E10)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___COPYTO_OFFSET UNITYSDK_OFFSET(0x1BBD7E90)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1BBD7A40)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1BBD7A50)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___REMOVE_OFFSET UNITYSDK_OFFSET(0x1BBD8310)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__ADD_OFFSET UNITYSDK_OFFSET(0x1BBD76E0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x1BBD77A0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1BBD75A0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1BBD7500)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1BBD7550)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__REMOVE_OFFSET UNITYSDK_OFFSET(0x1BBD7930)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1BBD7620)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1BBD7A10)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1BBD8340)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1BBD8400)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COMPONENTMODEL_INOTIFYPROPERTYCHANGED_ADD_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1BBD8460)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COMPONENTMODEL_INOTIFYPROPERTYCHANGED_REMOVE_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1BBD84D0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_DYNAMIC_IDYNAMICMETAOBJECTPROVIDER_GETMETAOBJECT_OFFSET UNITYSDK_OFFSET(0x1BBD72B0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_TRYADDMEMBER_OFFSET UNITYSDK_OFFSET(0x1BBD7370)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_TRYDELETEVALUE_OFFSET UNITYSDK_OFFSET(0x1BBD6B70)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_TRYGETVALUEFORKEY_OFFSET UNITYSDK_OFFSET(0x1BBD7430)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1BBD6210)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_TRYSETVALUE_OFFSET UNITYSDK_OFFSET(0x1BBD63B0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBD8540)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD6190)

namespace System::Dynamic
{
	inline static constexpr unsigned int ExpandoObject_TypeDefinitionIndex = 4994;

	class ExpandoObject : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_Uninitialized()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ExpandoObject_TypeDefinitionIndex)->GetStaticField(0x3B60);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ExpandoCheckVersion()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(ExpandoObject_TypeDefinitionIndex)->GetStaticField(0x3B68);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ExpandoPromoteClass()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(ExpandoObject_TypeDefinitionIndex)->GetStaticField(0x3B70);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ExpandoTryDeleteValue()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(ExpandoObject_TypeDefinitionIndex)->GetStaticField(0x3B78);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ExpandoTryGetValue()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(ExpandoObject_TypeDefinitionIndex)->GetStaticField(0x3B80);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ExpandoTrySetValue()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(ExpandoObject_TypeDefinitionIndex)->GetStaticField(0x3B88);
		}
		::System::Object* LockObject; // 0x10
		::System::Dynamic::ExpandoObject_ExpandoData* _data; // 0x18
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

		::System::Boolean TryGetValue(::System::Object* indexClass, ::System::Int32 index, ::System::String* name, ::System::Boolean ignoreCase, ::System::Object*& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_TRYGETVALUE_OFFSET))(this, indexClass, index, name, ignoreCase, value);
		}

		::System::Void TrySetValue(::System::Object* indexClass, ::System::Int32 index, ::System::Object* value, ::System::String* name, ::System::Boolean ignoreCase, ::System::Boolean add)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Object*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_TRYSETVALUE_OFFSET))(this, indexClass, index, value, name, ignoreCase, add);
		}

		::System::Boolean TryDeleteValue(::System::Object* indexClass, ::System::Int32 index, ::System::String* name, ::System::Boolean ignoreCase, ::System::Object* deleteValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_TRYDELETEVALUE_OFFSET))(this, indexClass, index, name, ignoreCase, deleteValue);
		}

		::System::Boolean IsDeletedMember(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_ISDELETEDMEMBER_OFFSET))(this, index);
		}

		::System::Dynamic::ExpandoClass* get_Class()
		{
			return ((::System::Dynamic::ExpandoClass*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_GET_CLASS_OFFSET))(this);
		}

		::System::Dynamic::ExpandoObject_ExpandoData* PromoteClassCore(::System::Dynamic::ExpandoClass* oldClass, ::System::Dynamic::ExpandoClass* newClass)
		{
			return ((::System::Dynamic::ExpandoObject_ExpandoData*(*)(::PVOID, ::System::Dynamic::ExpandoClass*, ::System::Dynamic::ExpandoClass*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_PROMOTECLASSCORE_OFFSET))(this, oldClass, newClass);
		}

		::System::Void PromoteClass(::System::Object* oldClass, ::System::Object* newClass)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_PROMOTECLASS_OFFSET))(this, oldClass, newClass);
		}

		::System::Dynamic::DynamicMetaObject* System_Dynamic_IDynamicMetaObjectProvider_GetMetaObject(::System::Linq::Expressions::Expression* parameter)
		{
			return ((::System::Dynamic::DynamicMetaObject*(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_DYNAMIC_IDYNAMICMETAOBJECTPROVIDER_GETMETAOBJECT_OFFSET))(this, parameter);
		}

		::System::Void TryAddMember(::System::String* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_TRYADDMEMBER_OFFSET))(this, key, value);
		}

		::System::Boolean TryGetValueForKey(::System::String* key, ::System::Object*& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_TRYGETVALUEFORKEY_OFFSET))(this, key, value);
		}

		::System::Boolean ExpandoContainsKey(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDOCONTAINSKEY_OFFSET))(this, key);
		}

		::System::Collections::Generic::ICollection_1<::System::String*>* System_Collections_Generic_IDictionary_System_String_System_Object__get_Keys()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__GET_KEYS_OFFSET))(this);
		}

		::System::Collections::Generic::ICollection_1<::System::Object*>* System_Collections_Generic_IDictionary_System_String_System_Object__get_Values()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__GET_VALUES_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IDictionary_System_String_System_Object__get_Item(::System::String* key)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__GET_ITEM_OFFSET))(this, key);
		}

		::System::Void System_Collections_Generic_IDictionary_System_String_System_Object__set_Item(::System::String* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__SET_ITEM_OFFSET))(this, key, value);
		}

		::System::Void System_Collections_Generic_IDictionary_System_String_System_Object__Add(::System::String* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__ADD_OFFSET))(this, key, value);
		}

		::System::Boolean System_Collections_Generic_IDictionary_System_String_System_Object__ContainsKey(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__CONTAINSKEY_OFFSET))(this, key);
		}

		::System::Boolean System_Collections_Generic_IDictionary_System_String_System_Object__Remove(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__REMOVE_OFFSET))(this, key);
		}

		::System::Boolean System_Collections_Generic_IDictionary_System_String_System_Object__TryGetValue(::System::String* key, ::System::Object*& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_SYSTEM_OBJECT__TRYGETVALUE_OFFSET))(this, key, value);
		}

		::System::Int32 System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_System_Object___get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___GET_COUNT_OFFSET))(this);
		}

		::System::Boolean System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_System_Object___get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___GET_ISREADONLY_OFFSET))(this);
		}

		::System::Void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_System_Object___Add(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___ADD_OFFSET))(this, item);
		}

		::System::Void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_System_Object___Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___CLEAR_OFFSET))(this);
		}

		::System::Boolean System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_System_Object___Contains(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> item)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___CONTAINS_OFFSET))(this, item);
		}

		::System::Void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_System_Object___CopyTo(::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>>* array, ::System::Int32 arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___COPYTO_OFFSET))(this, array, arrayIndex);
		}

		::System::Boolean System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_System_Object___Remove(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> item)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___REMOVE_OFFSET))(this, item);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>>* System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_Object___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_SYSTEM_OBJECT___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>>* GetExpandoEnumerator(::System::Dynamic::ExpandoObject_ExpandoData* data, ::System::Int32 version)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>>*(*)(::PVOID, ::System::Dynamic::ExpandoObject_ExpandoData*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_GETEXPANDOENUMERATOR_OFFSET))(this, data, version);
		}

		::System::Void System_ComponentModel_INotifyPropertyChanged_add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COMPONENTMODEL_INOTIFYPROPERTYCHANGED_ADD_PROPERTYCHANGED_OFFSET))(this, value);
		}

		::System::Void System_ComponentModel_INotifyPropertyChanged_remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM_COMPONENTMODEL_INOTIFYPROPERTYCHANGED_REMOVE_PROPERTYCHANGED_OFFSET))(this, value);
		}
	};
}
