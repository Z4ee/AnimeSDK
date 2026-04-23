#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/EntityHandling.h"
#include "unitysdk/System/Xml/ReadState.h"
#include "unitysdk/System/Xml/WhitespaceHandling.h"
#include "unitysdk/System/Xml/XmlNodeType.h"
#include "unitysdk/System/Xml/XmlReader.h"

namespace System { class String; }
namespace System::IO { class TextReader; }
namespace System::Xml { class IDtdInfo; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlResolver; }
namespace System::Xml { class XmlTextReaderImpl; }

#define SYSTEM_XML_XMLTEXTREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1A045520)
#define SYSTEM_XML_XMLTEXTREADER_GETATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1A064C00)
#define SYSTEM_XML_XMLTEXTREADER_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A064B30)
#define SYSTEM_XML_XMLTEXTREADER_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1A064A30)
#define SYSTEM_XML_XMLTEXTREADER_GET_CANRESOLVEENTITY_OFFSET UNITYSDK_OFFSET(0x1A065890)
#define SYSTEM_XML_XMLTEXTREADER_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x1A0649E0)
#define SYSTEM_XML_XMLTEXTREADER_GET_DTDINFO_OFFSET UNITYSDK_OFFSET(0x1A065DC0)
#define SYSTEM_XML_XMLTEXTREADER_GET_IMPL_OFFSET UNITYSDK_OFFSET(0x1A065DB0)
#define SYSTEM_XML_XMLTEXTREADER_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1A064AC0)
#define SYSTEM_XML_XMLTEXTREADER_GET_ISEMPTYELEMENT_OFFSET UNITYSDK_OFFSET(0x1A064A50)
#define SYSTEM_XML_XMLTEXTREADER_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x1A0659B0)
#define SYSTEM_XML_XMLTEXTREADER_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x1A065A00)
#define SYSTEM_XML_XMLTEXTREADER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1A064870)
#define SYSTEM_XML_XMLTEXTREADER_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x1A0648C0)
#define SYSTEM_XML_XMLTEXTREADER_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x1A0657D0)
#define SYSTEM_XML_XMLTEXTREADER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A064780)
#define SYSTEM_XML_XMLTEXTREADER_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1A064730)
#define SYSTEM_XML_XMLTEXTREADER_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1A064910)
#define SYSTEM_XML_XMLTEXTREADER_GET_READSTATE_OFFSET UNITYSDK_OFFSET(0x1A065520)
#define SYSTEM_XML_XMLTEXTREADER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A064960)
#define SYSTEM_XML_XMLTEXTREADER_HASLINEINFO_OFFSET UNITYSDK_OFFSET(0x1A0659A0)
#define SYSTEM_XML_XMLTEXTREADER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1A0657F0)
#define SYSTEM_XML_XMLTEXTREADER_MOVETOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A064D30)
#define SYSTEM_XML_XMLTEXTREADER_MOVETOELEMENT_OFFSET UNITYSDK_OFFSET(0x1A064F80)
#define SYSTEM_XML_XMLTEXTREADER_MOVETOFIRSTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A064D50)
#define SYSTEM_XML_XMLTEXTREADER_MOVETONEXTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A064E50)
#define SYSTEM_XML_XMLTEXTREADER_READATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x1A0650B0)
#define SYSTEM_XML_XMLTEXTREADER_READSTRING_OFFSET UNITYSDK_OFFSET(0x1A0658C0)
#define SYSTEM_XML_XMLTEXTREADER_READ_OFFSET UNITYSDK_OFFSET(0x1A065500)
#define SYSTEM_XML_XMLTEXTREADER_RESOLVEENTITY_OFFSET UNITYSDK_OFFSET(0x1A0658A0)
#define SYSTEM_XML_XMLTEXTREADER_SET_ENTITYHANDLING_OFFSET UNITYSDK_OFFSET(0x1A044D40)
#define SYSTEM_XML_XMLTEXTREADER_SET_NORMALIZATION_OFFSET UNITYSDK_OFFSET(0x1A065B10)
#define SYSTEM_XML_XMLTEXTREADER_SET_WHITESPACEHANDLING_OFFSET UNITYSDK_OFFSET(0x1A065C50)
#define SYSTEM_XML_XMLTEXTREADER_SET_XMLRESOLVER_OFFSET UNITYSDK_OFFSET(0x1A044DD0)
#define SYSTEM_XML_XMLTEXTREADER_SET_XMLVALIDATINGREADERCOMPATIBILITYMODE_OFFSET UNITYSDK_OFFSET(0x1A044D20)
#define SYSTEM_XML_XMLTEXTREADER_SKIP_OFFSET UNITYSDK_OFFSET(0x1A065540)
#define SYSTEM_XML_XMLTEXTREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1A065A50)
#define SYSTEM_XML_XMLTEXTREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x1A065AA0)
#define SYSTEM_XML_XMLTEXTREADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A045480)
#define SYSTEM_XML_XMLTEXTREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0644E0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextReader_TypeDefinitionIndex = 1834;

	class XmlTextReader : public ::System::Xml::XmlReader
	{
	public:
		::System::Xml::XmlTextReaderImpl* impl; // 0x10

		::System::Void _ctor(::System::IO::TextReader* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER__CTOR_OFFSET))(this, input);
		}

		::System::Void _ctor_1(::System::IO::TextReader* input, ::System::Xml::XmlNameTable* nt)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextReader*, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER__CTOR_1_OFFSET))(this, input, nt);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GET_NODETYPE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GET_NAME_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GET_LOCALNAME_OFFSET))(this);
		}

		::System::String* get_NamespaceURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GET_NAMESPACEURI_OFFSET))(this);
		}

		::System::String* get_Prefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GET_PREFIX_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GET_VALUE_OFFSET))(this);
		}

		::System::Int32 get_Depth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GET_DEPTH_OFFSET))(this);
		}

		::System::String* get_BaseURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GET_BASEURI_OFFSET))(this);
		}

		::System::Boolean get_IsEmptyElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GET_ISEMPTYELEMENT_OFFSET))(this);
		}

		::System::Boolean get_IsDefault()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GET_ISDEFAULT_OFFSET))(this);
		}

		::System::String* GetAttribute(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GETATTRIBUTE_OFFSET))(this, name);
		}

		::System::String* GetAttribute_1(::System::String* localName, ::System::String* namespaceURI)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GETATTRIBUTE_1_OFFSET))(this, localName, namespaceURI);
		}

		::System::Boolean MoveToAttribute(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_MOVETOATTRIBUTE_OFFSET))(this, name);
		}

		::System::Boolean MoveToFirstAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_MOVETOFIRSTATTRIBUTE_OFFSET))(this);
		}

		::System::Boolean MoveToNextAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_MOVETONEXTATTRIBUTE_OFFSET))(this);
		}

		::System::Boolean MoveToElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_MOVETOELEMENT_OFFSET))(this);
		}

		::System::Boolean ReadAttributeValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_READATTRIBUTEVALUE_OFFSET))(this);
		}

		::System::Boolean Read()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_READ_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_CLOSE_OFFSET))(this);
		}

		::System::Xml::ReadState get_ReadState()
		{
			return ((::System::Xml::ReadState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GET_READSTATE_OFFSET))(this);
		}

		::System::Void Skip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_SKIP_OFFSET))(this);
		}

		::System::Xml::XmlNameTable* get_NameTable()
		{
			return ((::System::Xml::XmlNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GET_NAMETABLE_OFFSET))(this);
		}

		::System::String* LookupNamespace(::System::String* prefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_LOOKUPNAMESPACE_OFFSET))(this, prefix);
		}

		::System::Boolean get_CanResolveEntity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GET_CANRESOLVEENTITY_OFFSET))(this);
		}

		::System::Void ResolveEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_RESOLVEENTITY_OFFSET))(this);
		}

		::System::String* ReadString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_READSTRING_OFFSET))(this);
		}

		::System::Boolean HasLineInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_HASLINEINFO_OFFSET))(this);
		}

		::System::Int32 get_LineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Int32 get_LinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GET_LINEPOSITION_OFFSET))(this);
		}

		::System::String* System_Xml_IXmlNamespaceResolver_LookupNamespace(::System::String* prefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPNAMESPACE_OFFSET))(this, prefix);
		}

		::System::String* System_Xml_IXmlNamespaceResolver_LookupPrefix(::System::String* namespaceName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPPREFIX_OFFSET))(this, namespaceName);
		}

		::System::Void set_Normalization(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_SET_NORMALIZATION_OFFSET))(this, value);
		}

		::System::Void set_WhitespaceHandling(::System::Xml::WhitespaceHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::WhitespaceHandling))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_SET_WHITESPACEHANDLING_OFFSET))(this, value);
		}

		::System::Void set_EntityHandling(::System::Xml::EntityHandling value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::EntityHandling))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_SET_ENTITYHANDLING_OFFSET))(this, value);
		}

		::System::Void set_XmlResolver(::System::Xml::XmlResolver* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_SET_XMLRESOLVER_OFFSET))(this, value);
		}

		::System::Xml::XmlTextReaderImpl* get_Impl()
		{
			return ((::System::Xml::XmlTextReaderImpl*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GET_IMPL_OFFSET))(this);
		}

		::System::Void set_XmlValidatingReaderCompatibilityMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_SET_XMLVALIDATINGREADERCOMPATIBILITYMODE_OFFSET))(this, value);
		}

		::System::Xml::IDtdInfo* get_DtdInfo()
		{
			return ((::System::Xml::IDtdInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GET_DTDINFO_OFFSET))(this);
		}
	};
}
