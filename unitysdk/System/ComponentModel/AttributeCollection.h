#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/AttributeCollection_AttributeEntry.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class Attribute; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class IEnumerator; }

#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x18681F20)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GETDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x186818E0)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18681D90)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x18681310)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x18681320)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x18681350)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x18681ED0)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x18681F00)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x18681F10)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18681F80)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x186820C0)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18681280)

namespace System::ComponentModel
{
	inline static constexpr unsigned int AttributeCollection_TypeDefinitionIndex = 2550;

	class AttributeCollection : public ::System::Object
	{
	public:
		static ::System::ComponentModel::AttributeCollection** StaticGet_Empty()
		{
			return (::System::ComponentModel::AttributeCollection**)Il2CppClass::FromTypeDefinitionIndex(AttributeCollection_TypeDefinitionIndex)->GetStaticField(0xF730);
		}
		static ::System::Collections::Hashtable** StaticGet__defaultAttributes()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(AttributeCollection_TypeDefinitionIndex)->GetStaticField(0xF738);
		}
		static ::System::Object** StaticGet_internalSyncObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AttributeCollection_TypeDefinitionIndex)->GetStaticField(0xF740);
		}
		::Il2CppArray<::System::ComponentModel::AttributeCollection_AttributeEntry>* _foundAttributeTypes; // 0x10
		::Il2CppArray<::System::Attribute*>* _attributes; // 0x18
		::System::Int32 _index; // 0x20

		::System::Void _ctor(::Il2CppArray<::System::Attribute*>* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Attribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION__CTOR_OFFSET))(this, attributes);
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

		::System::Attribute* get_Item(::System::Type* attributeType)
		{
			return ((::System::Attribute*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GET_ITEM_OFFSET))(this, attributeType);
		}

		::System::Attribute* GetDefaultAttribute(::System::Type* attributeType)
		{
			return ((::System::Attribute*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GETDEFAULTATTRIBUTE_OFFSET))(this, attributeType);
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
