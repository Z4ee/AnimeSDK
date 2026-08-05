#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/ReadState.h"
#include "unitysdk/System/Xml/XmlNodeType.h"
#include "unitysdk/System/Xml/XmlReader.h"
#include "unitysdk/System/Xml/XmlSpace.h"

namespace System { class String; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlReaderSettings; }

#define SYSTEM_DATA_DATATEXTREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1EABB300)
#define SYSTEM_DATA_DATATEXTREADER_CREATEREADER_OFFSET UNITYSDK_OFFSET(0x1EABAD30)
#define SYSTEM_DATA_DATATEXTREADER_GETATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1EABB120)
#define SYSTEM_DATA_DATATEXTREADER_GETATTRIBUTE_2_OFFSET UNITYSDK_OFFSET(0x1EABB150)
#define SYSTEM_DATA_DATATEXTREADER_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1EABB0F0)
#define SYSTEM_DATA_DATATEXTREADER_GET_ATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0x1EABB0C0)
#define SYSTEM_DATA_DATATEXTREADER_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1EABAFA0)
#define SYSTEM_DATA_DATATEXTREADER_GET_CANREADVALUECHUNK_OFFSET UNITYSDK_OFFSET(0x1EABB450)
#define SYSTEM_DATA_DATATEXTREADER_GET_CANRESOLVEENTITY_OFFSET UNITYSDK_OFFSET(0x1EABB3F0)
#define SYSTEM_DATA_DATATEXTREADER_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x1EABAF70)
#define SYSTEM_DATA_DATATEXTREADER_GET_EOF_OFFSET UNITYSDK_OFFSET(0x1EABB2D0)
#define SYSTEM_DATA_DATATEXTREADER_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1EABB000)
#define SYSTEM_DATA_DATATEXTREADER_GET_ISEMPTYELEMENT_OFFSET UNITYSDK_OFFSET(0x1EABAFD0)
#define SYSTEM_DATA_DATATEXTREADER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1EABAEB0)
#define SYSTEM_DATA_DATATEXTREADER_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x1EABAEE0)
#define SYSTEM_DATA_DATATEXTREADER_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x1EABB390)
#define SYSTEM_DATA_DATATEXTREADER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1EABAE80)
#define SYSTEM_DATA_DATATEXTREADER_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1EABAE50)
#define SYSTEM_DATA_DATATEXTREADER_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1EABAF10)
#define SYSTEM_DATA_DATATEXTREADER_GET_QUOTECHAR_OFFSET UNITYSDK_OFFSET(0x1EABB030)
#define SYSTEM_DATA_DATATEXTREADER_GET_READSTATE_OFFSET UNITYSDK_OFFSET(0x1EABB330)
#define SYSTEM_DATA_DATATEXTREADER_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1EABAE20)
#define SYSTEM_DATA_DATATEXTREADER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1EABAF40)
#define SYSTEM_DATA_DATATEXTREADER_GET_XMLLANG_OFFSET UNITYSDK_OFFSET(0x1EABB090)
#define SYSTEM_DATA_DATATEXTREADER_GET_XMLSPACE_OFFSET UNITYSDK_OFFSET(0x1EABB060)
#define SYSTEM_DATA_DATATEXTREADER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1EABB3C0)
#define SYSTEM_DATA_DATATEXTREADER_MOVETOATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1EABB1B0)
#define SYSTEM_DATA_DATATEXTREADER_MOVETOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1EABB180)
#define SYSTEM_DATA_DATATEXTREADER_MOVETOELEMENT_OFFSET UNITYSDK_OFFSET(0x1EABB240)
#define SYSTEM_DATA_DATATEXTREADER_MOVETOFIRSTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1EABB1E0)
#define SYSTEM_DATA_DATATEXTREADER_MOVETONEXTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1EABB210)
#define SYSTEM_DATA_DATATEXTREADER_READATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x1EABB270)
#define SYSTEM_DATA_DATATEXTREADER_READSTRING_OFFSET UNITYSDK_OFFSET(0x1EABB480)
#define SYSTEM_DATA_DATATEXTREADER_READ_OFFSET UNITYSDK_OFFSET(0x1EABB2A0)
#define SYSTEM_DATA_DATATEXTREADER_RESOLVEENTITY_OFFSET UNITYSDK_OFFSET(0x1EABB420)
#define SYSTEM_DATA_DATATEXTREADER_SKIP_OFFSET UNITYSDK_OFFSET(0x1EABB360)
#define SYSTEM_DATA_DATATEXTREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EABADC0)

