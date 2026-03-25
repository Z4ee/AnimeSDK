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

#define SYSTEM_XML_QUERYOUTPUTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x18576FF0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_ENDCDATASECTION_OFFSET UNITYSDK_OFFSET(0x18576930)
#define SYSTEM_XML_QUERYOUTPUTWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x18577090)
#define SYSTEM_XML_QUERYOUTPUTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET UNITYSDK_OFFSET(0x18576B40)
#define SYSTEM_XML_QUERYOUTPUTWRITER_SET_NAMESPACERESOLVER_OFFSET UNITYSDK_OFFSET(0x18576680)
#define SYSTEM_XML_QUERYOUTPUTWRITER_STARTCDATASECTION_OFFSET UNITYSDK_OFFSET(0x18576CE0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x18576A80)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x18576BD0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x18576E70)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x18576DA0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x18576C00)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x18576710)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18576AE0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x18576940)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITEENDNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x18576BA0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x18576E40)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x185769E0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITENAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x18576B10)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x18576C30)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x18576F70)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x18576ED0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18576AB0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x18576760)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITESTARTNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x18576B70)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x18576D20)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x18576EA0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x18576C60)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITEXMLDECLARATION_1_OFFSET UNITYSDK_OFFSET(0x185766E0)
#define SYSTEM_XML_QUERYOUTPUTWRITER_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x185766B0)
#define SYSTEM_XML_QUERYOUTPUTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x18576380)

namespace System::Xml
{
	inline static constexpr unsigned int QueryOutputWriter_TypeDefinitionIndex = 1809;

	class QueryOutputWriter : public ::System::Xml::XmlRawWriter
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Int32>* lookupCDataElems; // 0x20
		::System::Xml::BitStack* bitsCData; // 0x28
		::System::String* systemId; // 0x30
		::System::String* publicId; // 0x38
		::System::Xml::XmlRawWriter* wrapped; // 0x40
		::System::Xml::XmlQualifiedName* qnameCData; // 0x48
		::System::Boolean outputDocType; // 0x50
		::System::Boolean checkWellFormedDoc; // 0x51
		::System::Boolean inAttr; // 0x52
		::System::Boolean hasDocElem; // 0x53
		::System::Boolean inCDataSection; // 0x54
		::System::Int32 depth; // 0x58

		::System::Void _ctor(::System::Xml::XmlRawWriter* writer, ::System::Xml::XmlWriterSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlRawWriter*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER__CTOR_OFFSET))(this, writer, settings);
		}

		::System::Void set_NamespaceResolver(::System::Xml::IXmlNamespaceResolver* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_SET_NAMESPACERESOLVER_OFFSET))(this, value);
		}

		::System::Void WriteXmlDeclaration(::System::Xml::XmlStandalone standalone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlStandalone))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITEXMLDECLARATION_OFFSET))(this, standalone);
		}

		::System::Void WriteXmlDeclaration_1(::System::String* xmldecl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITEXMLDECLARATION_1_OFFSET))(this, xmldecl);
		}

		::System::Void WriteDocType(::System::String* name, ::System::String* pubid, ::System::String* sysid, ::System::String* subset)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITEDOCTYPE_OFFSET))(this, name, pubid, sysid, subset);
		}

		::System::Void WriteStartElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITESTARTELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteEndElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITEENDELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteFullEndElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITEFULLENDELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void StartElementContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_STARTELEMENTCONTENT_OFFSET))(this);
		}

		::System::Void WriteStartAttribute(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITESTARTATTRIBUTE_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteEndAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITEENDATTRIBUTE_OFFSET))(this);
		}

		::System::Void WriteNamespaceDeclaration(::System::String* prefix, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITENAMESPACEDECLARATION_OFFSET))(this, prefix, ns);
		}

		::System::Boolean get_SupportsNamespaceDeclarationInChunks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET))(this);
		}

		::System::Void WriteStartNamespaceDeclaration(::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITESTARTNAMESPACEDECLARATION_OFFSET))(this, prefix);
		}

		::System::Void WriteEndNamespaceDeclaration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITEENDNAMESPACEDECLARATION_OFFSET))(this);
		}

		::System::Void WriteCData(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITECDATA_OFFSET))(this, text);
		}

		::System::Void WriteComment(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITECOMMENT_OFFSET))(this, text);
		}

		::System::Void WriteProcessingInstruction(::System::String* name, ::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET))(this, name, text);
		}

		::System::Void WriteWhitespace(::System::String* ws)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITEWHITESPACE_OFFSET))(this, ws);
		}

		::System::Void WriteString(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITESTRING_OFFSET))(this, text);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITECHARS_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteEntityRef(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITEENTITYREF_OFFSET))(this, name);
		}

		::System::Void WriteCharEntity(::System::Char ch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITECHARENTITY_OFFSET))(this, ch);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char lowChar, ::System::Char highChar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITESURROGATECHARENTITY_OFFSET))(this, lowChar, highChar);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITERAW_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteRaw_1(::System::String* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_QUERYOUTPUTWRITER_WRITERAW_1_OFFSET))(this, data);
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
