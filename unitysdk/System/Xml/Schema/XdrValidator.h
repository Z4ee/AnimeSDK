#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/BaseValidator.h"
#include "unitysdk/System/Xml/XmlTokenizedType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Xml { class HWStack; }
namespace System::Xml { class IValidationEventHandling; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlNamespaceManager; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml { class XmlValidatingReaderImpl; }
namespace System::Xml::Schema { class IdRefNode; }
namespace System::Xml::Schema { class Parser; }
namespace System::Xml::Schema { class SchemaAttDef; }
namespace System::Xml::Schema { class SchemaElementDecl; }
namespace System::Xml::Schema { class SchemaInfo; }
namespace System::Xml::Schema { class ValidationEventHandler; }
namespace System::Xml::Schema { class XmlSchemaCollection; }

#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_ADDID_OFFSET UNITYSDK_OFFSET(0x1DC46450)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_CHECKDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1DC46740)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_CHECKFORWARDREFS_OFFSET UNITYSDK_OFFSET(0x1DC46600)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_CHECKVALUE_OFFSET UNITYSDK_OFFSET(0x1DC44F40)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_COMPLETEVALIDATION_OFFSET UNITYSDK_OFFSET(0x1DC46530)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_FINDID_OFFSET UNITYSDK_OFFSET(0x1DC46430)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_GET_HASSCHEMA_OFFSET UNITYSDK_OFFSET(0x1DC460B0)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_GET_ISINLINESCHEMASTARTED_OFFSET UNITYSDK_OFFSET(0x1DC435B0)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_GET_PRESERVEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1DC460D0)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_INIT_OFFSET UNITYSDK_OFFSET(0x1DC430C0)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_LOADSCHEMAFROMLOCATION_OFFSET UNITYSDK_OFFSET(0x1DC45970)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_LOADSCHEMA_OFFSET UNITYSDK_OFFSET(0x1DC45640)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_POP_OFFSET UNITYSDK_OFFSET(0x1DC45570)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_PROCESSELEMENT_OFFSET UNITYSDK_OFFSET(0x1DC43F30)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_PROCESSINLINESCHEMA_OFFSET UNITYSDK_OFFSET(0x1DC435C0)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_PROCESSTOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x1DC46120)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_PUSH_OFFSET UNITYSDK_OFFSET(0x1DC433A0)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_QUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x1DC458B0)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_THOROUGHGETELEMENTDECL_OFFSET UNITYSDK_OFFSET(0x1DC44000)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_VALIDATECHILDELEMENT_OFFSET UNITYSDK_OFFSET(0x1DC43D50)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_VALIDATEELEMENT_OFFSET UNITYSDK_OFFSET(0x1DC43840)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_VALIDATEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1DC43B00)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_VALIDATEENDSTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1DC44C60)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_VALIDATESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1DC44560)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1DC434E0)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DC43310)
#define SYSTEM_XML_SCHEMA_XDRVALIDATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC404A0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XdrValidator_TypeDefinitionIndex = 2109;

	class XdrValidator : public ::System::Xml::Schema::BaseValidator
	{
	public:
		::System::Xml::XmlQualifiedName* name; // 0x80
		::System::Xml::Schema::IdRefNode* idRefListHead; // 0x88
		::System::Xml::XmlNamespaceManager* nsManager; // 0x90
		::System::Collections::Hashtable* attPresence; // 0x98
		::System::Xml::Schema::Parser* inlineSchemaParser; // 0xA0
		::System::Xml::HWStack* validationStack; // 0xA8
		::System::Collections::Hashtable* IDs; // 0xB0
		::System::Boolean isProcessContents; // 0xB8

