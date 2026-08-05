#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaObjectTable_EnumeratorType.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaObjectTable_XmlSchemaObjectEntry.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class XmlSchemaObject; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_XSOENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F14ECE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_XSOENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F14EE60)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_XSOENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F14EED0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_XSOENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F14ECC0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaObjectTable_XSOEnumerator_TypeDefinitionIndex = 2177;

	class XmlSchemaObjectTable_XSOEnumerator : public ::System::Object
	{
	public:
		::System::Xml::XmlQualifiedName* currentKey; // 0x10
		::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* entries; // 0x18
		::System::Xml::Schema::XmlSchemaObject* currentValue; // 0x20
		::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType enumType; // 0x28
		::System::Int32 currentIndex; // 0x2C
		::System::Int32 size; // 0x30

		::System::Void _ctor(::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>* entries, ::System::Int32 size, ::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType enumType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Xml::Schema::XmlSchemaObjectTable_XmlSchemaObjectEntry>*, ::System::Int32, ::System::Xml::Schema::XmlSchemaObjectTable_EnumeratorType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_XSOENUMERATOR__CTOR_OFFSET))(this, entries, size, enumType);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_XSOENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_XSOENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTTABLE_XSOENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
