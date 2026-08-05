#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/AttributeCollection_AttributeEntry.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class Attribute; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class IEnumerator; }

#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0x1D614580)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1D614510)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1D6139C0)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_FROMEXISTING_OFFSET UNITYSDK_OFFSET(0x1D613580)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GETDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D613FE0)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D614640)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1D6139F0)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1D6139A0)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1D613A40)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D613A00)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_MATCHES_1_OFFSET UNITYSDK_OFFSET(0x1D6146F0)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_MATCHES_OFFSET UNITYSDK_OFFSET(0x1D614660)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1D6147D0)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1D6147F0)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1D614800)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D614810)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D614830)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D613570)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6134C0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int AttributeCollection_TypeDefinitionIndex = 2815;

	class AttributeCollection : public ::System::Object
	{
	public:
		static ::System::Collections::Hashtable** StaticGet__defaultAttributes()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(AttributeCollection_TypeDefinitionIndex)->GetStaticField(0x32C0);
		}
		static ::System::Object** StaticGet_internalSyncObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AttributeCollection_TypeDefinitionIndex)->GetStaticField(0x32C8);
		}
		static ::System::ComponentModel::AttributeCollection** StaticGet_Empty()
		{
			return (::System::ComponentModel::AttributeCollection**)Il2CppClass::FromTypeDefinitionIndex(AttributeCollection_TypeDefinitionIndex)->GetStaticField(0x32D0);
		}
		// static const ::System::Int32 FOUND_TYPES_LIMIT = 0x5; // 0x0
		::Il2CppArray<::System::Attribute*>* _attributes; // 0x10
		::Il2CppArray<::System::ComponentModel::AttributeCollection_AttributeEntry>* _foundAttributeTypes; // 0x18
		::System::Int32 _index; // 0x20

		::System::Void _ctor(::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION__CTOR_OFFSET))(this, attributes);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION__CTOR_1_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION__CCTOR_OFFSET))();
		}

		static ::System::ComponentModel::AttributeCollection* FromExisting(::System::ComponentModel::AttributeCollection* existing, ::Il2CppArray<::System::Attribute*>* newAttributes)
		{
			return ((::System::ComponentModel::AttributeCollection*(*)(::System::ComponentModel::AttributeCollection*, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_FROMEXISTING_OFFSET))(existing, newAttributes);
		}

		::Il2CppArray<::System::Attribute*>* get_Attributes()
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Attribute* get_Item(::System::Int32 index)
		{
			return ((::System::Attribute*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Attribute* get_Item_1(::System::Type* attributeType)
		{
			return ((::System::Attribute*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GET_ITEM_1_OFFSET))(this, attributeType);
		}

		::System::Boolean Contains(::System::Attribute* attribute)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Attribute*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_CONTAINS_OFFSET))(this, attribute);
		}

		::System::Boolean Contains_1(::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_CONTAINS_1_OFFSET))(this, attributes);
		}

		::System::Attribute* GetDefaultAttribute(::System::Type* attributeType)
		{
			return ((::System::Attribute*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GETDEFAULTATTRIBUTE_OFFSET))(this, attributeType);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Boolean Matches(::System::Attribute* attribute)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Attribute*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_MATCHES_OFFSET))(this, attribute);
		}

		::System::Boolean Matches_1(::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_MATCHES_1_OFFSET))(this, attributes);
		}

		::System::Int32 System_Collections_ICollection_get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean System_Collections_ICollection_get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* System_Collections_ICollection_get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
