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

#define SYSTEM_XML_XMLTEXTWRITER_ADDNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1AEF1EB0)
#define SYSTEM_XML_XMLTEXTWRITER_ADDTONAMESPACEHASHTABLE_OFFSET UNITYSDK_OFFSET(0x1AEF2160)
#define SYSTEM_XML_XMLTEXTWRITER_AUTOCOMPLETEALL_OFFSET UNITYSDK_OFFSET(0x1AEEDB70)
#define SYSTEM_XML_XMLTEXTWRITER_AUTOCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1AEEE350)
#define SYSTEM_XML_XMLTEXTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1AEF1250)
#define SYSTEM_XML_XMLTEXTWRITER_FINDPREFIX_OFFSET UNITYSDK_OFFSET(0x1AEEF180)
#define SYSTEM_XML_XMLTEXTWRITER_FLUSHENCODERS_OFFSET UNITYSDK_OFFSET(0x1AEF1A30)
#define SYSTEM_XML_XMLTEXTWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1AEF13A0)
#define SYSTEM_XML_XMLTEXTWRITER_GENERATEPREFIX_OFFSET UNITYSDK_OFFSET(0x1AEF01E0)
#define SYSTEM_XML_XMLTEXTWRITER_GET_WRITESTATE_OFFSET UNITYSDK_OFFSET(0x1AEF1230)
#define SYSTEM_XML_XMLTEXTWRITER_HANDLESPECIALATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AEF1BB0)
#define SYSTEM_XML_XMLTEXTWRITER_INDENT_OFFSET UNITYSDK_OFFSET(0x1AEF14C0)
#define SYSTEM_XML_XMLTEXTWRITER_INTERNALWRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1AEEF610)
#define SYSTEM_XML_XMLTEXTWRITER_INTERNALWRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1AEF0820)
#define SYSTEM_XML_XMLTEXTWRITER_LOOKUPNAMESPACEINCURRENTSCOPE_OFFSET UNITYSDK_OFFSET(0x1AEEFFD0)
#define SYSTEM_XML_XMLTEXTWRITER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1AEEEFF0)
#define SYSTEM_XML_XMLTEXTWRITER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x1AEF13D0)
#define SYSTEM_XML_XMLTEXTWRITER_POPNAMESPACES_OFFSET UNITYSDK_OFFSET(0x1AEF1AA0)
#define SYSTEM_XML_XMLTEXTWRITER_PUSHNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1AEEF2E0)
#define SYSTEM_XML_XMLTEXTWRITER_PUSHSTACK_OFFSET UNITYSDK_OFFSET(0x1AEEEEE0)
#define SYSTEM_XML_XMLTEXTWRITER_SET_FORMATTING_OFFSET UNITYSDK_OFFSET(0x1AEED430)
#define SYSTEM_XML_XMLTEXTWRITER_STARTDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1AEED450)
#define SYSTEM_XML_XMLTEXTWRITER_VALIDATENAME_OFFSET UNITYSDK_OFFSET(0x1AEEE080)
#define SYSTEM_XML_XMLTEXTWRITER_VERIFYPREFIXXML_OFFSET UNITYSDK_OFFSET(0x1AEEF540)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEBASE64_OFFSET UNITYSDK_OFFSET(0x1AEF1010)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEBINHEX_OFFSET UNITYSDK_OFFSET(0x1AEF1170)
#define SYSTEM_XML_XMLTEXTWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x1AEF0370)
#define SYSTEM_XML_XMLTEXTWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1AEF09F0)
#define SYSTEM_XML_XMLTEXTWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x1AEF0DB0)
#define SYSTEM_XML_XMLTEXTWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x1AEF04E0)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x1AEEDC00)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEENDATTRIBUTEQUOTE_OFFSET UNITYSDK_OFFSET(0x1AEF15A0)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AEF02D0)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEENDDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1AEED9A0)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1AEEF600)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEENDSTARTTAG_OFFSET UNITYSDK_OFFSET(0x1AEF1610)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x1AEF0920)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1AEEF8D0)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1AEF0690)
#define SYSTEM_XML_XMLTEXTWRITER_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x1AEF0F50)
#define SYSTEM_XML_XMLTEXTWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x1AEF0E80)
#define SYSTEM_XML_XMLTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AEEF8E0)
#define SYSTEM_XML_XMLTEXTWRITER_WRITESTARTDOCUMENT_1_OFFSET UNITYSDK_OFFSET(0x1AEED980)
#define SYSTEM_XML_XMLTEXTWRITER_WRITESTARTDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1AEED440)
#define SYSTEM_XML_XMLTEXTWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1AEEEB60)
#define SYSTEM_XML_XMLTEXTWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x1AEF0C20)
#define SYSTEM_XML_XMLTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1AEF0CF0)
#define SYSTEM_XML_XMLTEXTWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1AEF0AB0)
#define SYSTEM_XML_XMLTEXTWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AEF22B0)
#define SYSTEM_XML_XMLTEXTWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AEED370)
#define SYSTEM_XML_XMLTEXTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEED1D0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextWriter_TypeDefinitionIndex = 1851;

	class XmlTextWriter : public ::System::Xml::XmlWriter
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_tokenName()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(XmlTextWriter_TypeDefinitionIndex)->GetStaticField(0x19E90);
		}
		static ::Il2CppArray<::System::Xml::XmlTextWriter_State>** StaticGet_stateTableDocument()
		{
			return (::Il2CppArray<::System::Xml::XmlTextWriter_State>**)Il2CppClass::FromTypeDefinitionIndex(XmlTextWriter_TypeDefinitionIndex)->GetStaticField(0x19E98);
		}
		static ::Il2CppArray<::System::Xml::XmlTextWriter_State>** StaticGet_stateTableDefault()
		{
			return (::Il2CppArray<::System::Xml::XmlTextWriter_State>**)Il2CppClass::FromTypeDefinitionIndex(XmlTextWriter_TypeDefinitionIndex)->GetStaticField(0x19EA0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_stateName()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(XmlTextWriter_TypeDefinitionIndex)->GetStaticField(0x19EA8);
		}
		::System::IO::TextWriter* textWriter; // 0x10
		::Il2CppArray<::System::Xml::XmlTextWriter_State>* stateTable; // 0x18
		::System::Xml::XmlCharType xmlCharType; // 0x20
		::System::Xml::XmlTextWriterBase64Encoder* base64Encoder; // 0x28
		::System::Text::Encoding* encoding; // 0x30
		::Il2CppArray<::System::Xml::XmlTextWriter_TagInfo>* stack; // 0x38
		::System::Xml::XmlTextEncoder* xmlEncoder; // 0x40
		::System::String* prefixForXmlNs; // 0x48
		::Il2CppArray<::System::Xml::XmlTextWriter_Namespace>* nsStack; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* nsHashtable; // 0x58
		::System::Int32 indentation; // 0x60
		::System::Char indentChar; // 0x64
		::System::Char curQuoteChar; // 0x66
		::System::Xml::Formatting formatting; // 0x68
		::System::Char quoteChar; // 0x6C
		::System::Boolean useNsHashtable; // 0x6E
		::System::Boolean flush; // 0x6F
		::System::Int32 nsTop; // 0x70
		::System::Xml::XmlTextWriter_State currentState; // 0x74
		::System::Xml::XmlTextWriter_Token lastToken; // 0x78
		::System::Xml::XmlTextWriter_SpecialAttr specialAttr; // 0x7C
		::System::Boolean namespaces; // 0x80
		::System::Boolean indented; // 0x81
		::System::Int32 top; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IO::TextWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER__CCTOR_OFFSET))();
		}

		::System::Void set_Formatting(::System::Xml::Formatting a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Formatting))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_SET_FORMATTING_OFFSET))(this, a1);
		}

		::System::Void WriteStartDocument()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITESTARTDOCUMENT_OFFSET))(this);
		}

		::System::Void WriteStartDocument_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITESTARTDOCUMENT_1_OFFSET))(this, a1);
		}

		::System::Void WriteEndDocument()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITEENDDOCUMENT_OFFSET))(this);
		}

		::System::Void WriteDocType(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITEDOCTYPE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteStartElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITESTARTELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITEENDELEMENT_OFFSET))(this);
		}

		::System::Void WriteFullEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITEFULLENDELEMENT_OFFSET))(this);
		}

		::System::Void WriteStartAttribute(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteEndAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITEENDATTRIBUTE_OFFSET))(this);
		}

		::System::Void WriteCData(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITECDATA_OFFSET))(this, a1);
		}

		::System::Void WriteComment(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITECOMMENT_OFFSET))(this, a1);
		}

		::System::Void WriteProcessingInstruction(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET))(this, a1, a2);
		}

		::System::Void WriteEntityRef(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITEENTITYREF_OFFSET))(this, a1);
		}

		::System::Void WriteCharEntity(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITECHARENTITY_OFFSET))(this, a1);
		}

		::System::Void WriteWhitespace(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITEWHITESPACE_OFFSET))(this, a1);
		}

		::System::Void WriteString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITESTRING_OFFSET))(this, a1);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char a1, ::System::Char a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITECHARS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITERAW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteRaw_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITERAW_1_OFFSET))(this, a1);
		}

		::System::Void WriteBase64(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITEBASE64_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteBinHex(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITEBINHEX_OFFSET))(this, a1, a2, a3);
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

		::System::String* LookupPrefix(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_LOOKUPPREFIX_OFFSET))(this, a1);
		}

		::System::Void StartDocument(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_STARTDOCUMENT_OFFSET))(this, a1);
		}

		::System::Void AutoComplete(::System::Xml::XmlTextWriter_Token a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlTextWriter_Token))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_AUTOCOMPLETE_OFFSET))(this, a1);
		}

		::System::Void AutoCompleteAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_AUTOCOMPLETEALL_OFFSET))(this);
		}

		::System::Void InternalWriteEndElement(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_INTERNALWRITEENDELEMENT_OFFSET))(this, a1);
		}

		::System::Void WriteEndStartTag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITEENDSTARTTAG_OFFSET))(this, a1);
		}

		::System::Void WriteEndAttributeQuote()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_WRITEENDATTRIBUTEQUOTE_OFFSET))(this);
		}

		::System::Void Indent(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_INDENT_OFFSET))(this, a1);
		}

		::System::Void PushNamespace(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_PUSHNAMESPACE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddNamespace(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_ADDNAMESPACE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddToNamespaceHashtable(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_ADDTONAMESPACEHASHTABLE_OFFSET))(this, a1);
		}

		::System::Void PopNamespaces(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_POPNAMESPACES_OFFSET))(this, a1, a2);
		}

		::System::String* GeneratePrefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_GENERATEPREFIX_OFFSET))(this);
		}

		::System::Void InternalWriteProcessingInstruction(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_INTERNALWRITEPROCESSINGINSTRUCTION_OFFSET))(this, a1, a2);
		}

		::System::Int32 LookupNamespace(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_LOOKUPNAMESPACE_OFFSET))(this, a1);
		}

		::System::Int32 LookupNamespaceInCurrentScope(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_LOOKUPNAMESPACEINCURRENTSCOPE_OFFSET))(this, a1);
		}

		::System::String* FindPrefix(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_FINDPREFIX_OFFSET))(this, a1);
		}

		::System::Void ValidateName(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_VALIDATENAME_OFFSET))(this, a1, a2);
		}

		::System::Void HandleSpecialAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_HANDLESPECIALATTRIBUTE_OFFSET))(this);
		}

		::System::Void VerifyPrefixXml(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITER_VERIFYPREFIXXML_OFFSET))(this, a1, a2);
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
