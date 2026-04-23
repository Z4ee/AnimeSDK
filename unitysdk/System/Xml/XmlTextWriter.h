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

#define SYSTEM_XML_XMLTEXTWRITER_ADDNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1A080860)
#define SYSTEM_XML_XMLTEXTWRITER_ADDTONAMESPACEHASHTABLE_OFFSET UNITYSDK_OFFSET(0x1A080B20)
#define SYSTEM_XML_XMLTEXTWRITER_AUTOCOMPLETEALL_OFFSET UNITYSDK_OFFSET(0x1A07C210)
#define SYSTEM_XML_XMLTEXTWRITER_AUTOCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1A07CA10)
#define SYSTEM_XML_XMLTEXTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1A07FB80)
#define SYSTEM_XML_XMLTEXTWRITER_FINDPREFIX_OFFSET UNITYSDK_OFFSET(0x1A07D940)
#define SYSTEM_XML_XMLTEXTWRITER_FLUSHENCODERS_OFFSET UNITYSDK_OFFSET(0x1A0803C0)
#define SYSTEM_XML_XMLTEXTWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1A07FCD0)
#define SYSTEM_XML_XMLTEXTWRITER_GENERATEPREFIX_OFFSET UNITYSDK_OFFSET(0x1A07EAD0)
#define SYSTEM_XML_XMLTEXTWRITER_GET_WRITESTATE_OFFSET UNITYSDK_OFFSET(0x1A07FB60)
#define SYSTEM_XML_XMLTEXTWRITER_HANDLESPECIALATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A080540)
#define SYSTEM_XML_XMLTEXTWRITER_INDENT_OFFSET UNITYSDK_OFFSET(0x1A07FDF0)
#define SYSTEM_XML_XMLTEXTWRITER_INTERNALWRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1A07DE60)
#define SYSTEM_XML_XMLTEXTWRITER_INTERNALWRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1A07F110)
#define SYSTEM_XML_XMLTEXTWRITER_LOOKUPNAMESPACEINCURRENTSCOPE_OFFSET UNITYSDK_OFFSET(0x1A07E890)
#define SYSTEM_XML_XMLTEXTWRITER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1A07D770)
#define SYSTEM_XML_XMLTEXTWRITER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x1A07FD00)
#define SYSTEM_XML_XMLTEXTWRITER_POPNAMESPACES_OFFSET UNITYSDK_OFFSET(0x1A080430)
#define SYSTEM_XML_XMLTEXTWRITER_PUSHNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1A07DAD0)
#define SYSTEM_XML_XMLTEXTWRITER_PUSHSTACK_OFFSET UNITYSDK_OFFSET(0x1A07D660)
#define SYSTEM_XML_XMLTEXTWRITER_SET_FORMATTING_OFFSET UNITYSDK_OFFSET(0x1A07BCA0)
#define SYSTEM_XML_XMLTEXTWRITER_STARTDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1A07BCC0)
#define SYSTEM_XML_XMLTEXTWRITER_VALIDATENAME_OFFSET UNITYSDK_OFFSET(0x1A07C740)
#define SYSTEM_XML_XMLTEXTWRITER_VERIFYPREFIXXML_OFFSET UNITYSDK_OFFSET(0x1A07DD90)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEBASE64_OFFSET UNITYSDK_OFFSET(0x1A07F930)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEBINHEX_OFFSET UNITYSDK_OFFSET(0x1A07FAA0)
#define SYSTEM_XML_XMLTEXTWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x1A07EC60)
#define SYSTEM_XML_XMLTEXTWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1A07F2E0)
#define SYSTEM_XML_XMLTEXTWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x1A07F6D0)
#define SYSTEM_XML_XMLTEXTWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x1A07EDD0)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x1A07C2B0)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEENDATTRIBUTEQUOTE_OFFSET UNITYSDK_OFFSET(0x1A07FEC0)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A07EBC0)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEENDDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1A07C040)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1A07DE50)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEENDSTARTTAG_OFFSET UNITYSDK_OFFSET(0x1A07FF30)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x1A07F210)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1A07E190)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1A07EF80)
#define SYSTEM_XML_XMLTEXTWRITER_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x1A07F870)
#define SYSTEM_XML_XMLTEXTWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x1A07F7A0)
#define SYSTEM_XML_XMLTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A07E1A0)
#define SYSTEM_XML_XMLTEXTWRITER_WRITESTARTDOCUMENT_1_OFFSET UNITYSDK_OFFSET(0x1A07C020)
#define SYSTEM_XML_XMLTEXTWRITER_WRITESTARTDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1A07BCB0)
#define SYSTEM_XML_XMLTEXTWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1A07D250)
#define SYSTEM_XML_XMLTEXTWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x1A07F540)
#define SYSTEM_XML_XMLTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1A07F610)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1A07F3A0)
#define SYSTEM_XML_XMLTEXTWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A080CB0)
#define SYSTEM_XML_XMLTEXTWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A07BBB0)
#define SYSTEM_XML_XMLTEXTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A07B9E0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextWriter_TypeDefinitionIndex = 1851;

	class XmlTextWriter : public ::System::Xml::XmlWriter
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_tokenName()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(XmlTextWriter_TypeDefinitionIndex)->GetStaticField(0xDC60);
		}
		static ::Il2CppArray<::System::Xml::XmlTextWriter_State>** StaticGet_stateTableDocument()
		{
			return (::Il2CppArray<::System::Xml::XmlTextWriter_State>**)Il2CppClass::FromTypeDefinitionIndex(XmlTextWriter_TypeDefinitionIndex)->GetStaticField(0xDC68);
		}
		static ::Il2CppArray<::System::Xml::XmlTextWriter_State>** StaticGet_stateTableDefault()
		{
			return (::Il2CppArray<::System::Xml::XmlTextWriter_State>**)Il2CppClass::FromTypeDefinitionIndex(XmlTextWriter_TypeDefinitionIndex)->GetStaticField(0xDC70);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_stateName()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(XmlTextWriter_TypeDefinitionIndex)->GetStaticField(0xDC78);
		}
		::Il2CppArray<::System::Xml::XmlTextWriter_TagInfo>* stack; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* nsHashtable; // 0x18
		::System::Text::Encoding* encoding; // 0x20
		::System::IO::TextWriter* textWriter; // 0x28
		::System::String* prefixForXmlNs; // 0x30
		::System::Xml::XmlTextEncoder* xmlEncoder; // 0x38
		::System::Xml::XmlCharType xmlCharType; // 0x40
		::System::Xml::XmlTextWriterBase64Encoder* base64Encoder; // 0x48
		::Il2CppArray<::System::Xml::XmlTextWriter_State>* stateTable; // 0x50
		::Il2CppArray<::System::Xml::XmlTextWriter_Namespace>* nsStack; // 0x58
		::System::Xml::Formatting formatting; // 0x60
		::System::Xml::XmlTextWriter_State currentState; // 0x64
		::System::Int32 indentation; // 0x68
		::System::Xml::XmlTextWriter_Token lastToken; // 0x6C
		::System::Boolean indented; // 0x70
		::System::Boolean namespaces; // 0x71
		::System::Int32 top; // 0x74
		::System::Char curQuoteChar; // 0x78
		::System::Char indentChar; // 0x7A
		::System::Xml::XmlTextWriter_SpecialAttr specialAttr; // 0x7C
		::System::Char quoteChar; // 0x80
		::System::Boolean flush; // 0x82
		::System::Boolean useNsHashtable; // 0x83
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
