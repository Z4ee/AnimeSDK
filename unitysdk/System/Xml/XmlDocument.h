#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlNode.h"
#include "unitysdk/System/Xml/XmlNodeChangedAction.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class WeakReference; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Xml { class DomNameTable; }
namespace System::Xml { class EmptyEnumerator; }
namespace System::Xml { class XmlAttribute; }
namespace System::Xml { class XmlCDataSection; }
namespace System::Xml { class XmlComment; }
namespace System::Xml { class XmlDeclaration; }
namespace System::Xml { class XmlDocumentFragment; }
namespace System::Xml { class XmlDocumentType; }
namespace System::Xml { class XmlElement; }
namespace System::Xml { class XmlEntity; }
namespace System::Xml { class XmlEntityReference; }
namespace System::Xml { class XmlImplementation; }
namespace System::Xml { class XmlLinkedNode; }
namespace System::Xml { class XmlName; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlNamedNodeMap; }
namespace System::Xml { class XmlNodeChangedEventArgs; }
namespace System::Xml { class XmlNodeChangedEventHandler; }
namespace System::Xml { class XmlProcessingInstruction; }
namespace System::Xml { class XmlReader; }
namespace System::Xml { class XmlResolver; }
namespace System::Xml { class XmlSignificantWhitespace; }
namespace System::Xml { class XmlText; }
namespace System::Xml { class XmlTextReader; }
namespace System::Xml { class XmlWhitespace; }
namespace System::Xml { class XmlWriter; }
namespace System::Xml::Schema { class IXmlSchemaInfo; }
namespace System::Xml::Schema { class SchemaAttDef; }
namespace System::Xml::Schema { class SchemaElementDecl; }
namespace System::Xml::Schema { class SchemaInfo; }
namespace System::Xml::Schema { class XmlSchemaSet; }

