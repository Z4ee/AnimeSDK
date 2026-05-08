#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/ReadState.h"
#include "unitysdk/System/Xml/XmlNodeType.h"
#include "unitysdk/System/Xml/XmlReader.h"
#include "unitysdk/System/Xml/XmlSpace.h"
#include "unitysdk/System/Xml/XsdCachingReader_CachingReaderState.h"

namespace System { class String; }
namespace System::Xml { class CachingEventHandler; }
namespace System::Xml { class IXmlLineInfo; }
namespace System::Xml { class ValidatingReaderNodeData; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlReaderSettings; }

#define SYSTEM_XML_XSDCACHINGREADER_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AB2D020)
#define SYSTEM_XML_XSDCACHINGREADER_ADDCONTENT_OFFSET UNITYSDK_OFFSET(0x1AB2B880)
#define SYSTEM_XML_XSDCACHINGREADER_CLEARATTRIBUTESINFO_OFFSET UNITYSDK_OFFSET(0x1AB2C830)
#define SYSTEM_XML_XSDCACHINGREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1AB2CBA0)
#define SYSTEM_XML_XSDCACHINGREADER_CREATEDUMMYTEXTNODE_OFFSET UNITYSDK_OFFSET(0x1AB2CED0)
#define SYSTEM_XML_XSDCACHINGREADER_GETATTRIBUTEINDEXWITHOUTPREFIX_OFFSET UNITYSDK_OFFSET(0x1AB2BFE0)
#define SYSTEM_XML_XSDCACHINGREADER_GETATTRIBUTEINDEXWITHPREFIX_OFFSET UNITYSDK_OFFSET(0x1AB2C080)
#define SYSTEM_XML_XSDCACHINGREADER_GETATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1AB2C1B0)
#define SYSTEM_XML_XSDCACHINGREADER_GETATTRIBUTE_2_OFFSET UNITYSDK_OFFSET(0x1AB2C280)
#define SYSTEM_XML_XSDCACHINGREADER_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AB2BF50)
#define SYSTEM_XML_XSDCACHINGREADER_GET_ATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0x1AB2BF40)
#define SYSTEM_XML_XSDCACHINGREADER_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1AB2BE60)
#define SYSTEM_XML_XSDCACHINGREADER_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x1AB2BE40)
#define SYSTEM_XML_XSDCACHINGREADER_GET_EOF_OFFSET UNITYSDK_OFFSET(0x1AB2CB60)
#define SYSTEM_XML_XSDCACHINGREADER_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1AB2BEA0)
#define SYSTEM_XML_XSDCACHINGREADER_GET_ISEMPTYELEMENT_OFFSET UNITYSDK_OFFSET(0x1AB2BE90)
#define SYSTEM_XML_XSDCACHINGREADER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1AB2BDA0)
#define SYSTEM_XML_XSDCACHINGREADER_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x1AB2BDC0)
#define SYSTEM_XML_XSDCACHINGREADER_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x1AB2CD20)
#define SYSTEM_XML_XSDCACHINGREADER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AB2BD10)
#define SYSTEM_XML_XSDCACHINGREADER_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1AB2BCF0)
#define SYSTEM_XML_XSDCACHINGREADER_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1AB2BDE0)
#define SYSTEM_XML_XSDCACHINGREADER_GET_QUOTECHAR_OFFSET UNITYSDK_OFFSET(0x1AB2BEB0)
#define SYSTEM_XML_XSDCACHINGREADER_GET_READSTATE_OFFSET UNITYSDK_OFFSET(0x1AB2CBD0)
#define SYSTEM_XML_XSDCACHINGREADER_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1AB2BCC0)
#define SYSTEM_XML_XSDCACHINGREADER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1AB2BE00)
#define SYSTEM_XML_XSDCACHINGREADER_GET_XMLLANG_OFFSET UNITYSDK_OFFSET(0x1AB2BF10)
#define SYSTEM_XML_XSDCACHINGREADER_GET_XMLSPACE_OFFSET UNITYSDK_OFFSET(0x1AB2BEE0)
#define SYSTEM_XML_XSDCACHINGREADER_INIT_OFFSET UNITYSDK_OFFSET(0x1AB2B710)
#define SYSTEM_XML_XSDCACHINGREADER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1AB2CD30)
#define SYSTEM_XML_XSDCACHINGREADER_MOVETOATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1AB2C3B0)
#define SYSTEM_XML_XSDCACHINGREADER_MOVETOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AB2C320)
#define SYSTEM_XML_XSDCACHINGREADER_MOVETOELEMENT_OFFSET UNITYSDK_OFFSET(0x1AB2C4F0)
#define SYSTEM_XML_XSDCACHINGREADER_MOVETOFIRSTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AB2C450)
#define SYSTEM_XML_XSDCACHINGREADER_MOVETONEXTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AB2C4A0)
#define SYSTEM_XML_XSDCACHINGREADER_READATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x1AB2CDB0)
#define SYSTEM_XML_XSDCACHINGREADER_READ_OFFSET UNITYSDK_OFFSET(0x1AB2C530)
#define SYSTEM_XML_XSDCACHINGREADER_RECORDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1AB2BB10)
#define SYSTEM_XML_XSDCACHINGREADER_RECORDENDELEMENTNODE_OFFSET UNITYSDK_OFFSET(0x1AB2CA20)
#define SYSTEM_XML_XSDCACHINGREADER_RECORDTEXTNODE_OFFSET UNITYSDK_OFFSET(0x1AB2C840)
#define SYSTEM_XML_XSDCACHINGREADER_RESET_OFFSET UNITYSDK_OFFSET(0x1AB2BCB0)
#define SYSTEM_XML_XSDCACHINGREADER_RESOLVEENTITY_OFFSET UNITYSDK_OFFSET(0x1AB2CD60)
#define SYSTEM_XML_XSDCACHINGREADER_SETTOREPLAYMODE_OFFSET UNITYSDK_OFFSET(0x1AB2D000)
#define SYSTEM_XML_XSDCACHINGREADER_SKIP_OFFSET UNITYSDK_OFFSET(0x1AB2CC00)
#define SYSTEM_XML_XSDCACHINGREADER_SWITCHTEXTNODEANDENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1AB2C890)
#define SYSTEM_XML_XSDCACHINGREADER_SYSTEM_XML_IXMLLINEINFO_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x1AB2CFC0)
#define SYSTEM_XML_XSDCACHINGREADER_SYSTEM_XML_IXMLLINEINFO_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x1AB2CFE0)
#define SYSTEM_XML_XSDCACHINGREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB2B670)

