#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Xml { class IDtdInfo; }
namespace System::Xml { class XmlAttribute; }
namespace System::Xml { class XmlDeclaration; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlDocumentType; }
namespace System::Xml { class XmlElement; }
namespace System::Xml { class XmlEntity; }
namespace System::Xml { class XmlEntityReference; }
namespace System::Xml { class XmlNamespaceManager; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlParserContext; }
namespace System::Xml { class XmlReader; }
namespace System::Xml { class XmlResolver; }

#define SYSTEM_XML_XMLLOADER_CREATEINNERXMLREADER_OFFSET UNITYSDK_OFFSET(0x1861E970)
#define SYSTEM_XML_XMLLOADER_ENTITIZENAME_OFFSET UNITYSDK_OFFSET(0x1861F000)
#define SYSTEM_XML_XMLLOADER_EXPANDENTITYREFERENCE_OFFSET UNITYSDK_OFFSET(0x18615A30)
#define SYSTEM_XML_XMLLOADER_EXPANDENTITY_OFFSET UNITYSDK_OFFSET(0x186155D0)
#define SYSTEM_XML_XMLLOADER_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x1861DCC0)
#define SYSTEM_XML_XMLLOADER_LOADATTRIBUTENODEDIRECT_OFFSET UNITYSDK_OFFSET(0x1861CF80)
#define SYSTEM_XML_XMLLOADER_LOADATTRIBUTENODE_OFFSET UNITYSDK_OFFSET(0x1861A460)
#define SYSTEM_XML_XMLLOADER_LOADATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x1861B160)
#define SYSTEM_XML_XMLLOADER_LOADDECLARATIONNODE_OFFSET UNITYSDK_OFFSET(0x1861AA20)
#define SYSTEM_XML_XMLLOADER_LOADDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1861AFF0)
#define SYSTEM_XML_XMLLOADER_LOADDOCSEQUENCE_OFFSET UNITYSDK_OFFSET(0x18619DA0)
#define SYSTEM_XML_XMLLOADER_LOADDOCUMENTTYPENODE_OFFSET UNITYSDK_OFFSET(0x1861AC60)
#define SYSTEM_XML_XMLLOADER_LOADDOCUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1861C100)
#define SYSTEM_XML_XMLLOADER_LOADENTITYREFERENCENODE_OFFSET UNITYSDK_OFFSET(0x1861A730)
#define SYSTEM_XML_XMLLOADER_LOADINNERXMLATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1861EFF0)
#define SYSTEM_XML_XMLLOADER_LOADINNERXMLELEMENT_OFFSET UNITYSDK_OFFSET(0x1860F9B0)
#define SYSTEM_XML_XMLLOADER_LOADNODEDIRECT_OFFSET UNITYSDK_OFFSET(0x1861B5B0)
#define SYSTEM_XML_XMLLOADER_LOADNODE_OFFSET UNITYSDK_OFFSET(0x18619E20)
#define SYSTEM_XML_XMLLOADER_LOAD_OFFSET UNITYSDK_OFFSET(0x1860A2C0)
#define SYSTEM_XML_XMLLOADER_PARSEDOCUMENTTYPE_1_OFFSET UNITYSDK_OFFSET(0x1861D270)
#define SYSTEM_XML_XMLLOADER_PARSEDOCUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1860C940)
#define SYSTEM_XML_XMLLOADER_PARSEPARTIALCONTENT_OFFSET UNITYSDK_OFFSET(0x1860BFB0)
#define SYSTEM_XML_XMLLOADER_PARSEXMLDECLARATIONVALUE_OFFSET UNITYSDK_OFFSET(0x1861BE60)
#define SYSTEM_XML_XMLLOADER_READCURRENTNODE_OFFSET UNITYSDK_OFFSET(0x18609D70)
#define SYSTEM_XML_XMLLOADER_REMOVEDUPLICATENAMESPACE_OFFSET UNITYSDK_OFFSET(0x1861EC30)
#define SYSTEM_XML_XMLLOADER_UNEXPECTEDNODETYPE_OFFSET UNITYSDK_OFFSET(0x1861AEC0)
#define SYSTEM_XML_XMLLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x18609D60)

namespace System::Xml
{
	inline static constexpr unsigned int XmlLoader_TypeDefinitionIndex = 1896;

