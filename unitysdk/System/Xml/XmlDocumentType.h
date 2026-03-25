#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlLinkedNode.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlNamedNodeMap; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlWriter; }
namespace System::Xml::Schema { class SchemaInfo; }

#define SYSTEM_XML_XMLDOCUMENTTYPE_CLONENODE_OFFSET UNITYSDK_OFFSET(0x1860C9D0)
#define SYSTEM_XML_XMLDOCUMENTTYPE_GET_DTDSCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x1860CBF0)
#define SYSTEM_XML_XMLDOCUMENTTYPE_GET_ENTITIES_OFFSET UNITYSDK_OFFSET(0x1860B8F0)
#define SYSTEM_XML_XMLDOCUMENTTYPE_GET_INTERNALSUBSET_OFFSET UNITYSDK_OFFSET(0x1860CB70)
#define SYSTEM_XML_XMLDOCUMENTTYPE_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1860CAE0)
#define SYSTEM_XML_XMLDOCUMENTTYPE_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1860C9B0)
#define SYSTEM_XML_XMLDOCUMENTTYPE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1860C9A0)
#define SYSTEM_XML_XMLDOCUMENTTYPE_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1860C9C0)
#define SYSTEM_XML_XMLDOCUMENTTYPE_GET_NOTATIONS_OFFSET UNITYSDK_OFFSET(0x1860CAF0)
#define SYSTEM_XML_XMLDOCUMENTTYPE_GET_PARSEWITHNAMESPACES_OFFSET UNITYSDK_OFFSET(0x1860CB80)
#define SYSTEM_XML_XMLDOCUMENTTYPE_GET_PUBLICID_OFFSET UNITYSDK_OFFSET(0x1860CB50)
#define SYSTEM_XML_XMLDOCUMENTTYPE_GET_SYSTEMID_OFFSET UNITYSDK_OFFSET(0x1860CB60)
#define SYSTEM_XML_XMLDOCUMENTTYPE_SET_DTDSCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x1860CC00)
#define SYSTEM_XML_XMLDOCUMENTTYPE_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x1860CBE0)
#define SYSTEM_XML_XMLDOCUMENTTYPE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1860CB90)
#define SYSTEM_XML_XMLDOCUMENTTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1860C760)

namespace System::Xml
{
	inline static constexpr unsigned int XmlDocumentType_TypeDefinitionIndex = 1889;

	class XmlDocumentType : public ::System::Xml::XmlLinkedNode
	{
	public:
		::System::Xml::Schema::SchemaInfo* schemaInfo; // 0x20
		::System::String* systemId; // 0x28
		::System::Xml::XmlNamedNodeMap* notations; // 0x30
		::System::String* name; // 0x38
		::System::String* publicId; // 0x40
		::System::String* internalSubset; // 0x48
		::System::Xml::XmlNamedNodeMap* entities; // 0x50
		::System::Boolean namespaces; // 0x58

		::System::Void _ctor(::System::String* name, ::System::String* publicId, ::System::String* systemId, ::System::String* internalSubset, ::System::Xml::XmlDocument* doc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE__CTOR_OFFSET))(this, name, publicId, systemId, internalSubset, doc);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_GET_NAME_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_GET_LOCALNAME_OFFSET))(this);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_GET_NODETYPE_OFFSET))(this);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean deep)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_CLONENODE_OFFSET))(this, deep);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Xml::XmlNamedNodeMap* get_Entities()
		{
			return ((::System::Xml::XmlNamedNodeMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_GET_ENTITIES_OFFSET))(this);
		}

		::System::Xml::XmlNamedNodeMap* get_Notations()
		{
			return ((::System::Xml::XmlNamedNodeMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_GET_NOTATIONS_OFFSET))(this);
		}

		::System::String* get_PublicId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_GET_PUBLICID_OFFSET))(this);
		}

		::System::String* get_SystemId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_GET_SYSTEMID_OFFSET))(this);
		}

		::System::String* get_InternalSubset()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_GET_INTERNALSUBSET_OFFSET))(this);
		}

		::System::Boolean get_ParseWithNamespaces()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_GET_PARSEWITHNAMESPACES_OFFSET))(this);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_WRITETO_OFFSET))(this, w);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_WRITECONTENTTO_OFFSET))(this, w);
		}

		::System::Xml::Schema::SchemaInfo* get_DtdSchemaInfo()
		{
			return ((::System::Xml::Schema::SchemaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_GET_DTDSCHEMAINFO_OFFSET))(this);
		}

		::System::Void set_DtdSchemaInfo(::System::Xml::Schema::SchemaInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::SchemaInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDOCUMENTTYPE_SET_DTDSCHEMAINFO_OFFSET))(this, value);
		}
	};
}
