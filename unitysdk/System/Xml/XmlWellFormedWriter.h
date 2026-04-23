#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/ConformanceLevel.h"
#include "unitysdk/System/Xml/WriteState.h"
#include "unitysdk/System/Xml/XmlCharType.h"
#include "unitysdk/System/Xml/XmlStandalone.h"
#include "unitysdk/System/Xml/XmlWellFormedWriter_AttrName.h"
#include "unitysdk/System/Xml/XmlWellFormedWriter_ElementScope.h"
#include "unitysdk/System/Xml/XmlWellFormedWriter_Namespace.h"
#include "unitysdk/System/Xml/XmlWellFormedWriter_NamespaceKind.h"
#include "unitysdk/System/Xml/XmlWellFormedWriter_SpecialAttribute.h"
#include "unitysdk/System/Xml/XmlWellFormedWriter_State.h"
#include "unitysdk/System/Xml/XmlWellFormedWriter_Token.h"
#include "unitysdk/System/Xml/XmlWriter.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class SecureStringHasher; }
namespace System::Xml { class XmlException; }
namespace System::Xml { class XmlRawWriter; }
namespace System::Xml { class XmlWellFormedWriter_AttributeValueCache; }
namespace System::Xml { class XmlWriterSettings; }

#define SYSTEM_XML_XMLWELLFORMEDWRITER_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A089270)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_ADDNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1A08D4F0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_ADDTOATTRHASHTABLE_OFFSET UNITYSDK_OFFSET(0x1A08E1F0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_ADDTONAMESPACEHASHTABLE_OFFSET UNITYSDK_OFFSET(0x1A08D7B0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_ADVANCESTATE_OFFSET UNITYSDK_OFFSET(0x1A086AD0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_CHECKNCNAME_OFFSET UNITYSDK_OFFSET(0x1A0876B0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1A08CBD0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_DUPATTREXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A08D6A0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1A08CEC0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_GENERATEPREFIX_OFFSET UNITYSDK_OFFSET(0x1A089000)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_GETSTATENAME_OFFSET UNITYSDK_OFFSET(0x1A08D940)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_GET_INBASE64_OFFSET UNITYSDK_OFFSET(0x1A08CEA0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_GET_ISCLOSEDORERRORSTATE_OFFSET UNITYSDK_OFFSET(0x1A08D250)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_GET_RAWWRITER_OFFSET UNITYSDK_OFFSET(0x1A08D280)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_GET_SAVEATTRVALUE_OFFSET UNITYSDK_OFFSET(0x1A08B830)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_GET_WRITESTATE_OFFSET UNITYSDK_OFFSET(0x1A086510)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_INVALIDCHARSEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A08DEF0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_LOOKUPLOCALNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1A0890F0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_LOOKUPNAMESPACEINDEX_OFFSET UNITYSDK_OFFSET(0x1A08D320)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1A087B20)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x1A087830)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_POPNAMESPACES_OFFSET UNITYSDK_OFFSET(0x1A088260)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_PUSHNAMESPACEEXPLICIT_OFFSET UNITYSDK_OFFSET(0x1A08A0A0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_PUSHNAMESPACEIMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A087D10)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_SETSPECIALATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A088F10)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x1A08DD00)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_STARTFRAGMENT_OFFSET UNITYSDK_OFFSET(0x1A08D310)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_THROWINVALIDSTATETRANSITION_OFFSET UNITYSDK_OFFSET(0x1A08D9E0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEBASE64_OFFSET UNITYSDK_OFFSET(0x1A08CA10)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEBINHEX_OFFSET UNITYSDK_OFFSET(0x1A08D150)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x1A08B330)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1A08BA70)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x1A08C2D0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x1A08B410)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x1A086F70)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A089760)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEENDDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1A086770)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1A086890)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x1A08B700)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1A088370)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1A08B4F0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x1A08C850)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x1A08C590)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A0885F0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITESTARTDOCUMENTIMPL_OFFSET UNITYSDK_OFFSET(0x1A0865D0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITESTARTDOCUMENT_1_OFFSET UNITYSDK_OFFSET(0x1A086740)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITESTARTDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1A0865C0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1A087310)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x1A08C150)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1A08BC20)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1A08CF80)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1A08BE40)
#define SYSTEM_XML_XMLWELLFORMEDWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A08E3A0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A086090)

namespace System::Xml
{
	inline static constexpr unsigned int XmlWellFormedWriter_TypeDefinitionIndex = 1860;

