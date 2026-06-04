#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlLinkedNode.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLDECLARATION_CLONENODE_OFFSET UNITYSDK_OFFSET(0x1AEB3E60)
#define SYSTEM_XML_XMLDECLARATION_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x1AEB3A50)
#define SYSTEM_XML_XMLDECLARATION_GET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x1AEB3A80)
#define SYSTEM_XML_XMLDECLARATION_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1AEB3E10)
#define SYSTEM_XML_XMLDECLARATION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AEB3DD0)
#define SYSTEM_XML_XMLDECLARATION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1AEB3E50)
#define SYSTEM_XML_XMLDECLARATION_GET_STANDALONE_OFFSET UNITYSDK_OFFSET(0x1AEB3A60)
#define SYSTEM_XML_XMLDECLARATION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1AEB3A70)
#define SYSTEM_XML_XMLDECLARATION_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1AEB3A30)
#define SYSTEM_XML_XMLDECLARATION_ISVALIDXMLVERSION_OFFSET UNITYSDK_OFFSET(0x1AEB3840)
#define SYSTEM_XML_XMLDECLARATION_SET_ENCODING_OFFSET UNITYSDK_OFFSET(0x1AEB38D0)
#define SYSTEM_XML_XMLDECLARATION_SET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x1AEB3BE0)
#define SYSTEM_XML_XMLDECLARATION_SET_STANDALONE_OFFSET UNITYSDK_OFFSET(0x1AEB3900)
#define SYSTEM_XML_XMLDECLARATION_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1AEB3BD0)
#define SYSTEM_XML_XMLDECLARATION_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1AEB3A40)
#define SYSTEM_XML_XMLDECLARATION_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x1AEB3F10)
#define SYSTEM_XML_XMLDECLARATION_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AEB3EA0)
#define SYSTEM_XML_XMLDECLARATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEB35C0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlDeclaration_TypeDefinitionIndex = 1887;

	class XmlDeclaration : public ::System::Xml::XmlLinkedNode
	{
	public:
		::System::String* encoding; // 0x20
		::System::String* version; // 0x28
		::System::String* standalone; // 0x30

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Xml::XmlDocument* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* get_Version()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION_SET_VERSION_OFFSET))(this, a1);
		}

		::System::String* get_Encoding()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION_GET_ENCODING_OFFSET))(this);
		}

		::System::Void set_Encoding(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION_SET_ENCODING_OFFSET))(this, a1);
		}

		::System::String* get_Standalone()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION_GET_STANDALONE_OFFSET))(this);
		}

		::System::Void set_Standalone(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION_SET_STANDALONE_OFFSET))(this, a1);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION_SET_VALUE_OFFSET))(this, a1);
		}

		::System::String* get_InnerText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION_GET_INNERTEXT_OFFSET))(this);
		}

		::System::Void set_InnerText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION_SET_INNERTEXT_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION_GET_NAME_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION_GET_LOCALNAME_OFFSET))(this);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean a1)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION_CLONENODE_OFFSET))(this, a1);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION_WRITETO_OFFSET))(this, a1);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION_WRITECONTENTTO_OFFSET))(this, a1);
		}

		::System::Boolean IsValidXmlVersion(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLDECLARATION_ISVALIDXMLVERSION_OFFSET))(this, a1);
		}
	};
}