#define SYSTEM_XML_XMLDOCUMENT_ADDATTRXMLNAME_OFFSET UNITYSDK_OFFSET(0x1A034950)
#define SYSTEM_XML_XMLDOCUMENT_ADDDEFAULTATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1A0432B0)
#define SYSTEM_XML_XMLDOCUMENT_ADDELEMENTWITHID_OFFSET UNITYSDK_OFFSET(0x1A036780)
#define SYSTEM_XML_XMLDOCUMENT_ADDIDINFO_OFFSET UNITYSDK_OFFSET(0x1A041CD0)
#define SYSTEM_XML_XMLDOCUMENT_ADDXMLNAME_OFFSET UNITYSDK_OFFSET(0x1A041C90)
#define SYSTEM_XML_XMLDOCUMENT_AFTEREVENT_OFFSET UNITYSDK_OFFSET(0x1A046170)
#define SYSTEM_XML_XMLDOCUMENT_APPENDCHILDFORLOAD_OFFSET UNITYSDK_OFFSET(0x1A0466E0)
#define SYSTEM_XML_XMLDOCUMENT_BEFOREEVENT_OFFSET UNITYSDK_OFFSET(0x1A045BA0)
#define SYSTEM_XML_XMLDOCUMENT_CANINSERTAFTER_OFFSET UNITYSDK_OFFSET(0x1A042C30)
#define SYSTEM_XML_XMLDOCUMENT_CHECKNAME_OFFSET UNITYSDK_OFFSET(0x1A034860)
#define SYSTEM_XML_XMLDOCUMENT_CLONENODE_OFFSET UNITYSDK_OFFSET(0x1A042510)
#define SYSTEM_XML_XMLDOCUMENT_CREATEATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1A043BF0)
#define SYSTEM_XML_XMLDOCUMENT_CREATEATTRIBUTE_2_OFFSET UNITYSDK_OFFSET(0x1A0445E0)
#define SYSTEM_XML_XMLDOCUMENT_CREATEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A042DA0)
#define SYSTEM_XML_XMLDOCUMENT_CREATECDATASECTION_OFFSET UNITYSDK_OFFSET(0x1A042FB0)
#define SYSTEM_XML_XMLDOCUMENT_CREATECOMMENT_OFFSET UNITYSDK_OFFSET(0x1A043030)
#define SYSTEM_XML_XMLDOCUMENT_CREATEDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A044660)
#define SYSTEM_XML_XMLDOCUMENT_CREATEDOCUMENTFRAGMENT_OFFSET UNITYSDK_OFFSET(0x1A043160)
#define SYSTEM_XML_XMLDOCUMENT_CREATEDOCUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A0430E0)
#define SYSTEM_XML_XMLDOCUMENT_CREATEELEMENT_1_OFFSET UNITYSDK_OFFSET(0x1A043D10)
#define SYSTEM_XML_XMLDOCUMENT_CREATEELEMENT_2_OFFSET UNITYSDK_OFFSET(0x1A044700)
#define SYSTEM_XML_XMLDOCUMENT_CREATEELEMENT_OFFSET UNITYSDK_OFFSET(0x1A043200)
#define SYSTEM_XML_XMLDOCUMENT_CREATEENTITYREFERENCE_OFFSET UNITYSDK_OFFSET(0x1A0438F0)
#define SYSTEM_XML_XMLDOCUMENT_CREATEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1A043950)
#define SYSTEM_XML_XMLDOCUMENT_CREATESIGNIFICANTWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1A043B30)
#define SYSTEM_XML_XMLDOCUMENT_CREATETEXTNODE_OFFSET UNITYSDK_OFFSET(0x1A043A80)
#define SYSTEM_XML_XMLDOCUMENT_CREATEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1A043B90)
#define SYSTEM_XML_XMLDOCUMENT_CREATEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x1A043A10)
#define SYSTEM_XML_XMLDOCUMENT_GETDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A0461C0)
#define SYSTEM_XML_XMLDOCUMENT_GETELEMENT_OFFSET UNITYSDK_OFFSET(0x1A041E60)
#define SYSTEM_XML_XMLDOCUMENT_GETENTITYNODE_OFFSET UNITYSDK_OFFSET(0x1A046550)
#define SYSTEM_XML_XMLDOCUMENT_GETEVENTARGS_OFFSET UNITYSDK_OFFSET(0x1A045960)
#define SYSTEM_XML_XMLDOCUMENT_GETIDINFOBYELEMENT_OFFSET UNITYSDK_OFFSET(0x1A036770)
#define SYSTEM_XML_XMLDOCUMENT_GETIDINFOBYELEMENT__OFFSET UNITYSDK_OFFSET(0x1A041D80)
#define SYSTEM_XML_XMLDOCUMENT_GETINSERTEVENTARGSFORLOAD_OFFSET UNITYSDK_OFFSET(0x1A045AD0)
#define SYSTEM_XML_XMLDOCUMENT_GETRESOLVER_OFFSET UNITYSDK_OFFSET(0x1A0427C0)
#define SYSTEM_XML_XMLDOCUMENT_GETSCHEMAELEMENTDECL_OFFSET UNITYSDK_OFFSET(0x1A043590)
#define SYSTEM_XML_XMLDOCUMENT_GETXMLNAME_OFFSET UNITYSDK_OFFSET(0x1A041CB0)
#define SYSTEM_XML_XMLDOCUMENT_GET_ACTUALLOADINGSTATUS_OFFSET UNITYSDK_OFFSET(0x1A0449D0)
#define SYSTEM_XML_XMLDOCUMENT_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1A0466C0)
#define SYSTEM_XML_XMLDOCUMENT_GET_CANREPORTVALIDITY_OFFSET UNITYSDK_OFFSET(0x1A0427A0)
#define SYSTEM_XML_XMLDOCUMENT_GET_DECLARATION_OFFSET UNITYSDK_OFFSET(0x1A042690)
#define SYSTEM_XML_XMLDOCUMENT_GET_DOCUMENTELEMENT_OFFSET UNITYSDK_OFFSET(0x1A020690)
#define SYSTEM_XML_XMLDOCUMENT_GET_DOCUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A0425E0)
#define SYSTEM_XML_XMLDOCUMENT_GET_DTDSCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x1A041C70)
#define SYSTEM_XML_XMLDOCUMENT_GET_ENTITIES_OFFSET UNITYSDK_OFFSET(0x1A044930)
#define SYSTEM_XML_XMLDOCUMENT_GET_HASSETRESOLVER_OFFSET UNITYSDK_OFFSET(0x1A0427B0)
#define SYSTEM_XML_XMLDOCUMENT_GET_IMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1A042720)
#define SYSTEM_XML_XMLDOCUMENT_GET_ISCONTAINER_OFFSET UNITYSDK_OFFSET(0x1A042750)
#define SYSTEM_XML_XMLDOCUMENT_GET_ISLOADING_OFFSET UNITYSDK_OFFSET(0x1A0449B0)
#define SYSTEM_XML_XMLDOCUMENT_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1A044920)
#define SYSTEM_XML_XMLDOCUMENT_GET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x1A042760)
#define SYSTEM_XML_XMLDOCUMENT_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1A042740)
#define SYSTEM_XML_XMLDOCUMENT_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x1A0445C0)
#define SYSTEM_XML_XMLDOCUMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A042730)
#define SYSTEM_XML_XMLDOCUMENT_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1A0425C0)
#define SYSTEM_XML_XMLDOCUMENT_GET_OWNERDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1A042780)
#define SYSTEM_XML_XMLDOCUMENT_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x1A0425D0)
#define SYSTEM_XML_XMLDOCUMENT_HASNODETYPEINNEXTSIBLINGS_OFFSET UNITYSDK_OFFSET(0x1A042BD0)
#define SYSTEM_XML_XMLDOCUMENT_HASNODETYPEINPREVSIBLINGS_OFFSET UNITYSDK_OFFSET(0x1A042B20)
#define SYSTEM_XML_XMLDOCUMENT_IMPORTATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1A044340)
#define SYSTEM_XML_XMLDOCUMENT_IMPORTCHILDREN_OFFSET UNITYSDK_OFFSET(0x1A0444D0)
#define SYSTEM_XML_XMLDOCUMENT_IMPORTNODEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A043DB0)
#define SYSTEM_XML_XMLDOCUMENT_ISVALIDCHILDTYPE_OFFSET UNITYSDK_OFFSET(0x1A042920)
#define SYSTEM_XML_XMLDOCUMENT_LOADXML_OFFSET UNITYSDK_OFFSET(0x1A045260)
#define SYSTEM_XML_XMLDOCUMENT_LOAD_OFFSET UNITYSDK_OFFSET(0x1A044E60)
#define SYSTEM_XML_XMLDOCUMENT_PREPAREDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A0436E0)
#define SYSTEM_XML_XMLDOCUMENT_READNODE_OFFSET UNITYSDK_OFFSET(0x1A0449E0)
#define SYSTEM_XML_XMLDOCUMENT_REMOVEELEMENTWITHID_OFFSET UNITYSDK_OFFSET(0x1A0369F0)
#define SYSTEM_XML_XMLDOCUMENT_SETBASEURI_OFFSET UNITYSDK_OFFSET(0x1A0466D0)
#define SYSTEM_XML_XMLDOCUMENT_SETDEFAULTNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1A042EF0)
#define SYSTEM_XML_XMLDOCUMENT_SETUPREADER_OFFSET UNITYSDK_OFFSET(0x1A044BF0)
#define SYSTEM_XML_XMLDOCUMENT_SET_DTDSCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x1A041C80)
#define SYSTEM_XML_XMLDOCUMENT_SET_ENTITIES_OFFSET UNITYSDK_OFFSET(0x1A0449A0)
#define SYSTEM_XML_XMLDOCUMENT_SET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x1A045550)
#define SYSTEM_XML_XMLDOCUMENT_SET_INNERXML_OFFSET UNITYSDK_OFFSET(0x1A0455B0)
#define SYSTEM_XML_XMLDOCUMENT_SET_ISLOADING_OFFSET UNITYSDK_OFFSET(0x1A0449C0)
#define SYSTEM_XML_XMLDOCUMENT_SET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x1A042770)
#define SYSTEM_XML_XMLDOCUMENT_SET_SCHEMAS_OFFSET UNITYSDK_OFFSET(0x1A042790)
#define SYSTEM_XML_XMLDOCUMENT_SET_XMLRESOLVER_OFFSET UNITYSDK_OFFSET(0x1A0427D0)
#define SYSTEM_XML_XMLDOCUMENT_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x1A0455D0)
#define SYSTEM_XML_XMLDOCUMENT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A0455C0)
#define SYSTEM_XML_XMLDOCUMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A046970)
#define SYSTEM_XML_XMLDOCUMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A010340)
#define SYSTEM_XML_XMLDOCUMENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A041A00)
#define SYSTEM_XML_XMLDOCUMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A041900)

