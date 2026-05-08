#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/ReadState.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaValidity.h"
#include "unitysdk/System/Xml/XmlCharType.h"
#include "unitysdk/System/Xml/XmlNamespaceScope.h"
#include "unitysdk/System/Xml/XmlNodeType.h"
#include "unitysdk/System/Xml/XmlReader.h"
#include "unitysdk/System/Xml/XmlSpace.h"
#include "unitysdk/System/Xml/XsdValidatingReader_ValidatingReaderState.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class ArrayList; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Xml { class AttributePSVIInfo; }
namespace System::Xml { class IXmlLineInfo; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class ReadContentAsBinaryHelper; }
namespace System::Xml { class ValidatingReaderNodeData; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlNamespaceManager; }
namespace System::Xml { class XmlReaderSettings; }
namespace System::Xml { class XmlResolver; }
namespace System::Xml { class XsdCachingReader; }
namespace System::Xml::Schema { class IXmlSchemaInfo; }
namespace System::Xml::Schema { class Parser; }
namespace System::Xml::Schema { class ValidationEventHandler; }
namespace System::Xml::Schema { class XmlSchemaAttribute; }
namespace System::Xml::Schema { class XmlSchemaElement; }
namespace System::Xml::Schema { class XmlSchemaInfo; }
namespace System::Xml::Schema { class XmlSchemaObject; }
namespace System::Xml::Schema { class XmlSchemaSimpleType; }
namespace System::Xml::Schema { class XmlSchemaType; }
namespace System::Xml::Schema { class XmlSchemaValidator; }
namespace System::Xml::Schema { class XmlValueGetter; }

