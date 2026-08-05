#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System { class Object; }
namespace System::Xml::Schema { class XmlSchemaObject; }
namespace System::Xml::Schema { class XmlSchemaObjectEnumerator; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ADD_1_OFFSET UNITYSDK_OFFSET(0x1D565160)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1D564CE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_CLONE_OFFSET UNITYSDK_OFFSET(0x1D564FD0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D564BC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D5649D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x1D564DC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1D564FB0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ONINSERT_OFFSET UNITYSDK_OFFSET(0x1D564F90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x1D564FC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ONSET_OFFSET UNITYSDK_OFFSET(0x1D564FA0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1D564EB0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D564AE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D564930)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaObjectCollection_TypeDefinitionIndex = 2171;

	class XmlSchemaObjectCollection : public ::System::Collections::CollectionBase
	{
	public:
		::System::Xml::Schema::XmlSchemaObject* parent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaObject* get_Item(::System::Int32 index)
		{
			return ((::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Xml::Schema::XmlSchemaObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Xml::Schema::XmlSchemaObjectEnumerator* GetEnumerator()
		{
			return ((::System::Xml::Schema::XmlSchemaObjectEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 Add(::System::Xml::Schema::XmlSchemaObject* item)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ADD_OFFSET))(this, item);
		}

		::System::Void Insert(::System::Int32 index, ::System::Xml::Schema::XmlSchemaObject* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_INSERT_OFFSET))(this, index, item);
		}

		::System::Void Remove(::System::Xml::Schema::XmlSchemaObject* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_REMOVE_OFFSET))(this, item);
		}

		::System::Void OnInsert(::System::Int32 index, ::System::Object* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ONINSERT_OFFSET))(this, index, item);
		}

		::System::Void OnSet(::System::Int32 index, ::System::Object* oldValue, ::System::Object* newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ONSET_OFFSET))(this, index, oldValue, newValue);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ONCLEAR_OFFSET))(this);
		}

		::System::Void OnRemove(::System::Int32 index, ::System::Object* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ONREMOVE_OFFSET))(this, index, item);
		}

		::System::Xml::Schema::XmlSchemaObjectCollection* Clone()
		{
			return ((::System::Xml::Schema::XmlSchemaObjectCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_CLONE_OFFSET))(this);
		}

		::System::Void Add_1(::System::Xml::Schema::XmlSchemaObjectCollection* collToAdd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObjectCollection*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ADD_1_OFFSET))(this, collToAdd);
		}
	};
}