namespace System::Xml
{
	inline static constexpr unsigned int XsdCachingReader_TypeDefinitionIndex = 1744;

	class XsdCachingReader : public ::System::Xml::XmlReader
	{
	public:
		::System::Xml::ValidatingReaderNodeData* cachedNode; // 0x10
		::System::Xml::XmlReader* coreReader; // 0x18
		::Il2CppArray<::System::Xml::ValidatingReaderNodeData*>* contentEvents; // 0x20
		::System::Xml::CachingEventHandler* cacheHandler; // 0x28
		::System::Xml::ValidatingReaderNodeData* textNode; // 0x30
		::System::Xml::IXmlLineInfo* lineInfo; // 0x38
		::Il2CppArray<::System::Xml::ValidatingReaderNodeData*>* attributeEvents; // 0x40
		::System::Xml::XmlNameTable* coreReaderNameTable; // 0x48
		::System::Int32 currentAttrIndex; // 0x50
		::System::Int32 attributeCount; // 0x54
		::System::Int32 contentIndex; // 0x58
		::System::Xml::XsdCachingReader_CachingReaderState cacheState; // 0x5C
		::System::Boolean returnOriginalStringValues; // 0x60
		::System::Boolean readAhead; // 0x61
		::System::Int32 currentContentIndex; // 0x64

