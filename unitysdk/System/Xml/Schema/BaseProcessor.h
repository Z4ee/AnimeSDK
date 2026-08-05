#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/XmlSeverityType.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class SchemaNames; }
namespace System::Xml::Schema { class ValidationEventHandler; }
namespace System::Xml::Schema { class XmlSchemaCompilationSettings; }
namespace System::Xml::Schema { class XmlSchemaException; }
namespace System::Xml::Schema { class XmlSchemaObject; }
namespace System::Xml::Schema { class XmlSchemaObjectTable; }

#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_ADDTOTABLE_OFFSET UNITYSDK_OFFSET(0x1DC48E10)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_GET_HASERRORS_OFFSET UNITYSDK_OFFSET(0x1DC48E00)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_GET_SCHEMANAMES_OFFSET UNITYSDK_OFFSET(0x1DC48D90)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_ISVALIDATTRIBUTEGROUPREDEFINE_OFFSET UNITYSDK_OFFSET(0x1DC491E0)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_ISVALIDGROUPREDEFINE_OFFSET UNITYSDK_OFFSET(0x1DC49490)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_ISVALIDTYPEREDEFINE_OFFSET UNITYSDK_OFFSET(0x1DC49380)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENTNOTHROW_OFFSET UNITYSDK_OFFSET(0x1DC4A1E0)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_1_OFFSET UNITYSDK_OFFSET(0x1DC495A0)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_2_OFFSET UNITYSDK_OFFSET(0x1DC498D0)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_3_OFFSET UNITYSDK_OFFSET(0x1DC49A70)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_4_OFFSET UNITYSDK_OFFSET(0x1DC49C80)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_5_OFFSET UNITYSDK_OFFSET(0x1DC49EE0)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_6_OFFSET UNITYSDK_OFFSET(0x1DC4A000)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_7_OFFSET UNITYSDK_OFFSET(0x1DC4A0C0)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_8_OFFSET UNITYSDK_OFFSET(0x1DC497F0)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1DC496D0)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DC48D10)
#define SYSTEM_XML_SCHEMA_BASEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC48C70)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int BaseProcessor_TypeDefinitionIndex = 1946;

	class BaseProcessor : public ::System::Object
	{
	public:
		::System::Xml::Schema::SchemaNames* schemaNames; // 0x10
		::System::Xml::XmlNameTable* nameTable; // 0x18
		::System::Xml::Schema::ValidationEventHandler* eventHandler; // 0x20
		::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings; // 0x28
		::System::String* NsXml; // 0x30
		::System::Int32 errorCount; // 0x38

		::System::Void _ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames, ::System::Xml::Schema::ValidationEventHandler* eventHandler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNameTable*, ::System::Xml::Schema::SchemaNames*, ::System::Xml::Schema::ValidationEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR__CTOR_OFFSET))(this, nameTable, schemaNames, eventHandler);
		}

		::System::Void _ctor_1(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames, ::System::Xml::Schema::ValidationEventHandler* eventHandler, ::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNameTable*, ::System::Xml::Schema::SchemaNames*, ::System::Xml::Schema::ValidationEventHandler*, ::System::Xml::Schema::XmlSchemaCompilationSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR__CTOR_1_OFFSET))(this, nameTable, schemaNames, eventHandler, compilationSettings);
		}

		::System::Xml::Schema::SchemaNames* get_SchemaNames()
		{
			return ((::System::Xml::Schema::SchemaNames*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_GET_SCHEMANAMES_OFFSET))(this);
		}

		::System::Boolean get_HasErrors()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_GET_HASERRORS_OFFSET))(this);
		}

		::System::Void AddToTable(::System::Xml::Schema::XmlSchemaObjectTable* table, ::System::Xml::XmlQualifiedName* qname, ::System::Xml::Schema::XmlSchemaObject* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObjectTable*, ::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_ADDTOTABLE_OFFSET))(this, table, qname, item);
		}

		::System::Boolean IsValidAttributeGroupRedefine(::System::Xml::Schema::XmlSchemaObject* existingObject, ::System::Xml::Schema::XmlSchemaObject* item, ::System::Xml::Schema::XmlSchemaObjectTable* table)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObjectTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_ISVALIDATTRIBUTEGROUPREDEFINE_OFFSET))(this, existingObject, item, table);
		}

		::System::Boolean IsValidGroupRedefine(::System::Xml::Schema::XmlSchemaObject* existingObject, ::System::Xml::Schema::XmlSchemaObject* item, ::System::Xml::Schema::XmlSchemaObjectTable* table)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObjectTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_ISVALIDGROUPREDEFINE_OFFSET))(this, existingObject, item, table);
		}

		::System::Boolean IsValidTypeRedefine(::System::Xml::Schema::XmlSchemaObject* existingObject, ::System::Xml::Schema::XmlSchemaObject* item, ::System::Xml::Schema::XmlSchemaObjectTable* table)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObjectTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_ISVALIDTYPEREDEFINE_OFFSET))(this, existingObject, item, table);
		}

		::System::Void SendValidationEvent(::System::String* code, ::System::Xml::Schema::XmlSchemaObject* source)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_OFFSET))(this, code, source);
		}

		::System::Void SendValidationEvent_1(::System::String* code, ::System::String* msg, ::System::Xml::Schema::XmlSchemaObject* source)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_1_OFFSET))(this, code, msg, source);
		}

		::System::Void SendValidationEvent_2(::System::String* code, ::System::String* msg1, ::System::String* msg2, ::System::Xml::Schema::XmlSchemaObject* source)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_2_OFFSET))(this, code, msg1, msg2, source);
		}

		::System::Void SendValidationEvent_3(::System::String* code, ::Il2CppArray<::System::String*>* args, ::System::Exception* innerException, ::System::Xml::Schema::XmlSchemaObject* source)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Exception*, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_3_OFFSET))(this, code, args, innerException, source);
		}

		::System::Void SendValidationEvent_4(::System::String* code, ::System::String* msg1, ::System::String* msg2, ::System::String* sourceUri, ::System::Int32 lineNumber, ::System::Int32 linePosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_4_OFFSET))(this, code, msg1, msg2, sourceUri, lineNumber, linePosition);
		}

		::System::Void SendValidationEvent_5(::System::String* code, ::System::Xml::Schema::XmlSchemaObject* source, ::System::Xml::Schema::XmlSeverityType severity)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSeverityType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_5_OFFSET))(this, code, source, severity);
		}

		::System::Void SendValidationEvent_6(::System::Xml::Schema::XmlSchemaException* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaException*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_6_OFFSET))(this, e);
		}

		::System::Void SendValidationEvent_7(::System::String* code, ::System::String* msg, ::System::Xml::Schema::XmlSchemaObject* source, ::System::Xml::Schema::XmlSeverityType severity)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSeverityType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_7_OFFSET))(this, code, msg, source, severity);
		}

		::System::Void SendValidationEvent_8(::System::Xml::Schema::XmlSchemaException* e, ::System::Xml::Schema::XmlSeverityType severity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaException*, ::System::Xml::Schema::XmlSeverityType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENT_8_OFFSET))(this, e, severity);
		}

		::System::Void SendValidationEventNoThrow(::System::Xml::Schema::XmlSchemaException* e, ::System::Xml::Schema::XmlSeverityType severity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaException*, ::System::Xml::Schema::XmlSeverityType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEPROCESSOR_SENDVALIDATIONEVENTNOTHROW_OFFSET))(this, e, severity);
		}
	};
}
