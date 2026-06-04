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

#define SYSTEM_XML_XMLREADER_CALCBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1AED3750)
#define SYSTEM_XML_XMLREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1AED2E30)
#define SYSTEM_XML_XMLREADER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1AED3700)
#define SYSTEM_XML_XMLREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AED36E0)
#define SYSTEM_XML_XMLREADER_GET_CANRESOLVEENTITY_OFFSET UNITYSDK_OFFSET(0x1AED2FB0)
#define SYSTEM_XML_XMLREADER_GET_DTDINFO_OFFSET UNITYSDK_OFFSET(0x1AED3740)
#define SYSTEM_XML_XMLREADER_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1AED2DC0)
#define SYSTEM_XML_XMLREADER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AED2D20)
#define SYSTEM_XML_XMLREADER_GET_SCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x1AED2DD0)
#define SYSTEM_XML_XMLREADER_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1AED2D10)
#define SYSTEM_XML_XMLREADER_ISSTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1AED3630)
#define SYSTEM_XML_XMLREADER_ISTEXTUALNODE_OFFSET UNITYSDK_OFFSET(0x1AED3180)
#define SYSTEM_XML_XMLREADER_MOVETOCONTENT_OFFSET UNITYSDK_OFFSET(0x1AED31E0)
#define SYSTEM_XML_XMLREADER_READELEMENTSTRING_OFFSET UNITYSDK_OFFSET(0x1AED3340)
#define SYSTEM_XML_XMLREADER_READENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1AED3550)
#define SYSTEM_XML_XMLREADER_READSTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1AED3260)
#define SYSTEM_XML_XMLREADER_READSTRING_OFFSET UNITYSDK_OFFSET(0x1AED2FC0)
#define SYSTEM_XML_XMLREADER_SKIPSUBTREE_OFFSET UNITYSDK_OFFSET(0x1AED2F00)
#define SYSTEM_XML_XMLREADER_SKIP_OFFSET UNITYSDK_OFFSET(0x1AED2E40)
#define SYSTEM_XML_XMLREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AED37E0)
#define SYSTEM_XML_XMLREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AED37D0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlReader_TypeDefinitionIndex = 1830;

	class XmlReader : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_CanReadContentAsBitmap()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(XmlReader_TypeDefinitionIndex)->GetStaticField(0x8300);
		}
		static ::System::UInt32* StaticGet_HasValueBitmap()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(XmlReader_TypeDefinitionIndex)->GetStaticField(0x8304);
		}
		static ::System::UInt32* StaticGet_IsTextualNodeBitmap()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(XmlReader_TypeDefinitionIndex)->GetStaticField(0x8308);
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

		::System::Boolean IsStartElement(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_ISSTARTELEMENT_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_DISPOSE_1_OFFSET))(this, a1);
		}

		static ::System::Boolean IsTextualNode(::System::Xml::XmlNodeType a1)
		{
			return ((::System::Boolean(*)(::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_ISTEXTUALNODE_OFFSET))(a1);
		}

		::System::Boolean SkipSubtree()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_SKIPSUBTREE_OFFSET))(this);
		}

		::System::Xml::IDtdInfo* get_DtdInfo()
		{
			return ((::System::Xml::IDtdInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_GET_DTDINFO_OFFSET))(this);
		}

		static ::System::Int32 CalcBufferSize(::System::IO::Stream* a1)
		{
			return ((::System::Int32(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_CALCBUFFERSIZE_OFFSET))(a1);
		}
	};
}
