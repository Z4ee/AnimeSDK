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

#define SYSTEM_XML_XMLLOADER_CREATEINNERXMLREADER_OFFSET UNITYSDK_OFFSET(0x1E8AFA40)
#define SYSTEM_XML_XMLLOADER_ENTITIZENAME_OFFSET UNITYSDK_OFFSET(0x1E8B05A0)
#define SYSTEM_XML_XMLLOADER_EXPANDENTITYREFERENCE_OFFSET UNITYSDK_OFFSET(0x1E8A2150)
#define SYSTEM_XML_XMLLOADER_EXPANDENTITY_OFFSET UNITYSDK_OFFSET(0x1E8A1BD0)
#define SYSTEM_XML_XMLLOADER_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x1E8AE930)
#define SYSTEM_XML_XMLLOADER_LOADATTRIBUTENODEDIRECT_OFFSET UNITYSDK_OFFSET(0x1E8AD7E0)
#define SYSTEM_XML_XMLLOADER_LOADATTRIBUTENODE_OFFSET UNITYSDK_OFFSET(0x1E8A86D0)
#define SYSTEM_XML_XMLLOADER_LOADATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x1E8AA630)
#define SYSTEM_XML_XMLLOADER_LOADDECLARATIONNODE_OFFSET UNITYSDK_OFFSET(0x1E8A9690)
#define SYSTEM_XML_XMLLOADER_LOADDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1E8AA2B0)
#define SYSTEM_XML_XMLLOADER_LOADDOCSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1E8A73E0)
#define SYSTEM_XML_XMLLOADER_LOADDOCUMENTTYPENODE_OFFSET UNITYSDK_OFFSET(0x1E8A9BA0)
#define SYSTEM_XML_XMLLOADER_LOADDOCUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1E8AC460)
#define SYSTEM_XML_XMLLOADER_LOADENTITYREFERENCENODE_OFFSET UNITYSDK_OFFSET(0x1E8A90B0)
#define SYSTEM_XML_XMLLOADER_LOADINNERXMLATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1E8B0590)
#define SYSTEM_XML_XMLLOADER_LOADINNERXMLELEMENT_OFFSET UNITYSDK_OFFSET(0x1E89A770)
#define SYSTEM_XML_XMLLOADER_LOADNODEDIRECT_OFFSET UNITYSDK_OFFSET(0x1E8AB070)
#define SYSTEM_XML_XMLLOADER_LOADNODE_OFFSET UNITYSDK_OFFSET(0x1E8A74D0)
#define SYSTEM_XML_XMLLOADER_LOAD_OFFSET UNITYSDK_OFFSET(0x1E893020)
#define SYSTEM_XML_XMLLOADER_PARSEDOCUMENTTYPE_1_OFFSET UNITYSDK_OFFSET(0x1E8ADE60)
#define SYSTEM_XML_XMLLOADER_PARSEDOCUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1E896250)
#define SYSTEM_XML_XMLLOADER_PARSEPARTIALCONTENT_OFFSET UNITYSDK_OFFSET(0x1E895100)
#define SYSTEM_XML_XMLLOADER_PARSEXMLDECLARATIONVALUE_OFFSET UNITYSDK_OFFSET(0x1E8AC1C0)
#define SYSTEM_XML_XMLLOADER_READCURRENTNODE_OFFSET UNITYSDK_OFFSET(0x1E8927E0)
#define SYSTEM_XML_XMLLOADER_REMOVEDUPLICATENAMESPACE_OFFSET UNITYSDK_OFFSET(0x1E8AFE00)
#define SYSTEM_XML_XMLLOADER_UNEXPECTEDNODETYPE_OFFSET UNITYSDK_OFFSET(0x1E8AA120)
#define SYSTEM_XML_XMLLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8927D0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlLoader_TypeDefinitionIndex = 1908;

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

		::System::Void Load(::System::Xml::XmlDocument* a1, ::System::Xml::XmlReader* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlDocument*, ::System::Xml::XmlReader*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOAD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LoadDocSequence(::System::Xml::XmlDocument* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADDOCSEQUENCE_OFFSET))(this, a1);
		}

		::System::Xml::XmlNode* ReadCurrentNode(::System::Xml::XmlDocument* a1, ::System::Xml::XmlReader* a2)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlDocument*, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_READCURRENTNODE_OFFSET))(this, a1, a2);
		}

		::System::Xml::XmlNode* LoadNode(::System::Boolean a1)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADNODE_OFFSET))(this, a1);
		}

		::System::Xml::XmlAttribute* LoadAttributeNode()
		{
			return ((::System::Xml::XmlAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADATTRIBUTENODE_OFFSET))(this);
		}

		::System::Xml::XmlAttribute* LoadDefaultAttribute()
		{
			return ((::System::Xml::XmlAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADDEFAULTATTRIBUTE_OFFSET))(this);
		}

		::System::Void LoadAttributeValue(::System::Xml::XmlNode* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADATTRIBUTEVALUE_OFFSET))(this, a1, a2);
		}

		::System::Xml::XmlEntityReference* LoadEntityReferenceNode(::System::Boolean a1)
		{
			return ((::System::Xml::XmlEntityReference*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADENTITYREFERENCENODE_OFFSET))(this, a1);
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

		::System::Void ParseDocumentType(::System::Xml::XmlDocumentType* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlDocumentType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_PARSEDOCUMENTTYPE_OFFSET))(this, a1);
		}

		::System::Void ParseDocumentType_1(::System::Xml::XmlDocumentType* a1, ::System::Boolean a2, ::System::Xml::XmlResolver* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlDocumentType*, ::System::Boolean, ::System::Xml::XmlResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_PARSEDOCUMENTTYPE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LoadDocumentType(::System::Xml::IDtdInfo* a1, ::System::Xml::XmlDocumentType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::IDtdInfo*, ::System::Xml::XmlDocumentType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADDOCUMENTTYPE_OFFSET))(this, a1, a2);
		}

		::System::Xml::XmlParserContext* GetContext(::System::Xml::XmlNode* a1)
		{
			return ((::System::Xml::XmlParserContext*(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_GETCONTEXT_OFFSET))(this, a1);
		}

		::System::Xml::XmlNamespaceManager* ParsePartialContent(::System::Xml::XmlNode* a1, ::System::String* a2, ::System::Xml::XmlNodeType a3)
		{
			return ((::System::Xml::XmlNamespaceManager*(*)(::PVOID, ::System::Xml::XmlNode*, ::System::String*, ::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_PARSEPARTIALCONTENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LoadInnerXmlElement(::System::Xml::XmlElement* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlElement*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADINNERXMLELEMENT_OFFSET))(this, a1, a2);
		}

		::System::Void LoadInnerXmlAttribute(::System::Xml::XmlAttribute* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlAttribute*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_LOADINNERXMLATTRIBUTE_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveDuplicateNamespace(::System::Xml::XmlElement* a1, ::System::Xml::XmlNamespaceManager* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlElement*, ::System::Xml::XmlNamespaceManager*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_REMOVEDUPLICATENAMESPACE_OFFSET))(this, a1, a2, a3);
		}

		::System::String* EntitizeName(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_ENTITIZENAME_OFFSET))(this, a1);
		}

		::System::Void ExpandEntity(::System::Xml::XmlEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlEntity*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_EXPANDENTITY_OFFSET))(this, a1);
		}

		::System::Void ExpandEntityReference(::System::Xml::XmlEntityReference* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlEntityReference*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_EXPANDENTITYREFERENCE_OFFSET))(this, a1);
		}

		::System::Xml::XmlReader* CreateInnerXmlReader(::System::String* a1, ::System::Xml::XmlNodeType a2, ::System::Xml::XmlParserContext* a3, ::System::Xml::XmlDocument* a4)
		{
			return ((::System::Xml::XmlReader*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNodeType, ::System::Xml::XmlParserContext*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_CREATEINNERXMLREADER_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void ParseXmlDeclarationValue(::System::String* a1, ::System::String*& a2, ::System::String*& a3, ::System::String*& a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_PARSEXMLDECLARATIONVALUE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Exception* UnexpectedNodeType(::System::Xml::XmlNodeType a1)
		{
			return ((::System::Exception*(*)(::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLLOADER_UNEXPECTEDNODETYPE_OFFSET))(a1);
		}
	};
}
