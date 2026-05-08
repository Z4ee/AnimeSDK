#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/ReadState.h"
#include "unitysdk/System/Xml/ValidationType.h"
#include "unitysdk/System/Xml/XmlNamespaceScope.h"
#include "unitysdk/System/Xml/XmlNodeType.h"
#include "unitysdk/System/Xml/XmlReader.h"
#include "unitysdk/System/Xml/XmlSpace.h"
#include "unitysdk/System/Xml/XmlValidatingReaderImpl_ParsingFunction.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Xml { class IDtdDefaultAttributeInfo; }
namespace System::Xml { class IDtdInfo; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class ReadContentAsBinaryHelper; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlNamespaceManager; }
namespace System::Xml { class XmlParserContext; }
namespace System::Xml { class XmlReaderSettings; }
namespace System::Xml { class XmlResolver; }
namespace System::Xml { class XmlTextReaderImpl; }
namespace System::Xml { class XmlValidatingReaderImpl_ValidationEventHandling; }
namespace System::Xml::Schema { class BaseValidator; }
namespace System::Xml::Schema { class SchemaAttDef; }
namespace System::Xml::Schema { class ValidationEventHandler; }
namespace System::Xml::Schema { class XmlSchemaCollection; }

#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_ADDDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B59D060)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_CLOSE_OFFSET UNITYSDK_OFFSET(0x1B59C820)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GETATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1B59C0A0)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GETATTRIBUTE_2_OFFSET UNITYSDK_OFFSET(0x1B59C0D0)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B59C070)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GETNAMESPACESINSCOPE_OFFSET UNITYSDK_OFFSET(0x1B59CC70)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GETRESOLVER_OFFSET UNITYSDK_OFFSET(0x1B59B860)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_ATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0x1B59C040)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1B59BE80)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_CANRESOLVEENTITY_OFFSET UNITYSDK_OFFSET(0x1B59C900)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x1B59BE50)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_DTDINFO_OFFSET UNITYSDK_OFFSET(0x1B59D080)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_EOF_OFFSET UNITYSDK_OFFSET(0x1B59BFE0)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1B59BEE0)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_ISEMPTYELEMENT_OFFSET UNITYSDK_OFFSET(0x1B59BEB0)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x1B59CA20)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B59CB40)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1B59BD90)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_NAMESPACEMANAGER_OFFSET UNITYSDK_OFFSET(0x1B59CF90)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_NAMESPACES_OFFSET UNITYSDK_OFFSET(0x1B59CE90)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x1B59BDC0)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x1B59C010)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B59BD60)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1B59BD30)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1B59BDF0)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_QUOTECHAR_OFFSET UNITYSDK_OFFSET(0x1B59BF10)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_READSTATE_OFFSET UNITYSDK_OFFSET(0x1B59BFA0)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1B59BB60)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_STANDALONE_OFFSET UNITYSDK_OFFSET(0x1B59CFB0)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_TYPEDVALUEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B59D000)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B59BE20)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_XMLLANG_OFFSET UNITYSDK_OFFSET(0x1B59BF70)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_XMLSPACE_OFFSET UNITYSDK_OFFSET(0x1B59BF40)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1B59C850)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x1B59CDB0)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_MOVEOFFENTITYREFERENCE_OFFSET UNITYSDK_OFFSET(0x1B59C950)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_MOVETOATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1B59C140)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_MOVETOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B59C100)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_MOVETOELEMENT_OFFSET UNITYSDK_OFFSET(0x1B59C1F0)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_MOVETOFIRSTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B59C170)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_MOVETONEXTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B59C1B0)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_PARSEDTDFROMPARSERCONTEXT_OFFSET UNITYSDK_OFFSET(0x1B59C520)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_PROCESSCOREREADEREVENT_OFFSET UNITYSDK_OFFSET(0x1B59C320)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_READATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x1B59C8A0)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_READSTRING_OFFSET UNITYSDK_OFFSET(0x1B59CA00)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_READ_OFFSET UNITYSDK_OFFSET(0x1B59C230)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_RESOLVEENTITYINTERNALLY_OFFSET UNITYSDK_OFFSET(0x1B59C790)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_RESOLVEENTITY_OFFSET UNITYSDK_OFFSET(0x1B59C910)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_SETUPVALIDATION_OFFSET UNITYSDK_OFFSET(0x1B59B900)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_SET_SCHEMATYPEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B59CFD0)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_SET_TYPEDVALUEOBJECT_OFFSET UNITYSDK_OFFSET(0x1B59D030)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_SYSTEM_XML_IXMLNAMESPACERESOLVER_GETNAMESPACESINSCOPE_OFFSET UNITYSDK_OFFSET(0x1B59CC60)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1B59CD50)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x1B59CDA0)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_VALIDATEDEFAULTATTRIBUTEONUSE_OFFSET UNITYSDK_OFFSET(0x1B59D0A0)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL_VALIDATEDTD_OFFSET UNITYSDK_OFFSET(0x1B59CEB0)
#define SYSTEM_XML_XMLVALIDATINGREADERIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B59B4A0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlValidatingReaderImpl_TypeDefinitionIndex = 1739;

	class XmlValidatingReaderImpl : public ::System::Xml::XmlReader
	{
	public:
		static ::System::Xml::XmlResolver** StaticGet_s_tempResolver()
		{
			return (::System::Xml::XmlResolver**)Il2CppClass::FromTypeDefinitionIndex(XmlValidatingReaderImpl_TypeDefinitionIndex)->GetStaticField(0x1F40);
		}
		::System::Xml::IXmlNamespaceResolver* coreReaderNSResolver; // 0x10
		::System::Xml::XmlValidatingReaderImpl_ValidationEventHandling* eventHandling; // 0x18
		::System::Xml::XmlParserContext* parserContext; // 0x20
		::System::Xml::ReadContentAsBinaryHelper* readBinaryHelper; // 0x28
		::System::Xml::XmlTextReaderImpl* coreReaderImpl; // 0x30
		::System::Xml::XmlReader* outerReader; // 0x38
		::System::Xml::Schema::XmlSchemaCollection* schemaCollection; // 0x40
		::System::Xml::Schema::BaseValidator* validator; // 0x48
		::System::Xml::XmlReader* coreReader; // 0x50
		::System::Xml::ValidationType validationType; // 0x58
		::System::Xml::XmlValidatingReaderImpl_ParsingFunction parsingFunction; // 0x5C
		::System::Boolean processIdentityConstraints; // 0x60

		::System::Void _ctor(::System::Xml::XmlReader* reader, ::System::Xml::Schema::ValidationEventHandler* settingsEventHandler, ::System::Boolean processIdentityConstraints)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Xml::Schema::ValidationEventHandler*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL__CTOR_OFFSET))(this, reader, settingsEventHandler, processIdentityConstraints);
		}

		::System::Xml::XmlReaderSettings* get_Settings()
		{
			return ((::System::Xml::XmlReaderSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_SETTINGS_OFFSET))(this);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_NODETYPE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_NAME_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_LOCALNAME_OFFSET))(this);
		}

		::System::String* get_NamespaceURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_NAMESPACEURI_OFFSET))(this);
		}

		::System::String* get_Prefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_PREFIX_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_VALUE_OFFSET))(this);
		}

		::System::Int32 get_Depth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_DEPTH_OFFSET))(this);
		}

		::System::String* get_BaseURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_BASEURI_OFFSET))(this);
		}

		::System::Boolean get_IsEmptyElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_ISEMPTYELEMENT_OFFSET))(this);
		}

		::System::Boolean get_IsDefault()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_ISDEFAULT_OFFSET))(this);
		}

		::System::Char get_QuoteChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_QUOTECHAR_OFFSET))(this);
		}

		::System::Xml::XmlSpace get_XmlSpace()
		{
			return ((::System::Xml::XmlSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_XMLSPACE_OFFSET))(this);
		}

		::System::String* get_XmlLang()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_XMLLANG_OFFSET))(this);
		}

		::System::Xml::ReadState get_ReadState()
		{
			return ((::System::Xml::ReadState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_READSTATE_OFFSET))(this);
		}

		::System::Boolean get_EOF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_EOF_OFFSET))(this);
		}

		::System::Xml::XmlNameTable* get_NameTable()
		{
			return ((::System::Xml::XmlNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_NAMETABLE_OFFSET))(this);
		}

		::System::Int32 get_AttributeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_ATTRIBUTECOUNT_OFFSET))(this);
		}

		::System::String* GetAttribute(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GETATTRIBUTE_OFFSET))(this, name);
		}

		::System::String* GetAttribute_1(::System::String* localName, ::System::String* namespaceURI)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GETATTRIBUTE_1_OFFSET))(this, localName, namespaceURI);
		}

		::System::String* GetAttribute_2(::System::Int32 i)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GETATTRIBUTE_2_OFFSET))(this, i);
		}

		::System::Boolean MoveToAttribute(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_MOVETOATTRIBUTE_OFFSET))(this, name);
		}

		::System::Void MoveToAttribute_1(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_MOVETOATTRIBUTE_1_OFFSET))(this, i);
		}

		::System::Boolean MoveToFirstAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_MOVETOFIRSTATTRIBUTE_OFFSET))(this);
		}

		::System::Boolean MoveToNextAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_MOVETONEXTATTRIBUTE_OFFSET))(this);
		}

		::System::Boolean MoveToElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_MOVETOELEMENT_OFFSET))(this);
		}

		::System::Boolean Read()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_READ_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_CLOSE_OFFSET))(this);
		}

		::System::String* LookupNamespace(::System::String* prefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_LOOKUPNAMESPACE_OFFSET))(this, prefix);
		}

		::System::Boolean ReadAttributeValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_READATTRIBUTEVALUE_OFFSET))(this);
		}

		::System::Boolean get_CanResolveEntity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_CANRESOLVEENTITY_OFFSET))(this);
		}

		::System::Void ResolveEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_RESOLVEENTITY_OFFSET))(this);
		}

		::System::Void MoveOffEntityReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_MOVEOFFENTITYREFERENCE_OFFSET))(this);
		}

		::System::String* ReadString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_READSTRING_OFFSET))(this);
		}

		::System::Int32 get_LineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Int32 get_LinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_LINEPOSITION_OFFSET))(this);
		}

		::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope)
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::Xml::XmlNamespaceScope))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_SYSTEM_XML_IXMLNAMESPACERESOLVER_GETNAMESPACESINSCOPE_OFFSET))(this, scope);
		}

		::System::String* System_Xml_IXmlNamespaceResolver_LookupNamespace(::System::String* prefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPNAMESPACE_OFFSET))(this, prefix);
		}

		::System::String* System_Xml_IXmlNamespaceResolver_LookupPrefix(::System::String* namespaceName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPPREFIX_OFFSET))(this, namespaceName);
		}

		::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope)
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::Xml::XmlNamespaceScope))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GETNAMESPACESINSCOPE_OFFSET))(this, scope);
		}

		::System::String* LookupPrefix(::System::String* namespaceName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_LOOKUPPREFIX_OFFSET))(this, namespaceName);
		}

		::System::Boolean get_Namespaces()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_NAMESPACES_OFFSET))(this);
		}

		::System::Void ParseDtdFromParserContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_PARSEDTDFROMPARSERCONTEXT_OFFSET))(this);
		}

		::System::Void ValidateDtd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_VALIDATEDTD_OFFSET))(this);
		}

		::System::Void ResolveEntityInternally()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_RESOLVEENTITYINTERNALLY_OFFSET))(this);
		}

		::System::Void SetupValidation(::System::Xml::ValidationType valType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::ValidationType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_SETUPVALIDATION_OFFSET))(this, valType);
		}

		::System::Xml::XmlResolver* GetResolver()
		{
			return ((::System::Xml::XmlResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GETRESOLVER_OFFSET))(this);
		}

		::System::Void ProcessCoreReaderEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_PROCESSCOREREADEREVENT_OFFSET))(this);
		}

		::System::Xml::XmlNamespaceManager* get_NamespaceManager()
		{
			return ((::System::Xml::XmlNamespaceManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_NAMESPACEMANAGER_OFFSET))(this);
		}

		::System::Boolean get_StandAlone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_STANDALONE_OFFSET))(this);
		}

		::System::Void set_SchemaTypeObject(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_SET_SCHEMATYPEOBJECT_OFFSET))(this, value);
		}

		::System::Object* get_TypedValueObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_TYPEDVALUEOBJECT_OFFSET))(this);
		}

		::System::Void set_TypedValueObject(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_SET_TYPEDVALUEOBJECT_OFFSET))(this, value);
		}

		::System::Boolean AddDefaultAttribute(::System::Xml::Schema::SchemaAttDef* attdef)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::Schema::SchemaAttDef*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_ADDDEFAULTATTRIBUTE_OFFSET))(this, attdef);
		}

		::System::Xml::IDtdInfo* get_DtdInfo()
		{
			return ((::System::Xml::IDtdInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_GET_DTDINFO_OFFSET))(this);
		}

		::System::Void ValidateDefaultAttributeOnUse(::System::Xml::IDtdDefaultAttributeInfo* defaultAttribute, ::System::Xml::XmlTextReaderImpl* coreReader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::IDtdDefaultAttributeInfo*, ::System::Xml::XmlTextReaderImpl*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADERIMPL_VALIDATEDEFAULTATTRIBUTEONUSE_OFFSET))(this, defaultAttribute, coreReader);
		}
	};
}