namespace System::Data
{
	inline static constexpr unsigned int DataTextReader_TypeDefinitionIndex = 39368;

	class DataTextReader : public ::System::Xml::XmlReader
	{
	public:
		::System::Xml::XmlReader* _xmlreader; // 0x10

		::System::Void _ctor(::System::Xml::XmlReader* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER__CTOR_OFFSET))(this, input);
		}

		static ::System::Xml::XmlReader* CreateReader(::System::Xml::XmlReader* xr)
		{
			return ((::System::Xml::XmlReader*(*)(::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_CREATEREADER_OFFSET))(xr);
		}

		::System::Xml::XmlReaderSettings* get_Settings()
		{
			return ((::System::Xml::XmlReaderSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_SETTINGS_OFFSET))(this);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_NODETYPE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_NAME_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_LOCALNAME_OFFSET))(this);
		}

		::System::String* get_NamespaceURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_NAMESPACEURI_OFFSET))(this);
		}

		::System::String* get_Prefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_PREFIX_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_VALUE_OFFSET))(this);
		}

		::System::Int32 get_Depth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_DEPTH_OFFSET))(this);
		}

		::System::String* get_BaseURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_BASEURI_OFFSET))(this);
		}

		::System::Boolean get_IsEmptyElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_ISEMPTYELEMENT_OFFSET))(this);
		}

		::System::Boolean get_IsDefault()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_ISDEFAULT_OFFSET))(this);
		}

		::System::Char get_QuoteChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_QUOTECHAR_OFFSET))(this);
		}

		::System::Xml::XmlSpace get_XmlSpace()
		{
			return ((::System::Xml::XmlSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_XMLSPACE_OFFSET))(this);
		}

		::System::String* get_XmlLang()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_XMLLANG_OFFSET))(this);
		}

		::System::Int32 get_AttributeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_ATTRIBUTECOUNT_OFFSET))(this);
		}

		::System::String* GetAttribute(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GETATTRIBUTE_OFFSET))(this, name);
		}

		::System::String* GetAttribute_1(::System::String* localName, ::System::String* namespaceURI)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GETATTRIBUTE_1_OFFSET))(this, localName, namespaceURI);
		}

		::System::String* GetAttribute_2(::System::Int32 i)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GETATTRIBUTE_2_OFFSET))(this, i);
		}

		::System::Boolean MoveToAttribute(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_MOVETOATTRIBUTE_OFFSET))(this, name);
		}

		::System::Void MoveToAttribute_1(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_MOVETOATTRIBUTE_1_OFFSET))(this, i);
		}

		::System::Boolean MoveToFirstAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_MOVETOFIRSTATTRIBUTE_OFFSET))(this);
		}

		::System::Boolean MoveToNextAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_MOVETONEXTATTRIBUTE_OFFSET))(this);
		}

		::System::Boolean MoveToElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_MOVETOELEMENT_OFFSET))(this);
		}

		::System::Boolean ReadAttributeValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_READATTRIBUTEVALUE_OFFSET))(this);
		}

		::System::Boolean Read()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_READ_OFFSET))(this);
		}

		::System::Boolean get_EOF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_EOF_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_CLOSE_OFFSET))(this);
		}

		::System::Xml::ReadState get_ReadState()
		{
			return ((::System::Xml::ReadState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_READSTATE_OFFSET))(this);
		}

		::System::Void Skip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_SKIP_OFFSET))(this);
		}

		::System::Xml::XmlNameTable* get_NameTable()
		{
			return ((::System::Xml::XmlNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_NAMETABLE_OFFSET))(this);
		}

		::System::String* LookupNamespace(::System::String* prefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_LOOKUPNAMESPACE_OFFSET))(this, prefix);
		}

		::System::Boolean get_CanResolveEntity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_CANRESOLVEENTITY_OFFSET))(this);
		}

		::System::Void ResolveEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_RESOLVEENTITY_OFFSET))(this);
		}

		::System::Boolean get_CanReadValueChunk()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_GET_CANREADVALUECHUNK_OFFSET))(this);
		}

		::System::String* ReadString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATEXTREADER_READSTRING_OFFSET))(this);
		}
	};
}
