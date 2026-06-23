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

#define SYSTEM_XML_XSDVALIDATINGREADER_ADDATTRIBUTEPSVI_OFFSET UNITYSDK_OFFSET(0x1BD0A020)
#define SYSTEM_XML_XSDVALIDATINGREADER_CACHINGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BD0A610)
#define SYSTEM_XML_XSDVALIDATINGREADER_CLEARATTRIBUTESINFO_OFFSET UNITYSDK_OFFSET(0x1BD07F50)
#define SYSTEM_XML_XSDVALIDATINGREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1BD07FD0)
#define SYSTEM_XML_XSDVALIDATINGREADER_CREATEDUMMYTEXTNODE_OFFSET UNITYSDK_OFFSET(0x1BD08500)
#define SYSTEM_XML_XSDVALIDATINGREADER_GETATTRIBUTEPSVI_1_OFFSET UNITYSDK_OFFSET(0x1BD0A250)
#define SYSTEM_XML_XSDVALIDATINGREADER_GETATTRIBUTEPSVI_OFFSET UNITYSDK_OFFSET(0x1BD072C0)
#define SYSTEM_XML_XSDVALIDATINGREADER_GETATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1BD06F20)
#define SYSTEM_XML_XSDVALIDATINGREADER_GETATTRIBUTE_2_OFFSET UNITYSDK_OFFSET(0x1BD07120)
#define SYSTEM_XML_XSDVALIDATINGREADER_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1BD06D00)
#define SYSTEM_XML_XSDVALIDATINGREADER_GETCACHINGREADER_OFFSET UNITYSDK_OFFSET(0x1BD09EF0)
#define SYSTEM_XML_XSDVALIDATINGREADER_GETDEFAULTATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1BD06FF0)
#define SYSTEM_XML_XSDVALIDATINGREADER_GETDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1BD06D70)
#define SYSTEM_XML_XSDVALIDATINGREADER_GETISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1BD08690)
#define SYSTEM_XML_XSDVALIDATINGREADER_GETMEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x1BD08BD0)
#define SYSTEM_XML_XSDVALIDATINGREADER_GETORIGINALATOMICVALUESTRINGOFELEMENT_OFFSET UNITYSDK_OFFSET(0x1BD09E70)
#define SYSTEM_XML_XSDVALIDATINGREADER_GETSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x1BD092C0)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_ATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0x1BD06CF0)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_ATTRIBUTESCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x1BD06CD0)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1BD06AD0)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x1BD06A80)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_EOF_OFFSET UNITYSDK_OFFSET(0x1BD07FA0)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1BD06B30)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_ISEMPTYELEMENT_OFFSET UNITYSDK_OFFSET(0x1BD06B00)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x1BD08DE0)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x1BD08EC0)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1BD06940)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x1BD06990)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x1BD08220)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1BD06810)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1BD06770)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1BD069E0)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_QUOTECHAR_OFFSET UNITYSDK_OFFSET(0x1BD06B70)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_READSTATE_OFFSET UNITYSDK_OFFSET(0x1BD08010)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_SCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x1BD06C00)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1BD06560)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1BD06C10)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1BD06A30)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_XMLLANG_OFFSET UNITYSDK_OFFSET(0x1BD06BD0)
#define SYSTEM_XML_XSDVALIDATINGREADER_GET_XMLSPACE_OFFSET UNITYSDK_OFFSET(0x1BD06BA0)
#define SYSTEM_XML_XSDVALIDATINGREADER_INIT_OFFSET UNITYSDK_OFFSET(0x1BD05F30)
#define SYSTEM_XML_XSDVALIDATINGREADER_ISXSDROOT_OFFSET UNITYSDK_OFFSET(0x1BD09BF0)
#define SYSTEM_XML_XSDVALIDATINGREADER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1BD08230)
#define SYSTEM_XML_XSDVALIDATINGREADER_MOVETOATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1BD074F0)
#define SYSTEM_XML_XSDVALIDATINGREADER_MOVETOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1BD07200)
#define SYSTEM_XML_XSDVALIDATINGREADER_MOVETOELEMENT_OFFSET UNITYSDK_OFFSET(0x1BD079E0)
#define SYSTEM_XML_XSDVALIDATINGREADER_MOVETOFIRSTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1BD076B0)
#define SYSTEM_XML_XSDVALIDATINGREADER_MOVETONEXTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1BD07850)
#define SYSTEM_XML_XSDVALIDATINGREADER_PROCESSELEMENTEVENT_OFFSET UNITYSDK_OFFSET(0x1BD092F0)
#define SYSTEM_XML_XSDVALIDATINGREADER_PROCESSENDELEMENTEVENT_OFFSET UNITYSDK_OFFSET(0x1BD09930)
#define SYSTEM_XML_XSDVALIDATINGREADER_PROCESSINLINESCHEMA_OFFSET UNITYSDK_OFFSET(0x1BD07E40)
#define SYSTEM_XML_XSDVALIDATINGREADER_PROCESSREADEREVENT_OFFSET UNITYSDK_OFFSET(0x1BD07C30)
#define SYSTEM_XML_XSDVALIDATINGREADER_READAHEADFORMEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x1BD0A2D0)
#define SYSTEM_XML_XSDVALIDATINGREADER_READATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x1BD08360)
#define SYSTEM_XML_XSDVALIDATINGREADER_READ_OFFSET UNITYSDK_OFFSET(0x1BD07A40)
#define SYSTEM_XML_XSDVALIDATINGREADER_RESOLVEENTITY_OFFSET UNITYSDK_OFFSET(0x1BD08310)
#define SYSTEM_XML_XSDVALIDATINGREADER_SETUPVALIDATOR_OFFSET UNITYSDK_OFFSET(0x1BD061D0)
#define SYSTEM_XML_XSDVALIDATINGREADER_SKIP_OFFSET UNITYSDK_OFFSET(0x1BD08050)
#define SYSTEM_XML_XSDVALIDATINGREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_GETNAMESPACESINSCOPE_OFFSET UNITYSDK_OFFSET(0x1BD08FA0)
#define SYSTEM_XML_XSDVALIDATINGREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1BD090A0)
#define SYSTEM_XML_XSDVALIDATINGREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x1BD091B0)
#define SYSTEM_XML_XSDVALIDATINGREADER_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1BD08600)
#define SYSTEM_XML_XSDVALIDATINGREADER_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_ISNIL_OFFSET UNITYSDK_OFFSET(0x1BD08A50)
#define SYSTEM_XML_XSDVALIDATINGREADER_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x1BD08B40)
#define SYSTEM_XML_XSDVALIDATINGREADER_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_SCHEMAATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1BD08DA0)
#define SYSTEM_XML_XSDVALIDATINGREADER_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_SCHEMAELEMENT_OFFSET UNITYSDK_OFFSET(0x1BD08D50)
#define SYSTEM_XML_XSDVALIDATINGREADER_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_SCHEMATYPE_OFFSET UNITYSDK_OFFSET(0x1BD08CF0)
#define SYSTEM_XML_XSDVALIDATINGREADER_SYSTEM_XML_SCHEMA_IXMLSCHEMAINFO_GET_VALIDITY_OFFSET UNITYSDK_OFFSET(0x1BD08A90)
#define SYSTEM_XML_XSDVALIDATINGREADER_VALIDATEATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1BD09C10)
#define SYSTEM_XML_XSDVALIDATINGREADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BD06540)
#define SYSTEM_XML_XSDVALIDATINGREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD05D80)

