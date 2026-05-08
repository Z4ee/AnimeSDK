#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/XmlSeverityType.h"
#include "unitysdk/System/Xml/ValidationType.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Text { class StringBuilder; }
namespace System::Xml { class IDtdInfo; }
namespace System::Xml { class IValidationEventHandling; }
namespace System::Xml { class PositionInfo; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml { class XmlResolver; }
namespace System::Xml { class XmlValidatingReaderImpl; }
namespace System::Xml::Schema { class SchemaInfo; }
namespace System::Xml::Schema { class SchemaNames; }
namespace System::Xml::Schema { class ValidationEventHandler; }
namespace System::Xml::Schema { class ValidationState; }
namespace System::Xml::Schema { class XmlSchemaCollection; }
namespace System::Xml::Schema { class XmlSchemaException; }

#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_COMPLETEVALIDATION_OFFSET UNITYSDK_OFFSET(0x1B992230)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1B9933C0)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_FINDID_OFFSET UNITYSDK_OFFSET(0x1B992240)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_GET_EVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1B992110)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_GET_PRESERVEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1B992210)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_GET_SCHEMANAMES_OFFSET UNITYSDK_OFFSET(0x1B992030)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_PROCESSENTITY_1_OFFSET UNITYSDK_OFFSET(0x1B9931C0)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_PROCESSENTITY_OFFSET UNITYSDK_OFFSET(0x1B992F40)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_SAVETEXTVALUE_OFFSET UNITYSDK_OFFSET(0x1B9928B0)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_SENDVALIDATIONEVENT_1_OFFSET UNITYSDK_OFFSET(0x1B9926C0)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_SENDVALIDATIONEVENT_2_OFFSET UNITYSDK_OFFSET(0x1B992590)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_SENDVALIDATIONEVENT_3_OFFSET UNITYSDK_OFFSET(0x1B992B10)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_SENDVALIDATIONEVENT_4_OFFSET UNITYSDK_OFFSET(0x1B992BE0)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_SENDVALIDATIONEVENT_5_OFFSET UNITYSDK_OFFSET(0x1B992D30)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_SENDVALIDATIONEVENT_6_OFFSET UNITYSDK_OFFSET(0x1B992B70)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_SENDVALIDATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1B992B00)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_SET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1B992100)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_SET_DTDINFO_OFFSET UNITYSDK_OFFSET(0x1B992170)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_VALIDATETEXT_OFFSET UNITYSDK_OFFSET(0x1B992250)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_VALIDATEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1B992920)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1B992220)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B991F10)
#define SYSTEM_XML_SCHEMA_BASEVALIDATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B991EC0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int BaseValidator_TypeDefinitionIndex = 1948;

	class BaseValidator : public ::System::Object
	{
	public:
		::System::Xml::XmlQualifiedName* elementName; // 0x10
		::System::Xml::PositionInfo* positionInfo; // 0x18
		::System::Xml::IValidationEventHandling* eventHandling; // 0x20
		::System::Xml::XmlValidatingReaderImpl* reader; // 0x28
		::System::Uri* baseUri; // 0x30
		::System::Text::StringBuilder* textValue; // 0x38
		::System::Xml::Schema::SchemaInfo* schemaInfo; // 0x40
		::System::String* textString; // 0x48
		::System::Xml::XmlResolver* xmlResolver; // 0x50
		::System::Xml::Schema::ValidationState* context; // 0x58
		::System::Xml::Schema::XmlSchemaCollection* schemaCollection; // 0x60
		::System::Xml::Schema::SchemaNames* schemaNames; // 0x68
		::System::Xml::XmlNameTable* nameTable; // 0x70
		::System::Boolean checkDatatype; // 0x78
		::System::Boolean hasSibling; // 0x79

