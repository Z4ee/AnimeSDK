#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/ReadState.h"
#include "unitysdk/System/Xml/XmlNodeType.h"
#include "unitysdk/System/Xml/XmlSpace.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::IO { class Stream; }
namespace System::IO { class StringWriter; }
namespace System::IO { class TextReader; }
namespace System::Xml { class IDtdInfo; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlNamespaceManager; }
namespace System::Xml { class XmlParserContext; }
namespace System::Xml { class XmlReaderSettings; }
namespace System::Xml { class XmlTextWriter; }
namespace System::Xml { class XmlWriter; }
namespace System::Xml::Schema { class IXmlSchemaInfo; }

#define SYSTEM_XML_XMLREADER_CALCBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1E5026F0)
#define SYSTEM_XML_XMLREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1E500990)
#define SYSTEM_XML_XMLREADER_CREATESQLREADER_OFFSET UNITYSDK_OFFSET(0x1E502360)
#define SYSTEM_XML_XMLREADER_CREATEWRITERFORINNEROUTERXML_OFFSET UNITYSDK_OFFSET(0x1E501720)
#define SYSTEM_XML_XMLREADER_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1E502150)
#define SYSTEM_XML_XMLREADER_CREATE_2_OFFSET UNITYSDK_OFFSET(0x1E502280)
#define SYSTEM_XML_XMLREADER_CREATE_OFFSET UNITYSDK_OFFSET(0x1E502070)
#define SYSTEM_XML_XMLREADER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E501EB0)
#define SYSTEM_XML_XMLREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E501E90)
#define SYSTEM_XML_XMLREADER_GET_CANREADVALUECHUNK_OFFSET UNITYSDK_OFFSET(0x1E500B20)
#define SYSTEM_XML_XMLREADER_GET_CANRESOLVEENTITY_OFFSET UNITYSDK_OFFSET(0x1E500B10)
#define SYSTEM_XML_XMLREADER_GET_DTDINFO_OFFSET UNITYSDK_OFFSET(0x1E502060)
#define SYSTEM_XML_XMLREADER_GET_HASATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1E501E70)
#define SYSTEM_XML_XMLREADER_GET_ISDEFAULTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E501F60)
#define SYSTEM_XML_XMLREADER_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1E500830)
#define SYSTEM_XML_XMLREADER_GET_NAMESPACEMANAGER_OFFSET UNITYSDK_OFFSET(0x1E501EF0)
#define SYSTEM_XML_XMLREADER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E500760)
#define SYSTEM_XML_XMLREADER_GET_QUOTECHAR_OFFSET UNITYSDK_OFFSET(0x1E500840)
#define SYSTEM_XML_XMLREADER_GET_SCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x1E500870)
#define SYSTEM_XML_XMLREADER_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1E500750)
#define SYSTEM_XML_XMLREADER_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1E5008B0)
#define SYSTEM_XML_XMLREADER_GET_XMLLANG_OFFSET UNITYSDK_OFFSET(0x1E500860)
#define SYSTEM_XML_XMLREADER_GET_XMLSPACE_OFFSET UNITYSDK_OFFSET(0x1E500850)
#define SYSTEM_XML_XMLREADER_HASVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E501F00)
#define SYSTEM_XML_XMLREADER_ISSTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1E501200)
#define SYSTEM_XML_XMLREADER_ISTEXTUALNODE_OFFSET UNITYSDK_OFFSET(0x1E500D50)
#define SYSTEM_XML_XMLREADER_MOVETOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1E5008E0)
#define SYSTEM_XML_XMLREADER_MOVETOCONTENT_OFFSET UNITYSDK_OFFSET(0x1E500DB0)
#define SYSTEM_XML_XMLREADER_READELEMENTSTRING_OFFSET UNITYSDK_OFFSET(0x1E500F10)
#define SYSTEM_XML_XMLREADER_READENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1E501120)
#define SYSTEM_XML_XMLREADER_READINNERXML_OFFSET UNITYSDK_OFFSET(0x1E5013A0)
#define SYSTEM_XML_XMLREADER_READSTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1E500E30)
#define SYSTEM_XML_XMLREADER_READSTRING_OFFSET UNITYSDK_OFFSET(0x1E500B90)
#define SYSTEM_XML_XMLREADER_READTOFOLLOWING_OFFSET UNITYSDK_OFFSET(0x1E5012B0)
#define SYSTEM_XML_XMLREADER_READVALUECHUNK_OFFSET UNITYSDK_OFFSET(0x1E500B30)
#define SYSTEM_XML_XMLREADER_SETNAMESPACESFLAG_OFFSET UNITYSDK_OFFSET(0x1E501D20)
#define SYSTEM_XML_XMLREADER_SKIPSUBTREE_OFFSET UNITYSDK_OFFSET(0x1E500A60)
#define SYSTEM_XML_XMLREADER_SKIP_OFFSET UNITYSDK_OFFSET(0x1E5009A0)
#define SYSTEM_XML_XMLREADER_WRITEATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x1E501780)
#define SYSTEM_XML_XMLREADER_WRITENODE_OFFSET UNITYSDK_OFFSET(0x1E501880)
#define SYSTEM_XML_XMLREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E502780)
#define SYSTEM_XML_XMLREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E502770)

namespace System::Xml
{
	inline static constexpr unsigned int XmlReader_TypeDefinitionIndex = 1709;

