#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class IEnumerator; }
namespace System::Threading { class ReaderWriterLock; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlResolver; }
namespace System::Xml::Schema { class SchemaInfo; }
namespace System::Xml::Schema { class SchemaNames; }
namespace System::Xml::Schema { class ValidationEventHandler; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaCollectionEnumerator; }
namespace System::Xml::Schema { class XmlSchemaCollectionNode; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_ADD_1_OFFSET UNITYSDK_OFFSET(0x1D1768F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_ADD_2_OFFSET UNITYSDK_OFFSET(0x1D176A20)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1D1768C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D176470)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_GETSCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x1D1767A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_GETSCHEMANAMES_OFFSET UNITYSDK_OFFSET(0x1D176830)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1D176350)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D176380)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1D1764D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1D176770)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1D176750)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1D176760)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D176410)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D1761D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D176110)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaCollection_TypeDefinitionIndex = 2124;

	class XmlSchemaCollection : public ::System::Object
	{
	public:
		::System::Threading::ReaderWriterLock* wLock; // 0x10
		::System::Xml::Schema::SchemaNames* schemaNames; // 0x18
		::System::Xml::XmlResolver* xmlResolver; // 0x20
		::System::Xml::Schema::ValidationEventHandler* validationEventHandler; // 0x28
		::System::Collections::Hashtable* collection; // 0x30
		::System::Xml::XmlNameTable* nameTable; // 0x38
		::System::Int32 timeout; // 0x40
		::System::Boolean isThreadSafe; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Xml::XmlNameTable* nametable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION__CTOR_1_OFFSET))(this, nametable);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchema* get_Item(::System::String* ns)
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_GET_ITEM_OFFSET))(this, ns);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaCollectionEnumerator* GetEnumerator()
		{
			return ((::System::Xml::Schema::XmlSchemaCollectionEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void System_Collections_ICollection_CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Boolean System_Collections_ICollection_get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* System_Collections_ICollection_get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Int32 System_Collections_ICollection_get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Xml::Schema::SchemaInfo* GetSchemaInfo(::System::String* ns)
		{
			return ((::System::Xml::Schema::SchemaInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_GETSCHEMAINFO_OFFSET))(this, ns);
		}

		::System::Xml::Schema::SchemaNames* GetSchemaNames(::System::Xml::XmlNameTable* nt)
		{
			return ((::System::Xml::Schema::SchemaNames*(*)(::PVOID, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_GETSCHEMANAMES_OFFSET))(this, nt);
		}

		::System::Xml::Schema::XmlSchema* Add(::System::String* ns, ::System::Xml::Schema::SchemaInfo* schemaInfo, ::System::Xml::Schema::XmlSchema* schema, ::System::Boolean compile)
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID, ::System::String*, ::System::Xml::Schema::SchemaInfo*, ::System::Xml::Schema::XmlSchema*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_ADD_OFFSET))(this, ns, schemaInfo, schema, compile);
		}

		::System::Xml::Schema::XmlSchema* Add_1(::System::String* ns, ::System::Xml::Schema::SchemaInfo* schemaInfo, ::System::Xml::Schema::XmlSchema* schema, ::System::Boolean compile, ::System::Xml::XmlResolver* resolver)
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID, ::System::String*, ::System::Xml::Schema::SchemaInfo*, ::System::Xml::Schema::XmlSchema*, ::System::Boolean, ::System::Xml::XmlResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_ADD_1_OFFSET))(this, ns, schemaInfo, schema, compile, resolver);
		}

		::System::Void Add_2(::System::String* ns, ::System::Xml::Schema::XmlSchemaCollectionNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::Schema::XmlSchemaCollectionNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMACOLLECTION_ADD_2_OFFSET))(this, ns, node);
		}
	};
}