	class XmlWellFormedWriter : public ::System::Xml::XmlWriter
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_stateName()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(XmlWellFormedWriter_TypeDefinitionIndex)->GetStaticField(0x106F0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_tokenName()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(XmlWellFormedWriter_TypeDefinitionIndex)->GetStaticField(0x106F8);
		}
		static ::Il2CppArray<::System::Xml::WriteState>** StaticGet_state2WriteState()
		{
			return (::Il2CppArray<::System::Xml::WriteState>**)Il2CppClass::FromTypeDefinitionIndex(XmlWellFormedWriter_TypeDefinitionIndex)->GetStaticField(0x10700);
		}
		static ::Il2CppArray<::System::Xml::XmlWellFormedWriter_State>** StaticGet_StateTableAuto()
		{
			return (::Il2CppArray<::System::Xml::XmlWellFormedWriter_State>**)Il2CppClass::FromTypeDefinitionIndex(XmlWellFormedWriter_TypeDefinitionIndex)->GetStaticField(0x10708);
		}
		static ::Il2CppArray<::System::Xml::XmlWellFormedWriter_State>** StaticGet_StateTableDocument()
		{
			return (::Il2CppArray<::System::Xml::XmlWellFormedWriter_State>**)Il2CppClass::FromTypeDefinitionIndex(XmlWellFormedWriter_TypeDefinitionIndex)->GetStaticField(0x10710);
		}
		::System::String* curDeclPrefix; // 0x10
		::System::Xml::XmlCharType xmlCharType; // 0x18
		::Il2CppArray<::System::Xml::XmlWellFormedWriter_State>* stateTable; // 0x20
		::System::Xml::XmlWriter* writer; // 0x28
		::System::Xml::IXmlNamespaceResolver* predefinedNamespaces; // 0x30
		::Il2CppArray<::System::Xml::XmlWellFormedWriter_Namespace>* nsStack; // 0x38
		::Il2CppArray<::System::Xml::XmlWellFormedWriter_ElementScope>* elemScopeStack; // 0x40
		::Il2CppArray<::System::Xml::XmlWellFormedWriter_AttrName>* attrStack; // 0x48
		::System::Xml::SecureStringHasher* hasher; // 0x50
		::System::Xml::XmlRawWriter* rawWriter; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* attrHashTable; // 0x60
		::System::Xml::XmlWellFormedWriter_AttributeValueCache* attrValueCache; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* nsHashtable; // 0x70
		::System::Xml::ConformanceLevel conformanceLevel; // 0x78
		::System::Xml::XmlWellFormedWriter_SpecialAttribute specAttr; // 0x7C
		::System::Boolean xmlDeclFollows; // 0x80
		::System::Boolean useNsHashtable; // 0x81
		::System::Boolean dtdWritten; // 0x82
		::System::Boolean omitDuplNamespaces; // 0x83
		::System::Int32 nsTop; // 0x84
		::System::Int32 attrCount; // 0x88
		::System::Xml::XmlWellFormedWriter_State currentState; // 0x8C
		::System::Boolean checkCharacters; // 0x90
		::System::Boolean writeEndDocumentOnClose; // 0x91
		::System::Int32 elemTop; // 0x94