	class XmlLoader : public ::System::Object
	{
	public:
		::System::Xml::XmlDocument* doc; // 0x10
		::System::Xml::XmlReader* reader; // 0x18
		::System::Boolean preserveWhitespace; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER__CTOR_OFFSET))(this);
		}

		::System::Void Load(::System::Xml::XmlDocument* doc, ::System::Xml::XmlReader* reader, ::System::Boolean preserveWhitespace)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlDocument*, ::System::Xml::XmlReader*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOAD_OFFSET))(this, doc, reader, preserveWhitespace);
		}

		::System::Void LoadDocSequence(::System::Xml::XmlDocument* parentDoc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADDOCSEQUENCE_OFFSET))(this, parentDoc);
		}

		::System::Xml::XmlNode* ReadCurrentNode(::System::Xml::XmlDocument* doc, ::System::Xml::XmlReader* reader)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlDocument*, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_READCURRENTNODE_OFFSET))(this, doc, reader);
		}

		::System::Xml::XmlNode* LoadNode(::System::Boolean skipOverWhitespace)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADNODE_OFFSET))(this, skipOverWhitespace);
		}

		::System::Xml::XmlAttribute* LoadAttributeNode()
		{
			return ((::System::Xml::XmlAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADATTRIBUTENODE_OFFSET))(this);
		}

		::System::Xml::XmlAttribute* LoadDefaultAttribute()
		{
			return ((::System::Xml::XmlAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADDEFAULTATTRIBUTE_OFFSET))(this);
		}

		::System::Void LoadAttributeValue(::System::Xml::XmlNode* parent, ::System::Boolean direct)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADATTRIBUTEVALUE_OFFSET))(this, parent, direct);
		}

		::System::Xml::XmlEntityReference* LoadEntityReferenceNode(::System::Boolean direct)
		{
			return ((::System::Xml::XmlEntityReference*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADENTITYREFERENCENODE_OFFSET))(this, direct);
		}

		::System::Xml::XmlDeclaration* LoadDeclarationNode()
		{
			return ((::System::Xml::XmlDeclaration*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADDECLARATIONNODE_OFFSET))(this);
		}

		::System::Xml::XmlDocumentType* LoadDocumentTypeNode()
		{
			return ((::System::Xml::XmlDocumentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADDOCUMENTTYPENODE_OFFSET))(this);
		}

		::System::Xml::XmlNode* LoadNodeDirect()
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADNODEDIRECT_OFFSET))(this);
		}

		::System::Xml::XmlAttribute* LoadAttributeNodeDirect()
		{
			return ((::System::Xml::XmlAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADATTRIBUTENODEDIRECT_OFFSET))(this);
		}

		::System::Void ParseDocumentType(::System::Xml::XmlDocumentType* dtNode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlDocumentType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_PARSEDOCUMENTTYPE_OFFSET))(this, dtNode);
		}

		::System::Void ParseDocumentType_1(::System::Xml::XmlDocumentType* dtNode, ::System::Boolean bUseResolver, ::System::Xml::XmlResolver* resolver)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlDocumentType*, ::System::Boolean, ::System::Xml::XmlResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_PARSEDOCUMENTTYPE_1_OFFSET))(this, dtNode, bUseResolver, resolver);
		}

		::System::Void LoadDocumentType(::System::Xml::IDtdInfo* dtdInfo, ::System::Xml::XmlDocumentType* dtNode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::IDtdInfo*, ::System::Xml::XmlDocumentType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADDOCUMENTTYPE_OFFSET))(this, dtdInfo, dtNode);
		}

		::System::Xml::XmlParserContext* GetContext(::System::Xml::XmlNode* node)
		{
			return ((::System::Xml::XmlParserContext*(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_GETCONTEXT_OFFSET))(this, node);
		}

		::System::Xml::XmlNamespaceManager* ParsePartialContent(::System::Xml::XmlNode* parentNode, ::System::String* innerxmltext, ::System::Xml::XmlNodeType nt)
		{
			return ((::System::Xml::XmlNamespaceManager*(*)(::PVOID, ::System::Xml::XmlNode*, ::System::String*, ::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_PARSEPARTIALCONTENT_OFFSET))(this, parentNode, innerxmltext, nt);
		}

		::System::Void LoadInnerXmlElement(::System::Xml::XmlElement* node, ::System::String* innerxmltext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlElement*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADINNERXMLELEMENT_OFFSET))(this, node, innerxmltext);
		}

		::System::Void LoadInnerXmlAttribute(::System::Xml::XmlAttribute* node, ::System::String* innerxmltext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlAttribute*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADINNERXMLATTRIBUTE_OFFSET))(this, node, innerxmltext);
		}

		::System::Void RemoveDuplicateNamespace(::System::Xml::XmlElement* elem, ::System::Xml::XmlNamespaceManager* mgr, ::System::Boolean fCheckElemAttrs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlElement*, ::System::Xml::XmlNamespaceManager*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_REMOVEDUPLICATENAMESPACE_OFFSET))(this, elem, mgr, fCheckElemAttrs);
		}

		::System::String* EntitizeName(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_ENTITIZENAME_OFFSET))(this, name);
		}

		::System::Void ExpandEntity(::System::Xml::XmlEntity* ent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlEntity*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_EXPANDENTITY_OFFSET))(this, ent);
		}

		::System::Void ExpandEntityReference(::System::Xml::XmlEntityReference* eref)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlEntityReference*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_EXPANDENTITYREFERENCE_OFFSET))(this, eref);
		}

		::System::Xml::XmlReader* CreateInnerXmlReader(::System::String* xmlFragment, ::System::Xml::XmlNodeType nt, ::System::Xml::XmlParserContext* context, ::System::Xml::XmlDocument* doc)
		{
			return ((::System::Xml::XmlReader*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNodeType, ::System::Xml::XmlParserContext*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_CREATEINNERXMLREADER_OFFSET))(this, xmlFragment, nt, context, doc);
		}

		static ::System::Void ParseXmlDeclarationValue(::System::String* strValue, ::System::String*& version, ::System::String*& encoding, ::System::String*& standalone)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_PARSEXMLDECLARATIONVALUE_OFFSET))(strValue, version, encoding, standalone);
		}

		static ::System::Exception* UnexpectedNodeType(::System::Xml::XmlNodeType nodetype)
		{
			return ((::System::Exception*(*)(::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_UNEXPECTEDNODETYPE_OFFSET))(nodetype);
		}
	};
}
