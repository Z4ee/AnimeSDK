#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/AttributeCollection_AttributeEntry.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class Attribute; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class IEnumerator; }

#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1AF25960)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GETDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AF25310)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AF257D0)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1AF24E80)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1AF24E90)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AF24EC0)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1AF25910)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1AF25940)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1AF25950)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AF259C0)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF25B00)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF24DF0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int AttributeCollection_TypeDefinitionIndex = 2551;

	class AttributeCollection : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_internalSyncObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AttributeCollection_TypeDefinitionIndex)->GetStaticField(0x1BC10);
		}
		static ::System::Collections::Hashtable** StaticGet__defaultAttributes()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(AttributeCollection_TypeDefinitionIndex)->GetStaticField(0x1BC18);
		}
		static ::System::ComponentModel::AttributeCollection** StaticGet_Empty()
		{
			return (::System::ComponentModel::AttributeCollection**)Il2CppClass::FromTypeDefinitionIndex(AttributeCollection_TypeDefinitionIndex)->GetStaticField(0x1BC20);
		}
		::Il2CppArray<::System::Attribute*>* _attributes; // 0x10
		::Il2CppArray<::System::ComponentModel::AttributeCollection_AttributeEntry>* _foundAttributeTypes; // 0x18
		::System::Int32 _index; // 0x20

		::System::Void _ctor(::Il2CppArray<::System::Attribute*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION__CCTOR_OFFSET))();
		}

		::Il2CppArray<::System::Attribute*>* get_Attributes()
		{
			return ((::Il2CppArray<::System::Attribute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Attribute* get_Item(::System::Type* a1)
		{
			return ((::System::Attribute*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Attribute* GetDefaultAttribute(::System::Type* a1)
		{
			return ((::System::Attribute*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GETDEFAULTATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GETENUMERATOR_OFFSET))(this);
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

		::System::Void CopyTo(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
