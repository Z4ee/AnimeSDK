#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Formatting.h"
#include "unitysdk/System/Xml/WriteState.h"
#include "unitysdk/System/Xml/XmlCharType.h"
#include "unitysdk/System/Xml/XmlTextWriter_Namespace.h"
#include "unitysdk/System/Xml/XmlTextWriter_SpecialAttr.h"
#include "unitysdk/System/Xml/XmlTextWriter_State.h"
#include "unitysdk/System/Xml/XmlTextWriter_TagInfo.h"
#include "unitysdk/System/Xml/XmlTextWriter_Token.h"
#include "unitysdk/System/Xml/XmlWriter.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::IO { class TextWriter; }
namespace System::Text { class Encoding; }
namespace System::Xml { class XmlTextEncoder; }
namespace System::Xml { class XmlTextWriterBase64Encoder; }

#define SYSTEM_XML_XMLTEXTWRITER_ADDNAMESPACE_OFFSET UNITYSDK_OFFSET(0x18645F20)
#define SYSTEM_XML_XMLTEXTWRITER_ADDTONAMESPACEHASHTABLE_OFFSET UNITYSDK_OFFSET(0x186461E0)
#define SYSTEM_XML_XMLTEXTWRITER_AUTOCOMPLETEALL_OFFSET UNITYSDK_OFFSET(0x18641920)
#define SYSTEM_XML_XMLTEXTWRITER_AUTOCOMPLETE_OFFSET UNITYSDK_OFFSET(0x18642100)
#define SYSTEM_XML_XMLTEXTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x18645230)
#define SYSTEM_XML_XMLTEXTWRITER_FINDPREFIX_OFFSET UNITYSDK_OFFSET(0x18643000)
#define SYSTEM_XML_XMLTEXTWRITER_FLUSHENCODERS_OFFSET UNITYSDK_OFFSET(0x18645A60)
#define SYSTEM_XML_XMLTEXTWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x18645380)
#define SYSTEM_XML_XMLTEXTWRITER_GENERATEPREFIX_OFFSET UNITYSDK_OFFSET(0x18644190)
#define SYSTEM_XML_XMLTEXTWRITER_GET_WRITESTATE_OFFSET UNITYSDK_OFFSET(0x18645210)
#define SYSTEM_XML_XMLTEXTWRITER_HANDLESPECIALATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18645C00)
#define SYSTEM_XML_XMLTEXTWRITER_INDENT_OFFSET UNITYSDK_OFFSET(0x186454A0)
#define SYSTEM_XML_XMLTEXTWRITER_INTERNALWRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x18643520)
#define SYSTEM_XML_XMLTEXTWRITER_INTERNALWRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x186447D0)
#define SYSTEM_XML_XMLTEXTWRITER_LOOKUPNAMESPACEINCURRENTSCOPE_OFFSET UNITYSDK_OFFSET(0x18643F50)
#define SYSTEM_XML_XMLTEXTWRITER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x18642E40)
#define SYSTEM_XML_XMLTEXTWRITER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x186453B0)
#define SYSTEM_XML_XMLTEXTWRITER_POPNAMESPACES_OFFSET UNITYSDK_OFFSET(0x18645AD0)
#define SYSTEM_XML_XMLTEXTWRITER_PUSHNAMESPACE_OFFSET UNITYSDK_OFFSET(0x18643190)
#define SYSTEM_XML_XMLTEXTWRITER_PUSHSTACK_OFFSET UNITYSDK_OFFSET(0x18642D30)
#define SYSTEM_XML_XMLTEXTWRITER_SET_FORMATTING_OFFSET UNITYSDK_OFFSET(0x186413B0)
#define SYSTEM_XML_XMLTEXTWRITER_STARTDOCUMENT_OFFSET UNITYSDK_OFFSET(0x186413D0)
#define SYSTEM_XML_XMLTEXTWRITER_VALIDATENAME_OFFSET UNITYSDK_OFFSET(0x18641E30)
#define SYSTEM_XML_XMLTEXTWRITER_VERIFYPREFIXXML_OFFSET UNITYSDK_OFFSET(0x18643450)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEBASE64_OFFSET UNITYSDK_OFFSET(0x18644FF0)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEBINHEX_OFFSET UNITYSDK_OFFSET(0x18645150)
#define SYSTEM_XML_XMLTEXTWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x18644320)
#define SYSTEM_XML_XMLTEXTWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x186449A0)
#define SYSTEM_XML_XMLTEXTWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x18644D90)
#define SYSTEM_XML_XMLTEXTWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x18644490)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x186419B0)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEENDATTRIBUTEQUOTE_OFFSET UNITYSDK_OFFSET(0x18645570)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18644280)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEENDDOCUMENT_OFFSET UNITYSDK_OFFSET(0x18641750)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x18643510)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEENDSTARTTAG_OFFSET UNITYSDK_OFFSET(0x186455E0)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x186448D0)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x18643850)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x18644640)
#define SYSTEM_XML_XMLTEXTWRITER_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x18644F30)
#define SYSTEM_XML_XMLTEXTWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x18644E60)
#define SYSTEM_XML_XMLTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18643860)
#define SYSTEM_XML_XMLTEXTWRITER_WRITESTARTDOCUMENT_1_OFFSET UNITYSDK_OFFSET(0x18641730)
#define SYSTEM_XML_XMLTEXTWRITER_WRITESTARTDOCUMENT_OFFSET UNITYSDK_OFFSET(0x186413C0)
#define SYSTEM_XML_XMLTEXTWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x18642920)
#define SYSTEM_XML_XMLTEXTWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x18644C00)
#define SYSTEM_XML_XMLTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x18644CD0)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x18644A60)
#define SYSTEM_XML_XMLTEXTWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18646370)
#define SYSTEM_XML_XMLTEXTWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x186412C0)
#define SYSTEM_XML_XMLTEXTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x186410F0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextWriter_TypeDefinitionIndex = 1850;

	class XmlTextWriter : public ::System::Xml::XmlWriter
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_tokenName()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(XmlTextWriter_TypeDefinitionIndex)->GetStaticField(0xDCF0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_stateName()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(XmlTextWriter_TypeDefinitionIndex)->GetStaticField(0xDCF8);
		}
		static ::Il2CppArray<::System::Xml::XmlTextWriter_State>** StaticGet_stateTableDefault()
		{
			return (::Il2CppArray<::System::Xml::XmlTextWriter_State>**)Il2CppClass::FromTypeDefinitionIndex(XmlTextWriter_TypeDefinitionIndex)->GetStaticField(0xDD00);
		}
		static ::Il2CppArray<::System::Xml::XmlTextWriter_State>** StaticGet_stateTableDocument()
		{
			return (::Il2CppArray<::System::Xml::XmlTextWriter_State>**)Il2CppClass::FromTypeDefinitionIndex(XmlTextWriter_TypeDefinitionIndex)->GetStaticField(0xDD08);
		}
		::System::Xml::XmlCharType xmlCharType; // 0x10
		::System::IO::TextWriter* textWriter; // 0x18
		::System::Text::Encoding* encoding; // 0x20
		::Il2CppArray<::System::Xml::XmlTextWriter_Namespace>* nsStack; // 0x28
		::Il2CppArray<::System::Xml::XmlTextWriter_State>* stateTable; // 0x30
		::System::Xml::XmlTextEncoder* xmlEncoder; // 0x38
		::System::Xml::XmlTextWriterBase64Encoder* base64Encoder; // 0x40
		::System::String* prefixForXmlNs; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* nsHashtable; // 0x50
		::Il2CppArray<::System::Xml::XmlTextWriter_TagInfo>* stack; // 0x58
		::System::Xml::XmlTextWriter_SpecialAttr specialAttr; // 0x60
		::System::Boolean namespaces; // 0x64
		::System::Boolean indented; // 0x65
		::System::Char quoteChar; // 0x66
		::System::Boolean useNsHashtable; // 0x68
		::System::Boolean flush; // 0x69
		::System::Char curQuoteChar; // 0x6A
		::System::Char indentChar; // 0x6C
		::System::Int32 indentation; // 0x70
		::System::Xml::Formatting formatting; // 0x74
		::System::Xml::XmlTextWriter_State currentState; // 0x78
		::System::Int32 top; // 0x7C
		::System::Xml::XmlTextWriter_Token lastToken; // 0x80
		::System::Int32 nsTop; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IO::TextWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER__CTOR_1_OFFSET))(this, w);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER__CCTOR_OFFSET))();
		}

		::System::Void set_Formatting(::System::Xml::Formatting value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Formatting))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_SET_FORMATTING_OFFSET))(this, value);
		}

		::System::Void WriteStartDocument()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITESTARTDOCUMENT_OFFSET))(this);
		}

		::System::Void WriteStartDocument_1(::System::Boolean standalone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITESTARTDOCUMENT_1_OFFSET))(this, standalone);
		}

		::System::Void WriteEndDocument()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITEENDDOCUMENT_OFFSET))(this);
		}

		::System::Void WriteDocType(::System::String* name, ::System::String* pubid, ::System::String* sysid, ::System::String* subset)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITEDOCTYPE_OFFSET))(this, name, pubid, sysid, subset);
		}

		::System::Void WriteStartElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITESTARTELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITEENDELEMENT_OFFSET))(this);
		}

		::System::Void WriteFullEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITEFULLENDELEMENT_OFFSET))(this);
		}

		::System::Void WriteStartAttribute(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteEndAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITEENDATTRIBUTE_OFFSET))(this);
		}

		::System::Void WriteCData(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITECDATA_OFFSET))(this, text);
		}

		::System::Void WriteComment(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITECOMMENT_OFFSET))(this, text);
		}

		::System::Void WriteProcessingInstruction(::System::String* name, ::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET))(this, name, text);
		}

		::System::Void WriteEntityRef(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITEENTITYREF_OFFSET))(this, name);
		}

		::System::Void WriteCharEntity(::System::Char ch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITECHARENTITY_OFFSET))(this, ch);
		}

		::System::Void WriteWhitespace(::System::String* ws)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITEWHITESPACE_OFFSET))(this, ws);
		}

		::System::Void WriteString(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITESTRING_OFFSET))(this, text);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char lowChar, ::System::Char highChar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET))(this, lowChar, highChar);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITECHARS_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITERAW_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteRaw_1(::System::String* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITERAW_1_OFFSET))(this, data);
		}

		::System::Void WriteBase64(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITEBASE64_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteBinHex(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITEBINHEX_OFFSET))(this, buffer, index, count);
		}

		::System::Xml::WriteState get_WriteState()
		{
			return ((::System::Xml::WriteState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_GET_WRITESTATE_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_FLUSH_OFFSET))(this);
		}

		::System::String* LookupPrefix(::System::String* ns)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_LOOKUPPREFIX_OFFSET))(this, ns);
		}

		::System::Void StartDocument(::System::Int32 standalone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_STARTDOCUMENT_OFFSET))(this, standalone);
		}

		::System::Void AutoComplete(::System::Xml::XmlTextWriter_Token token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlTextWriter_Token))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_AUTOCOMPLETE_OFFSET))(this, token);
		}

		::System::Void AutoCompleteAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_AUTOCOMPLETEALL_OFFSET))(this);
		}

		::System::Void InternalWriteEndElement(::System::Boolean longFormat)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_INTERNALWRITEENDELEMENT_OFFSET))(this, longFormat);
		}

		::System::Void WriteEndStartTag(::System::Boolean empty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITEENDSTARTTAG_OFFSET))(this, empty);
		}

		::System::Void WriteEndAttributeQuote()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITEENDATTRIBUTEQUOTE_OFFSET))(this);
		}

		::System::Void Indent(::System::Boolean beforeEndElement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_INDENT_OFFSET))(this, beforeEndElement);
		}

		::System::Void PushNamespace(::System::String* prefix, ::System::String* ns, ::System::Boolean declared)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_PUSHNAMESPACE_OFFSET))(this, prefix, ns, declared);
		}

		::System::Void AddNamespace(::System::String* prefix, ::System::String* ns, ::System::Boolean declared)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_ADDNAMESPACE_OFFSET))(this, prefix, ns, declared);
		}

		::System::Void AddToNamespaceHashtable(::System::Int32 namespaceIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_ADDTONAMESPACEHASHTABLE_OFFSET))(this, namespaceIndex);
		}

		::System::Void PopNamespaces(::System::Int32 indexFrom, ::System::Int32 indexTo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_POPNAMESPACES_OFFSET))(this, indexFrom, indexTo);
		}

		::System::String* GeneratePrefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_GENERATEPREFIX_OFFSET))(this);
		}

		::System::Void InternalWriteProcessingInstruction(::System::String* name, ::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_INTERNALWRITEPROCESSINGINSTRUCTION_OFFSET))(this, name, text);
		}

		::System::Int32 LookupNamespace(::System::String* prefix)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_LOOKUPNAMESPACE_OFFSET))(this, prefix);
		}

		::System::Int32 LookupNamespaceInCurrentScope(::System::String* prefix)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_LOOKUPNAMESPACEINCURRENTSCOPE_OFFSET))(this, prefix);
		}

		::System::String* FindPrefix(::System::String* ns)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_FINDPREFIX_OFFSET))(this, ns);
		}

		::System::Void ValidateName(::System::String* name, ::System::Boolean isNCName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_VALIDATENAME_OFFSET))(this, name, isNCName);
		}

		::System::Void HandleSpecialAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_HANDLESPECIALATTRIBUTE_OFFSET))(this);
		}

		::System::Void VerifyPrefixXml(::System::String* prefix, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_VERIFYPREFIXXML_OFFSET))(this, prefix, ns);
		}

		::System::Void PushStack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_PUSHSTACK_OFFSET))(this);
		}

		::System::Void FlushEncoders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_FLUSHENCODERS_OFFSET))(this);
		}
	};
}
