#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaObjectTable_XmlSchemaObjectEntry.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_VALUESCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1E49FAA0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_VALUESCOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E49FBA0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_VALUESCOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1E49F9A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_VALUESCOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1E49FA90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_VALUESCOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1E49F9B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_VALUESCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E49F990)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaObjectTable_ValuesCollection_TypeDefinitionIndex = 2176;

	class XmlSchemaObjectTable_ValuesCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* entries; // 0x10
		::System::Int32 size; // 0x18

		::System::Void _ctor(::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* entries, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_VALUESCOLLECTION__CTOR_OFFSET))(this, entries, size);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_VALUESCOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_VALUESCOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_VALUESCOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_VALUESCOLLECTION_COPYTO_OFFSET))(this, array, arrayIndex);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_VALUESCOLLECTION_GETENUMERATOR_OFFSET))(this);
		}
	};
}
