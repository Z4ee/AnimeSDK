#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/ConformanceLevel.h"
#include "unitysdk/System/Xml/WriteState.h"
#include "unitysdk/System/Xml/XmlStandalone.h"
#include "unitysdk/System/Xml/XmlWriter.h"

namespace System { class String; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlRawWriterBase64Encoder; }

#define SYSTEM_XML_XMLRAWWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1AED2CD0)
#define SYSTEM_XML_XMLRAWWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET UNITYSDK_OFFSET(0x1AED2BB0)
#define SYSTEM_XML_XMLRAWWRITER_GET_WRITESTATE_OFFSET UNITYSDK_OFFSET(0x1AED2890)
#define SYSTEM_XML_XMLRAWWRITER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x1AED2830)
#define SYSTEM_XML_XMLRAWWRITER_ONROOTELEMENT_OFFSET UNITYSDK_OFFSET(0x1AED2B80)
#define SYSTEM_XML_XMLRAWWRITER_SET_NAMESPACERESOLVER_OFFSET UNITYSDK_OFFSET(0x1AED2B50)
#define SYSTEM_XML_XMLRAWWRITER_WRITEBASE64_OFFSET UNITYSDK_OFFSET(0x1AEC1E70)
#define SYSTEM_XML_XMLRAWWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x1AED28F0)
#define SYSTEM_XML_XMLRAWWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1AED2900)
#define SYSTEM_XML_XMLRAWWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x1AED2AD0)
#define SYSTEM_XML_XMLRAWWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x1AED2730)
#define SYSTEM_XML_XMLRAWWRITER_WRITEENDBASE64_OFFSET UNITYSDK_OFFSET(0x1AED2C60)
#define SYSTEM_XML_XMLRAWWRITER_WRITEENDDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1AED26D0)
#define SYSTEM_XML_XMLRAWWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1AED2740)
#define SYSTEM_XML_XMLRAWWRITER_WRITEENDNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x1AED2C10)
#define SYSTEM_XML_XMLRAWWRITER_WRITEFULLENDELEMENT_1_OFFSET UNITYSDK_OFFSET(0x1AED2B90)
#define SYSTEM_XML_XMLRAWWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1AED27A0)
#define SYSTEM_XML_XMLRAWWRITER_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x1AED2B30)
#define SYSTEM_XML_XMLRAWWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x1AED2B00)
#define SYSTEM_XML_XMLRAWWRITER_WRITESTARTDOCUMENT_1_OFFSET UNITYSDK_OFFSET(0x1AED2670)
#define SYSTEM_XML_XMLRAWWRITER_WRITESTARTDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1AED2610)
#define SYSTEM_XML_XMLRAWWRITER_WRITESTARTNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x1AED2BC0)
#define SYSTEM_XML_XMLRAWWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1AED29E0)
#define SYSTEM_XML_XMLRAWWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1AED2B40)
#define SYSTEM_XML_XMLRAWWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1AED2AC0)
#define SYSTEM_XML_XMLRAWWRITER_WRITEXMLDECLARATION_1_OFFSET UNITYSDK_OFFSET(0x1AED2B70)
#define SYSTEM_XML_XMLRAWWRITER_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x1AED2B60)
#define SYSTEM_XML_XMLRAWWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEBD230)

namespace System::Xml
{
	inline static constexpr unsigned int XmlRawWriter_TypeDefinitionIndex = 1829;

	class XmlRawWriter : public ::System::Xml::XmlWriter
	{
	public:
		::System::Xml::XmlRawWriterBase64Encoder* base64Encoder; // 0x10
		::System::Xml::IXmlNamespaceResolver* resolver; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER__CTOR_OFFSET))(this);
		}

		::System::Void WriteStartDocument()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITESTARTDOCUMENT_OFFSET))(this);
		}

		::System::Void WriteStartDocument_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITESTARTDOCUMENT_1_OFFSET))(this, a1);
		}

		::System::Void WriteEndDocument()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEENDDOCUMENT_OFFSET))(this);
		}

		::System::Void WriteDocType(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEDOCTYPE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEENDELEMENT_OFFSET))(this);
		}

		::System::Void WriteFullEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEFULLENDELEMENT_OFFSET))(this);
		}

		::System::Void WriteBase64(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEBASE64_OFFSET))(this, a1, a2, a3);
		}

		::System::String* LookupPrefix(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_LOOKUPPREFIX_OFFSET))(this, a1);
		}

		::System::Xml::WriteState get_WriteState()
		{
			return ((::System::Xml::WriteState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_GET_WRITESTATE_OFFSET))(this);
		}

		::System::Void WriteCData(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITECDATA_OFFSET))(this, a1);
		}

		::System::Void WriteCharEntity(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITECHARENTITY_OFFSET))(this, a1);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char a1, ::System::Char a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITESURROGATECHARENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void WriteWhitespace(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEWHITESPACE_OFFSET))(this, a1);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITECHARS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITERAW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteRaw_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITERAW_1_OFFSET))(this, a1);
		}

		::System::Void WriteValue(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEVALUE_OFFSET))(this, a1);
		}

		::System::Void set_NamespaceResolver(::System::Xml::IXmlNamespaceResolver* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_SET_NAMESPACERESOLVER_OFFSET))(this, a1);
		}

		::System::Void WriteXmlDeclaration(::System::Xml::XmlStandalone a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlStandalone))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEXMLDECLARATION_OFFSET))(this, a1);
		}

		::System::Void WriteXmlDeclaration_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEXMLDECLARATION_1_OFFSET))(this, a1);
		}

		::System::Void OnRootElement(::System::Xml::ConformanceLevel a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::ConformanceLevel))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_ONROOTELEMENT_OFFSET))(this, a1);
		}

		::System::Void WriteFullEndElement_1(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEFULLENDELEMENT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_SupportsNamespaceDeclarationInChunks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET))(this);
		}

		::System::Void WriteStartNamespaceDeclaration(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITESTARTNAMESPACEDECLARATION_OFFSET))(this, a1);
		}

		::System::Void WriteEndNamespaceDeclaration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEENDNAMESPACEDECLARATION_OFFSET))(this);
		}

		::System::Void WriteEndBase64()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEENDBASE64_OFFSET))(this);
		}

		::System::Void Close(::System::Xml::WriteState a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::WriteState))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_CLOSE_OFFSET))(this, a1);
		}
	};
}
