#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaObjectTable_XmlSchemaObjectEntry.h"

namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class XmlSchemaObject; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_ADD_OFFSET UNITYSDK_OFFSET(0x1D5657C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D565C40)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1D565E50)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_FINDINDEXBYVALUE_OFFSET UNITYSDK_OFFSET(0x1D565A40)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D565FE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1D565E30)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D565ED0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1D565F80)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_INSERT_OFFSET UNITYSDK_OFFSET(0x1D565880)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_REMOVE_OFFSET UNITYSDK_OFFSET(0x1D565CE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_REPLACE_OFFSET UNITYSDK_OFFSET(0x1D565AA0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D565700)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaObjectTable_TypeDefinitionIndex = 2173;

	class XmlSchemaObjectTable : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*>* table; // 0x10
		::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* entries; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE__CTOR_OFFSET))(this);
		}

		::System::Void Add(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::XmlSchemaObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_ADD_OFFSET))(this, name, value);
		}

		::System::Void Insert(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::XmlSchemaObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_INSERT_OFFSET))(this, name, value);
		}

		::System::Void Replace(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::XmlSchemaObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_REPLACE_OFFSET))(this, name, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_CLEAR_OFFSET))(this);
		}

		::System::Void Remove(::System::Xml::XmlQualifiedName* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_REMOVE_OFFSET))(this, name);
		}

		::System::Int32 FindIndexByValue(::System::Xml::Schema::XmlSchemaObject* xso)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_FINDINDEXBYVALUE_OFFSET))(this, xso);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Xml::XmlQualifiedName* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_CONTAINS_OFFSET))(this, name);
		}

		::System::Xml::Schema::XmlSchemaObject* get_Item(::System::Xml::XmlQualifiedName* name)
		{
			return ((::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_GET_ITEM_OFFSET))(this, name);
		}

		::System::Collections::ICollection* get_Values()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_GET_VALUES_OFFSET))(this);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