#define SYSTEM_XML_XSDVALIDATINGREADER_ADDATTRIBUTEPSVI_OFFSET UNITYSDK_OFFSET(0x1989C950)
#define SYSTEM_XML_XSDVALIDATINGREADER_CACHINGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1989CF20)
#define SYSTEM_XML_XSDVALIDATINGREADER_CLEARATTRIBUTESINFO_OFFSET UNITYSDK_OFFSET(0x1989A860)
#define SYSTEM_XML_XSDVALIDATINGREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1989A8F0)
#define SYSTEM_XML_XSDVALIDATINGREADER_CREATEDUMMYTEXTNODE_OFFSET UNITYSDK_OFFSET(0x1989AE20)
#define SYSTEM_XML_XSDVALIDATINGREADER_GETATTRIBUTEPSVI_1_OFFSET UNITYSDK_OFFSET(0x1989CB70)
#define SYSTEM_XML_XSDVALIDATINGREADER_GETATTRIBUTEPSVI_OFFSET UNITYSDK_OFFSET(0x19899BB0)
#define SYSTEM_XML_XSDVALIDATINGREADER_GETATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x19899810)
#define SYSTEM_XML_XSDVALIDATINGREADER_GETATTRIBUTE_2_OFFSET UNITYSDK_OFFSET(0x19899A10)
#define SYSTEM_XML_XSDVALIDATINGREADER_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x198995F0)
#define SYSTEM_XML_XSDVALIDATINGREADER_GETCACHINGREADER_OFFSET UNITYSDK_OFFSET(0x1989C810)
#define SYSTEM_XML_XSDVALIDATINGREADER_GETDEFAULTATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x198998E0)
#define SYSTEM_XML_XSDVALIDATINGREADER_GETDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x19899660)
#define SYSTEM_XML_XSDVALIDATINGREADER_GETISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1989AFA0)
#define SYSTEM_XML_XSDVALIDATINGREADER_GETMEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x1989B4F0)
#define SYSTEM_XML_XSDVALIDATINGREADER_GETORIGINALATOMICVALUESTRINGOFELEMENT_OFFSET UNITYSDK_OFFSET(0x1989C790)
#define SYSTEM_XML_XSDVALIDATINGREADER_GETSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x1989BBE0)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_ATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0x198995E0)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_ATTRIBUTESCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x198995C0)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x198993C0)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x19899370)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_EOF_OFFSET UNITYSDK_OFFSET(0x1989A8C0)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x19899420)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_ISEMPTYELEMENT_OFFSET UNITYSDK_OFFSET(0x198993F0)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x1989B700)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x1989B7E0)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x19899230)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x19899280)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x1989AB40)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19899110)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x19899070)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x198992D0)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_QUOTECHAR_OFFSET UNITYSDK_OFFSET(0x19899460)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_READSTATE_OFFSET UNITYSDK_OFFSET(0x1989A930)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_SCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x198994F0)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x19898E60)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x19899500)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x19899320)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_XMLLANG_OFFSET UNITYSDK_OFFSET(0x198994C0)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_XMLSPACE_OFFSET UNITYSDK_OFFSET(0x19899490)
#define SYSTEM_XML_XSDVALIDATINGREADER_INIT_OFFSET UNITYSDK_OFFSET(0x19898840)
#define SYSTEM_XML_XSDVALIDATINGREADER_ISXSDROOT_OFFSET UNITYSDK_OFFSET(0x1989C500)
#define SYSTEM_XML_XSDVALIDATINGREADER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1989AB50)
#define SYSTEM_XML_XSDVALIDATINGREADER_MOVETOATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x19899DE0)
#define SYSTEM_XML_XSDVALIDATINGREADER_MOVETOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x19899AF0)
#define SYSTEM_XML_XSDVALIDATINGREADER_MOVETOELEMENT_OFFSET UNITYSDK_OFFSET(0x1989A2D0)
#define SYSTEM_XML_XSDVALIDATINGREADER_MOVETOFIRSTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x19899FA0)
#define SYSTEM_XML_XSDVALIDATINGREADER_MOVETONEXTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1989A140)
#define SYSTEM_XML_XSDVALIDATINGREADER_PROCESSELEMENTEVENT_OFFSET UNITYSDK_OFFSET(0x1989BC10)
#define SYSTEM_XML_XSDVALIDATINGREADER_PROCESSENDELEMENTEVENT_OFFSET UNITYSDK_OFFSET(0x1989C240)
#define SYSTEM_XML_XSDVALIDATINGREADER_PROCESSINLINESCHEMA_OFFSET UNITYSDK_OFFSET(0x1989A740)
#define SYSTEM_XML_XSDVALIDATINGREADER_PROCESSREADEREVENT_OFFSET UNITYSDK_OFFSET(0x1989A530)
#define SYSTEM_XML_XSDVALIDATINGREADER_READAHEADFORMEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x1989CBF0)
#define SYSTEM_XML_XSDVALIDATINGREADER_READATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x1989AC90)
#define SYSTEM_XML_XSDVALIDATINGREADER_READ_OFFSET UNITYSDK_OFFSET(0x1989A330)
#define SYSTEM_XML_XSDVALIDATINGREADER_RESOLVEENTITY_OFFSET UNITYSDK_OFFSET(0x1989AC40)
#define SYSTEM_XML_XSDVALIDATINGREADER_SETUPVALIDATOR_OFFSET UNITYSDK_OFFSET(0x19898AD0)
#define SYSTEM_XML_XSDVALIDATINGREADER_SKIP_OFFSET UNITYSDK_OFFSET(0x1989A970)
#define SYSTEM_XML_XSDVALIDATINGREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_GETNAMESPACESINSCOPE_OFFSET UNITYSDK_OFFSET(0x1989B8C0)
#define SYSTEM_XML_XSDVALIDATINGREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1989B9C0)
#define SYSTEM_XML_XSDVALIDATINGREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x1989BAD0)
#define SYSTEM_XML_XSDVALIDATINGREADER_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1989AF10)
#define SYSTEM_XML_XSDVALIDATINGREADER_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_ISNIL_OFFSET UNITYSDK_OFFSET(0x1989B370)
#define SYSTEM_XML_XSDVALIDATINGREADER_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x1989B460)
#define SYSTEM_XML_XSDVALIDATINGREADER_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_SCHEMAATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1989B6C0)
#define SYSTEM_XML_XSDVALIDATINGREADER_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_SCHEMAELEMENT_OFFSET UNITYSDK_OFFSET(0x1989B670)
#define SYSTEM_XML_XSDVALIDATINGREADER_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_SCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x1989B610)
#define SYSTEM_XML_XSDVALIDATINGREADER_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_VALIDITY_OFFSET UNITYSDK_OFFSET(0x1989B3B0)
#define SYSTEM_XML_XSDVALIDATINGREADER_VALIDATEATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1989C520)
#define SYSTEM_XML_XSDVALIDATINGREADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19898E40)
#define SYSTEM_XML_XSDVALIDATINGREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x19898690)

namespace System::Xml
{
	inline static constexpr unsigned int XsdValidatingReader_TypeDefinitionIndex = 1748;