namespace System::Xml
{
	inline static constexpr unsigned int XmlDocument_TypeDefinitionIndex = 1888;

	class XmlDocument : public ::System::Xml::XmlNode
	{
	public:
		static ::System::Xml::Schema::IXmlSchemaInfo** StaticGet_InvalidSchemaInfo()
		{
			return (::System::Xml::Schema::IXmlSchemaInfo**)Il2CppClass::FromTypeDefinitionIndex(XmlDocument_TypeDefinitionIndex)->GetStaticField(0xCD10);
		}
		static ::System::Xml::Schema::IXmlSchemaInfo** StaticGet_ValidSchemaInfo()
		{
			return (::System::Xml::Schema::IXmlSchemaInfo**)Il2CppClass::FromTypeDefinitionIndex(XmlDocument_TypeDefinitionIndex)->GetStaticField(0xCD18);
		}
		static ::System::Xml::EmptyEnumerator** StaticGet_EmptyEnumerator()
		{
			return (::System::Xml::EmptyEnumerator**)Il2CppClass::FromTypeDefinitionIndex(XmlDocument_TypeDefinitionIndex)->GetStaticField(0xCD20);
		}
		static ::System::Xml::Schema::IXmlSchemaInfo** StaticGet_NotKnownSchemaInfo()
		{
			return (::System::Xml::Schema::IXmlSchemaInfo**)Il2CppClass::FromTypeDefinitionIndex(XmlDocument_TypeDefinitionIndex)->GetStaticField(0xCD28);
		}
		::System::String* strSpace; // 0x18
		::System::String* strCommentName; // 0x20
		::System::Xml::XmlNodeChangedEventHandler* onNodeRemovingDelegate; // 0x28
		::System::String* strID; // 0x30
		::System::String* strDocumentFragmentName; // 0x38
		::System::String* strLang; // 0x40
		::System::Collections::Hashtable* htElementIDAttrDecl; // 0x48
		::System::String* strSignificantWhitespaceName; // 0x50
		::System::String* strReservedXml; // 0x58
		::System::String* strDocumentName; // 0x60
		::System::Xml::DomNameTable* domNameTable; // 0x68
		::System::Xml::XmlNodeChangedEventHandler* onNodeRemovedDelegate; // 0x70
		::System::String* strXmlns; // 0x78
		::System::Xml::XmlNodeChangedEventHandler* onNodeChangingDelegate; // 0x80
		::System::Xml::XmlResolver* resolver; // 0x88
		::System::Object* objLock; // 0x90
		::System::Xml::XmlImplementation* implementation; // 0x98
		::System::Xml::XmlLinkedNode* lastChild; // 0xA0
		::System::String* strEmpty; // 0xA8
		::System::String* strNonSignificantWhitespaceName; // 0xB0
		::System::String* baseURI; // 0xB8
		::System::String* strCDataSectionName; // 0xC0
		::System::String* strReservedXmlns; // 0xC8
		::System::Xml::Schema::XmlSchemaSet* schemas; // 0xD0
		::System::String* strXml; // 0xD8
		::System::Xml::XmlNodeChangedEventHandler* onNodeChangedDelegate; // 0xE0
		::System::Collections::Hashtable* htElementIdMap; // 0xE8
		::System::Xml::XmlNodeChangedEventHandler* onNodeInsertingDelegate; // 0xF0
		::System::Xml::XmlNamedNodeMap* entities; // 0xF8
		::System::String* strTextName; // 0x100
		::System::Xml::Schema::SchemaInfo* schemaInfo; // 0x108
		::System::String* strEntityName; // 0x110
		::System::Xml::XmlNodeChangedEventHandler* onNodeInsertedDelegate; // 0x118
		::System::Boolean fCDataNodesPresent; // 0x120
		::System::Boolean fEntRefNodesPresent; // 0x121
		::System::Boolean reportValidity; // 0x122
		::System::Boolean actualLoadingStatus; // 0x123
		::System::Boolean bSetResolver; // 0x124
		::System::Boolean isLoading; // 0x125
		::System::Boolean preserveWhitespace; // 0x126

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Xml::XmlNameTable* nt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT__CTOR_1_OFFSET))(this, nt);
		}

		::System::Void _ctor_2(::System::Xml::XmlImplementation* imp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlImplementation*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT__CTOR_2_OFFSET))(this, imp);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT__CCTOR_OFFSET))();
		}

		::System::Xml::Schema::SchemaInfo* get_DtdSchemaInfo()
		{
			return ((::System::Xml::Schema::SchemaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GET_DTDSCHEMAINFO_OFFSET))(this);
		}

		::System::Void set_DtdSchemaInfo(::System::Xml::Schema::SchemaInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SchemaInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_SET_DTDSCHEMAINFO_OFFSET))(this, value);
		}

		static ::System::Void CheckName(::System::String* name)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_CHECKNAME_OFFSET))(name);
		}

		::System::Xml::XmlName* AddXmlName(::System::String* prefix, ::System::String* localName, ::System::String* namespaceURI, ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo)
		{
			return ((::System::Xml::XmlName*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::Schema::IXmlSchemaInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_ADDXMLNAME_OFFSET))(this, prefix, localName, namespaceURI, schemaInfo);
		}

		::System::Xml::XmlName* GetXmlName(::System::String* prefix, ::System::String* localName, ::System::String* namespaceURI, ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo)
		{
			return ((::System::Xml::XmlName*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::Schema::IXmlSchemaInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GETXMLNAME_OFFSET))(this, prefix, localName, namespaceURI, schemaInfo);
		}

		::System::Xml::XmlName* AddAttrXmlName(::System::String* prefix, ::System::String* localName, ::System::String* namespaceURI, ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo)
		{
			return ((::System::Xml::XmlName*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::Schema::IXmlSchemaInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_ADDATTRXMLNAME_OFFSET))(this, prefix, localName, namespaceURI, schemaInfo);
		}

		::System::Boolean AddIdInfo(::System::Xml::XmlName* eleName, ::System::Xml::XmlName* attrName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlName*, ::System::Xml::XmlName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_ADDIDINFO_OFFSET))(this, eleName, attrName);
		}

		::System::Xml::XmlName* GetIDInfoByElement_(::System::Xml::XmlName* eleName)
		{
			return ((::System::Xml::XmlName*(*)(::PVOID, ::System::Xml::XmlName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GETIDINFOBYELEMENT__OFFSET))(this, eleName);
		}

		::System::Xml::XmlName* GetIDInfoByElement(::System::Xml::XmlName* eleName)
		{
			return ((::System::Xml::XmlName*(*)(::PVOID, ::System::Xml::XmlName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GETIDINFOBYELEMENT_OFFSET))(this, eleName);
		}

		::System::WeakReference* GetElement(::System::Collections::ArrayList* elementList, ::System::Xml::XmlElement* elem)
		{
			return ((::System::WeakReference*(*)(::PVOID, ::System::Collections::ArrayList*, ::System::Xml::XmlElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GETELEMENT_OFFSET))(this, elementList, elem);
		}

		::System::Void AddElementWithId(::System::String* id, ::System::Xml::XmlElement* elem)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::XmlElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_ADDELEMENTWITHID_OFFSET))(this, id, elem);
		}

		::System::Void RemoveElementWithId(::System::String* id, ::System::Xml::XmlElement* elem)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::XmlElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_REMOVEELEMENTWITHID_OFFSET))(this, id, elem);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean deep)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_CLONENODE_OFFSET))(this, deep);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GET_NODETYPE_OFFSET))(this);
		}

		::System::Xml::XmlNode* get_ParentNode()
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GET_PARENTNODE_OFFSET))(this);
		}

		::System::Xml::XmlDocumentType* get_DocumentType()
		{
			return ((::System::Xml::XmlDocumentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GET_DOCUMENTTYPE_OFFSET))(this);
		}

		::System::Xml::XmlDeclaration* get_Declaration()
		{
			return ((::System::Xml::XmlDeclaration*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GET_DECLARATION_OFFSET))(this);
		}

		::System::Xml::XmlImplementation* get_Implementation()
		{
			return ((::System::Xml::XmlImplementation*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GET_IMPLEMENTATION_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GET_NAME_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GET_LOCALNAME_OFFSET))(this);
		}

		::System::Xml::XmlElement* get_DocumentElement()
		{
			return ((::System::Xml::XmlElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GET_DOCUMENTELEMENT_OFFSET))(this);
		}

		::System::Boolean get_IsContainer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GET_ISCONTAINER_OFFSET))(this);
		}

		::System::Xml::XmlLinkedNode* get_LastNode()
		{
			return ((::System::Xml::XmlLinkedNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GET_LASTNODE_OFFSET))(this);
		}

		::System::Void set_LastNode(::System::Xml::XmlLinkedNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlLinkedNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_SET_LASTNODE_OFFSET))(this, value);
		}

		::System::Xml::XmlDocument* get_OwnerDocument()
		{
			return ((::System::Xml::XmlDocument*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GET_OWNERDOCUMENT_OFFSET))(this);
		}

		::System::Void set_Schemas(::System::Xml::Schema::XmlSchemaSet* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_SET_SCHEMAS_OFFSET))(this, value);
		}

		::System::Boolean get_CanReportValidity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GET_CANREPORTVALIDITY_OFFSET))(this);
		}

		::System::Boolean get_HasSetResolver()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GET_HASSETRESOLVER_OFFSET))(this);
		}

		::System::Xml::XmlResolver* GetResolver()
		{
			return ((::System::Xml::XmlResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GETRESOLVER_OFFSET))(this);
		}

		::System::Void set_XmlResolver(::System::Xml::XmlResolver* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_SET_XMLRESOLVER_OFFSET))(this, value);
		}

		::System::Boolean IsValidChildType(::System::Xml::XmlNodeType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_ISVALIDCHILDTYPE_OFFSET))(this, type);
		}

		::System::Boolean HasNodeTypeInPrevSiblings(::System::Xml::XmlNodeType nt, ::System::Xml::XmlNode* refNode)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNodeType, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_HASNODETYPEINPREVSIBLINGS_OFFSET))(this, nt, refNode);
		}

		::System::Boolean HasNodeTypeInNextSiblings(::System::Xml::XmlNodeType nt, ::System::Xml::XmlNode* refNode)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNodeType, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_HASNODETYPEINNEXTSIBLINGS_OFFSET))(this, nt, refNode);
		}

		::System::Boolean CanInsertAfter(::System::Xml::XmlNode* newChild, ::System::Xml::XmlNode* refChild)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_CANINSERTAFTER_OFFSET))(this, newChild, refChild);
		}

		::System::Xml::XmlAttribute* CreateAttribute(::System::String* name)
		{
			return ((::System::Xml::XmlAttribute*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_CREATEATTRIBUTE_OFFSET))(this, name);
		}

		::System::Void SetDefaultNamespace(::System::String* prefix, ::System::String* localName, ::System::String*& namespaceURI)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_SETDEFAULTNAMESPACE_OFFSET))(this, prefix, localName, namespaceURI);
		}

		::System::Xml::XmlCDataSection* CreateCDataSection(::System::String* data)
		{
			return ((::System::Xml::XmlCDataSection*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_CREATECDATASECTION_OFFSET))(this, data);
		}

		::System::Xml::XmlComment* CreateComment(::System::String* data)
		{
			return ((::System::Xml::XmlComment*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_CREATECOMMENT_OFFSET))(this, data);
		}

		::System::Xml::XmlDocumentType* CreateDocumentType(::System::String* name, ::System::String* publicId, ::System::String* systemId, ::System::String* internalSubset)
		{
			return ((::System::Xml::XmlDocumentType*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_CREATEDOCUMENTTYPE_OFFSET))(this, name, publicId, systemId, internalSubset);
		}

		::System::Xml::XmlDocumentFragment* CreateDocumentFragment()
		{
			return ((::System::Xml::XmlDocumentFragment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_CREATEDOCUMENTFRAGMENT_OFFSET))(this);
		}

		::System::Xml::XmlElement* CreateElement(::System::String* name)
		{
			return ((::System::Xml::XmlElement*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_CREATEELEMENT_OFFSET))(this, name);
		}

		::System::Void AddDefaultAttributes(::System::Xml::XmlElement* elem)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_ADDDEFAULTATTRIBUTES_OFFSET))(this, elem);
		}

		::System::Xml::Schema::SchemaElementDecl* GetSchemaElementDecl(::System::Xml::XmlElement* elem)
		{
			return ((::System::Xml::Schema::SchemaElementDecl*(*)(::PVOID, ::System::Xml::XmlElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GETSCHEMAELEMENTDECL_OFFSET))(this, elem);
		}

		::System::Xml::XmlAttribute* PrepareDefaultAttribute(::System::Xml::Schema::SchemaAttDef* attdef, ::System::String* attrPrefix, ::System::String* attrLocalname, ::System::String* attrNamespaceURI)
		{
			return ((::System::Xml::XmlAttribute*(*)(::PVOID, ::System::Xml::Schema::SchemaAttDef*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_PREPAREDEFAULTATTRIBUTE_OFFSET))(this, attdef, attrPrefix, attrLocalname, attrNamespaceURI);
		}

		::System::Xml::XmlEntityReference* CreateEntityReference(::System::String* name)
		{
			return ((::System::Xml::XmlEntityReference*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_CREATEENTITYREFERENCE_OFFSET))(this, name);
		}

		::System::Xml::XmlProcessingInstruction* CreateProcessingInstruction(::System::String* target, ::System::String* data)
		{
			return ((::System::Xml::XmlProcessingInstruction*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_CREATEPROCESSINGINSTRUCTION_OFFSET))(this, target, data);
		}

		::System::Xml::XmlDeclaration* CreateXmlDeclaration(::System::String* version, ::System::String* encoding, ::System::String* standalone)
		{
			return ((::System::Xml::XmlDeclaration*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_CREATEXMLDECLARATION_OFFSET))(this, version, encoding, standalone);
		}

		::System::Xml::XmlText* CreateTextNode(::System::String* text)
		{
			return ((::System::Xml::XmlText*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_CREATETEXTNODE_OFFSET))(this, text);
		}

		::System::Xml::XmlSignificantWhitespace* CreateSignificantWhitespace(::System::String* text)
		{
			return ((::System::Xml::XmlSignificantWhitespace*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_CREATESIGNIFICANTWHITESPACE_OFFSET))(this, text);
		}

		::System::Xml::XmlWhitespace* CreateWhitespace(::System::String* text)
		{
			return ((::System::Xml::XmlWhitespace*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_CREATEWHITESPACE_OFFSET))(this, text);
		}

		::System::Xml::XmlAttribute* CreateAttribute_1(::System::String* qualifiedName, ::System::String* namespaceURI)
		{
			return ((::System::Xml::XmlAttribute*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_CREATEATTRIBUTE_1_OFFSET))(this, qualifiedName, namespaceURI);
		}

		::System::Xml::XmlElement* CreateElement_1(::System::String* qualifiedName, ::System::String* namespaceURI)
		{
			return ((::System::Xml::XmlElement*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_CREATEELEMENT_1_OFFSET))(this, qualifiedName, namespaceURI);
		}

		::System::Xml::XmlNode* ImportNodeInternal(::System::Xml::XmlNode* node, ::System::Boolean deep)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_IMPORTNODEINTERNAL_OFFSET))(this, node, deep);
		}

		::System::Void ImportAttributes(::System::Xml::XmlNode* fromElem, ::System::Xml::XmlNode* toElem)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_IMPORTATTRIBUTES_OFFSET))(this, fromElem, toElem);
		}

		::System::Void ImportChildren(::System::Xml::XmlNode* fromNode, ::System::Xml::XmlNode* toNode, ::System::Boolean deep)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_IMPORTCHILDREN_OFFSET))(this, fromNode, toNode, deep);
		}

		::System::Xml::XmlNameTable* get_NameTable()
		{
			return ((::System::Xml::XmlNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GET_NAMETABLE_OFFSET))(this);
		}

		::System::Xml::XmlAttribute* CreateAttribute_2(::System::String* prefix, ::System::String* localName, ::System::String* namespaceURI)
		{
			return ((::System::Xml::XmlAttribute*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_CREATEATTRIBUTE_2_OFFSET))(this, prefix, localName, namespaceURI);
		}

		::System::Xml::XmlAttribute* CreateDefaultAttribute(::System::String* prefix, ::System::String* localName, ::System::String* namespaceURI)
		{
			return ((::System::Xml::XmlAttribute*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_CREATEDEFAULTATTRIBUTE_OFFSET))(this, prefix, localName, namespaceURI);
		}

		::System::Xml::XmlElement* CreateElement_2(::System::String* prefix, ::System::String* localName, ::System::String* namespaceURI)
		{
			return ((::System::Xml::XmlElement*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_CREATEELEMENT_2_OFFSET))(this, prefix, localName, namespaceURI);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Xml::XmlNamedNodeMap* get_Entities()
		{
			return ((::System::Xml::XmlNamedNodeMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GET_ENTITIES_OFFSET))(this);
		}

		::System::Void set_Entities(::System::Xml::XmlNamedNodeMap* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNamedNodeMap*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_SET_ENTITIES_OFFSET))(this, value);
		}

		::System::Boolean get_IsLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GET_ISLOADING_OFFSET))(this);
		}

		::System::Void set_IsLoading(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_SET_ISLOADING_OFFSET))(this, value);
		}

		::System::Boolean get_ActualLoadingStatus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GET_ACTUALLOADINGSTATUS_OFFSET))(this);
		}

		::System::Xml::XmlNode* ReadNode(::System::Xml::XmlReader* reader)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_READNODE_OFFSET))(this, reader);
		}

		::System::Xml::XmlTextReader* SetupReader(::System::Xml::XmlTextReader* tr)
		{
			return ((::System::Xml::XmlTextReader*(*)(::PVOID, ::System::Xml::XmlTextReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_SETUPREADER_OFFSET))(this, tr);
		}

		::System::Void Load(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_LOAD_OFFSET))(this, reader);
		}

		::System::Void LoadXml(::System::String* xml)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_LOADXML_OFFSET))(this, xml);
		}

		::System::Void set_InnerText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_SET_INNERTEXT_OFFSET))(this, value);
		}

		::System::Void set_InnerXml(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_SET_INNERXML_OFFSET))(this, value);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_WRITETO_OFFSET))(this, w);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* xw)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_WRITECONTENTTO_OFFSET))(this, xw);
		}

		::System::Xml::XmlNodeChangedEventArgs* GetEventArgs(::System::Xml::XmlNode* node, ::System::Xml::XmlNode* oldParent, ::System::Xml::XmlNode* newParent, ::System::String* oldValue, ::System::String* newValue, ::System::Xml::XmlNodeChangedAction action)
		{
			return ((::System::Xml::XmlNodeChangedEventArgs*(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*, ::System::String*, ::System::String*, ::System::Xml::XmlNodeChangedAction))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GETEVENTARGS_OFFSET))(this, node, oldParent, newParent, oldValue, newValue, action);
		}

		::System::Xml::XmlNodeChangedEventArgs* GetInsertEventArgsForLoad(::System::Xml::XmlNode* node, ::System::Xml::XmlNode* newParent)
		{
			return ((::System::Xml::XmlNodeChangedEventArgs*(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GETINSERTEVENTARGSFORLOAD_OFFSET))(this, node, newParent);
		}

		::System::Void BeforeEvent(::System::Xml::XmlNodeChangedEventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNodeChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_BEFOREEVENT_OFFSET))(this, args);
		}

		::System::Void AfterEvent(::System::Xml::XmlNodeChangedEventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNodeChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_AFTEREVENT_OFFSET))(this, args);
		}

		::System::Xml::XmlAttribute* GetDefaultAttribute(::System::Xml::XmlElement* elem, ::System::String* attrPrefix, ::System::String* attrLocalname, ::System::String* attrNamespaceURI)
		{
			return ((::System::Xml::XmlAttribute*(*)(::PVOID, ::System::Xml::XmlElement*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GETDEFAULTATTRIBUTE_OFFSET))(this, elem, attrPrefix, attrLocalname, attrNamespaceURI);
		}

		::System::Xml::XmlEntity* GetEntityNode(::System::String* name)
		{
			return ((::System::Xml::XmlEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GETENTITYNODE_OFFSET))(this, name);
		}

		::System::String* get_BaseURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GET_BASEURI_OFFSET))(this);
		}

		::System::Void SetBaseURI(::System::String* inBaseURI)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_SETBASEURI_OFFSET))(this, inBaseURI);
		}

		::System::Xml::XmlNode* AppendChildForLoad(::System::Xml::XmlNode* newChild, ::System::Xml::XmlDocument* doc)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_APPENDCHILDFORLOAD_OFFSET))(this, newChild, doc);
		}
	};
}