namespace System::Xml
{
	inline static constexpr unsigned int XsdValidatingReader_TypeDefinitionIndex = 1747;

	class XsdValidatingReader : public ::System::Xml::XmlReader
	{
	public:
		static ::System::Type** StaticGet_TypeOfString()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(XsdValidatingReader_TypeDefinitionIndex)->GetStaticField(0x1A30);
		}
		::Il2CppArray<::System::Xml::AttributePSVIInfo*>* attributePSVINodes; // 0x10
		::System::Collections::ArrayList* defaultAttributes; // 0x18
		::System::Xml::XsdCachingReader* cachingReader; // 0x20
		::System::Xml::XmlReader* coreReader; // 0x28
		::System::Xml::Schema::XmlSchemaValidator* validator; // 0x30
		::System::Xml::XmlNamespaceManager* nsManager; // 0x38
		::System::Xml::AttributePSVIInfo* attributePSVI; // 0x40
		::System::String* NsXs; // 0x48
		::System::String* XsiType; // 0x50
		::System::Xml::IXmlNamespaceResolver* thisNSResolver; // 0x58
		::System::Xml::ValidatingReaderNodeData* textNode; // 0x60
		::System::String* XsiNil; // 0x68
		::System::String* NsXsi; // 0x70
		::System::String* originalAtomicValueString; // 0x78
		::System::Xml::XmlCharType xmlCharType; // 0x80
		::System::Xml::Schema::ValidationEventHandler* validationEvent; // 0x88
		::System::Xml::XmlNameTable* coreReaderNameTable; // 0x90
		::System::String* XsdSchema; // 0x98
		::System::Xml::Schema::XmlValueGetter* valueGetter; // 0xA0
		::System::Object* atomicValue; // 0xA8
		::System::Xml::XmlResolver* xmlResolver; // 0xB0
		::System::String* XsiSchemaLocation; // 0xB8
		::System::Xml::ValidatingReaderNodeData* cachedNode; // 0xC0
		::System::String* NsXmlNs; // 0xC8
		::System::Xml::IXmlLineInfo* lineInfo; // 0xD0
		::System::Xml::ReadContentAsBinaryHelper* readBinaryHelper; // 0xD8
		::System::Xml::IXmlNamespaceResolver* coreReaderNSResolver; // 0xE0
		::System::Xml::Schema::XmlSchemaInfo* xmlSchemaInfo; // 0xE8
		::System::String* XsiNoNamespaceSchemaLocation; // 0xF0
		::System::Xml::Schema::Parser* inlineSchemaParser; // 0xF8
		::System::Int32 currentAttrIndex; // 0x100
		::System::Boolean processInlineSchema; // 0x104
		::System::Boolean manageNamespaces; // 0x105
		::System::Boolean replayCache; // 0x106
		::System::Xml::XsdValidatingReader_ValidatingReaderState savedState; // 0x108
		::System::Xml::XsdValidatingReader_ValidatingReaderState validationState; // 0x10C
		::System::Int32 coreReaderAttributeCount; // 0x110
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
