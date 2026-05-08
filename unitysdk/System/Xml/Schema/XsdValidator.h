#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/BaseValidator.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContentProcessing.h"
#include "unitysdk/System/Xml/XmlTokenizedType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Xml { class HWStack; }
namespace System::Xml { class IValidationEventHandling; }
namespace System::Xml { class XmlNamespaceManager; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml { class XmlValidatingReaderImpl; }
namespace System::Xml::Schema { class IdRefNode; }
namespace System::Xml::Schema { class Parser; }
namespace System::Xml::Schema { class SchemaAttDef; }
namespace System::Xml::Schema { class SchemaElementDecl; }
namespace System::Xml::Schema { class XmlSchemaCollection; }
namespace System::Xml::Schema { class XmlSchemaDatatype; }

#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_ADDIDENTITYCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1A7757D0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_ADDID_OFFSET UNITYSDK_OFFSET(0x1A7756F0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_ATTRIBUTEIDENTITYCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1A774660)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_CHECKFORWARDREFS_OFFSET UNITYSDK_OFFSET(0x1A76F9B0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_CHECKVALUE_OFFSET UNITYSDK_OFFSET(0x1A7725B0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_COMPLETEVALIDATION_OFFSET UNITYSDK_OFFSET(0x1A76F9A0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_ELEMENTIDENTITYCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1A775E10)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_ENDELEMENTIDENTITYCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1A772B40)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_FASTGETELEMENTDECL_OFFSET UNITYSDK_OFFSET(0x1A770260)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_FINDID_OFFSET UNITYSDK_OFFSET(0x1A7756D0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_GET_HASIDENTITYCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1A772B30)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_GET_HASSCHEMA_OFFSET UNITYSDK_OFFSET(0x1A7713A0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_GET_ISINLINESCHEMASTARTED_OFFSET UNITYSDK_OFFSET(0x1A76F1D0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_GET_PRESERVEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1A775370)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_INIT_OFFSET UNITYSDK_OFFSET(0x1A76EC10)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_ISXSDROOT_OFFSET UNITYSDK_OFFSET(0x1A76FDF0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_LOADSCHEMAFROMLOCATION_OFFSET UNITYSDK_OFFSET(0x1A774CF0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_LOADSCHEMA_OFFSET UNITYSDK_OFFSET(0x1A772300)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_POP_OFFSET UNITYSDK_OFFSET(0x1A7744E0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_PROCESSELEMENT_OFFSET UNITYSDK_OFFSET(0x1A76FE10)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_PROCESSINLINESCHEMA_OFFSET UNITYSDK_OFFSET(0x1A76F1E0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_PROCESSTOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x1A7753C0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_PROCESSXSIATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1A770320)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_PUSH_OFFSET UNITYSDK_OFFSET(0x1A76EFB0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_THOROUGHGETELEMENTDECL_OFFSET UNITYSDK_OFFSET(0x1A770D70)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_UNWRAPUNION_OFFSET UNITYSDK_OFFSET(0x1A7745F0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_VALIDATECHILDELEMENT_OFFSET UNITYSDK_OFFSET(0x1A76FAF0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_VALIDATEELEMENT_OFFSET UNITYSDK_OFFSET(0x1A76F4F0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_VALIDATEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1A76F700)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_VALIDATEENDSTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1A771F20)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_VALIDATESTARTELEMENTIDENTITYCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1A7713C0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_VALIDATESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1A771410)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1A76F100)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7763F0)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A76EF80)
#define SYSTEM_XML_SCHEMA_XSDVALIDATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A76EBB0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XsdValidator_TypeDefinitionIndex = 2236;

	class XsdValidator : public ::System::Xml::Schema::BaseValidator
	{
	public:
		static ::System::Xml::Schema::XmlSchemaDatatype** StaticGet_dtStringArray()
		{
			return (::System::Xml::Schema::XmlSchemaDatatype**)Il2CppClass::FromTypeDefinitionIndex(XsdValidator_TypeDefinitionIndex)->GetStaticField(0x1F90);
		}
		static ::System::Xml::Schema::XmlSchemaDatatype** StaticGet_dtQName()
		{
			return (::System::Xml::Schema::XmlSchemaDatatype**)Il2CppClass::FromTypeDefinitionIndex(XsdValidator_TypeDefinitionIndex)->GetStaticField(0x1F98);
		}
		static ::System::Xml::Schema::XmlSchemaDatatype** StaticGet_dtCDATA()
		{
			return (::System::Xml::Schema::XmlSchemaDatatype**)Il2CppClass::FromTypeDefinitionIndex(XsdValidator_TypeDefinitionIndex)->GetStaticField(0x1FA0);
		}
		::System::String* XsiNil; // 0x80
		::System::Collections::Hashtable* IDs; // 0x88
		::System::String* NsXmlNs; // 0x90
		::System::String* NsXsi; // 0x98
		::System::String* XsiSchemaLocation; // 0xA0
		::System::Xml::Schema::Parser* inlineSchemaParser; // 0xA8
		::System::String* XsiType; // 0xB0
		::System::String* NsXs; // 0xB8
		::System::Xml::XmlNamespaceManager* nsManager; // 0xC0
		::System::Xml::HWStack* validationStack; // 0xC8
		::System::Xml::Schema::IdRefNode* idRefListHead; // 0xD0
		::System::String* XsdSchema; // 0xD8
		::System::Collections::Hashtable* attPresence; // 0xE0
		::System::String* XsiNoNamespaceSchemaLocation; // 0xE8
		::System::Boolean bManageNamespaces; // 0xF0
		::System::Xml::Schema::XmlSchemaContentProcessing processContents; // 0xF4
		::System::Int32 startIDConstraint; // 0xF8

