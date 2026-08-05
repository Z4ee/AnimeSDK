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
namespace System::IO { class TextReader; }
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
namespace System::Xml { class XmlNodeList; }
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

#define SYSTEM_XML_XMLDOCUMENT_ADDATTRXMLNAME_OFFSET UNITYSDK_OFFSET(0x1D579450)
#define SYSTEM_XML_XMLDOCUMENT_ADDDEFAULTATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1D57B2B0)
#define SYSTEM_XML_XMLDOCUMENT_ADDELEMENTWITHID_OFFSET UNITYSDK_OFFSET(0x1D579E70)
#define SYSTEM_XML_XMLDOCUMENT_ADDIDINFO_OFFSET UNITYSDK_OFFSET(0x1D579590)
#define SYSTEM_XML_XMLDOCUMENT_ADDXMLNAME_OFFSET UNITYSDK_OFFSET(0x1D579410)
#define SYSTEM_XML_XMLDOCUMENT_ADD_NODEINSERTED_OFFSET UNITYSDK_OFFSET(0x1D57D540)
#define SYSTEM_XML_XMLDOCUMENT_ADD_NODEREMOVED_OFFSET UNITYSDK_OFFSET(0x1D57D640)
#define SYSTEM_XML_XMLDOCUMENT_AFTEREVENT_OFFSET UNITYSDK_OFFSET(0x1D57D990)
#define SYSTEM_XML_XMLDOCUMENT_APPENDCHILDFORLOAD_OFFSET UNITYSDK_OFFSET(0x1D57E0C0)
#define SYSTEM_XML_XMLDOCUMENT_BEFOREEVENT_OFFSET UNITYSDK_OFFSET(0x1D57D950)
#define SYSTEM_XML_XMLDOCUMENT_CANINSERTAFTER_OFFSET UNITYSDK_OFFSET(0x1D57AB90)
#define SYSTEM_XML_XMLDOCUMENT_CANINSERTBEFORE_OFFSET UNITYSDK_OFFSET(0x1D57A9A0)
#define SYSTEM_XML_XMLDOCUMENT_CHECKNAME_OFFSET UNITYSDK_OFFSET(0x1D579360)
#define SYSTEM_XML_XMLDOCUMENT_CLONENODE_OFFSET UNITYSDK_OFFSET(0x1D57A260)
#define SYSTEM_XML_XMLDOCUMENT_CREATEATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1D57C370)
#define SYSTEM_XML_XMLDOCUMENT_CREATEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D57AD10)
#define SYSTEM_XML_XMLDOCUMENT_CREATECDATASECTION_OFFSET UNITYSDK_OFFSET(0x1D57AFB0)
#define SYSTEM_XML_XMLDOCUMENT_CREATECOMMENT_OFFSET UNITYSDK_OFFSET(0x1D57B030)
#define SYSTEM_XML_XMLDOCUMENT_CREATEDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D57C3F0)
#define SYSTEM_XML_XMLDOCUMENT_CREATEDOCUMENTFRAGMENT_OFFSET UNITYSDK_OFFSET(0x1D57B160)
#define SYSTEM_XML_XMLDOCUMENT_CREATEDOCUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1D57B0E0)
#define SYSTEM_XML_XMLDOCUMENT_CREATEELEMENT_1_OFFSET UNITYSDK_OFFSET(0x1D57C490)
#define SYSTEM_XML_XMLDOCUMENT_CREATEELEMENT_OFFSET UNITYSDK_OFFSET(0x1D57B200)
#define SYSTEM_XML_XMLDOCUMENT_CREATEENTITYREFERENCE_OFFSET UNITYSDK_OFFSET(0x1D57B8F0)
#define SYSTEM_XML_XMLDOCUMENT_CREATEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1D57B950)
#define SYSTEM_XML_XMLDOCUMENT_CREATESIGNIFICANTWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1D57BB30)
#define SYSTEM_XML_XMLDOCUMENT_CREATETEXTNODE_OFFSET UNITYSDK_OFFSET(0x1D57BA80)
#define SYSTEM_XML_XMLDOCUMENT_CREATEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1D57BB90)
#define SYSTEM_XML_XMLDOCUMENT_CREATEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x1D57BA10)
#define SYSTEM_XML_XMLDOCUMENT_GETDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D57D9D0)
#define SYSTEM_XML_XMLDOCUMENT_GETELEMENTSBYTAGNAME_OFFSET UNITYSDK_OFFSET(0x1D57BBF0)
#define SYSTEM_XML_XMLDOCUMENT_GETELEMENT_OFFSET UNITYSDK_OFFSET(0x1D579790)
#define SYSTEM_XML_XMLDOCUMENT_GETENTITYNODE_OFFSET UNITYSDK_OFFSET(0x1D57DDD0)
#define SYSTEM_XML_XMLDOCUMENT_GETEVENTARGS_OFFSET UNITYSDK_OFFSET(0x1D57D740)
#define SYSTEM_XML_XMLDOCUMENT_GETIDINFOBYELEMENT_OFFSET UNITYSDK_OFFSET(0x1D579780)
#define SYSTEM_XML_XMLDOCUMENT_GETIDINFOBYELEMENT__OFFSET UNITYSDK_OFFSET(0x1D5796A0)
#define SYSTEM_XML_XMLDOCUMENT_GETINSERTEVENTARGSFORLOAD_OFFSET UNITYSDK_OFFSET(0x1D57D860)
#define SYSTEM_XML_XMLDOCUMENT_GETSCHEMAELEMENTDECL_OFFSET UNITYSDK_OFFSET(0x1D57B5A0)
#define SYSTEM_XML_XMLDOCUMENT_GETXMLNAME_OFFSET UNITYSDK_OFFSET(0x1D579430)
#define SYSTEM_XML_XMLDOCUMENT_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1D57E0B0)
#define SYSTEM_XML_XMLDOCUMENT_GET_DECLARATION_OFFSET UNITYSDK_OFFSET(0x1D57A4E0)
#define SYSTEM_XML_XMLDOCUMENT_GET_DOCUMENTELEMENT_OFFSET UNITYSDK_OFFSET(0x1D57A5E0)
#define SYSTEM_XML_XMLDOCUMENT_GET_DOCUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1D57A3D0)
#define SYSTEM_XML_XMLDOCUMENT_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x1D57DDA0)
#define SYSTEM_XML_XMLDOCUMENT_GET_ENTITIES_OFFSET UNITYSDK_OFFSET(0x1D57C550)
#define SYSTEM_XML_XMLDOCUMENT_GET_ISCONTAINER_OFFSET UNITYSDK_OFFSET(0x1D57A690)
#define SYSTEM_XML_XMLDOCUMENT_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1D57C540)
#define SYSTEM_XML_XMLDOCUMENT_GET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x1D57A6A0)
#define SYSTEM_XML_XMLDOCUMENT_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1D57A5D0)
#define SYSTEM_XML_XMLDOCUMENT_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x1D579340)
#define SYSTEM_XML_XMLDOCUMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D57A5C0)
#define SYSTEM_XML_XMLDOCUMENT_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1D57A3B0)
#define SYSTEM_XML_XMLDOCUMENT_GET_OWNERDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1D57A6C0)
#define SYSTEM_XML_XMLDOCUMENT_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x1D57A3C0)
#define SYSTEM_XML_XMLDOCUMENT_GET_SCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x1D57DEE0)
#define SYSTEM_XML_XMLDOCUMENT_GET_STANDALONE_OFFSET UNITYSDK_OFFSET(0x1D57D170)
#define SYSTEM_XML_XMLDOCUMENT_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1D57DD70)
#define SYSTEM_XML_XMLDOCUMENT_HASNODETYPEINNEXTSIBLINGS_OFFSET UNITYSDK_OFFSET(0x1D57A940)
#define SYSTEM_XML_XMLDOCUMENT_HASNODETYPEINPREVSIBLINGS_OFFSET UNITYSDK_OFFSET(0x1D57A890)
#define SYSTEM_XML_XMLDOCUMENT_IMPORTATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1D57C1A0)
#define SYSTEM_XML_XMLDOCUMENT_IMPORTCHILDREN_OFFSET UNITYSDK_OFFSET(0x1D57A310)
#define SYSTEM_XML_XMLDOCUMENT_IMPORTNODEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D57BC50)
#define SYSTEM_XML_XMLDOCUMENT_ISVALIDCHILDTYPE_OFFSET UNITYSDK_OFFSET(0x1D57A6D0)
#define SYSTEM_XML_XMLDOCUMENT_LOADXML_OFFSET UNITYSDK_OFFSET(0x1D57CC10)
#define SYSTEM_XML_XMLDOCUMENT_LOAD_1_OFFSET UNITYSDK_OFFSET(0x1D57CA50)
#define SYSTEM_XML_XMLDOCUMENT_LOAD_OFFSET UNITYSDK_OFFSET(0x1D57C7B0)
#define SYSTEM_XML_XMLDOCUMENT_PREPAREDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D57B6E0)
#define SYSTEM_XML_XMLDOCUMENT_READNODE_OFFSET UNITYSDK_OFFSET(0x1D57C5B0)
#define SYSTEM_XML_XMLDOCUMENT_REMOVEELEMENTWITHID_OFFSET UNITYSDK_OFFSET(0x1D57A110)
#define SYSTEM_XML_XMLDOCUMENT_REMOVE_NODEINSERTED_OFFSET UNITYSDK_OFFSET(0x1D57D5C0)
#define SYSTEM_XML_XMLDOCUMENT_REMOVE_NODEREMOVED_OFFSET UNITYSDK_OFFSET(0x1D57D6C0)
#define SYSTEM_XML_XMLDOCUMENT_SAVE_OFFSET UNITYSDK_OFFSET(0x1D57CFC0)
#define SYSTEM_XML_XMLDOCUMENT_SETDEFAULTNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1D57AEF0)
#define SYSTEM_XML_XMLDOCUMENT_SETUPREADER_OFFSET UNITYSDK_OFFSET(0x1D57C680)
#define SYSTEM_XML_XMLDOCUMENT_SET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x1D57CF50)
#define SYSTEM_XML_XMLDOCUMENT_SET_INNERXML_OFFSET UNITYSDK_OFFSET(0x1D57CFB0)
#define SYSTEM_XML_XMLDOCUMENT_SET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x1D57A6B0)
#define SYSTEM_XML_XMLDOCUMENT_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x1D57D1B0)
#define SYSTEM_XML_XMLDOCUMENT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D57D1A0)
#define SYSTEM_XML_XMLDOCUMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D57E370)
#define SYSTEM_XML_XMLDOCUMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D567E60)
#define SYSTEM_XML_XMLDOCUMENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D5790A0)
#define SYSTEM_XML_XMLDOCUMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D578EE0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlDocument_TypeDefinitionIndex = 1758;

	class XmlDocument : public ::System::Xml::XmlNode
	{
	public:
		static ::System::Xml::Schema::IXmlSchemaInfo** StaticGet_ValidSchemaInfo()
		{
			return (::System::Xml::Schema::IXmlSchemaInfo**)Il2CppClass::FromTypeDefinitionIndex(XmlDocument_TypeDefinitionIndex)->GetStaticField(0x1F10);
		}
		static ::System::Xml::EmptyEnumerator** StaticGet_EmptyEnumerator()
		{
			return (::System::Xml::EmptyEnumerator**)Il2CppClass::FromTypeDefinitionIndex(XmlDocument_TypeDefinitionIndex)->GetStaticField(0x1F18);
		}
		static ::System::Xml::Schema::IXmlSchemaInfo** StaticGet_InvalidSchemaInfo()
		{
			return (::System::Xml::Schema::IXmlSchemaInfo**)Il2CppClass::FromTypeDefinitionIndex(XmlDocument_TypeDefinitionIndex)->GetStaticField(0x1F20);
		}
		static ::System::Xml::Schema::IXmlSchemaInfo** StaticGet_NotKnownSchemaInfo()
		{
			return (::System::Xml::Schema::IXmlSchemaInfo**)Il2CppClass::FromTypeDefinitionIndex(XmlDocument_TypeDefinitionIndex)->GetStaticField(0x1F28);
		}
		::System::Xml::XmlNodeChangedEventHandler* onNodeInsertingDelegate; // 0x18
		::System::String* strXmlns; // 0x20
		::System::Xml::XmlNodeChangedEventHandler* onNodeRemovingDelegate; // 0x28
		::System::Xml::XmlResolver* resolver; // 0x30
		::System::String* strCommentName; // 0x38
		::System::String* strDocumentName; // 0x40
		::System::Xml::Schema::XmlSchemaSet* schemas; // 0x48
		::System::Xml::XmlNamedNodeMap* entities; // 0x50
		::System::Collections::Hashtable* htElementIDAttrDecl; // 0x58
		::System::String* strEntityName; // 0x60
		::System::Object* objLock; // 0x68
		::System::Xml::Schema::SchemaInfo* schemaInfo; // 0x70
		::System::String* strID; // 0x78
		::System::String* strDocumentFragmentName; // 0x80
		::System::Xml::XmlNodeChangedEventHandler* onNodeChangingDelegate; // 0x88
		::System::String* strEmpty; // 0x90
		::System::Xml::XmlNodeChangedEventHandler* onNodeInsertedDelegate; // 0x98
		::System::Xml::XmlNodeChangedEventHandler* onNodeRemovedDelegate; // 0xA0
		::System::String* strReservedXml; // 0xA8
		::System::String* strReservedXmlns; // 0xB0
		::System::Xml::XmlImplementation* implementation; // 0xB8
		::System::Xml::XmlLinkedNode* lastChild; // 0xC0
		::System::String* strXml; // 0xC8
		::System::String* strNonSignificantWhitespaceName; // 0xD0
		::System::String* strCDataSectionName; // 0xD8
		::System::String* baseURI; // 0xE0
		::System::String* strSpace; // 0xE8
		::System::Collections::Hashtable* htElementIdMap; // 0xF0
		::System::Xml::DomNameTable* domNameTable; // 0xF8
		::System::String* strTextName; // 0x100
		::System::String* strSignificantWhitespaceName; // 0x108
		::System::String* strLang; // 0x110
		::System::Xml::XmlNodeChangedEventHandler* onNodeChangedDelegate; // 0x118
		::System::Boolean reportValidity; // 0x120
		::System::Boolean preserveWhitespace; // 0x121
		::System::Boolean fEntRefNodesPresent; // 0x122
		::System::Boolean actualLoadingStatus; // 0x123
		::System::Boolean bSetResolver; // 0x124
		::System::Boolean isLoading; // 0x125
		::System::Boolean fCDataNodesPresent; // 0x126

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

		::System::Boolean CanInsertBefore(::System::Xml::XmlNode* newChild, ::System::Xml::XmlNode* refChild)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_CANINSERTBEFORE_OFFSET))(this, newChild, refChild);
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

		::System::Xml::XmlNodeList* GetElementsByTagName(::System::String* name)
		{
			return ((::System::Xml::XmlNodeList*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GETELEMENTSBYTAGNAME_OFFSET))(this, name);
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

		::System::Xml::XmlAttribute* CreateAttribute_1(::System::String* prefix, ::System::String* localName, ::System::String* namespaceURI)
		{
			return ((::System::Xml::XmlAttribute*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_CREATEATTRIBUTE_1_OFFSET))(this, prefix, localName, namespaceURI);
		}

		::System::Xml::XmlAttribute* CreateDefaultAttribute(::System::String* prefix, ::System::String* localName, ::System::String* namespaceURI)
		{
			return ((::System::Xml::XmlAttribute*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_CREATEDEFAULTATTRIBUTE_OFFSET))(this, prefix, localName, namespaceURI);
		}

		::System::Xml::XmlElement* CreateElement_1(::System::String* prefix, ::System::String* localName, ::System::String* namespaceURI)
		{
			return ((::System::Xml::XmlElement*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_CREATEELEMENT_1_OFFSET))(this, prefix, localName, namespaceURI);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Xml::XmlNamedNodeMap* get_Entities()
		{
			return ((::System::Xml::XmlNamedNodeMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GET_ENTITIES_OFFSET))(this);
		}

		::System::Xml::XmlNode* ReadNode(::System::Xml::XmlReader* reader)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_READNODE_OFFSET))(this, reader);
		}

		::System::Xml::XmlTextReader* SetupReader(::System::Xml::XmlTextReader* tr)
		{
			return ((::System::Xml::XmlTextReader*(*)(::PVOID, ::System::Xml::XmlTextReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_SETUPREADER_OFFSET))(this, tr);
		}

		::System::Void Load(::System::IO::TextReader* txtReader)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_LOAD_OFFSET))(this, txtReader);
		}

		::System::Void Load_1(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_LOAD_1_OFFSET))(this, reader);
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

		::System::Void Save(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_SAVE_OFFSET))(this, w);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_WRITETO_OFFSET))(this, w);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* xw)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_WRITECONTENTTO_OFFSET))(this, xw);
		}

		::System::Void add_NodeInserted(::System::Xml::XmlNodeChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNodeChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_ADD_NODEINSERTED_OFFSET))(this, value);
		}

		::System::Void remove_NodeInserted(::System::Xml::XmlNodeChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNodeChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_REMOVE_NODEINSERTED_OFFSET))(this, value);
		}

		::System::Void add_NodeRemoved(::System::Xml::XmlNodeChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNodeChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_ADD_NODEREMOVED_OFFSET))(this, value);
		}

		::System::Void remove_NodeRemoved(::System::Xml::XmlNodeChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNodeChangedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_REMOVE_NODEREMOVED_OFFSET))(this, value);
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

		::System::String* get_Version()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GET_VERSION_OFFSET))(this);
		}

		::System::String* get_Encoding()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GET_ENCODING_OFFSET))(this);
		}

		::System::String* get_Standalone()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GET_STANDALONE_OFFSET))(this);
		}

		::System::Xml::XmlEntity* GetEntityNode(::System::String* name)
		{
			return ((::System::Xml::XmlEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GETENTITYNODE_OFFSET))(this, name);
		}

		::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo()
		{
			return ((::System::Xml::Schema::IXmlSchemaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GET_SCHEMAINFO_OFFSET))(this);
		}

		::System::String* get_BaseURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_GET_BASEURI_OFFSET))(this);
		}

		::System::Xml::XmlNode* AppendChildForLoad(::System::Xml::XmlNode* newChild, ::System::Xml::XmlDocument* doc)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENT_APPENDCHILDFORLOAD_OFFSET))(this, newChild, doc);
		}
	};
}
