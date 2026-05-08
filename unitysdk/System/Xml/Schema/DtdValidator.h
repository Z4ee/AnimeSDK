#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/BaseValidator.h"
#include "unitysdk/System/Xml/XmlTokenizedType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Xml { class HWStack; }
namespace System::Xml { class IDtdParserAdapter; }
namespace System::Xml { class IValidationEventHandling; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml { class XmlValidatingReaderImpl; }
namespace System::Xml::Schema { class DtdValidator_NamespaceManager; }
namespace System::Xml::Schema { class IdRefNode; }
namespace System::Xml::Schema { class SchemaAttDef; }
namespace System::Xml::Schema { class SchemaEntity; }
namespace System::Xml::Schema { class SchemaInfo; }

#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_ADDID_OFFSET UNITYSDK_OFFSET(0x1AE87000)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_CHECKDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1AE87420)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_CHECKFORWARDREFS_OFFSET UNITYSDK_OFFSET(0x1AE86B30)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_CHECKVALUE_OFFSET UNITYSDK_OFFSET(0x1AE86210)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_COMPLETEVALIDATION_OFFSET UNITYSDK_OFFSET(0x1AE86A00)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_FINDID_OFFSET UNITYSDK_OFFSET(0x1AE86FE0)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_GENENTITY_OFFSET UNITYSDK_OFFSET(0x1AE85360)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_GETENTITY_OFFSET UNITYSDK_OFFSET(0x1AE870E0)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_GET_PRESERVEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1AE86C70)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_INIT_OFFSET UNITYSDK_OFFSET(0x1AE84A50)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_MEETSSTANDALONECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1AE85200)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_POP_OFFSET UNITYSDK_OFFSET(0x1AE86A50)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_PROCESSELEMENT_OFFSET UNITYSDK_OFFSET(0x1AE85A10)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_PROCESSTOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x1AE86CC0)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_PUSH_OFFSET UNITYSDK_OFFSET(0x1AE84C30)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_SETDEFAULTTYPEDVALUE_OFFSET UNITYSDK_OFFSET(0x1AE87240)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_VALIDATECHILDELEMENT_OFFSET UNITYSDK_OFFSET(0x1AE85830)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_VALIDATEELEMENT_OFFSET UNITYSDK_OFFSET(0x1AE85080)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_VALIDATEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1AE85610)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_VALIDATEENDSTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1AE867F0)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_VALIDATEPICOMMENT_OFFSET UNITYSDK_OFFSET(0x1AE852B0)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_VALIDATESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1AE85BA0)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1AE84D70)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE87720)
#define SYSTEM_XML_SCHEMA_DTDVALIDATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE849B0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int DtdValidator_TypeDefinitionIndex = 2051;

	class DtdValidator : public ::System::Xml::Schema::BaseValidator
	{
	public:
		static ::System::Xml::Schema::DtdValidator_NamespaceManager** StaticGet_namespaceManager()
		{
			return (::System::Xml::Schema::DtdValidator_NamespaceManager**)Il2CppClass::FromTypeDefinitionIndex(DtdValidator_TypeDefinitionIndex)->GetStaticField(0x2260);
		}
		::System::Collections::Hashtable* IDs; // 0x80
		::System::Collections::Hashtable* attPresence; // 0x88
		::System::Xml::Schema::IdRefNode* idRefListHead; // 0x90
		::System::Xml::XmlQualifiedName* name; // 0x98
		::System::Xml::HWStack* validationStack; // 0xA0
		::System::Boolean processIdentityConstraints; // 0xA8

		::System::Void _ctor(::System::Xml::XmlValidatingReaderImpl* reader, ::System::Xml::IValidationEventHandling* eventHandling, ::System::Boolean processIdentityConstraints)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlValidatingReaderImpl*, ::System::Xml::IValidationEventHandling*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR__CTOR_OFFSET))(this, reader, eventHandling, processIdentityConstraints);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_INIT_OFFSET))(this);
		}

		::System::Void Validate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_VALIDATE_OFFSET))(this);
		}

		::System::Boolean MeetsStandAloneConstraint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_MEETSSTANDALONECONSTRAINT_OFFSET))(this);
		}

		::System::Void ValidatePIComment()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_VALIDATEPICOMMENT_OFFSET))(this);
		}

		::System::Void ValidateElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_VALIDATEELEMENT_OFFSET))(this);
		}

		::System::Void ValidateChildElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_VALIDATECHILDELEMENT_OFFSET))(this);
		}

		::System::Void ValidateStartElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_VALIDATESTARTELEMENT_OFFSET))(this);
		}

		::System::Void ValidateEndStartElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_VALIDATEENDSTARTELEMENT_OFFSET))(this);
		}

		::System::Void ProcessElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_PROCESSELEMENT_OFFSET))(this);
		}

		::System::Void CompleteValidation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_COMPLETEVALIDATION_OFFSET))(this);
		}

		::System::Void ValidateEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_VALIDATEENDELEMENT_OFFSET))(this);
		}

		::System::Boolean get_PreserveWhitespace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_GET_PRESERVEWHITESPACE_OFFSET))(this);
		}

		::System::Void ProcessTokenizedType(::System::Xml::XmlTokenizedType ttype, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlTokenizedType, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_PROCESSTOKENIZEDTYPE_OFFSET))(this, ttype, name);
		}

		::System::Void CheckValue(::System::String* value, ::System::Xml::Schema::SchemaAttDef* attdef)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::Schema::SchemaAttDef*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_CHECKVALUE_OFFSET))(this, value, attdef);
		}

		::System::Void AddID(::System::String* name, ::System::Object* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_ADDID_OFFSET))(this, name, node);
		}

		::System::Object* FindId(::System::String* name)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_FINDID_OFFSET))(this, name);
		}

		::System::Boolean GenEntity(::System::Xml::XmlQualifiedName* qname)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_GENENTITY_OFFSET))(this, qname);
		}

		::System::Xml::Schema::SchemaEntity* GetEntity(::System::Xml::XmlQualifiedName* qname, ::System::Boolean fParameterEntity)
		{
			return ((::System::Xml::Schema::SchemaEntity*(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_GETENTITY_OFFSET))(this, qname, fParameterEntity);
		}

		::System::Void CheckForwardRefs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_CHECKFORWARDREFS_OFFSET))(this);
		}

		::System::Void Push(::System::Xml::XmlQualifiedName* elementName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_PUSH_OFFSET))(this, elementName);
		}

		::System::Boolean Pop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_POP_OFFSET))(this);
		}

		static ::System::Void SetDefaultTypedValue(::System::Xml::Schema::SchemaAttDef* attdef, ::System::Xml::IDtdParserAdapter* readerAdapter)
		{
			return ((::System::Void(*)(::System::Xml::Schema::SchemaAttDef*, ::System::Xml::IDtdParserAdapter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_SETDEFAULTTYPEDVALUE_OFFSET))(attdef, readerAdapter);
		}

		static ::System::Void CheckDefaultValue(::System::Xml::Schema::SchemaAttDef* attdef, ::System::Xml::Schema::SchemaInfo* sinfo, ::System::Xml::IValidationEventHandling* eventHandling, ::System::String* baseUriStr)
		{
			return ((::System::Void(*)(::System::Xml::Schema::SchemaAttDef*, ::System::Xml::Schema::SchemaInfo*, ::System::Xml::IValidationEventHandling*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DTDVALIDATOR_CHECKDEFAULTVALUE_OFFSET))(attdef, sinfo, eventHandling, baseUriStr);
		}
	};
}
