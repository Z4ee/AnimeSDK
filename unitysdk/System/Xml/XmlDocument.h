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

#define SYSTEM_XML_XMLDOCUMENT_ADDATTRXMLNAME_OFFSET UNITYSDK_OFFSET(0x185F9BA0)
#define SYSTEM_XML_XMLDOCUMENT_ADDDEFAULTATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x18608550)
#define SYSTEM_XML_XMLDOCUMENT_ADDELEMENTWITHID_OFFSET UNITYSDK_OFFSET(0x185FB9F0)
#define SYSTEM_XML_XMLDOCUMENT_ADDIDINFO_OFFSET UNITYSDK_OFFSET(0x18606F30)
#define SYSTEM_XML_XMLDOCUMENT_ADDXMLNAME_OFFSET UNITYSDK_OFFSET(0x18606EF0)
#define SYSTEM_XML_XMLDOCUMENT_AFTEREVENT_OFFSET UNITYSDK_OFFSET(0x1860B400)
#define SYSTEM_XML_XMLDOCUMENT_APPENDCHILDFORLOAD_OFFSET UNITYSDK_OFFSET(0x1860B970)
#define SYSTEM_XML_XMLDOCUMENT_BEFOREEVENT_OFFSET UNITYSDK_OFFSET(0x1860AE30)
#define SYSTEM_XML_XMLDOCUMENT_CANINSERTAFTER_OFFSET UNITYSDK_OFFSET(0x18607EB0)
#define SYSTEM_XML_XMLDOCUMENT_CHECKNAME_OFFSET UNITYSDK_OFFSET(0x185F9AB0)
#define SYSTEM_XML_XMLDOCUMENT_CLONENODE_OFFSET UNITYSDK_OFFSET(0x18607790)
#define SYSTEM_XML_XMLDOCUMENT_CREATEATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x18608EA0)
#define SYSTEM_XML_XMLDOCUMENT_CREATEATTRIBUTE_2_OFFSET UNITYSDK_OFFSET(0x18609890)
#define SYSTEM_XML_XMLDOCUMENT_CREATEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18608020)
#define SYSTEM_XML_XMLDOCUMENT_CREATECDATASECTION_OFFSET UNITYSDK_OFFSET(0x18608250)
#define SYSTEM_XML_XMLDOCUMENT_CREATECOMMENT_OFFSET UNITYSDK_OFFSET(0x186082D0)
#define SYSTEM_XML_XMLDOCUMENT_CREATEDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18609910)
#define SYSTEM_XML_XMLDOCUMENT_CREATEDOCUMENTFRAGMENT_OFFSET UNITYSDK_OFFSET(0x18608400)
#define SYSTEM_XML_XMLDOCUMENT_CREATEDOCUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x18608380)
#define SYSTEM_XML_XMLDOCUMENT_CREATEELEMENT_1_OFFSET UNITYSDK_OFFSET(0x18608FC0)
#define SYSTEM_XML_XMLDOCUMENT_CREATEELEMENT_2_OFFSET UNITYSDK_OFFSET(0x186099B0)
#define SYSTEM_XML_XMLDOCUMENT_CREATEELEMENT_OFFSET UNITYSDK_OFFSET(0x186084A0)
#define SYSTEM_XML_XMLDOCUMENT_CREATEENTITYREFERENCE_OFFSET UNITYSDK_OFFSET(0x18608BA0)
#define SYSTEM_XML_XMLDOCUMENT_CREATEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x18608C00)
#define SYSTEM_XML_XMLDOCUMENT_CREATESIGNIFICANTWHITESPACE_OFFSET UNITYSDK_OFFSET(0x18608DE0)
#define SYSTEM_XML_XMLDOCUMENT_CREATETEXTNODE_OFFSET UNITYSDK_OFFSET(0x18608D30)
#define SYSTEM_XML_XMLDOCUMENT_CREATEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x18608E40)
#define SYSTEM_XML_XMLDOCUMENT_CREATEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x18608CC0)
#define SYSTEM_XML_XMLDOCUMENT_GETDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1860B450)
#define SYSTEM_XML_XMLDOCUMENT_GETELEMENT_OFFSET UNITYSDK_OFFSET(0x186070E0)
#define SYSTEM_XML_XMLDOCUMENT_GETENTITYNODE_OFFSET UNITYSDK_OFFSET(0x1860B7E0)
#define SYSTEM_XML_XMLDOCUMENT_GETEVENTARGS_OFFSET UNITYSDK_OFFSET(0x1860AC00)
#define SYSTEM_XML_XMLDOCUMENT_GETIDINFOBYELEMENT_OFFSET UNITYSDK_OFFSET(0x185FB9D0)
#define SYSTEM_XML_XMLDOCUMENT_GETIDINFOBYELEMENT__OFFSET UNITYSDK_OFFSET(0x18606FF0)
#define SYSTEM_XML_XMLDOCUMENT_GETINSERTEVENTARGSFORLOAD_OFFSET UNITYSDK_OFFSET(0x1860AD70)
#define SYSTEM_XML_XMLDOCUMENT_GETRESOLVER_OFFSET UNITYSDK_OFFSET(0x18607A40)
#define SYSTEM_XML_XMLDOCUMENT_GETSCHEMAELEMENTDECL_OFFSET UNITYSDK_OFFSET(0x18608830)
#define SYSTEM_XML_XMLDOCUMENT_GETXMLNAME_OFFSET UNITYSDK_OFFSET(0x18606F10)
#define SYSTEM_XML_XMLDOCUMENT_GET_ACTUALLOADINGSTATUS_OFFSET UNITYSDK_OFFSET(0x18609C80)
#define SYSTEM_XML_XMLDOCUMENT_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1860B950)
#define SYSTEM_XML_XMLDOCUMENT_GET_CANREPORTVALIDITY_OFFSET UNITYSDK_OFFSET(0x18607A20)
#define SYSTEM_XML_XMLDOCUMENT_GET_DECLARATION_OFFSET UNITYSDK_OFFSET(0x18607910)
#define SYSTEM_XML_XMLDOCUMENT_GET_DOCUMENTELEMENT_OFFSET UNITYSDK_OFFSET(0x185E5990)
#define SYSTEM_XML_XMLDOCUMENT_GET_DOCUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x18607860)
#define SYSTEM_XML_XMLDOCUMENT_GET_DTDSCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x18606ED0)
#define SYSTEM_XML_XMLDOCUMENT_GET_ENTITIES_OFFSET UNITYSDK_OFFSET(0x18609BE0)
#define SYSTEM_XML_XMLDOCUMENT_GET_HASSETRESOLVER_OFFSET UNITYSDK_OFFSET(0x18607A30)
#define SYSTEM_XML_XMLDOCUMENT_GET_IMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x186079A0)
#define SYSTEM_XML_XMLDOCUMENT_GET_ISCONTAINER_OFFSET UNITYSDK_OFFSET(0x186079D0)
#define SYSTEM_XML_XMLDOCUMENT_GET_ISLOADING_OFFSET UNITYSDK_OFFSET(0x18609C60)
#define SYSTEM_XML_XMLDOCUMENT_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x18609BD0)
#define SYSTEM_XML_XMLDOCUMENT_GET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x186079E0)
#define SYSTEM_XML_XMLDOCUMENT_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x186079C0)
#define SYSTEM_XML_XMLDOCUMENT_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x18609870)
#define SYSTEM_XML_XMLDOCUMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x186079B0)
#define SYSTEM_XML_XMLDOCUMENT_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x18607840)
#define SYSTEM_XML_XMLDOCUMENT_GET_OWNERDOCUMENT_OFFSET UNITYSDK_OFFSET(0x18607A00)
#define SYSTEM_XML_XMLDOCUMENT_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x18607850)
#define SYSTEM_XML_XMLDOCUMENT_HASNODETYPEINNEXTSIBLINGS_OFFSET UNITYSDK_OFFSET(0x18607E50)
#define SYSTEM_XML_XMLDOCUMENT_HASNODETYPEINPREVSIBLINGS_OFFSET UNITYSDK_OFFSET(0x18607DA0)
#define SYSTEM_XML_XMLDOCUMENT_IMPORTATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x186095F0)
#define SYSTEM_XML_XMLDOCUMENT_IMPORTCHILDREN_OFFSET UNITYSDK_OFFSET(0x18609780)
#define SYSTEM_XML_XMLDOCUMENT_IMPORTNODEINTERNAL_OFFSET UNITYSDK_OFFSET(0x18609060)
#define SYSTEM_XML_XMLDOCUMENT_ISVALIDCHILDTYPE_OFFSET UNITYSDK_OFFSET(0x18607BA0)
#define SYSTEM_XML_XMLDOCUMENT_LOADXML_OFFSET UNITYSDK_OFFSET(0x1860A500)
#define SYSTEM_XML_XMLDOCUMENT_LOAD_OFFSET UNITYSDK_OFFSET(0x1860A110)
#define SYSTEM_XML_XMLDOCUMENT_PREPAREDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x18608980)
#define SYSTEM_XML_XMLDOCUMENT_READNODE_OFFSET UNITYSDK_OFFSET(0x18609C90)
#define SYSTEM_XML_XMLDOCUMENT_REMOVEELEMENTWITHID_OFFSET UNITYSDK_OFFSET(0x185FBC60)
#define SYSTEM_XML_XMLDOCUMENT_SETBASEURI_OFFSET UNITYSDK_OFFSET(0x1860B960)
#define SYSTEM_XML_XMLDOCUMENT_SETDEFAULTNAMESPACE_OFFSET UNITYSDK_OFFSET(0x18608180)
#define SYSTEM_XML_XMLDOCUMENT_SETUPREADER_OFFSET UNITYSDK_OFFSET(0x18609EA0)
#define SYSTEM_XML_XMLDOCUMENT_SET_DTDSCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x18606EE0)
#define SYSTEM_XML_XMLDOCUMENT_SET_ENTITIES_OFFSET UNITYSDK_OFFSET(0x18609C50)
#define SYSTEM_XML_XMLDOCUMENT_SET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x1860A7F0)
#define SYSTEM_XML_XMLDOCUMENT_SET_INNERXML_OFFSET UNITYSDK_OFFSET(0x1860A850)
#define SYSTEM_XML_XMLDOCUMENT_SET_ISLOADING_OFFSET UNITYSDK_OFFSET(0x18609C70)
#define SYSTEM_XML_XMLDOCUMENT_SET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x186079F0)
#define SYSTEM_XML_XMLDOCUMENT_SET_SCHEMAS_OFFSET UNITYSDK_OFFSET(0x18607A10)
#define SYSTEM_XML_XMLDOCUMENT_SET_XMLRESOLVER_OFFSET UNITYSDK_OFFSET(0x18607A50)
#define SYSTEM_XML_XMLDOCUMENT_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x1860A870)
#define SYSTEM_XML_XMLDOCUMENT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1860A860)
#define SYSTEM_XML_XMLDOCUMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1860BBF0)
#define SYSTEM_XML_XMLDOCUMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x185D5690)
#define SYSTEM_XML_XMLDOCUMENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18606C60)
#define SYSTEM_XML_XMLDOCUMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18606B60)

