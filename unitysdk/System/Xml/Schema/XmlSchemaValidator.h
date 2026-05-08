#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/ValidatorState.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContentProcessing.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContentType.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaValidationFlags.h"
#include "unitysdk/System/Xml/Schema/XmlSeverityType.h"
#include "unitysdk/System/Xml/XmlCharType.h"
#include "unitysdk/System/Xml/XmlTokenizedType.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Text { class StringBuilder; }
namespace System::Xml { class HWStack; }
namespace System::Xml { class IDtdInfo; }
namespace System::Xml { class IXmlLineInfo; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml { class XmlResolver; }
namespace System::Xml::Schema { class IdRefNode; }
namespace System::Xml::Schema { class SchemaAttDef; }
namespace System::Xml::Schema { class SchemaDeclBase; }
namespace System::Xml::Schema { class SchemaElementDecl; }
namespace System::Xml::Schema { class SchemaInfo; }
namespace System::Xml::Schema { class ValidationEventHandler; }
namespace System::Xml::Schema { class ValidationState; }
namespace System::Xml::Schema { class XmlSchema; }
namespace System::Xml::Schema { class XmlSchemaAttribute; }
namespace System::Xml::Schema { class XmlSchemaDatatype; }
namespace System::Xml::Schema { class XmlSchemaElement; }
namespace System::Xml::Schema { class XmlSchemaException; }
namespace System::Xml::Schema { class XmlSchemaInfo; }
namespace System::Xml::Schema { class XmlSchemaObject; }
namespace System::Xml::Schema { class XmlSchemaParticle; }
namespace System::Xml::Schema { class XmlSchemaSet; }
namespace System::Xml::Schema { class XmlSchemaSimpleType; }
namespace System::Xml::Schema { class XmlSchemaValidationException; }
namespace System::Xml::Schema { class XmlValueGetter; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_ADDIDENTITYCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1A478870)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_ADDSCHEMA_OFFSET UNITYSDK_OFFSET(0x1A46CA70)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_ADDXMLNAMESPACESCHEMA_OFFSET UNITYSDK_OFFSET(0x1A4794F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_ADD_VALIDATIONEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1A46C990)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_ATTRIBUTEIDENTITYCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1A470FD0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_BUILDELEMENTNAME_1_OFFSET UNITYSDK_OFFSET(0x1A471C90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_BUILDELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x1A4770A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_CHECKATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x1A470B30)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_CHECKELEMENTPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A46F840)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_CHECKELEMENTVALUE_OFFSET UNITYSDK_OFFSET(0x1A478480)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_CHECKFORWARDREFS_OFFSET UNITYSDK_OFFSET(0x1A4732B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_CHECKISXMLATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A470710)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_CHECKMIXEDVALUECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1A4747B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_CHECKREQUIREDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1A471510)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_CHECKSTATETRANSITION_OFFSET UNITYSDK_OFFSET(0x1A46DDE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_CHECKTOKENIZEDTYPES_OFFSET UNITYSDK_OFFSET(0x1A470E60)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_CHECKXSITYPEANDNIL_OFFSET UNITYSDK_OFFSET(0x1A46EDA0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_CLEARPSVI_OFFSET UNITYSDK_OFFSET(0x1A46E000)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_COMPLETEVALIDATIONERROR_OFFSET UNITYSDK_OFFSET(0x1A474950)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_ELEMENTIDENTITYCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1A478ED0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_ELEMENTVALIDATIONERROR_OFFSET UNITYSDK_OFFSET(0x1A4773E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_ENDELEMENTIDENTITYCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1A4751B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_ENDVALIDATION_OFFSET UNITYSDK_OFFSET(0x1A4731C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_ENUMERATEANY_OFFSET UNITYSDK_OFFSET(0x1A47AA60)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_FASTGETELEMENTDECL_OFFSET UNITYSDK_OFFSET(0x1A46E780)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_FINDID_OFFSET UNITYSDK_OFFSET(0x1A479B50)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_GETCONCATENATEDVALUE_OFFSET UNITYSDK_OFFSET(0x1A4740A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_GETDEFAULTATTRIBUTEPREFIX_OFFSET UNITYSDK_OFFSET(0x1A473AD0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_GETSCHEMAELEMENT_OFFSET UNITYSDK_OFFSET(0x1A46F9B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_GETSUBSTITUTIONGROUPHEAD_OFFSET UNITYSDK_OFFSET(0x1A476C50)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x1A4787A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_GETUNSPECIFIEDDEFAULTATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1A4733B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_GET_CURRENTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A473F40)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_GET_HASIDENTITYCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1A470FB0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_GET_HASSCHEMA_OFFSET UNITYSDK_OFFSET(0x1A473FE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_GET_PROCESSIDENTITYCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1A478860)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_GET_PROCESSSCHEMAHINTS_OFFSET UNITYSDK_OFFSET(0x1A46C930)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_GET_REPORTVALIDATIONWARNINGS_OFFSET UNITYSDK_OFFSET(0x1A479EC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_GET_STRICTLYASSESSED_OFFSET UNITYSDK_OFFSET(0x1A473FA0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_INITIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1A46D5E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A46D400)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_INIT_OFFSET UNITYSDK_OFFSET(0x1A46C1B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_INTERNALVALIDATEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1A4727B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_LOADSCHEMA_OFFSET UNITYSDK_OFFSET(0x1A476650)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_POP_OFFSET UNITYSDK_OFFSET(0x1A473000)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_PRINTEXPECTEDELEMENTS_OFFSET UNITYSDK_OFFSET(0x1A471F20)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_PRINTNAMESWITHNS_OFFSET UNITYSDK_OFFSET(0x1A479FB0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_PRINTNAMES_OFFSET UNITYSDK_OFFSET(0x1A47A8C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_PROCESSENTITY_OFFSET UNITYSDK_OFFSET(0x1A479B70)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_PROCESSSCHEMALOCATIONS_OFFSET UNITYSDK_OFFSET(0x1A46EA20)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_PROCESSTOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x1A479830)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_PUSH_OFFSET UNITYSDK_OFFSET(0x1A46C5F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_QNAMESTRING_OFFSET UNITYSDK_OFFSET(0x1A471BE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_RECOMPILESCHEMASET_OFFSET UNITYSDK_OFFSET(0x1A46C820)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_REMOVE_VALIDATIONEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x1A46CA00)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1A46C760)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SAVETEXTVALUE_OFFSET UNITYSDK_OFFSET(0x1A471C40)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SENDVALIDATIONEVENT_10_OFFSET UNITYSDK_OFFSET(0x1A479EE0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SENDVALIDATIONEVENT_1_OFFSET UNITYSDK_OFFSET(0x1A4708C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SENDVALIDATIONEVENT_2_OFFSET UNITYSDK_OFFSET(0x1A470550)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SENDVALIDATIONEVENT_3_OFFSET UNITYSDK_OFFSET(0x1A477110)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SENDVALIDATIONEVENT_4_OFFSET UNITYSDK_OFFSET(0x1A479580)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SENDVALIDATIONEVENT_5_OFFSET UNITYSDK_OFFSET(0x1A46D190)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SENDVALIDATIONEVENT_6_OFFSET UNITYSDK_OFFSET(0x1A479ED0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SENDVALIDATIONEVENT_7_OFFSET UNITYSDK_OFFSET(0x1A476AF0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SENDVALIDATIONEVENT_8_OFFSET UNITYSDK_OFFSET(0x1A46CFB0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SENDVALIDATIONEVENT_9_OFFSET UNITYSDK_OFFSET(0x1A479D40)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SENDVALIDATIONEVENT_OFFSET UNITYSDK_OFFSET(0x1A478850)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SETDTDSCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x1A473F90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SET_LINEINFOPROVIDER_OFFSET UNITYSDK_OFFSET(0x1A46C940)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SET_SOURCEURI_OFFSET UNITYSDK_OFFSET(0x1A46C960)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SKIPTOENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1A472DC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_THROWDECLNOTFOUNDWARNINGORERROR_OFFSET UNITYSDK_OFFSET(0x1A46F660)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_VALIDATEATOMICVALUE_1_OFFSET UNITYSDK_OFFSET(0x1A4743D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_VALIDATEATOMICVALUE_OFFSET UNITYSDK_OFFSET(0x1A4740C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_VALIDATEATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1A46FC20)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_VALIDATEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A46FB80)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_VALIDATEELEMENTCONTEXT_OFFSET UNITYSDK_OFFSET(0x1A46E050)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_VALIDATEELEMENT_OFFSET UNITYSDK_OFFSET(0x1A46D890)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_VALIDATEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1A4727A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_VALIDATEENDOFATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1A471400)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_VALIDATESTARTELEMENTIDENTITYCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1A46F940)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_VALIDATETEXT_1_OFFSET UNITYSDK_OFFSET(0x1A471760)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_VALIDATETEXT_OFFSET UNITYSDK_OFFSET(0x1A4716E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_VALIDATEWHITESPACE_1_OFFSET UNITYSDK_OFFSET(0x1A472470)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_VALIDATEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1A4723F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A47AE20)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A46BF00)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaValidator_TypeDefinitionIndex = 2203;

	class XmlSchemaValidator : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_MethodNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaValidator_TypeDefinitionIndex)->GetStaticField(0x1B30);
		}
		static ::System::Xml::Schema::XmlSchemaDatatype** StaticGet_dtStringArray()
		{
			return (::System::Xml::Schema::XmlSchemaDatatype**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaValidator_TypeDefinitionIndex)->GetStaticField(0x1B38);
		}
		static ::System::Xml::Schema::XmlSchemaDatatype** StaticGet_dtQName()
		{
			return (::System::Xml::Schema::XmlSchemaDatatype**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaValidator_TypeDefinitionIndex)->GetStaticField(0x1B40);
		}
		static ::System::Xml::Schema::XmlSchemaDatatype** StaticGet_dtCDATA()
		{
			return (::System::Xml::Schema::XmlSchemaDatatype**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaValidator_TypeDefinitionIndex)->GetStaticField(0x1B48);
		}
		static ::Il2CppArray<::System::Xml::Schema::XmlSchemaAttribute*>** StaticGet_EmptyAttributeArray()
		{
			return (::Il2CppArray<::System::Xml::Schema::XmlSchemaAttribute*>**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaValidator_TypeDefinitionIndex)->GetStaticField(0x1B50);
		}
		static ::Il2CppArray<::System::Xml::Schema::XmlSchemaParticle*>** StaticGet_EmptyParticleArray()
		{
			return (::Il2CppArray<::System::Xml::Schema::XmlSchemaParticle*>**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaValidator_TypeDefinitionIndex)->GetStaticField(0x1B58);
		}
		static ::Il2CppArray<::System::Boolean>** StaticGet_ValidStates()
		{
			return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(XmlSchemaValidator_TypeDefinitionIndex)->GetStaticField(0x1B60);
		}
		::System::String* xsiNilString; // 0x10
		::System::String* sourceUriString; // 0x18
		::System::String* NsXs; // 0x20
		::System::Text::StringBuilder* textValue; // 0x28
		::System::String* xsiSchemaLocationString; // 0x30
		::System::Xml::XmlCharType xmlCharType; // 0x38
		::System::String* xsiTypeString; // 0x40
		::System::Xml::Schema::ValidationEventHandler* eventHandler; // 0x48
		::System::Xml::Schema::SchemaAttDef* wildID; // 0x50
		::System::Xml::Schema::XmlSchemaObject* partialValidationType; // 0x58
		::System::Xml::IXmlLineInfo* positionInfo; // 0x60
		::System::String* xsiNoNamespaceSchemaLocationString; // 0x68
		::System::String* NsXmlNs; // 0x70
		::System::Xml::IXmlLineInfo* dummyPositionInfo; // 0x78
		::System::Collections::Hashtable* attPresence; // 0x80
		::System::Uri* sourceUri; // 0x88
		::System::Xml::IXmlNamespaceResolver* nsResolver; // 0x90
		::System::String* NsXml; // 0x98
		::System::Collections::Hashtable* validatedNamespaces; // 0xA0
		::System::String* NsXsi; // 0xA8
		::System::Object* validationEventSender; // 0xB0
		::System::Xml::Schema::ValidationState* context; // 0xB8
		::System::Xml::HWStack* validationStack; // 0xC0
		::System::Collections::Hashtable* IDs; // 0xC8
		::System::Xml::XmlQualifiedName* contextQName; // 0xD0
		::System::Xml::Schema::XmlSchemaSet* schemaSet; // 0xD8
		::System::Xml::Schema::IdRefNode* idRefListHead; // 0xE0
		::System::Xml::Schema::SchemaInfo* compiledSchemaInfo; // 0xE8
		::System::Xml::XmlResolver* xmlResolver; // 0xF0
		::System::Xml::IDtdInfo* dtdSchemaInfo; // 0xF8
		::System::Xml::XmlNameTable* nameTable; // 0x100
		::System::Xml::Schema::ValidatorState currentState; // 0x108
		::System::Boolean isRoot; // 0x10C
		::System::Boolean rootHasSchema; // 0x10D
		::System::Boolean checkEntity; // 0x10E
		::System::Boolean attrValid; // 0x10F
		::System::Int32 startIDConstraint; // 0x110
		::System::Xml::Schema::XmlSchemaContentProcessing processContents; // 0x114
		::System::Xml::Schema::XmlSchemaValidationFlags validationFlags; // 0x118

		::System::Void _ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::XmlSchemaSet* schemas, ::System::Xml::IXmlNamespaceResolver* namespaceResolver, ::System::Xml::Schema::XmlSchemaValidationFlags validationFlags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNameTable*, ::System::Xml::Schema::XmlSchemaSet*, ::System::Xml::IXmlNamespaceResolver*, ::System::Xml::Schema::XmlSchemaValidationFlags))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR__CTOR_OFFSET))(this, nameTable, schemas, namespaceResolver, validationFlags);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_INIT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_RESET_OFFSET))(this);
		}

		::System::Void set_LineInfoProvider(::System::Xml::IXmlLineInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::IXmlLineInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SET_LINEINFOPROVIDER_OFFSET))(this, value);
		}

		::System::Void set_SourceUri(::System::Uri* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SET_SOURCEURI_OFFSET))(this, value);
		}

		::System::Void add_ValidationEventHandler(::System::Xml::Schema::ValidationEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::ValidationEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_ADD_VALIDATIONEVENTHANDLER_OFFSET))(this, value);
		}

		::System::Void remove_ValidationEventHandler(::System::Xml::Schema::ValidationEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::ValidationEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_REMOVE_VALIDATIONEVENTHANDLER_OFFSET))(this, value);
		}

		::System::Void AddSchema(::System::Xml::Schema::XmlSchema* schema)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchema*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_ADDSCHEMA_OFFSET))(this, schema);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_INITIALIZE_OFFSET))(this);
		}

		::System::Void Initialize_1(::System::Xml::Schema::XmlSchemaObject* partialValidationType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_INITIALIZE_1_OFFSET))(this, partialValidationType);
		}

		::System::Void ValidateElement(::System::String* localName, ::System::String* namespaceUri, ::System::Xml::Schema::XmlSchemaInfo* schemaInfo, ::System::String* xsiType, ::System::String* xsiNil, ::System::String* xsiSchemaLocation, ::System::String* xsiNoNamespaceSchemaLocation)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Xml::Schema::XmlSchemaInfo*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_VALIDATEELEMENT_OFFSET))(this, localName, namespaceUri, schemaInfo, xsiType, xsiNil, xsiSchemaLocation, xsiNoNamespaceSchemaLocation);
		}

		::System::Object* ValidateAttribute(::System::String* localName, ::System::String* namespaceUri, ::System::Xml::Schema::XmlValueGetter* attributeValue, ::System::Xml::Schema::XmlSchemaInfo* schemaInfo)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Xml::Schema::XmlValueGetter*, ::System::Xml::Schema::XmlSchemaInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_VALIDATEATTRIBUTE_OFFSET))(this, localName, namespaceUri, attributeValue, schemaInfo);
		}

		::System::Object* ValidateAttribute_1(::System::String* lName, ::System::String* ns, ::System::Xml::Schema::XmlValueGetter* attributeValueGetter, ::System::String* attributeStringValue, ::System::Xml::Schema::XmlSchemaInfo* schemaInfo)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Xml::Schema::XmlValueGetter*, ::System::String*, ::System::Xml::Schema::XmlSchemaInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_VALIDATEATTRIBUTE_1_OFFSET))(this, lName, ns, attributeValueGetter, attributeStringValue, schemaInfo);
		}

		::System::Void ValidateEndOfAttributes(::System::Xml::Schema::XmlSchemaInfo* schemaInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_VALIDATEENDOFATTRIBUTES_OFFSET))(this, schemaInfo);
		}

		::System::Void ValidateText(::System::Xml::Schema::XmlValueGetter* elementValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlValueGetter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_VALIDATETEXT_OFFSET))(this, elementValue);
		}

		::System::Void ValidateText_1(::System::String* elementStringValue, ::System::Xml::Schema::XmlValueGetter* elementValueGetter)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::Schema::XmlValueGetter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_VALIDATETEXT_1_OFFSET))(this, elementStringValue, elementValueGetter);
		}

		::System::Void ValidateWhitespace(::System::Xml::Schema::XmlValueGetter* elementValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlValueGetter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_VALIDATEWHITESPACE_OFFSET))(this, elementValue);
		}

		::System::Void ValidateWhitespace_1(::System::String* elementStringValue, ::System::Xml::Schema::XmlValueGetter* elementValueGetter)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::Schema::XmlValueGetter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_VALIDATEWHITESPACE_1_OFFSET))(this, elementStringValue, elementValueGetter);
		}

		::System::Object* ValidateEndElement(::System::Xml::Schema::XmlSchemaInfo* schemaInfo)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_VALIDATEENDELEMENT_OFFSET))(this, schemaInfo);
		}

		::System::Void SkipToEndElement(::System::Xml::Schema::XmlSchemaInfo* schemaInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SKIPTOENDELEMENT_OFFSET))(this, schemaInfo);
		}

		::System::Void EndValidation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_ENDVALIDATION_OFFSET))(this);
		}

		::System::Void GetUnspecifiedDefaultAttributes(::System::Collections::ArrayList* defaultAttributes, ::System::Boolean createNodeData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ArrayList*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_GETUNSPECIFIEDDEFAULTATTRIBUTES_OFFSET))(this, defaultAttributes, createNodeData);
		}

		::System::Xml::Schema::XmlSchemaContentType get_CurrentContentType()
		{
			return ((::System::Xml::Schema::XmlSchemaContentType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_GET_CURRENTCONTENTTYPE_OFFSET))(this);
		}

		::System::Void SetDtdSchemaInfo(::System::Xml::IDtdInfo* dtdSchemaInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::IDtdInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SETDTDSCHEMAINFO_OFFSET))(this, dtdSchemaInfo);
		}

		::System::Boolean get_StrictlyAssessed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_GET_STRICTLYASSESSED_OFFSET))(this);
		}

		::System::Boolean get_HasSchema()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_GET_HASSCHEMA_OFFSET))(this);
		}

		::System::String* GetConcatenatedValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_GETCONCATENATEDVALUE_OFFSET))(this);
		}

		::System::Object* InternalValidateEndElement(::System::Xml::Schema::XmlSchemaInfo* schemaInfo, ::System::Object* typedValue)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_INTERNALVALIDATEENDELEMENT_OFFSET))(this, schemaInfo, typedValue);
		}

		::System::Void ProcessSchemaLocations(::System::String* xsiSchemaLocation, ::System::String* xsiNoNamespaceSchemaLocation)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_PROCESSSCHEMALOCATIONS_OFFSET))(this, xsiSchemaLocation, xsiNoNamespaceSchemaLocation);
		}

		::System::Object* ValidateElementContext(::System::Xml::XmlQualifiedName* elementName, ::System::Boolean& invalidElementInContext)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_VALIDATEELEMENTCONTEXT_OFFSET))(this, elementName, invalidElementInContext);
		}

		::System::Xml::Schema::XmlSchemaElement* GetSubstitutionGroupHead(::System::Xml::XmlQualifiedName* member)
		{
			return ((::System::Xml::Schema::XmlSchemaElement*(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_GETSUBSTITUTIONGROUPHEAD_OFFSET))(this, member);
		}

		::System::Object* ValidateAtomicValue(::System::String* stringValue, ::System::Xml::Schema::XmlSchemaSimpleType*& memberType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Xml::Schema::XmlSchemaSimpleType*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_VALIDATEATOMICVALUE_OFFSET))(this, stringValue, memberType);
		}

		::System::Object* ValidateAtomicValue_1(::System::Object* parsedValue, ::System::Xml::Schema::XmlSchemaSimpleType*& memberType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Xml::Schema::XmlSchemaSimpleType*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_VALIDATEATOMICVALUE_1_OFFSET))(this, parsedValue, memberType);
		}

		::System::String* GetTypeName(::System::Xml::Schema::SchemaDeclBase* decl)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::Schema::SchemaDeclBase*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_GETTYPENAME_OFFSET))(this, decl);
		}

		::System::Void SaveTextValue(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SAVETEXTVALUE_OFFSET))(this, value);
		}

		::System::Void Push(::System::Xml::XmlQualifiedName* elementName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_PUSH_OFFSET))(this, elementName);
		}

		::System::Void Pop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_POP_OFFSET))(this);
		}

		::System::Xml::Schema::SchemaElementDecl* FastGetElementDecl(::System::Xml::XmlQualifiedName* elementName, ::System::Object* particle)
		{
			return ((::System::Xml::Schema::SchemaElementDecl*(*)(::PVOID, ::System::Xml::XmlQualifiedName*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_FASTGETELEMENTDECL_OFFSET))(this, elementName, particle);
		}

		::System::Xml::Schema::SchemaElementDecl* CheckXsiTypeAndNil(::System::Xml::Schema::SchemaElementDecl* elementDecl, ::System::String* xsiType, ::System::String* xsiNil, ::System::Boolean& declFound)
		{
			return ((::System::Xml::Schema::SchemaElementDecl*(*)(::PVOID, ::System::Xml::Schema::SchemaElementDecl*, ::System::String*, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_CHECKXSITYPEANDNIL_OFFSET))(this, elementDecl, xsiType, xsiNil, declFound);
		}

		::System::Void ThrowDeclNotFoundWarningOrError(::System::Boolean declFound)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_THROWDECLNOTFOUNDWARNINGORERROR_OFFSET))(this, declFound);
		}

		::System::Void CheckElementProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_CHECKELEMENTPROPERTIES_OFFSET))(this);
		}

		::System::Void ValidateStartElementIdentityConstraints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_VALIDATESTARTELEMENTIDENTITYCONSTRAINTS_OFFSET))(this);
		}

		::System::Xml::Schema::SchemaAttDef* CheckIsXmlAttribute(::System::Xml::XmlQualifiedName* attQName)
		{
			return ((::System::Xml::Schema::SchemaAttDef*(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_CHECKISXMLATTRIBUTE_OFFSET))(this, attQName);
		}

		::System::Void AddXmlNamespaceSchema()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_ADDXMLNAMESPACESCHEMA_OFFSET))(this);
		}

		::System::Object* CheckMixedValueConstraint(::System::String* elementValue)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_CHECKMIXEDVALUECONSTRAINT_OFFSET))(this, elementValue);
		}

		::System::Void LoadSchema(::System::String* uri, ::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_LOADSCHEMA_OFFSET))(this, uri, url);
		}

		::System::Void RecompileSchemaSet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_RECOMPILESCHEMASET_OFFSET))(this);
		}

		::System::Void ProcessTokenizedType(::System::Xml::XmlTokenizedType ttype, ::System::String* name, ::System::Boolean attrValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlTokenizedType, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_PROCESSTOKENIZEDTYPE_OFFSET))(this, ttype, name, attrValue);
		}

		::System::Object* CheckAttributeValue(::System::Object* value, ::System::Xml::Schema::SchemaAttDef* attdef)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Xml::Schema::SchemaAttDef*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_CHECKATTRIBUTEVALUE_OFFSET))(this, value, attdef);
		}

		::System::Object* CheckElementValue(::System::String* stringValue)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_CHECKELEMENTVALUE_OFFSET))(this, stringValue);
		}

		::System::Void CheckTokenizedTypes(::System::Xml::Schema::XmlSchemaDatatype* dtype, ::System::Object* typedValue, ::System::Boolean attrValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaDatatype*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_CHECKTOKENIZEDTYPES_OFFSET))(this, dtype, typedValue, attrValue);
		}

		::System::Object* FindId(::System::String* name)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_FINDID_OFFSET))(this, name);
		}

		::System::Void CheckForwardRefs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_CHECKFORWARDREFS_OFFSET))(this);
		}

		::System::Boolean get_HasIdentityConstraints()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_GET_HASIDENTITYCONSTRAINTS_OFFSET))(this);
		}

		::System::Boolean get_ProcessIdentityConstraints()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_GET_PROCESSIDENTITYCONSTRAINTS_OFFSET))(this);
		}

		::System::Boolean get_ReportValidationWarnings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_GET_REPORTVALIDATIONWARNINGS_OFFSET))(this);
		}

		::System::Boolean get_ProcessSchemaHints()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_GET_PROCESSSCHEMAHINTS_OFFSET))(this);
		}

		::System::Void CheckStateTransition(::System::Xml::Schema::ValidatorState toState, ::System::String* methodName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::ValidatorState, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_CHECKSTATETRANSITION_OFFSET))(this, toState, methodName);
		}

		::System::Void ClearPSVI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_CLEARPSVI_OFFSET))(this);
		}

		::System::Void CheckRequiredAttributes(::System::Xml::Schema::SchemaElementDecl* currentElementDecl)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SchemaElementDecl*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_CHECKREQUIREDATTRIBUTES_OFFSET))(this, currentElementDecl);
		}

		::System::Xml::Schema::XmlSchemaElement* GetSchemaElement()
		{
			return ((::System::Xml::Schema::XmlSchemaElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_GETSCHEMAELEMENT_OFFSET))(this);
		}

		::System::String* GetDefaultAttributePrefix(::System::String* attributeNS)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_GETDEFAULTATTRIBUTEPREFIX_OFFSET))(this, attributeNS);
		}

		::System::Void AddIdentityConstraints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_ADDIDENTITYCONSTRAINTS_OFFSET))(this);
		}

		::System::Void ElementIdentityConstraints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_ELEMENTIDENTITYCONSTRAINTS_OFFSET))(this);
		}

		::System::Void AttributeIdentityConstraints(::System::String* name, ::System::String* ns, ::System::Object* obj, ::System::String* sobj, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Object*, ::System::String*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_ATTRIBUTEIDENTITYCONSTRAINTS_OFFSET))(this, name, ns, obj, sobj, datatype);
		}

		::System::Void EndElementIdentityConstraints(::System::Object* typedValue, ::System::String* stringValue, ::System::Xml::Schema::XmlSchemaDatatype* datatype)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_ENDELEMENTIDENTITYCONSTRAINTS_OFFSET))(this, typedValue, stringValue, datatype);
		}

		static ::System::Void ElementValidationError(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::ValidationState* context, ::System::Xml::Schema::ValidationEventHandler* eventHandler, ::System::Object* sender, ::System::String* sourceUri, ::System::Int32 lineNo, ::System::Int32 linePos, ::System::Xml::Schema::XmlSchemaSet* schemaSet)
		{
			return ((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::ValidationState*, ::System::Xml::Schema::ValidationEventHandler*, ::System::Object*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_ELEMENTVALIDATIONERROR_OFFSET))(name, context, eventHandler, sender, sourceUri, lineNo, linePos, schemaSet);
		}

		static ::System::Void CompleteValidationError(::System::Xml::Schema::ValidationState* context, ::System::Xml::Schema::ValidationEventHandler* eventHandler, ::System::Object* sender, ::System::String* sourceUri, ::System::Int32 lineNo, ::System::Int32 linePos, ::System::Xml::Schema::XmlSchemaSet* schemaSet)
		{
			return ((::System::Void(*)(::System::Xml::Schema::ValidationState*, ::System::Xml::Schema::ValidationEventHandler*, ::System::Object*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_COMPLETEVALIDATIONERROR_OFFSET))(context, eventHandler, sender, sourceUri, lineNo, linePos, schemaSet);
		}

		static ::System::String* PrintExpectedElements(::System::Collections::ArrayList* expected, ::System::Boolean getParticles)
		{
			return ((::System::String*(*)(::System::Collections::ArrayList*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_PRINTEXPECTEDELEMENTS_OFFSET))(expected, getParticles);
		}

		static ::System::String* PrintNames(::System::Collections::ArrayList* expected)
		{
			return ((::System::String*(*)(::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_PRINTNAMES_OFFSET))(expected);
		}

		static ::System::Void PrintNamesWithNS(::System::Collections::ArrayList* expected, ::System::Text::StringBuilder* builder)
		{
			return ((::System::Void(*)(::System::Collections::ArrayList*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_PRINTNAMESWITHNS_OFFSET))(expected, builder);
		}

		static ::System::Void EnumerateAny(::System::Text::StringBuilder* builder, ::System::String* namespaces)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_ENUMERATEANY_OFFSET))(builder, namespaces);
		}

		static ::System::String* QNameString(::System::String* localName, ::System::String* ns)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_QNAMESTRING_OFFSET))(localName, ns);
		}

		static ::System::String* BuildElementName(::System::Xml::XmlQualifiedName* qname)
		{
			return ((::System::String*(*)(::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_BUILDELEMENTNAME_OFFSET))(qname);
		}

		static ::System::String* BuildElementName_1(::System::String* localName, ::System::String* ns)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_BUILDELEMENTNAME_1_OFFSET))(localName, ns);
		}

		::System::Void ProcessEntity(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_PROCESSENTITY_OFFSET))(this, name);
		}

		::System::Void SendValidationEvent(::System::String* code)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SENDVALIDATIONEVENT_OFFSET))(this, code);
		}

		::System::Void SendValidationEvent_1(::System::String* code, ::Il2CppArray<::System::String*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SENDVALIDATIONEVENT_1_OFFSET))(this, code, args);
		}

		::System::Void SendValidationEvent_2(::System::String* code, ::System::String* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SENDVALIDATIONEVENT_2_OFFSET))(this, code, arg);
		}

		::System::Void SendValidationEvent_3(::System::String* code, ::System::String* arg1, ::System::String* arg2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SENDVALIDATIONEVENT_3_OFFSET))(this, code, arg1, arg2);
		}

		::System::Void SendValidationEvent_4(::System::String* code, ::Il2CppArray<::System::String*>* args, ::System::Exception* innerException, ::System::Xml::Schema::XmlSeverityType severity)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Exception*, ::System::Xml::Schema::XmlSeverityType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SENDVALIDATIONEVENT_4_OFFSET))(this, code, args, innerException, severity);
		}

		::System::Void SendValidationEvent_5(::System::String* code, ::Il2CppArray<::System::String*>* args, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SENDVALIDATIONEVENT_5_OFFSET))(this, code, args, innerException);
		}

		::System::Void SendValidationEvent_6(::System::Xml::Schema::XmlSchemaValidationException* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaValidationException*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SENDVALIDATIONEVENT_6_OFFSET))(this, e);
		}

		::System::Void SendValidationEvent_7(::System::Xml::Schema::XmlSchemaException* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaException*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SENDVALIDATIONEVENT_7_OFFSET))(this, e);
		}

		::System::Void SendValidationEvent_8(::System::String* code, ::System::String* msg, ::System::Xml::Schema::XmlSeverityType severity)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Xml::Schema::XmlSeverityType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SENDVALIDATIONEVENT_8_OFFSET))(this, code, msg, severity);
		}

		::System::Void SendValidationEvent_9(::System::Xml::Schema::XmlSchemaValidationException* e, ::System::Xml::Schema::XmlSeverityType severity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaValidationException*, ::System::Xml::Schema::XmlSeverityType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SENDVALIDATIONEVENT_9_OFFSET))(this, e, severity);
		}

		static ::System::Void SendValidationEvent_10(::System::Xml::Schema::ValidationEventHandler* eventHandler, ::System::Object* sender, ::System::Xml::Schema::XmlSchemaValidationException* e, ::System::Xml::Schema::XmlSeverityType severity)
		{
			return ((::System::Void(*)(::System::Xml::Schema::ValidationEventHandler*, ::System::Object*, ::System::Xml::Schema::XmlSchemaValidationException*, ::System::Xml::Schema::XmlSeverityType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAVALIDATOR_SENDVALIDATIONEVENT_10_OFFSET))(eventHandler, sender, e, severity);
		}
	};
}
