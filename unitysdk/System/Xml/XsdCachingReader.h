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

#define SYSTEM_XML_XSDCACHINGREADER_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1CFC7770)
#define SYSTEM_XML_XSDCACHINGREADER_ADDCONTENT_OFFSET UNITYSDK_OFFSET(0x1CFC5FA0)
#define SYSTEM_XML_XSDCACHINGREADER_CLEARATTRIBUTESINFO_OFFSET UNITYSDK_OFFSET(0x1CFC6F60)
#define SYSTEM_XML_XSDCACHINGREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1CFC72D0)
#define SYSTEM_XML_XSDCACHINGREADER_CREATEDUMMYTEXTNODE_OFFSET UNITYSDK_OFFSET(0x1CFC7610)
#define SYSTEM_XML_XSDCACHINGREADER_GETATTRIBUTEINDEXWITHOUTPREFIX_OFFSET UNITYSDK_OFFSET(0x1CFC6710)
#define SYSTEM_XML_XSDCACHINGREADER_GETATTRIBUTEINDEXWITHPREFIX_OFFSET UNITYSDK_OFFSET(0x1CFC67B0)
#define SYSTEM_XML_XSDCACHINGREADER_GETATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1CFC68E0)
#define SYSTEM_XML_XSDCACHINGREADER_GETATTRIBUTE_2_OFFSET UNITYSDK_OFFSET(0x1CFC69B0)
#define SYSTEM_XML_XSDCACHINGREADER_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1CFC6680)
#define SYSTEM_XML_XSDCACHINGREADER_GET_ATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0x1CFC6670)
#define SYSTEM_XML_XSDCACHINGREADER_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1CFC6590)
#define SYSTEM_XML_XSDCACHINGREADER_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x1CFC6570)
#define SYSTEM_XML_XSDCACHINGREADER_GET_EOF_OFFSET UNITYSDK_OFFSET(0x1CFC7290)
#define SYSTEM_XML_XSDCACHINGREADER_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1CFC65D0)
#define SYSTEM_XML_XSDCACHINGREADER_GET_ISEMPTYELEMENT_OFFSET UNITYSDK_OFFSET(0x1CFC65C0)
#define SYSTEM_XML_XSDCACHINGREADER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1CFC64D0)
#define SYSTEM_XML_XSDCACHINGREADER_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x1CFC64F0)
#define SYSTEM_XML_XSDCACHINGREADER_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x1CFC7450)
#define SYSTEM_XML_XSDCACHINGREADER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CFC6440)
#define SYSTEM_XML_XSDCACHINGREADER_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1CFC6420)
#define SYSTEM_XML_XSDCACHINGREADER_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1CFC6510)
#define SYSTEM_XML_XSDCACHINGREADER_GET_QUOTECHAR_OFFSET UNITYSDK_OFFSET(0x1CFC65E0)
#define SYSTEM_XML_XSDCACHINGREADER_GET_READSTATE_OFFSET UNITYSDK_OFFSET(0x1CFC7300)
#define SYSTEM_XML_XSDCACHINGREADER_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1CFC63F0)
#define SYSTEM_XML_XSDCACHINGREADER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1CFC6530)
#define SYSTEM_XML_XSDCACHINGREADER_GET_XMLLANG_OFFSET UNITYSDK_OFFSET(0x1CFC6640)
#define SYSTEM_XML_XSDCACHINGREADER_GET_XMLSPACE_OFFSET UNITYSDK_OFFSET(0x1CFC6610)
#define SYSTEM_XML_XSDCACHINGREADER_INIT_OFFSET UNITYSDK_OFFSET(0x1CFC5E30)
#define SYSTEM_XML_XSDCACHINGREADER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1CFC7460)
#define SYSTEM_XML_XSDCACHINGREADER_MOVETOATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1CFC6AE0)
#define SYSTEM_XML_XSDCACHINGREADER_MOVETOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1CFC6A50)
#define SYSTEM_XML_XSDCACHINGREADER_MOVETOELEMENT_OFFSET UNITYSDK_OFFSET(0x1CFC6C20)
#define SYSTEM_XML_XSDCACHINGREADER_MOVETOFIRSTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1CFC6B80)
#define SYSTEM_XML_XSDCACHINGREADER_MOVETONEXTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1CFC6BD0)
#define SYSTEM_XML_XSDCACHINGREADER_READATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x1CFC74E0)
#define SYSTEM_XML_XSDCACHINGREADER_READ_OFFSET UNITYSDK_OFFSET(0x1CFC6C60)
#define SYSTEM_XML_XSDCACHINGREADER_RECORDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1CFC6240)
#define SYSTEM_XML_XSDCACHINGREADER_RECORDENDELEMENTNODE_OFFSET UNITYSDK_OFFSET(0x1CFC7150)
#define SYSTEM_XML_XSDCACHINGREADER_RECORDTEXTNODE_OFFSET UNITYSDK_OFFSET(0x1CFC6F70)
#define SYSTEM_XML_XSDCACHINGREADER_RESET_OFFSET UNITYSDK_OFFSET(0x1CFC63E0)
#define SYSTEM_XML_XSDCACHINGREADER_RESOLVEENTITY_OFFSET UNITYSDK_OFFSET(0x1CFC7490)
#define SYSTEM_XML_XSDCACHINGREADER_SETTOREPLAYMODE_OFFSET UNITYSDK_OFFSET(0x1CFC7750)
#define SYSTEM_XML_XSDCACHINGREADER_SKIP_OFFSET UNITYSDK_OFFSET(0x1CFC7330)
#define SYSTEM_XML_XSDCACHINGREADER_SWITCHTEXTNODEANDENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1CFC6FC0)
#define SYSTEM_XML_XSDCACHINGREADER_SYSTEM_XML_IXMLLINEINFO_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x1CFC7710)
#define SYSTEM_XML_XSDCACHINGREADER_SYSTEM_XML_IXMLLINEINFO_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x1CFC7730)
#define SYSTEM_XML_XSDCACHINGREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC5D90)

namespace System::Xml
{
	inline static constexpr unsigned int XsdCachingReader_TypeDefinitionIndex = 1743;

	class XsdCachingReader : public ::System::Xml::XmlReader
	{
	public:
		::System::Xml::IXmlLineInfo* lineInfo; // 0x10
		::Il2CppArray<::System::Xml::ValidatingReaderNodeData*>* contentEvents; // 0x18
		::System::Xml::ValidatingReaderNodeData* textNode; // 0x20
		::System::Xml::XmlNameTable* coreReaderNameTable; // 0x28
		::System::Xml::ValidatingReaderNodeData* cachedNode; // 0x30
		::System::Xml::XmlReader* coreReader; // 0x38
		::Il2CppArray<::System::Xml::ValidatingReaderNodeData*>* attributeEvents; // 0x40
		::System::Xml::CachingEventHandler* cacheHandler; // 0x48
		::System::Boolean readAhead; // 0x50
		::System::Boolean returnOriginalStringValues; // 0x51
		::System::Int32 contentIndex; // 0x54
		::System::Int32 currentAttrIndex; // 0x58
		::System::Int32 attributeCount; // 0x5C
		::System::Int32 currentContentIndex; // 0x60
		::System::Xml::XsdCachingReader_CachingReaderState cacheState; // 0x64

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