		::System::Void _ctor(::System::Xml::Schema::BaseValidator* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::BaseValidator*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR__CTOR_OFFSET))(this, other);
		}

		::System::Void _ctor_1(::System::Xml::XmlValidatingReaderImpl* reader, ::System::Xml::Schema::XmlSchemaCollection* schemaCollection, ::System::Xml::IValidationEventHandling* eventHandling)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlValidatingReaderImpl*, ::System::Xml::Schema::XmlSchemaCollection*, ::System::Xml::IValidationEventHandling*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR__CTOR_1_OFFSET))(this, reader, schemaCollection, eventHandling);
		}

		::System::Xml::Schema::SchemaNames* get_SchemaNames()
		{
			return ((::System::Xml::Schema::SchemaNames*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_GET_SCHEMANAMES_OFFSET))(this);
		}

		::System::Void set_BaseUri(::System::Uri* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_SET_BASEURI_OFFSET))(this, value);
		}

		::System::Xml::Schema::ValidationEventHandler* get_EventHandler()
		{
			return ((::System::Xml::Schema::ValidationEventHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_GET_EVENTHANDLER_OFFSET))(this);
		}

		::System::Void set_DtdInfo(::System::Xml::IDtdInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::IDtdInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_SET_DTDINFO_OFFSET))(this, value);
		}

		::System::Boolean get_PreserveWhitespace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_GET_PRESERVEWHITESPACE_OFFSET))(this);
		}

		::System::Void Validate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_VALIDATE_OFFSET))(this);
		}

		::System::Void CompleteValidation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_COMPLETEVALIDATION_OFFSET))(this);
		}

		::System::Object* FindId(::System::String* name)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_FINDID_OFFSET))(this, name);
		}

		::System::Void ValidateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_VALIDATETEXT_OFFSET))(this);
		}

		::System::Void ValidateWhitespace()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_VALIDATEWHITESPACE_OFFSET))(this);
		}

		::System::Void SaveTextValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_SAVETEXTVALUE_OFFSET))(this, value);
		}

		::System::Void SendValidationEvent(::System::String* code)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_SENDVALIDATIONEVENT_OFFSET))(this, code);
		}

		::System::Void SendValidationEvent_1(::System::String* code, ::Il2CppArray<::System::String*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_SENDVALIDATIONEVENT_1_OFFSET))(this, code, args);
		}

		::System::Void SendValidationEvent_2(::System::String* code, ::System::String* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_SENDVALIDATIONEVENT_2_OFFSET))(this, code, arg);
		}

		::System::Void SendValidationEvent_3(::System::Xml::Schema::XmlSchemaException* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaException*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_SENDVALIDATIONEVENT_3_OFFSET))(this, e);
		}

		::System::Void SendValidationEvent_4(::System::String* code, ::System::String* msg, ::System::Xml::Schema::XmlSeverityType severity)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Xml::Schema::XmlSeverityType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_SENDVALIDATIONEVENT_4_OFFSET))(this, code, msg, severity);
		}

		::System::Void SendValidationEvent_5(::System::String* code, ::Il2CppArray<::System::String*>* args, ::System::Xml::Schema::XmlSeverityType severity)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Xml::Schema::XmlSeverityType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_SENDVALIDATIONEVENT_5_OFFSET))(this, code, args, severity);
		}

		::System::Void SendValidationEvent_6(::System::Xml::Schema::XmlSchemaException* e, ::System::Xml::Schema::XmlSeverityType severity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaException*, ::System::Xml::Schema::XmlSeverityType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_SENDVALIDATIONEVENT_6_OFFSET))(this, e, severity);
		}

		static ::System::Void ProcessEntity(::System::Xml::Schema::SchemaInfo* sinfo, ::System::String* name, ::System::Object* sender, ::System::Xml::Schema::ValidationEventHandler* eventhandler, ::System::String* baseUri, ::System::Int32 lineNumber, ::System::Int32 linePosition)
		{
			return ((::System::Void(*)(::System::Xml::Schema::SchemaInfo*, ::System::String*, ::System::Object*, ::System::Xml::Schema::ValidationEventHandler*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_PROCESSENTITY_OFFSET))(sinfo, name, sender, eventhandler, baseUri, lineNumber, linePosition);
		}

		static ::System::Void ProcessEntity_1(::System::Xml::Schema::SchemaInfo* sinfo, ::System::String* name, ::System::Xml::IValidationEventHandling* eventHandling, ::System::String* baseUriStr, ::System::Int32 lineNumber, ::System::Int32 linePosition)
		{
			return ((::System::Void(*)(::System::Xml::Schema::SchemaInfo*, ::System::String*, ::System::Xml::IValidationEventHandling*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_PROCESSENTITY_1_OFFSET))(sinfo, name, eventHandling, baseUriStr, lineNumber, linePosition);
		}

		static ::System::Xml::Schema::BaseValidator* CreateInstance(::System::Xml::ValidationType valType, ::System::Xml::XmlValidatingReaderImpl* reader, ::System::Xml::Schema::XmlSchemaCollection* schemaCollection, ::System::Xml::IValidationEventHandling* eventHandling, ::System::Boolean processIdentityConstraints)
		{
			return ((::System::Xml::Schema::BaseValidator*(*)(::System::Xml::ValidationType, ::System::Xml::XmlValidatingReaderImpl*, ::System::Xml::Schema::XmlSchemaCollection*, ::System::Xml::IValidationEventHandling*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_BASEVALIDATOR_CREATEINSTANCE_OFFSET))(valType, reader, schemaCollection, eventHandling, processIdentityConstraints);
		}
	};
}
