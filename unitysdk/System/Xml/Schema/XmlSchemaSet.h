#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class Hashtable; }
namespace System::Collections { class SortedList; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlReaderSettings; }
namespace System::Xml::Schema { class SchemaInfo; }
namespace System::Xml::Schema { class ValidationEventArgs; }
namespace System::Xml::Schema { class ValidationEventHandler; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaCompilationSettings; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_COPYTO_OFFSET UNITYSDK_OFFSET(0x19677640)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x196775B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET_INTERNALVALIDATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x19677870)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19677260)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASET__CTOR_OFFSET UNITYSDK_OFFSET(0x196771A0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaSet_TypeDefinitionIndex = 2203;

	class XmlSchemaSet : public ::System::Object
	{
	public:
		::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings; // 0x10
		::System::Collections::SortedList* schemas; // 0x18
		::System::Xml::XmlReaderSettings* readerSettings; // 0x20
		::System::Xml::Schema::ValidationEventHandler* eventHandler; // 0x28
		::System::Collections::Hashtable* chameleonSchemas; // 0x30
		::System::Collections::Hashtable* targetNamespaces; // 0x38
		::System::Xml::Schema::SchemaInfo* cachedCompiledInfo; // 0x40
		::System::Xml::XmlNameTable* nameTable; // 0x48
		::System::Collections::Hashtable* schemaLocations; // 0x50
		::System::Xml::Schema::ValidationEventHandler* internalEventHandler; // 0x58
		::System::Boolean compileAll; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Xml::XmlNameTable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET__CTOR_1_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_GET_COUNT_OFFSET))(this);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Xml::Schema::XmlSchema*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Xml::Schema::XmlSchema*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Void InternalValidationCallback(::System::Object* a1, ::System::Xml::Schema::ValidationEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::Schema::ValidationEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASET_INTERNALVALIDATIONCALLBACK_OFFSET))(this, a1, a2);
		}
	};
}
