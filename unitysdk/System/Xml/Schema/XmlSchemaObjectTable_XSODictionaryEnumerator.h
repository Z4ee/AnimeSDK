#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/DictionaryEntry.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaObjectTable_EnumeratorType.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaObjectTable_XSOEnumerator.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaObjectTable_XmlSchemaObjectEntry.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_XSODICTIONARYENUMERATOR_GET_ENTRY_OFFSET UNITYSDK_OFFSET(0x19D3ADE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_XSODICTIONARYENUMERATOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0x19D3AF30)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_XSODICTIONARYENUMERATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x19D3B070)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_XSODICTIONARYENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19D3ADC0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaObjectTable_XSODictionaryEnumerator_TypeDefinitionIndex = 2179;

	class XmlSchemaObjectTable_XSODictionaryEnumerator : public ::System::Xml::Schema::XmlSchemaObjectTable_XSOEnumerator
	{
	public:
		::System::Void _ctor(::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* entries, ::System::Int32 size, ::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType enumType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>*, ::System::Int32, ::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_XSODICTIONARYENUMERATOR__CTOR_OFFSET))(this, entries, size, enumType);
		}

		::System::Collections::DictionaryEntry get_Entry()
		{
			return ((::System::Collections::DictionaryEntry(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_XSODICTIONARYENUMERATOR_GET_ENTRY_OFFSET))(this);
		}

		::System::Object* get_Key()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_XSODICTIONARYENUMERATOR_GET_KEY_OFFSET))(this);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_XSODICTIONARYENUMERATOR_GET_VALUE_OFFSET))(this);
		}
	};
}
