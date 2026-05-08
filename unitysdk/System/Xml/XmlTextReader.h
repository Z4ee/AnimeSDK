#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/EntityHandling.h"
#include "unitysdk/System/Xml/ReadState.h"
#include "unitysdk/System/Xml/WhitespaceHandling.h"
#include "unitysdk/System/Xml/XmlNamespaceScope.h"
#include "unitysdk/System/Xml/XmlNodeType.h"
#include "unitysdk/System/Xml/XmlReader.h"
#include "unitysdk/System/Xml/XmlSpace.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::IO { class Stream; }
namespace System::IO { class TextReader; }
namespace System::Xml { class IDtdInfo; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlNamespaceManager; }
namespace System::Xml { class XmlResolver; }
namespace System::Xml { class XmlTextReaderImpl; }

#define SYSTEM_XML_XMLTEXTREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1B979F20)
#define SYSTEM_XML_XMLTEXTREADER_GETATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1B979C70)
#define SYSTEM_XML_XMLTEXTREADER_GETATTRIBUTE_2_OFFSET UNITYSDK_OFFSET(0x1B979C90)
#define SYSTEM_XML_XMLTEXTREADER_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B979C50)
#define SYSTEM_XML_XMLTEXTREADER_GET_ATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0x1B979C30)
#define SYSTEM_XML_XMLTEXTREADER_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1B979AF0)
#define SYSTEM_XML_XMLTEXTREADER_GET_CANREADVALUECHUNK_OFFSET UNITYSDK_OFFSET(0x1B97A040)
#define SYSTEM_XML_XMLTEXTREADER_GET_CANRESOLVEENTITY_OFFSET UNITYSDK_OFFSET(0x1B97A010)
#define SYSTEM_XML_XMLTEXTREADER_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x1B979AC0)
#define SYSTEM_XML_XMLTEXTREADER_GET_DTDINFO_OFFSET UNITYSDK_OFFSET(0x1B97A410)
#define SYSTEM_XML_XMLTEXTREADER_GET_EOF_OFFSET UNITYSDK_OFFSET(0x1B979EF0)
#define SYSTEM_XML_XMLTEXTREADER_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1B979B50)
#define SYSTEM_XML_XMLTEXTREADER_GET_ISEMPTYELEMENT_OFFSET UNITYSDK_OFFSET(0x1B979B10)
#define SYSTEM_XML_XMLTEXTREADER_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x1B97A080)
#define SYSTEM_XML_XMLTEXTREADER_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B97A0B0)
#define SYSTEM_XML_XMLTEXTREADER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1B9799B0)
#define SYSTEM_XML_XMLTEXTREADER_GET_NAMESPACEMANAGER_OFFSET UNITYSDK_OFFSET(0x1B97A3D0)
#define SYSTEM_XML_XMLTEXTREADER_GET_NAMESPACES_OFFSET UNITYSDK_OFFSET(0x1B97A1B0)
#define SYSTEM_XML_XMLTEXTREADER_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x1B9799E0)
#define SYSTEM_XML_XMLTEXTREADER_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x1B979F90)
#define SYSTEM_XML_XMLTEXTREADER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B979990)
#define SYSTEM_XML_XMLTEXTREADER_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1B979960)
#define SYSTEM_XML_XMLTEXTREADER_GET_NORMALIZATION_OFFSET UNITYSDK_OFFSET(0x1B97A1D0)
#define SYSTEM_XML_XMLTEXTREADER_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1B979A10)
#define SYSTEM_XML_XMLTEXTREADER_GET_QUOTECHAR_OFFSET UNITYSDK_OFFSET(0x1B979B90)
#define SYSTEM_XML_XMLTEXTREADER_GET_READSTATE_OFFSET UNITYSDK_OFFSET(0x1B979F50)
#define SYSTEM_XML_XMLTEXTREADER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B979A40)
#define SYSTEM_XML_XMLTEXTREADER_GET_XMLLANG_OFFSET UNITYSDK_OFFSET(0x1B979C00)
#define SYSTEM_XML_XMLTEXTREADER_GET_XMLSPACE_OFFSET UNITYSDK_OFFSET(0x1B979BD0)
#define SYSTEM_XML_XMLTEXTREADER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1B979FB0)
#define SYSTEM_XML_XMLTEXTREADER_MOVETOATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1B979CD0)
#define SYSTEM_XML_XMLTEXTREADER_MOVETOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B979CB0)
#define SYSTEM_XML_XMLTEXTREADER_MOVETOELEMENT_OFFSET UNITYSDK_OFFSET(0x1B979E10)
#define SYSTEM_XML_XMLTEXTREADER_MOVETOFIRSTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B979CF0)
#define SYSTEM_XML_XMLTEXTREADER_MOVETONEXTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B979D70)
#define SYSTEM_XML_XMLTEXTREADER_READATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x1B979EB0)
#define SYSTEM_XML_XMLTEXTREADER_READSTRING_OFFSET UNITYSDK_OFFSET(0x1B97A050)
#define SYSTEM_XML_XMLTEXTREADER_READ_OFFSET UNITYSDK_OFFSET(0x1B979ED0)
#define SYSTEM_XML_XMLTEXTREADER_RESOLVEENTITY_OFFSET UNITYSDK_OFFSET(0x1B97A020)
#define SYSTEM_XML_XMLTEXTREADER_SET_ENTITYHANDLING_OFFSET UNITYSDK_OFFSET(0x1B97A2B0)
#define SYSTEM_XML_XMLTEXTREADER_SET_NORMALIZATION_OFFSET UNITYSDK_OFFSET(0x1B97A1F0)
#define SYSTEM_XML_XMLTEXTREADER_SET_WHITESPACEHANDLING_OFFSET UNITYSDK_OFFSET(0x1B97A290)
#define SYSTEM_XML_XMLTEXTREADER_SET_XMLRESOLVER_OFFSET UNITYSDK_OFFSET(0x1B97A340)
#define SYSTEM_XML_XMLTEXTREADER_SET_XMLVALIDATINGREADERCOMPATIBILITYMODE_OFFSET UNITYSDK_OFFSET(0x1B97A3F0)
#define SYSTEM_XML_XMLTEXTREADER_SKIP_OFFSET UNITYSDK_OFFSET(0x1B979F70)
#define SYSTEM_XML_XMLTEXTREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_GETNAMESPACESINSCOPE_OFFSET UNITYSDK_OFFSET(0x1B97A0E0)
#define SYSTEM_XML_XMLTEXTREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1B97A120)
#define SYSTEM_XML_XMLTEXTREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x1B97A170)
#define SYSTEM_XML_XMLTEXTREADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B979700)
#define SYSTEM_XML_XMLTEXTREADER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B979790)
#define SYSTEM_XML_XMLTEXTREADER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B979830)
#define SYSTEM_XML_XMLTEXTREADER__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1B9798C0)
#define SYSTEM_XML_XMLTEXTREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B979680)

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextReader_TypeDefinitionIndex = 1714;

	class XmlTextReader : public ::System::Xml::XmlReader
	{
	public:
		::System::Xml::XmlTextReaderImpl* impl; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IO::Stream* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER__CTOR_1_OFFSET))(this, input);
		}

		::System::Void _ctor_2(::System::String* url, ::System::IO::Stream* input, ::System::Xml::XmlNameTable* nt)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IO::Stream*, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER__CTOR_2_OFFSET))(this, url, input, nt);
		}

		::System::Void _ctor_3(::System::IO::TextReader* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER__CTOR_3_OFFSET))(this, input);
		}

		::System::Void _ctor_4(::System::IO::TextReader* input, ::System::Xml::XmlNameTable* nt)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextReader*, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER__CTOR_4_OFFSET))(this, input, nt);
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

		::System::Char get_QuoteChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GET_QUOTECHAR_OFFSET))(this);
		}

		::System::Xml::XmlSpace get_XmlSpace()
		{
			return ((::System::Xml::XmlSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GET_XMLSPACE_OFFSET))(this);
		}

		::System::String* get_XmlLang()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GET_XMLLANG_OFFSET))(this);
		}

		::System::Int32 get_AttributeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GET_ATTRIBUTECOUNT_OFFSET))(this);
		}

		::System::String* GetAttribute(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GETATTRIBUTE_OFFSET))(this, name);
		}

		::System::String* GetAttribute_1(::System::String* localName, ::System::String* namespaceURI)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GETATTRIBUTE_1_OFFSET))(this, localName, namespaceURI);
		}

		::System::String* GetAttribute_2(::System::Int32 i)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GETATTRIBUTE_2_OFFSET))(this, i);
		}

		::System::Boolean MoveToAttribute(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_MOVETOATTRIBUTE_OFFSET))(this, name);
		}

		::System::Void MoveToAttribute_1(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_MOVETOATTRIBUTE_1_OFFSET))(this, i);
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

		::System::Boolean get_EOF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GET_EOF_OFFSET))(this);
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

		::System::Boolean get_CanReadValueChunk()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GET_CANREADVALUECHUNK_OFFSET))(this);
		}

		::System::String* ReadString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_READSTRING_OFFSET))(this);
		}

		::System::Int32 get_LineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Int32 get_LinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GET_LINEPOSITION_OFFSET))(this);
		}

		::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope)
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::Xml::XmlNamespaceScope))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_GETNAMESPACESINSCOPE_OFFSET))(this, scope);
		}

		::System::String* System_Xml_IXmlNamespaceResolver_LookupNamespace(::System::String* prefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPNAMESPACE_OFFSET))(this, prefix);
		}

		::System::String* System_Xml_IXmlNamespaceResolver_LookupPrefix(::System::String* namespaceName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPPREFIX_OFFSET))(this, namespaceName);
		}

		::System::Boolean get_Namespaces()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GET_NAMESPACES_OFFSET))(this);
		}

		::System::Boolean get_Normalization()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GET_NORMALIZATION_OFFSET))(this);
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

		::System::Xml::XmlNamespaceManager* get_NamespaceManager()
		{
			return ((::System::Xml::XmlNamespaceManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADER_GET_NAMESPACEMANAGER_OFFSET))(this);
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
