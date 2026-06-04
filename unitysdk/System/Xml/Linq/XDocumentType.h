#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Linq/XNode.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class IDtdInfo; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_LINQ_XDOCUMENTTYPE_CLONENODE_OFFSET UNITYSDK_OFFSET(0x1AE0DC20)
#define SYSTEM_XML_LINQ_XDOCUMENTTYPE_GET_INTERNALSUBSET_OFFSET UNITYSDK_OFFSET(0x1AE0DB40)
#define SYSTEM_XML_LINQ_XDOCUMENTTYPE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AE0DB50)
#define SYSTEM_XML_LINQ_XDOCUMENTTYPE_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1AE0DB60)
#define SYSTEM_XML_LINQ_XDOCUMENTTYPE_GET_PUBLICID_OFFSET UNITYSDK_OFFSET(0x1AE0DB70)
#define SYSTEM_XML_LINQ_XDOCUMENTTYPE_GET_SYSTEMID_OFFSET UNITYSDK_OFFSET(0x1AE0DB80)
#define SYSTEM_XML_LINQ_XDOCUMENTTYPE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AE0DB90)
#define SYSTEM_XML_LINQ_XDOCUMENTTYPE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AE0DAC0)
#define SYSTEM_XML_LINQ_XDOCUMENTTYPE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AE0B230)
#define SYSTEM_XML_LINQ_XDOCUMENTTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE0DA30)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XDocumentType_TypeDefinitionIndex = 3894;

	class XDocumentType : public ::System::Xml::Linq::XNode
	{
	public:
		::System::String* systemId; // 0x28
		::System::Xml::IDtdInfo* dtdInfo; // 0x30
		::System::String* name; // 0x38
		::System::String* publicId; // 0x40
		::System::String* internalSubset; // 0x48

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENTTYPE__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::Xml::Linq::XDocumentType* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XDocumentType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENTTYPE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::Xml::IDtdInfo* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::IDtdInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENTTYPE__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5);
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

		::System::Void WriteTo(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENTTYPE_WRITETO_OFFSET))(this, a1);
		}

		::System::Xml::Linq::XNode* CloneNode()
		{
			return ((::System::Xml::Linq::XNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENTTYPE_CLONENODE_OFFSET))(this);
		}
	};
}