namespace System::Xml
{
	inline static constexpr unsigned int XmlDocument_TypeDefinitionIndex = 1887;

	class XmlDocument : public ::System::Xml::XmlNode
	{
	public:
		static ::System::Xml::EmptyEnumerator** StaticGet_EmptyEnumerator()
		{
			return (::System::Xml::EmptyEnumerator**)Il2CppClass::FromTypeDefinitionIndex(XmlDocument_TypeDefinitionIndex)->GetStaticField(0xC470);
		}
		static ::System::Xml::Schema::IXmlSchemaInfo** StaticGet_NotKnownSchemaInfo()
		{
			return (::System::Xml::Schema::IXmlSchemaInfo**)Il2CppClass::FromTypeDefinitionIndex(XmlDocument_TypeDefinitionIndex)->GetStaticField(0xC478);
		}
		static ::System::Xml::Schema::IXmlSchemaInfo** StaticGet_InvalidSchemaInfo()
		{
			return (::System::Xml::Schema::IXmlSchemaInfo**)Il2CppClass::FromTypeDefinitionIndex(XmlDocument_TypeDefinitionIndex)->GetStaticField(0xC480);
		}
		static ::System::Xml::Schema::IXmlSchemaInfo** StaticGet_ValidSchemaInfo()
		{
			return (::System::Xml::Schema::IXmlSchemaInfo**)Il2CppClass::FromTypeDefinitionIndex(XmlDocument_TypeDefinitionIndex)->GetStaticField(0xC488);
		}
		::System::Xml::XmlNodeChangedEventHandler* onNodeChangedDelegate; // 0x18
		::System::String* strNonSignificantWhitespaceName; // 0x20
		::System::Xml::XmlNodeChangedEventHandler* onNodeChangingDelegate; // 0x28
		::System::Xml::Schema::XmlSchemaSet* schemas; // 0x30
		::System::Xml::XmlNodeChangedEventHandler* onNodeInsertedDelegate; // 0x38
		::System::String* strLang; // 0x40
		::System::String* strSignificantWhitespaceName; // 0x48
		::System::String* strDocumentName; // 0x50
		::System::String* strCDataSectionName; // 0x58
		::System::String* strCommentName; // 0x60
		::System::String* strReservedXml; // 0x68
		::System::Xml::XmlNodeChangedEventHandler* onNodeInsertingDelegate; // 0x70
		::System::Xml::XmlResolver* resolver; // 0x78
		::System::Xml::XmlNodeChangedEventHandler* onNodeRemovedDelegate; // 0x80
		::System::String* strDocumentFragmentName; // 0x88
		::System::String* strReservedXmlns; // 0x90
		::System::String* strXml; // 0x98
		::System::Object* objLock; // 0xA0
		::System::Xml::XmlNamedNodeMap* entities; // 0xA8
		::System::Xml::Schema::SchemaInfo* schemaInfo; // 0xB0
		::System::Xml::XmlNodeChangedEventHandler* onNodeRemovingDelegate; // 0xB8
		::System::String* strTextName; // 0xC0
		::System::Xml::DomNameTable* domNameTable; // 0xC8
		::System::String* strID; // 0xD0
		::System::String* strXmlns; // 0xD8
		::System::Xml::XmlImplementation* implementation; // 0xE0
		::System::String* strSpace; // 0xE8
		::System::Xml::XmlLinkedNode* lastChild; // 0xF0
		::System::String* baseURI; // 0xF8
		::System::String* strEmpty; // 0x100
		::System::Collections::Hashtable* htElementIDAttrDecl; // 0x108
		::System::String* strEntityName; // 0x110
		::System::Collections::Hashtable* htElementIdMap; // 0x118
		::System::Boolean fCDataNodesPresent; // 0x120
		::System::Boolean preserveWhitespace; // 0x121
		::System::Boolean actualLoadingStatus; // 0x122
		::System::Boolean bSetResolver; // 0x123
		::System::Boolean fEntRefNodesPresent; // 0x124
		::System::Boolean isLoading; // 0x125
		::System::Boolean reportValidity; // 0x126

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