	class XmlReader : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_HasValueBitmap()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(XmlReader_TypeDefinitionIndex)->GetStaticField(0xEB0);
		}
		static ::System::UInt32* StaticGet_CanReadContentAsBitmap()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(XmlReader_TypeDefinitionIndex)->GetStaticField(0xEB4);
		}
		static ::System::UInt32* StaticGet_IsTextualNodeBitmap()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(XmlReader_TypeDefinitionIndex)->GetStaticField(0xEB8);
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

		::System::Char get_QuoteChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_GET_QUOTECHAR_OFFSET))(this);
		}

		::System::Xml::XmlSpace get_XmlSpace()
		{
			return ((::System::Xml::XmlSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_GET_XMLSPACE_OFFSET))(this);
		}

		::System::String* get_XmlLang()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_GET_XMLLANG_OFFSET))(this);
		}

		::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo()
		{
			return ((::System::Xml::Schema::IXmlSchemaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_GET_SCHEMAINFO_OFFSET))(this);
		}

		::System::Type* get_ValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Void MoveToAttribute(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_MOVETOATTRIBUTE_OFFSET))(this, i);
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

		::System::Boolean get_CanReadValueChunk()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_GET_CANREADVALUECHUNK_OFFSET))(this);
		}

		::System::Int32 ReadValueChunk(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_READVALUECHUNK_OFFSET))(this, buffer, index, count);
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

		::System::Boolean ReadToFollowing(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_READTOFOLLOWING_OFFSET))(this, name);
		}

		::System::String* ReadInnerXml()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_READINNERXML_OFFSET))(this);
		}

		::System::Void WriteNode(::System::Xml::XmlWriter* xtw, ::System::Boolean defattr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_WRITENODE_OFFSET))(this, xtw, defattr);
		}

		::System::Void WriteAttributeValue(::System::Xml::XmlWriter* xtw)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_WRITEATTRIBUTEVALUE_OFFSET))(this, xtw);
		}

		::System::Xml::XmlWriter* CreateWriterForInnerOuterXml(::System::IO::StringWriter* sw)
		{
			return ((::System::Xml::XmlWriter*(*)(::PVOID, ::System::IO::StringWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_CREATEWRITERFORINNEROUTERXML_OFFSET))(this, sw);
		}

		::System::Void SetNamespacesFlag(::System::Xml::XmlTextWriter* xtw)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlTextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_SETNAMESPACESFLAG_OFFSET))(this, xtw);
		}

		::System::Boolean get_HasAttributes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_GET_HASATTRIBUTES_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Xml::XmlNamespaceManager* get_NamespaceManager()
		{
			return ((::System::Xml::XmlNamespaceManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_GET_NAMESPACEMANAGER_OFFSET))(this);
		}

		static ::System::Boolean IsTextualNode(::System::Xml::XmlNodeType nodeType)
		{
			return ((::System::Boolean(*)(::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_ISTEXTUALNODE_OFFSET))(nodeType);
		}

		static ::System::Boolean HasValueInternal(::System::Xml::XmlNodeType nodeType)
		{
			return ((::System::Boolean(*)(::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_HASVALUEINTERNAL_OFFSET))(nodeType);
		}

		::System::Boolean SkipSubtree()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_SKIPSUBTREE_OFFSET))(this);
		}

		::System::Boolean get_IsDefaultInternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_GET_ISDEFAULTINTERNAL_OFFSET))(this);
		}

		::System::Xml::IDtdInfo* get_DtdInfo()
		{
			return ((::System::Xml::IDtdInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_GET_DTDINFO_OFFSET))(this);
		}

		static ::System::Xml::XmlReader* Create(::System::IO::Stream* input, ::System::Xml::XmlReaderSettings* settings, ::System::String* baseUri)
		{
			return ((::System::Xml::XmlReader*(*)(::System::IO::Stream*, ::System::Xml::XmlReaderSettings*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_CREATE_OFFSET))(input, settings, baseUri);
		}

		static ::System::Xml::XmlReader* Create_1(::System::IO::TextReader* input, ::System::Xml::XmlReaderSettings* settings)
		{
			return ((::System::Xml::XmlReader*(*)(::System::IO::TextReader*, ::System::Xml::XmlReaderSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_CREATE_1_OFFSET))(input, settings);
		}

		static ::System::Xml::XmlReader* Create_2(::System::IO::TextReader* input, ::System::Xml::XmlReaderSettings* settings, ::System::String* baseUri)
		{
			return ((::System::Xml::XmlReader*(*)(::System::IO::TextReader*, ::System::Xml::XmlReaderSettings*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_CREATE_2_OFFSET))(input, settings, baseUri);
		}

		static ::System::Xml::XmlReader* CreateSqlReader(::System::IO::Stream* input, ::System::Xml::XmlReaderSettings* settings, ::System::Xml::XmlParserContext* inputContext)
		{
			return ((::System::Xml::XmlReader*(*)(::System::IO::Stream*, ::System::Xml::XmlReaderSettings*, ::System::Xml::XmlParserContext*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_CREATESQLREADER_OFFSET))(input, settings, inputContext);
		}

		static ::System::Int32 CalcBufferSize(::System::IO::Stream* input)
		{
			return ((::System::Int32(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADER_CALCBUFFERSIZE_OFFSET))(input);
		}
	};
}