		::System::Void _ctor(::System::Xml::XmlWriter* writer, ::System::Xml::XmlWriterSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER__CTOR_OFFSET))(this, writer, settings);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER__CCTOR_OFFSET))();
		}

		::System::Xml::WriteState get_WriteState()
		{
			return ((::System::Xml::WriteState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_GET_WRITESTATE_OFFSET))(this);
		}

		::System::Void WriteStartDocument()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITESTARTDOCUMENT_OFFSET))(this);
		}

		::System::Void WriteStartDocument_1(::System::Boolean standalone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITESTARTDOCUMENT_1_OFFSET))(this, standalone);
		}

		::System::Void WriteEndDocument()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEENDDOCUMENT_OFFSET))(this);
		}

		::System::Void WriteDocType(::System::String* name, ::System::String* pubid, ::System::String* sysid, ::System::String* subset)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEDOCTYPE_OFFSET))(this, name, pubid, sysid, subset);
		}

		::System::Void WriteStartElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITESTARTELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEENDELEMENT_OFFSET))(this);
		}

		::System::Void WriteFullEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEFULLENDELEMENT_OFFSET))(this);
		}

		::System::Void WriteStartAttribute(::System::String* prefix, ::System::String* localName, ::System::String* namespaceName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITESTARTATTRIBUTE_OFFSET))(this, prefix, localName, namespaceName);
		}

		::System::Void WriteEndAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEENDATTRIBUTE_OFFSET))(this);
		}

		::System::Void WriteCData(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITECDATA_OFFSET))(this, text);
		}

		::System::Void WriteComment(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITECOMMENT_OFFSET))(this, text);
		}

		::System::Void WriteProcessingInstruction(::System::String* name, ::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET))(this, name, text);
		}

		::System::Void WriteEntityRef(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEENTITYREF_OFFSET))(this, name);
		}

		::System::Void WriteCharEntity(::System::Char ch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITECHARENTITY_OFFSET))(this, ch);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char lowChar, ::System::Char highChar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITESURROGATECHARENTITY_OFFSET))(this, lowChar, highChar);
		}

		::System::Void WriteWhitespace(::System::String* ws)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEWHITESPACE_OFFSET))(this, ws);
		}

		::System::Void WriteString(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITESTRING_OFFSET))(this, text);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITECHARS_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITERAW_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteRaw_1(::System::String* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITERAW_1_OFFSET))(this, data);
		}

		::System::Void WriteBase64(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEBASE64_OFFSET))(this, buffer, index, count);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_FLUSH_OFFSET))(this);
		}

		::System::String* LookupPrefix(::System::String* ns)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_LOOKUPPREFIX_OFFSET))(this, ns);
		}

		::System::Void WriteValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEVALUE_OFFSET))(this, value);
		}

		::System::Void WriteBinHex(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEBINHEX_OFFSET))(this, buffer, index, count);
		}

		::System::Xml::XmlRawWriter* get_RawWriter()
		{
			return ((::System::Xml::XmlRawWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_GET_RAWWRITER_OFFSET))(this);
		}

		::System::Boolean get_SaveAttrValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_GET_SAVEATTRVALUE_OFFSET))(this);
		}

		::System::Boolean get_InBase64()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_GET_INBASE64_OFFSET))(this);
		}

		::System::Void SetSpecialAttribute(::System::Xml::XmlWellFormedWriter_SpecialAttribute special)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWellFormedWriter_SpecialAttribute))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_SETSPECIALATTRIBUTE_OFFSET))(this, special);
		}

		::System::Void WriteStartDocumentImpl(::System::Xml::XmlStandalone standalone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlStandalone))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITESTARTDOCUMENTIMPL_OFFSET))(this, standalone);
		}

		::System::Void StartFragment()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_STARTFRAGMENT_OFFSET))(this);
		}

		::System::Void PushNamespaceImplicit(::System::String* prefix, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_PUSHNAMESPACEIMPLICIT_OFFSET))(this, prefix, ns);
		}

		::System::Boolean PushNamespaceExplicit(::System::String* prefix, ::System::String* ns)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_PUSHNAMESPACEEXPLICIT_OFFSET))(this, prefix, ns);
		}

		::System::Void AddNamespace(::System::String* prefix, ::System::String* ns, ::System::Xml::XmlWellFormedWriter_NamespaceKind kind)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Xml::XmlWellFormedWriter_NamespaceKind))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ADDNAMESPACE_OFFSET))(this, prefix, ns, kind);
		}

		::System::Void AddToNamespaceHashtable(::System::Int32 namespaceIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ADDTONAMESPACEHASHTABLE_OFFSET))(this, namespaceIndex);
		}

		::System::Int32 LookupNamespaceIndex(::System::String* prefix)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_LOOKUPNAMESPACEINDEX_OFFSET))(this, prefix);
		}

		::System::Void PopNamespaces(::System::Int32 indexFrom, ::System::Int32 indexTo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_POPNAMESPACES_OFFSET))(this, indexFrom, indexTo);
		}

		static ::System::Xml::XmlException* DupAttrException(::System::String* prefix, ::System::String* localName)
		{
			return ((::System::Xml::XmlException*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_DUPATTREXCEPTION_OFFSET))(prefix, localName);
		}

		::System::Void AdvanceState(::System::Xml::XmlWellFormedWriter_Token token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWellFormedWriter_Token))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ADVANCESTATE_OFFSET))(this, token);
		}

		::System::Void StartElementContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_STARTELEMENTCONTENT_OFFSET))(this);
		}

		static ::System::String* GetStateName(::System::Xml::XmlWellFormedWriter_State state)
		{
			return ((::System::String*(*)(::System::Xml::XmlWellFormedWriter_State))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_GETSTATENAME_OFFSET))(state);
		}

		::System::String* LookupNamespace(::System::String* prefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_LOOKUPNAMESPACE_OFFSET))(this, prefix);
		}

		::System::String* LookupLocalNamespace(::System::String* prefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_LOOKUPLOCALNAMESPACE_OFFSET))(this, prefix);
		}

		::System::String* GeneratePrefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_GENERATEPREFIX_OFFSET))(this);
		}

		::System::Void CheckNCName(::System::String* ncname)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_CHECKNCNAME_OFFSET))(this, ncname);
		}

		static ::System::Exception* InvalidCharsException(::System::String* name, ::System::Int32 badCharIndex)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_INVALIDCHARSEXCEPTION_OFFSET))(name, badCharIndex);
		}

		::System::Void ThrowInvalidStateTransition(::System::Xml::XmlWellFormedWriter_Token token, ::System::Xml::XmlWellFormedWriter_State currentState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWellFormedWriter_Token, ::System::Xml::XmlWellFormedWriter_State))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_THROWINVALIDSTATETRANSITION_OFFSET))(this, token, currentState);
		}

		::System::Boolean get_IsClosedOrErrorState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_GET_ISCLOSEDORERRORSTATE_OFFSET))(this);
		}

		::System::Void AddAttribute(::System::String* prefix, ::System::String* localName, ::System::String* namespaceName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ADDATTRIBUTE_OFFSET))(this, prefix, localName, namespaceName);
		}

		::System::Void AddToAttrHashTable(::System::Int32 attributeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ADDTOATTRHASHTABLE_OFFSET))(this, attributeIndex);
		}
	};
}