		::System::Void _ctor(::System::Xml::XmlReader* reader, ::System::Xml::IXmlLineInfo* lineInfo, ::System::Xml::CachingEventHandler* handlerMethod)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Xml::IXmlLineInfo*, ::System::Xml::CachingEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER__CTOR_OFFSET))(this, reader, lineInfo, handlerMethod);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_INIT_OFFSET))(this);
		}

		::System::Void Reset(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_RESET_OFFSET))(this, reader);
		}

		::System::Xml::XmlReaderSettings* get_Settings()
		{
			return ((::System::Xml::XmlReaderSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_GET_SETTINGS_OFFSET))(this);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_GET_NODETYPE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_GET_NAME_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_GET_LOCALNAME_OFFSET))(this);
		}

		::System::String* get_NamespaceURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_GET_NAMESPACEURI_OFFSET))(this);
		}

		::System::String* get_Prefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_GET_PREFIX_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_GET_VALUE_OFFSET))(this);
		}

		::System::Int32 get_Depth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_GET_DEPTH_OFFSET))(this);
		}

		::System::String* get_BaseURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_GET_BASEURI_OFFSET))(this);
		}

		::System::Boolean get_IsEmptyElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_GET_ISEMPTYELEMENT_OFFSET))(this);
		}

		::System::Boolean get_IsDefault()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_GET_ISDEFAULT_OFFSET))(this);
		}

		::System::Char get_QuoteChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_GET_QUOTECHAR_OFFSET))(this);
		}

		::System::Xml::XmlSpace get_XmlSpace()
		{
			return ((::System::Xml::XmlSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_GET_XMLSPACE_OFFSET))(this);
		}

		::System::String* get_XmlLang()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_GET_XMLLANG_OFFSET))(this);
		}

		::System::Int32 get_AttributeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_GET_ATTRIBUTECOUNT_OFFSET))(this);
		}

		::System::String* GetAttribute(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_GETATTRIBUTE_OFFSET))(this, name);
		}

		::System::String* GetAttribute_1(::System::String* name, ::System::String* namespaceURI)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_GETATTRIBUTE_1_OFFSET))(this, name, namespaceURI);
		}

		::System::String* GetAttribute_2(::System::Int32 i)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_GETATTRIBUTE_2_OFFSET))(this, i);
		}

		::System::Boolean MoveToAttribute(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_MOVETOATTRIBUTE_OFFSET))(this, name);
		}

		::System::Void MoveToAttribute_1(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_MOVETOATTRIBUTE_1_OFFSET))(this, i);
		}

		::System::Boolean MoveToFirstAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_MOVETOFIRSTATTRIBUTE_OFFSET))(this);
		}

		::System::Boolean MoveToNextAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_MOVETONEXTATTRIBUTE_OFFSET))(this);
		}

		::System::Boolean MoveToElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_MOVETOELEMENT_OFFSET))(this);
		}

		::System::Boolean Read()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_READ_OFFSET))(this);
		}

		::System::Xml::ValidatingReaderNodeData* RecordTextNode(::System::String* textValue, ::System::String* originalStringValue, ::System::Int32 depth, ::System::Int32 lineNo, ::System::Int32 linePos)
		{
			return ((::System::Xml::ValidatingReaderNodeData*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_RECORDTEXTNODE_OFFSET))(this, textValue, originalStringValue, depth, lineNo, linePos);
		}

		::System::Void SwitchTextNodeAndEndElement(::System::String* textValue, ::System::String* originalStringValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_SWITCHTEXTNODEANDENDELEMENT_OFFSET))(this, textValue, originalStringValue);
		}

		::System::Void RecordEndElementNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_RECORDENDELEMENTNODE_OFFSET))(this);
		}

		::System::Boolean get_EOF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_GET_EOF_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_CLOSE_OFFSET))(this);
		}

		::System::Xml::ReadState get_ReadState()
		{
			return ((::System::Xml::ReadState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_GET_READSTATE_OFFSET))(this);
		}

		::System::Void Skip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_SKIP_OFFSET))(this);
		}

		::System::Xml::XmlNameTable* get_NameTable()
		{
			return ((::System::Xml::XmlNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_GET_NAMETABLE_OFFSET))(this);
		}

		::System::String* LookupNamespace(::System::String* prefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_LOOKUPNAMESPACE_OFFSET))(this, prefix);
		}

		::System::Void ResolveEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_RESOLVEENTITY_OFFSET))(this);
		}

		::System::Boolean ReadAttributeValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_READATTRIBUTEVALUE_OFFSET))(this);
		}

		::System::Int32 System_Xml_IXmlLineInfo_get_LineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_SYSTEM_XML_IXMLLINEINFO_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Int32 System_Xml_IXmlLineInfo_get_LinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_SYSTEM_XML_IXMLLINEINFO_GET_LINEPOSITION_OFFSET))(this);
		}

		::System::Void SetToReplayMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_SETTOREPLAYMODE_OFFSET))(this);
		}

		::System::Void ClearAttributesInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_CLEARATTRIBUTESINFO_OFFSET))(this);
		}

		::System::Xml::ValidatingReaderNodeData* AddAttribute(::System::Int32 attIndex)
		{
			return ((::System::Xml::ValidatingReaderNodeData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_ADDATTRIBUTE_OFFSET))(this, attIndex);
		}

		::System::Xml::ValidatingReaderNodeData* AddContent(::System::Xml::XmlNodeType nodeType)
		{
			return ((::System::Xml::ValidatingReaderNodeData*(*)(::PVOID, ::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_ADDCONTENT_OFFSET))(this, nodeType);
		}

		::System::Void RecordAttributes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_RECORDATTRIBUTES_OFFSET))(this);
		}

		::System::Int32 GetAttributeIndexWithoutPrefix(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_GETATTRIBUTEINDEXWITHOUTPREFIX_OFFSET))(this, name);
		}

		::System::Int32 GetAttributeIndexWithPrefix(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_GETATTRIBUTEINDEXWITHPREFIX_OFFSET))(this, name);
		}

		::System::Xml::ValidatingReaderNodeData* CreateDummyTextNode(::System::String* attributeValue, ::System::Int32 depth)
		{
			return ((::System::Xml::ValidatingReaderNodeData*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XSDCACHINGREADER_CREATEDUMMYTEXTNODE_OFFSET))(this, attributeValue, depth);
		}
	};
}
