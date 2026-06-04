#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlRawWriter.h"
#include "unitysdk/System/Xml/XmlStandalone.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Xml { class BitStack; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml { class XmlWriterSettings; }

#define SYSTEM_XML_QUERYOUTPUTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1AE26D00)
#define SYSTEM_XML_QUERYOUTPUTWRITER_ENDCDATASECTION_OFFSET UNITYSDK_OFFSET(0x1AE26660)
#define SYSTEM_XML_QUERYOUTPUTWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1AE26DA0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET UNITYSDK_OFFSET(0x1AE26850)
#define SYSTEM_XML_QUERYOUTPUTWRITER_SET_NAMESPACERESOLVER_OFFSET UNITYSDK_OFFSET(0x1AE263B0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_STARTCDATASECTION_OFFSET UNITYSDK_OFFSET(0x1AE269F0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x1AE26790)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x1AE268E0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1AE26B80)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x1AE26AB0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x1AE26910)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x1AE26440)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AE267F0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1AE26670)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITEENDNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x1AE268B0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x1AE26B50)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1AE26700)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITENAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x1AE26820)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1AE26940)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x1AE26C80)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x1AE26BE0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AE267C0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1AE26490)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITESTARTNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x1AE26880)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x1AE26A30)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1AE26BB0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1AE26970)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITEXMLDECLARATION_1_OFFSET UNITYSDK_OFFSET(0x1AE26410)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x1AE263E0)
#define SYSTEM_XML_QUERYOUTPUTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE260D0)

namespace System::Xml
{
	inline static constexpr unsigned int QueryOutputWriter_TypeDefinitionIndex = 1810;

	class QueryOutputWriter : public ::System::Xml::XmlRawWriter
	{
	public:
		::System::Xml::XmlQualifiedName* qnameCData; // 0x20
		::System::String* systemId; // 0x28
		::System::String* publicId; // 0x30
		::System::Xml::BitStack* bitsCData; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Int32>* lookupCDataElems; // 0x40
		::System::Xml::XmlRawWriter* wrapped; // 0x48
		::System::Boolean inCDataSection; // 0x50
		::System::Boolean inAttr; // 0x51
		::System::Boolean hasDocElem; // 0x52
		::System::Boolean checkWellFormedDoc; // 0x53
		::System::Boolean outputDocType; // 0x54
		::System::Int32 depth; // 0x58

		::System::Void _ctor(::System::Xml::XmlRawWriter* a1, ::System::Xml::XmlWriterSettings* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlRawWriter*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void set_NamespaceResolver(::System::Xml::IXmlNamespaceResolver* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_SET_NAMESPACERESOLVER_OFFSET))(this, a1);
		}

		::System::Void WriteXmlDeclaration(::System::Xml::XmlStandalone a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlStandalone))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITEXMLDECLARATION_OFFSET))(this, a1);
		}

		::System::Void WriteXmlDeclaration_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITEXMLDECLARATION_1_OFFSET))(this, a1);
		}

		::System::Void WriteDocType(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITEDOCTYPE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteStartElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITESTARTELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteEndElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITEENDELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteFullEndElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITEFULLENDELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartElementContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_STARTELEMENTCONTENT_OFFSET))(this);
		}

		::System::Void WriteStartAttribute(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITESTARTATTRIBUTE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteEndAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITEENDATTRIBUTE_OFFSET))(this);
		}

		::System::Void WriteNamespaceDeclaration(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITENAMESPACEDECLARATION_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_SupportsNamespaceDeclarationInChunks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET))(this);
		}

		::System::Void WriteStartNamespaceDeclaration(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITESTARTNAMESPACEDECLARATION_OFFSET))(this, a1);
		}

		::System::Void WriteEndNamespaceDeclaration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITEENDNAMESPACEDECLARATION_OFFSET))(this);
		}

		::System::Void WriteCData(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITECDATA_OFFSET))(this, a1);
		}

		::System::Void WriteComment(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITECOMMENT_OFFSET))(this, a1);
		}

		::System::Void WriteProcessingInstruction(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET))(this, a1, a2);
		}

		::System::Void WriteWhitespace(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITEWHITESPACE_OFFSET))(this, a1);
		}

		::System::Void WriteString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITESTRING_OFFSET))(this, a1);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITECHARS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteEntityRef(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITEENTITYREF_OFFSET))(this, a1);
		}

		::System::Void WriteCharEntity(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITECHARENTITY_OFFSET))(this, a1);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char a1, ::System::Char a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITESURROGATECHARENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITERAW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteRaw_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITERAW_1_OFFSET))(this, a1);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_FLUSH_OFFSET))(this);
		}

		::System::Boolean StartCDataSection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_STARTCDATASECTION_OFFSET))(this);
		}

		::System::Void EndCDataSection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_ENDCDATASECTION_OFFSET))(this);
		}
	};
}
