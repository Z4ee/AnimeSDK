#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/ReadState.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Xml { class IDtdInfo; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlReaderSettings; }
namespace System::Xml::Schema { class IXmlSchemaInfo; }

#define SYSTEM_XML_XMLREADER_CALCBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1A061610)
#define SYSTEM_XML_XMLREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1A060CF0)
#define SYSTEM_XML_XMLREADER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A0615C0)
#define SYSTEM_XML_XMLREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A0615A0)
#define SYSTEM_XML_XMLREADER_GET_CANRESOLVEENTITY_OFFSET UNITYSDK_OFFSET(0x1A060E70)
#define SYSTEM_XML_XMLREADER_GET_DTDINFO_OFFSET UNITYSDK_OFFSET(0x1A061600)
#define SYSTEM_XML_XMLREADER_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1A060CA0)
#define SYSTEM_XML_XMLREADER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A060C00)
#define SYSTEM_XML_XMLREADER_GET_SCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x1A060CB0)
#define SYSTEM_XML_XMLREADER_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1A060BF0)
#define SYSTEM_XML_XMLREADER_ISSTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1A0614F0)
#define SYSTEM_XML_XMLREADER_ISTEXTUALNODE_OFFSET UNITYSDK_OFFSET(0x1A061040)
#define SYSTEM_XML_XMLREADER_MOVETOCONTENT_OFFSET UNITYSDK_OFFSET(0x1A0610A0)
#define SYSTEM_XML_XMLREADER_READELEMENTSTRING_OFFSET UNITYSDK_OFFSET(0x1A061200)
#define SYSTEM_XML_XMLREADER_READENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1A061410)
#define SYSTEM_XML_XMLREADER_READSTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1A061120)
#define SYSTEM_XML_XMLREADER_READSTRING_OFFSET UNITYSDK_OFFSET(0x1A060E80)
#define SYSTEM_XML_XMLREADER_SKIPSUBTREE_OFFSET UNITYSDK_OFFSET(0x1A060DC0)
#define SYSTEM_XML_XMLREADER_SKIP_OFFSET UNITYSDK_OFFSET(0x1A060D00)
#define SYSTEM_XML_XMLREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0616A0)
#define SYSTEM_XML_XMLREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A061690)

namespace System::Xml
{
	inline static constexpr unsigned int XmlReader_TypeDefinitionIndex = 1830;

	class XmlReader : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_CanReadContentAsBitmap()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(XmlReader_TypeDefinitionIndex)->GetStaticField(0x50E0);
		}
		static ::System::UInt32* StaticGet_HasValueBitmap()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(XmlReader_TypeDefinitionIndex)->GetStaticField(0x50E4);
		}
		static ::System::UInt32* StaticGet_IsTextualNodeBitmap()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(XmlReader_TypeDefinitionIndex)->GetStaticField(0x50E8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER__CCTOR_OFFSET))();
		}

		::System::Xml::XmlReaderSettings* get_Settings()
		{
			return ((::System::Xml::XmlReaderSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_GET_SETTINGS_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_IsDefault()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_GET_ISDEFAULT_OFFSET))(this);
		}

		::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo()
		{
			return ((::System::Xml::Schema::IXmlSchemaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_GET_SCHEMAINFO_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_CLOSE_OFFSET))(this);
		}

		::System::Void Skip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_SKIP_OFFSET))(this);
		}

		::System::Boolean get_CanResolveEntity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_GET_CANRESOLVEENTITY_OFFSET))(this);
		}

		::System::String* ReadString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_READSTRING_OFFSET))(this);
		}

		::System::Xml::XmlNodeType MoveToContent()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_MOVETOCONTENT_OFFSET))(this);
		}

		::System::Void ReadStartElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_READSTARTELEMENT_OFFSET))(this);
		}

		::System::String* ReadElementString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_READELEMENTSTRING_OFFSET))(this);
		}

		::System::Void ReadEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_READENDELEMENT_OFFSET))(this);
		}

		::System::Boolean IsStartElement(::System::String* localname, ::System::String* ns)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_ISSTARTELEMENT_OFFSET))(this, localname, ns);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_DISPOSE_1_OFFSET))(this, disposing);
		}

		static ::System::Boolean IsTextualNode(::System::Xml::XmlNodeType nodeType)
		{
			return ((::System::Boolean(*)(::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_ISTEXTUALNODE_OFFSET))(nodeType);
		}

		::System::Boolean SkipSubtree()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_SKIPSUBTREE_OFFSET))(this);
		}

		::System::Xml::IDtdInfo* get_DtdInfo()
		{
			return ((::System::Xml::IDtdInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_GET_DTDINFO_OFFSET))(this);
		}

		static ::System::Int32 CalcBufferSize(::System::IO::Stream* input)
		{
			return ((::System::Int32(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_CALCBUFFERSIZE_OFFSET))(input);
		}
	};
}