		::System::Void _ctor(::System::Xml::Schema::BaseValidator* validator)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::BaseValidator*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR__CTOR_OFFSET))(this, validator);
		}

		::System::Void _ctor_1(::System::Xml::XmlValidatingReaderImpl* reader, ::System::Xml::Schema::XmlSchemaCollection* schemaCollection, ::System::Xml::IValidationEventHandling* eventHandling)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlValidatingReaderImpl*, ::System::Xml::Schema::XmlSchemaCollection*, ::System::Xml::IValidationEventHandling*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR__CTOR_1_OFFSET))(this, reader, schemaCollection, eventHandling);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_INIT_OFFSET))(this);
		}

		::System::Void Validate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_VALIDATE_OFFSET))(this);
		}

		::System::Void CompleteValidation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_COMPLETEVALIDATION_OFFSET))(this);
		}

		::System::Boolean get_IsInlineSchemaStarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_GET_ISINLINESCHEMASTARTED_OFFSET))(this);
		}

		::System::Void ProcessInlineSchema()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_PROCESSINLINESCHEMA_OFFSET))(this);
		}

		::System::Void ValidateElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_VALIDATEELEMENT_OFFSET))(this);
		}

		::System::Object* ValidateChildElement()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_VALIDATECHILDELEMENT_OFFSET))(this);
		}

		::System::Void ProcessElement(::System::Object* particle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_PROCESSELEMENT_OFFSET))(this, particle);
		}

		::System::Void ProcessXsiAttributes(::System::Xml::XmlQualifiedName*& xsiType, ::System::String*& xsiNil)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_PROCESSXSIATTRIBUTES_OFFSET))(this, xsiType, xsiNil);
		}

		::System::Void ValidateEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_VALIDATEENDELEMENT_OFFSET))(this);
		}

		::System::Xml::Schema::SchemaElementDecl* FastGetElementDecl(::System::Object* particle)
		{
			return ((::System::Xml::Schema::SchemaElementDecl*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_FASTGETELEMENTDECL_OFFSET))(this, particle);
		}

		::System::Xml::Schema::SchemaElementDecl* ThoroughGetElementDecl(::System::Xml::Schema::SchemaElementDecl* elementDecl, ::System::Xml::XmlQualifiedName* xsiType, ::System::String* xsiNil)
		{
			return ((::System::Xml::Schema::SchemaElementDecl*(*)(::PVOID, ::System::Xml::Schema::SchemaElementDecl*, ::System::Xml::XmlQualifiedName*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_THOROUGHGETELEMENTDECL_OFFSET))(this, elementDecl, xsiType, xsiNil);
		}

		::System::Void ValidateStartElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_VALIDATESTARTELEMENT_OFFSET))(this);
		}

		::System::Void ValidateEndStartElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_VALIDATEENDSTARTELEMENT_OFFSET))(this);
		}

		::System::Void LoadSchemaFromLocation(::System::String* uri, ::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_LOADSCHEMAFROMLOCATION_OFFSET))(this, uri, url);
		}

		::System::Void LoadSchema(::System::String* uri, ::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_LOADSCHEMA_OFFSET))(this, uri, url);
		}

		::System::Boolean get_HasSchema()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_GET_HASSCHEMA_OFFSET))(this);
		}

		::System::Boolean get_PreserveWhitespace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_GET_PRESERVEWHITESPACE_OFFSET))(this);
		}

		::System::Void ProcessTokenizedType(::System::Xml::XmlTokenizedType ttype, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlTokenizedType, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_PROCESSTOKENIZEDTYPE_OFFSET))(this, ttype, name);
		}

		::System::Void CheckValue(::System::String* value, ::System::Xml::Schema::SchemaAttDef* attdef)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::Schema::SchemaAttDef*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_CHECKVALUE_OFFSET))(this, value, attdef);
		}

		::System::Void AddID(::System::String* name, ::System::Object* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_ADDID_OFFSET))(this, name, node);
		}

		::System::Object* FindId(::System::String* name)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_FINDID_OFFSET))(this, name);
		}

		::System::Boolean IsXSDRoot(::System::String* localName, ::System::String* ns)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_ISXSDROOT_OFFSET))(this, localName, ns);
		}

		::System::Void Push(::System::Xml::XmlQualifiedName* elementName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_PUSH_OFFSET))(this, elementName);
		}

		::System::Void Pop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_POP_OFFSET))(this);
		}

		::System::Void CheckForwardRefs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_CHECKFORWARDREFS_OFFSET))(this);
		}

		::System::Void ValidateStartElementIdentityConstraints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_VALIDATESTARTELEMENTIDENTITYCONSTRAINTS_OFFSET))(this);
		}

		::System::Boolean get_HasIdentityConstraints()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_GET_HASIDENTITYCONSTRAINTS_OFFSET))(this);
		}

		::System::Void AddIdentityConstraints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_ADDIDENTITYCONSTRAINTS_OFFSET))(this);
		}

		::System::Void ElementIdentityConstraints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_ELEMENTIDENTITYCONSTRAINTS_OFFSET))(this);
		}

		::System::Void AttributeIdentityConstraints(::System::String* name, ::System::String* ns, ::System::Object* obj, ::System::String* sobj, ::System::Xml::Schema::SchemaAttDef* attdef)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Object*, ::System::String*, ::System::Xml::Schema::SchemaAttDef*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_ATTRIBUTEIDENTITYCONSTRAINTS_OFFSET))(this, name, ns, obj, sobj, attdef);
		}

		::System::Object* UnWrapUnion(::System::Object* typedValue)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_UNWRAPUNION_OFFSET))(this, typedValue);
		}

		::System::Void EndElementIdentityConstraints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XSDVALIDATOR_ENDELEMENTIDENTITYCONSTRAINTS_OFFSET))(this);
		}
	};
}
