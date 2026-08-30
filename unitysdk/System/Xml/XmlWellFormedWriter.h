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

#define SYSTEM_XML_XMLWELLFORMEDWRITER_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1E3D3A90)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_ADDNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1E3D93C0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_ADDTOATTRHASHTABLE_OFFSET UNITYSDK_OFFSET(0x1E3DA2C0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_ADDTONAMESPACEHASHTABLE_OFFSET UNITYSDK_OFFSET(0x1E3D96F0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_ADVANCESTATE_OFFSET UNITYSDK_OFFSET(0x1E3D0F70)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_CHECKNCNAME_OFFSET UNITYSDK_OFFSET(0x1E3D1CB0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1E3D88B0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_DUPATTREXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E3D9560)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1E3D8D30)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_GENERATEPREFIX_OFFSET UNITYSDK_OFFSET(0x1E3D3840)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_GETSTATENAME_OFFSET UNITYSDK_OFFSET(0x1E3D9820)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_GET_INBASE64_OFFSET UNITYSDK_OFFSET(0x1E3D8D10)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_GET_ISCLOSEDORERRORSTATE_OFFSET UNITYSDK_OFFSET(0x1E3D9170)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_GET_RAWWRITER_OFFSET UNITYSDK_OFFSET(0x1E3D91A0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_GET_SAVEATTRVALUE_OFFSET UNITYSDK_OFFSET(0x1E3D6CE0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_GET_WRITESTATE_OFFSET UNITYSDK_OFFSET(0x1E3D07F0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_INVALIDCHARSEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E3DA010)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_LOOKUPLOCALNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1E3D3930)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_LOOKUPNAMESPACEINDEX_OFFSET UNITYSDK_OFFSET(0x1E3D9240)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1E3D20C0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x1E3D1E00)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_POPNAMESPACES_OFFSET UNITYSDK_OFFSET(0x1E3D28C0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_PUSHNAMESPACEEXPLICIT_OFFSET UNITYSDK_OFFSET(0x1E3D4F60)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_PUSHNAMESPACEIMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E3D22E0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_SETSPECIALATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1E3D3750)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x1E3D9BB0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_STARTFRAGMENT_OFFSET UNITYSDK_OFFSET(0x1E3D9230)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_THROWINVALIDSTATETRANSITION_OFFSET UNITYSDK_OFFSET(0x1E3D98C0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEBASE64_OFFSET UNITYSDK_OFFSET(0x1E3D8670)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEBINHEX_OFFSET UNITYSDK_OFFSET(0x1E3D9070)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x1E3D6550)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1E3D72E0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x1E3D7DC0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x1E3D6690)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x1E3D1460)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1E3D3F30)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEENDDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1E3D0B00)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1E3D0C80)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x1E3D6B30)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1E3D29D0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1E3D67D0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x1E3D8440)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x1E3D8100)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1E3D2D70)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITESTARTDOCUMENTIMPL_OFFSET UNITYSDK_OFFSET(0x1E3D08A0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITESTARTDOCUMENT_1_OFFSET UNITYSDK_OFFSET(0x1E3D0AD0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITESTARTDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1E3D0890)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1E3D1870)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x1E3D7BE0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1E3D7570)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1E3D8E40)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1E3D78E0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3DA440)
#define SYSTEM_XML_XMLWELLFORMEDWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D02D0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlWellFormedWriter_TypeDefinitionIndex = 1871;

	class XmlWellFormedWriter : public ::System::Xml::XmlWriter
	{
	public:
		static ::Il2CppArray<::System::Xml::XmlWellFormedWriter_State>** StaticGet_StateTableAuto()
		{
			return (::Il2CppArray<::System::Xml::XmlWellFormedWriter_State>**)Il2CppClass::FromTypeDefinitionIndex(XmlWellFormedWriter_TypeDefinitionIndex)->GetStaticField(0x2A2B0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_stateName()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(XmlWellFormedWriter_TypeDefinitionIndex)->GetStaticField(0x2A2B8);
		}
		static ::Il2CppArray<::System::Xml::XmlWellFormedWriter_State>** StaticGet_StateTableDocument()
		{
			return (::Il2CppArray<::System::Xml::XmlWellFormedWriter_State>**)Il2CppClass::FromTypeDefinitionIndex(XmlWellFormedWriter_TypeDefinitionIndex)->GetStaticField(0x2A2C0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_tokenName()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(XmlWellFormedWriter_TypeDefinitionIndex)->GetStaticField(0x2A2C8);
		}
		static ::Il2CppArray<::System::Xml::WriteState>** StaticGet_state2WriteState()
		{
			return (::Il2CppArray<::System::Xml::WriteState>**)Il2CppClass::FromTypeDefinitionIndex(XmlWellFormedWriter_TypeDefinitionIndex)->GetStaticField(0x2A2D0);
		}
		::System::Xml::XmlCharType xmlCharType; // 0x10
		::System::Xml::SecureStringHasher* hasher; // 0x18
		::System::String* curDeclPrefix; // 0x20
		::Il2CppArray<::System::Xml::XmlWellFormedWriter_Namespace>* nsStack; // 0x28
		::System::Xml::XmlWellFormedWriter_AttributeValueCache* attrValueCache; // 0x30
		::Il2CppArray<::System::Xml::XmlWellFormedWriter_AttrName>* attrStack; // 0x38
		::Il2CppArray<::System::Xml::XmlWellFormedWriter_State>* stateTable; // 0x40
		::System::Xml::XmlWriter* writer; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* nsHashtable; // 0x50
		::System::Xml::XmlRawWriter* rawWriter; // 0x58
		::Il2CppArray<::System::Xml::XmlWellFormedWriter_ElementScope>* elemScopeStack; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* attrHashTable; // 0x68
		::System::Xml::IXmlNamespaceResolver* predefinedNamespaces; // 0x70
		::System::Int32 attrCount; // 0x78
		::System::Boolean omitDuplNamespaces; // 0x7C
		::System::Boolean useNsHashtable; // 0x7D
		::System::Boolean checkCharacters; // 0x7E
		::System::Boolean xmlDeclFollows; // 0x7F
		::System::Xml::ConformanceLevel conformanceLevel; // 0x80
		::System::Int32 elemTop; // 0x84
		::System::Xml::XmlWellFormedWriter_SpecialAttribute specAttr; // 0x88
		::System::Int32 nsTop; // 0x8C
		::System::Boolean dtdWritten; // 0x90
		::System::Boolean writeEndDocumentOnClose; // 0x91
		::System::Xml::XmlWellFormedWriter_State currentState; // 0x94

		::System::Void _ctor(::System::Xml::XmlWriter* a1, ::System::Xml::XmlWriterSettings* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER__CTOR_OFFSET))(this, a1, a2);
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

		::System::Void WriteStartDocument_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITESTARTDOCUMENT_1_OFFSET))(this, a1);
		}

		::System::Void WriteEndDocument()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEENDDOCUMENT_OFFSET))(this);
		}

		::System::Void WriteDocType(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEDOCTYPE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteStartElement(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITESTARTELEMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEENDELEMENT_OFFSET))(this);
		}

		::System::Void WriteFullEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEFULLENDELEMENT_OFFSET))(this);
		}

		::System::Void WriteStartAttribute(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITESTARTATTRIBUTE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteEndAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEENDATTRIBUTE_OFFSET))(this);
		}

		::System::Void WriteCData(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITECDATA_OFFSET))(this, a1);
		}

		::System::Void WriteComment(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITECOMMENT_OFFSET))(this, a1);
		}

		::System::Void WriteProcessingInstruction(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET))(this, a1, a2);
		}

		::System::Void WriteEntityRef(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEENTITYREF_OFFSET))(this, a1);
		}

		::System::Void WriteCharEntity(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITECHARENTITY_OFFSET))(this, a1);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char a1, ::System::Char a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITESURROGATECHARENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void WriteWhitespace(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEWHITESPACE_OFFSET))(this, a1);
		}

		::System::Void WriteString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITESTRING_OFFSET))(this, a1);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITECHARS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITERAW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteRaw_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITERAW_1_OFFSET))(this, a1);
		}

		::System::Void WriteBase64(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEBASE64_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_FLUSH_OFFSET))(this);
		}

		::System::String* LookupPrefix(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_LOOKUPPREFIX_OFFSET))(this, a1);
		}

		::System::Void WriteValue(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEVALUE_OFFSET))(this, a1);
		}

		::System::Void WriteBinHex(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITEBINHEX_OFFSET))(this, a1, a2, a3);
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

		::System::Void SetSpecialAttribute(::System::Xml::XmlWellFormedWriter_SpecialAttribute a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWellFormedWriter_SpecialAttribute))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_SETSPECIALATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Void WriteStartDocumentImpl(::System::Xml::XmlStandalone a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlStandalone))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_WRITESTARTDOCUMENTIMPL_OFFSET))(this, a1);
		}

		::System::Void StartFragment()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_STARTFRAGMENT_OFFSET))(this);
		}

		::System::Void PushNamespaceImplicit(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_PUSHNAMESPACEIMPLICIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean PushNamespaceExplicit(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_PUSHNAMESPACEEXPLICIT_OFFSET))(this, a1, a2);
		}

		::System::Void AddNamespace(::System::String* a1, ::System::String* a2, ::System::Xml::XmlWellFormedWriter_NamespaceKind a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Xml::XmlWellFormedWriter_NamespaceKind))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ADDNAMESPACE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddToNamespaceHashtable(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ADDTONAMESPACEHASHTABLE_OFFSET))(this, a1);
		}

		::System::Int32 LookupNamespaceIndex(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_LOOKUPNAMESPACEINDEX_OFFSET))(this, a1);
		}

		::System::Void PopNamespaces(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_POPNAMESPACES_OFFSET))(this, a1, a2);
		}

		static ::System::Xml::XmlException* DupAttrException(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Xml::XmlException*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_DUPATTREXCEPTION_OFFSET))(a1, a2);
		}

		::System::Void AdvanceState(::System::Xml::XmlWellFormedWriter_Token a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWellFormedWriter_Token))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ADVANCESTATE_OFFSET))(this, a1);
		}

		::System::Void StartElementContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_STARTELEMENTCONTENT_OFFSET))(this);
		}

		static ::System::String* GetStateName(::System::Xml::XmlWellFormedWriter_State a1)
		{
			return ((::System::String*(*)(::System::Xml::XmlWellFormedWriter_State))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_GETSTATENAME_OFFSET))(a1);
		}

		::System::String* LookupNamespace(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_LOOKUPNAMESPACE_OFFSET))(this, a1);
		}

		::System::String* LookupLocalNamespace(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_LOOKUPLOCALNAMESPACE_OFFSET))(this, a1);
		}

		::System::String* GeneratePrefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_GENERATEPREFIX_OFFSET))(this);
		}

		::System::Void CheckNCName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_CHECKNCNAME_OFFSET))(this, a1);
		}

		static ::System::Exception* InvalidCharsException(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_INVALIDCHARSEXCEPTION_OFFSET))(a1, a2);
		}

		::System::Void ThrowInvalidStateTransition(::System::Xml::XmlWellFormedWriter_Token a1, ::System::Xml::XmlWellFormedWriter_State a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWellFormedWriter_Token, ::System::Xml::XmlWellFormedWriter_State))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_THROWINVALIDSTATETRANSITION_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsClosedOrErrorState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_GET_ISCLOSEDORERRORSTATE_OFFSET))(this);
		}

		::System::Void AddAttribute(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ADDATTRIBUTE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddToAttrHashTable(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ADDTOATTRHASHTABLE_OFFSET))(this, a1);
		}
	};
}