		::System::Void _ctor(::System::Xml::Schema::BaseValidator* validator)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::BaseValidator*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR__CTOR_OFFSET))(this, validator);
		}

		::System::Void _ctor_1(::System::Xml::XmlValidatingReaderImpl* reader, ::System::Xml::Schema::XmlSchemaCollection* schemaCollection, ::System::Xml::IValidationEventHandling* eventHandling)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlValidatingReaderImpl*, ::System::Xml::Schema::XmlSchemaCollection*, ::System::Xml::IValidationEventHandling*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR__CTOR_1_OFFSET))(this, reader, schemaCollection, eventHandling);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_INIT_OFFSET))(this);
		}

		::System::Void Validate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_VALIDATE_OFFSET))(this);
		}

		::System::Void ValidateElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_VALIDATEELEMENT_OFFSET))(this);
		}

		::System::Void ValidateChildElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_VALIDATECHILDELEMENT_OFFSET))(this);
		}

		::System::Boolean get_IsInlineSchemaStarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_GET_ISINLINESCHEMASTARTED_OFFSET))(this);
		}

		::System::Void ProcessInlineSchema()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_PROCESSINLINESCHEMA_OFFSET))(this);
		}

		::System::Void ProcessElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_PROCESSELEMENT_OFFSET))(this);
		}

		::System::Void ValidateEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_VALIDATEENDELEMENT_OFFSET))(this);
		}

		::System::Xml::Schema::SchemaElementDecl* ThoroughGetElementDecl()
		{
			return ((::System::Xml::Schema::SchemaElementDecl*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_THOROUGHGETELEMENTDECL_OFFSET))(this);
		}

		::System::Void ValidateStartElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_VALIDATESTARTELEMENT_OFFSET))(this);
		}

		::System::Void ValidateEndStartElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_VALIDATEENDSTARTELEMENT_OFFSET))(this);
		}

		::System::Void LoadSchemaFromLocation(::System::String* uri)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_LOADSCHEMAFROMLOCATION_OFFSET))(this, uri);
		}

		::System::Void LoadSchema(::System::String* uri)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_LOADSCHEMA_OFFSET))(this, uri);
		}

		::System::Boolean get_HasSchema()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_GET_HASSCHEMA_OFFSET))(this);
		}

		::System::Boolean get_PreserveWhitespace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_GET_PRESERVEWHITESPACE_OFFSET))(this);
		}

		::System::Void ProcessTokenizedType(::System::Xml::XmlTokenizedType ttype, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlTokenizedType, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_PROCESSTOKENIZEDTYPE_OFFSET))(this, ttype, name);
		}

		::System::Void CompleteValidation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_COMPLETEVALIDATION_OFFSET))(this);
		}

		::System::Void CheckValue(::System::String* value, ::System::Xml::Schema::SchemaAttDef* attdef)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::Schema::SchemaAttDef*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_CHECKVALUE_OFFSET))(this, value, attdef);
		}

		static ::System::Void CheckDefaultValue(::System::String* value, ::System::Xml::Schema::SchemaAttDef* attdef, ::System::Xml::Schema::SchemaInfo* sinfo, ::System::Xml::XmlNamespaceManager* nsManager, ::System::Xml::XmlNameTable* NameTable, ::System::Object* sender, ::System::Xml::Schema::ValidationEventHandler* eventhandler, ::System::String* baseUri, ::System::Int32 lineNo, ::System::Int32 linePos)
		{
			return ((::System::Void(*)(::System::String*, ::System::Xml::Schema::SchemaAttDef*, ::System::Xml::Schema::SchemaInfo*, ::System::Xml::XmlNamespaceManager*, ::System::Xml::XmlNameTable*, ::System::Object*, ::System::Xml::Schema::ValidationEventHandler*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_CHECKDEFAULTVALUE_OFFSET))(value, attdef, sinfo, nsManager, NameTable, sender, eventhandler, baseUri, lineNo, linePos);
		}

		::System::Void AddID(::System::String* name, ::System::Object* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_ADDID_OFFSET))(this, name, node);
		}

		::System::Object* FindId(::System::String* name)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_FINDID_OFFSET))(this, name);
		}

		::System::Void Push(::System::Xml::XmlQualifiedName* elementName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_PUSH_OFFSET))(this, elementName);
		}

		::System::Void Pop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_POP_OFFSET))(this);
		}

		::System::Void CheckForwardRefs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_CHECKFORWARDREFS_OFFSET))(this);
		}

		::System::Xml::XmlQualifiedName* QualifiedName(::System::String* name, ::System::String* ns)
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRVALIDATOR_QUALIFIEDNAME_OFFSET))(this, name, ns);
		}
	};
}
