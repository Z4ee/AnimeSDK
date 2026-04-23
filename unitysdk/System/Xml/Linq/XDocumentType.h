#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Linq/XNode.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class IDtdInfo; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_LINQ_XDOCUMENTTYPE_CLONENODE_OFFSET UNITYSDK_OFFSET(0x19F97400)
#define SYSTEM_XML_LINQ_XDOCUMENTTYPE_GET_INTERNALSUBSET_OFFSET UNITYSDK_OFFSET(0x19F97320)
#define SYSTEM_XML_LINQ_XDOCUMENTTYPE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19F97330)
#define SYSTEM_XML_LINQ_XDOCUMENTTYPE_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x19F97340)
#define SYSTEM_XML_LINQ_XDOCUMENTTYPE_GET_PUBLICID_OFFSET UNITYSDK_OFFSET(0x19F97350)
#define SYSTEM_XML_LINQ_XDOCUMENTTYPE_GET_SYSTEMID_OFFSET UNITYSDK_OFFSET(0x19F97360)
#define SYSTEM_XML_LINQ_XDOCUMENTTYPE_WRITETO_OFFSET UNITYSDK_OFFSET(0x19F97370)
#define SYSTEM_XML_LINQ_XDOCUMENTTYPE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19F97290)
#define SYSTEM_XML_LINQ_XDOCUMENTTYPE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19F94A50)
#define SYSTEM_XML_LINQ_XDOCUMENTTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x19F97200)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XDocumentType_TypeDefinitionIndex = 4927;

	class XDocumentType : public ::System::Xml::Linq::XNode
	{
	public:
		::System::String* systemId; // 0x28
		::System::String* name; // 0x30
		::System::String* internalSubset; // 0x38
		::System::String* publicId; // 0x40
		::System::Xml::IDtdInfo* dtdInfo; // 0x48

		::System::Void _ctor(::System::String* name, ::System::String* publicId, ::System::String* systemId, ::System::String* internalSubset)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENTTYPE__CTOR_OFFSET))(this, name, publicId, systemId, internalSubset);
		}

		::System::Void _ctor_1(::System::Xml::Linq::XDocumentType* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XDocumentType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENTTYPE__CTOR_1_OFFSET))(this, other);
		}

		::System::Void _ctor_2(::System::String* name, ::System::String* publicId, ::System::String* systemId, ::System::String* internalSubset, ::System::Xml::IDtdInfo* dtdInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::IDtdInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENTTYPE__CTOR_2_OFFSET))(this, name, publicId, systemId, internalSubset, dtdInfo);
		}

		::System::String* get_InternalSubset()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENTTYPE_GET_INTERNALSUBSET_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENTTYPE_GET_NAME_OFFSET))(this);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENTTYPE_GET_NODETYPE_OFFSET))(this);
		}

		::System::String* get_PublicId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENTTYPE_GET_PUBLICID_OFFSET))(this);
		}

		::System::String* get_SystemId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENTTYPE_GET_SYSTEMID_OFFSET))(this);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENTTYPE_WRITETO_OFFSET))(this, writer);
		}

		::System::Xml::Linq::XNode* CloneNode()
		{
			return ((::System::Xml::Linq::XNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENTTYPE_CLONENODE_OFFSET))(this);
		}
	};
}