	class XsdValidatingReader : public ::System::Xml::XmlReader
	{
	public:
		static ::System::Type** StaticGet_TypeOfString()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XsdValidatingReader_TypeDefinitionIndex)->GetStaticField(0x1A30);
		}
		::System::String* XsiSchemaLocation; // 0x10
		::System::String* XsiNoNamespaceSchemaLocation; // 0x18
		::Il2CppArray<::System::Xml::AttributePSVIInfo*>* attributePSVINodes; // 0x20
		::System::String* NsXsi; // 0x28
		::System::Xml::ValidatingReaderNodeData* cachedNode; // 0x30
		::System::Xml::AttributePSVIInfo* attributePSVI; // 0x38
		::System::Xml::XmlReader* coreReader; // 0x40
		::System::Xml::ValidatingReaderNodeData* textNode; // 0x48
		::System::Xml::Schema::ValidationEventHandler* validationEvent; // 0x50
		::System::Xml::XmlResolver* xmlResolver; // 0x58
		::System::String* NsXs; // 0x60
		::System::Object* atomicValue; // 0x68
		::System::String* XsiNil; // 0x70
		::System::String* originalAtomicValueString; // 0x78
		::System::Xml::Schema::XmlValueGetter* valueGetter; // 0x80
		::System::Xml::IXmlNamespaceResolver* thisNSResolver; // 0x88
		::System::Xml::ReadContentAsBinaryHelper* readBinaryHelper; // 0x90
		::System::String* XsdSchema; // 0x98
		::System::Collections::ArrayList* defaultAttributes; // 0xA0
		::System::Xml::Schema::Parser* inlineSchemaParser; // 0xA8
		::System::Xml::XmlNameTable* coreReaderNameTable; // 0xB0
		::System::Xml::Schema::XmlSchemaInfo* xmlSchemaInfo; // 0xB8
		::System::Xml::IXmlNamespaceResolver* coreReaderNSResolver; // 0xC0
		::System::String* NsXmlNs; // 0xC8
		::System::Xml::XsdCachingReader* cachingReader; // 0xD0
		::System::Xml::XmlCharType xmlCharType; // 0xD8
		::System::Xml::IXmlLineInfo* lineInfo; // 0xE0
		::System::String* XsiType; // 0xE8
		::System::Xml::Schema::XmlSchemaValidator* validator; // 0xF0
		::System::Xml::XmlNamespaceManager* nsManager; // 0xF8
		::System::Int32 currentAttrIndex; // 0x100
		::System::Xml::XsdValidatingReader_ValidatingReaderState savedState; // 0x104
		::System::Xml::XsdValidatingReader_ValidatingReaderState validationState; // 0x108
		::System::Int32 coreReaderAttributeCount; // 0x10C
		::System::Boolean manageNamespaces; // 0x110
		::System::Boolean processInlineSchema; // 0x111
		::System::Boolean replayCache; // 0x112
		::System::Int32 attributeCount; // 0x114

		::System::Void _ctor(::System::Xml::XmlReader* reader, ::System::Xml::XmlResolver* xmlResolver, ::System::Xml::XmlReaderSettings* readerSettings, ::System::Xml::Schema::XmlSchemaObject* partialValidationType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Xml::XmlResolver*, ::System::Xml::XmlReaderSettings*, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER__CTOR_OFFSET))(this, reader, xmlResolver, readerSettings, partialValidationType);
		}

		::System::Void _ctor_1(::System::Xml::XmlReader* reader, ::System::Xml::XmlResolver* xmlResolver, ::System::Xml::XmlReaderSettings* readerSettings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Xml::XmlResolver*, ::System::Xml::XmlReaderSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER__CTOR_1_OFFSET))(this, reader, xmlResolver, readerSettings);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_INIT_OFFSET))(this);
		}

		::System::Void SetupValidator(::System::Xml::XmlReaderSettings* readerSettings, ::System::Xml::XmlReader* reader, ::System::Xml::Schema::XmlSchemaObject* partialValidationType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReaderSettings*, ::System::Xml::XmlReader*, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_SETUPVALIDATOR_OFFSET))(this, readerSettings, reader, partialValidationType);
		}

		::System::Xml::XmlReaderSettings* get_Settings()
		{
			return ((::System::Xml::XmlReaderSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GET_SETTINGS_OFFSET))(this);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GET_NODETYPE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GET_NAME_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GET_LOCALNAME_OFFSET))(this);
		}

		::System::String* get_NamespaceURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GET_NAMESPACEURI_OFFSET))(this);
		}

		::System::String* get_Prefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GET_PREFIX_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GET_VALUE_OFFSET))(this);
		}

		::System::Int32 get_Depth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GET_DEPTH_OFFSET))(this);
		}

		::System::String* get_BaseURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GET_BASEURI_OFFSET))(this);
		}

		::System::Boolean get_IsEmptyElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GET_ISEMPTYELEMENT_OFFSET))(this);
		}

		::System::Boolean get_IsDefault()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GET_ISDEFAULT_OFFSET))(this);
		}

		::System::Char get_QuoteChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GET_QUOTECHAR_OFFSET))(this);
		}

		::System::Xml::XmlSpace get_XmlSpace()
		{
			return ((::System::Xml::XmlSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GET_XMLSPACE_OFFSET))(this);
		}

		::System::String* get_XmlLang()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GET_XMLLANG_OFFSET))(this);
		}

		::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo()
		{
			return ((::System::Xml::Schema::IXmlSchemaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GET_SCHEMAINFO_OFFSET))(this);
		}

		::System::Type* get_ValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Int32 get_AttributeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GET_ATTRIBUTECOUNT_OFFSET))(this);
		}

		::System::String* GetAttribute(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GETATTRIBUTE_OFFSET))(this, name);
		}

		::System::String* GetAttribute_1(::System::String* name, ::System::String* namespaceURI)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GETATTRIBUTE_1_OFFSET))(this, name, namespaceURI);
		}

		::System::String* GetAttribute_2(::System::Int32 i)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GETATTRIBUTE_2_OFFSET))(this, i);
		}

		::System::Boolean MoveToAttribute(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_MOVETOATTRIBUTE_OFFSET))(this, name);
		}

		::System::Void MoveToAttribute_1(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_MOVETOATTRIBUTE_1_OFFSET))(this, i);
		}

		::System::Boolean MoveToFirstAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_MOVETOFIRSTATTRIBUTE_OFFSET))(this);
		}

		::System::Boolean MoveToNextAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_MOVETONEXTATTRIBUTE_OFFSET))(this);
		}

		::System::Boolean MoveToElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_MOVETOELEMENT_OFFSET))(this);
		}

		::System::Boolean Read()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_READ_OFFSET))(this);
		}

		::System::Boolean get_EOF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GET_EOF_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_CLOSE_OFFSET))(this);
		}

		::System::Xml::ReadState get_ReadState()
		{
			return ((::System::Xml::ReadState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GET_READSTATE_OFFSET))(this);
		}

		::System::Void Skip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_SKIP_OFFSET))(this);
		}

		::System::Xml::XmlNameTable* get_NameTable()
		{
			return ((::System::Xml::XmlNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GET_NAMETABLE_OFFSET))(this);
		}

		::System::String* LookupNamespace(::System::String* prefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_LOOKUPNAMESPACE_OFFSET))(this, prefix);
		}

		::System::Void ResolveEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_RESOLVEENTITY_OFFSET))(this);
		}

		::System::Boolean ReadAttributeValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_READATTRIBUTEVALUE_OFFSET))(this);
		}

		::System::Boolean System_Xml_Schema_IXmlSchemaInfo_get_IsDefault()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_ISDEFAULT_OFFSET))(this);
		}

		::System::Boolean System_Xml_Schema_IXmlSchemaInfo_get_IsNil()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_ISNIL_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaValidity System_Xml_Schema_IXmlSchemaInfo_get_Validity()
		{
			return ((::System::Xml::Schema::XmlSchemaValidity(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_VALIDITY_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaSimpleType* System_Xml_Schema_IXmlSchemaInfo_get_MemberType()
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_MEMBERTYPE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaType* System_Xml_Schema_IXmlSchemaInfo_get_SchemaType()
		{
			return ((::System::Xml::Schema::XmlSchemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_SCHEMATYPE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaElement* System_Xml_Schema_IXmlSchemaInfo_get_SchemaElement()
		{
			return ((::System::Xml::Schema::XmlSchemaElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_SCHEMAELEMENT_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaAttribute* System_Xml_Schema_IXmlSchemaInfo_get_SchemaAttribute()
		{
			return ((::System::Xml::Schema::XmlSchemaAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_SCHEMAATTRIBUTE_OFFSET))(this);
		}

		::System::Int32 get_LineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Int32 get_LinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GET_LINEPOSITION_OFFSET))(this);
		}

		::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope)
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::Xml::XmlNamespaceScope))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_GETNAMESPACESINSCOPE_OFFSET))(this, scope);
		}

		::System::String* System_Xml_IXmlNamespaceResolver_LookupNamespace(::System::String* prefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPNAMESPACE_OFFSET))(this, prefix);
		}

		::System::String* System_Xml_IXmlNamespaceResolver_LookupPrefix(::System::String* namespaceName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPPREFIX_OFFSET))(this, namespaceName);
		}

		::System::Object* GetStringValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GETSTRINGVALUE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaInfo* get_AttributeSchemaInfo()
		{
			return ((::System::Xml::Schema::XmlSchemaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GET_ATTRIBUTESCHEMAINFO_OFFSET))(this);
		}

		::System::Void ProcessReaderEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_PROCESSREADEREVENT_OFFSET))(this);
		}

		::System::Void ProcessElementEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_PROCESSELEMENTEVENT_OFFSET))(this);
		}

		::System::Void ProcessEndElementEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_PROCESSENDELEMENTEVENT_OFFSET))(this);
		}

		::System::Void ValidateAttributes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_VALIDATEATTRIBUTES_OFFSET))(this);
		}

		::System::Void ClearAttributesInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_CLEARATTRIBUTESINFO_OFFSET))(this);
		}

		::System::Xml::AttributePSVIInfo* GetAttributePSVI(::System::String* name)
		{
			return ((::System::Xml::AttributePSVIInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GETATTRIBUTEPSVI_OFFSET))(this, name);
		}

		::System::Xml::AttributePSVIInfo* GetAttributePSVI_1(::System::String* localName, ::System::String* ns)
		{
			return ((::System::Xml::AttributePSVIInfo*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GETATTRIBUTEPSVI_1_OFFSET))(this, localName, ns);
		}

		::System::Xml::ValidatingReaderNodeData* GetDefaultAttribute(::System::String* name, ::System::Boolean updatePosition)
		{
			return ((::System::Xml::ValidatingReaderNodeData*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GETDEFAULTATTRIBUTE_OFFSET))(this, name, updatePosition);
		}

		::System::Xml::ValidatingReaderNodeData* GetDefaultAttribute_1(::System::String* attrLocalName, ::System::String* ns, ::System::Boolean updatePosition)
		{
			return ((::System::Xml::ValidatingReaderNodeData*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GETDEFAULTATTRIBUTE_1_OFFSET))(this, attrLocalName, ns, updatePosition);
		}

		::System::Xml::AttributePSVIInfo* AddAttributePSVI(::System::Int32 attIndex)
		{
			return ((::System::Xml::AttributePSVIInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_ADDATTRIBUTEPSVI_OFFSET))(this, attIndex);
		}

		::System::Boolean IsXSDRoot(::System::String* localName, ::System::String* ns)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_ISXSDROOT_OFFSET))(this, localName, ns);
		}

		::System::Void ProcessInlineSchema()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_PROCESSINLINESCHEMA_OFFSET))(this);
		}

		::System::Void ReadAheadForMemberType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_READAHEADFORMEMBERTYPE_OFFSET))(this);
		}

		::System::Void GetIsDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GETISDEFAULT_OFFSET))(this);
		}

		::System::Void GetMemberType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GETMEMBERTYPE_OFFSET))(this);
		}

		::System::Xml::XsdCachingReader* GetCachingReader()
		{
			return ((::System::Xml::XsdCachingReader*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GETCACHINGREADER_OFFSET))(this);
		}

		::System::Xml::ValidatingReaderNodeData* CreateDummyTextNode(::System::String* attributeValue, ::System::Int32 depth)
		{
			return ((::System::Xml::ValidatingReaderNodeData*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_CREATEDUMMYTEXTNODE_OFFSET))(this, attributeValue, depth);
		}

		::System::Void CachingCallBack(::System::Xml::XsdCachingReader* cachingReader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XsdCachingReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_CACHINGCALLBACK_OFFSET))(this, cachingReader);
		}

		::System::String* GetOriginalAtomicValueStringOfElement()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDVALIDATINGREADER_GETORIGINALATOMICVALUESTRINGOFELEMENT_OFFSET))(this);
		}
	};
}
