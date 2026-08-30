#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Linq/LoadOptions.h"
#include "unitysdk/System/Xml/Linq/XContainer.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Xml { class XmlReader; }
namespace System::Xml { class XmlWriter; }
namespace System::Xml::Linq { class XAttribute; }
namespace System::Xml::Linq { class XName; }
namespace System::Xml::Linq { class XNamespace; }
namespace System::Xml::Linq { class XNode; }
namespace System::Xml::Linq { class XStreamingElement; }
namespace System::Xml::Schema { class XmlSchema; }

#define SYSTEM_XML_LINQ_XELEMENT_ADDATTRIBUTESKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x1EEA9640)
#define SYSTEM_XML_LINQ_XELEMENT_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1EEA9300)
#define SYSTEM_XML_LINQ_XELEMENT_APPENDATTRIBUTESKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x1EEA3AB0)
#define SYSTEM_XML_LINQ_XELEMENT_APPENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1EEA9400)
#define SYSTEM_XML_LINQ_XELEMENT_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1EEA7CC0)
#define SYSTEM_XML_LINQ_XELEMENT_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1EEA7C80)
#define SYSTEM_XML_LINQ_XELEMENT_CLONENODE_OFFSET UNITYSDK_OFFSET(0x1EEA9770)
#define SYSTEM_XML_LINQ_XELEMENT_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1EEA7D20)
#define SYSTEM_XML_LINQ_XELEMENT_GETNAMESPACEOFPREFIXINSCOPE_OFFSET UNITYSDK_OFFSET(0x1EEA7D80)
#define SYSTEM_XML_LINQ_XELEMENT_GETPREFIXOFNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1EE9F950)
#define SYSTEM_XML_LINQ_XELEMENT_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1EEA7BA0)
#define SYSTEM_XML_LINQ_XELEMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1EEA7BB0)
#define SYSTEM_XML_LINQ_XELEMENT_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1EEA7BC0)
#define SYSTEM_XML_LINQ_XELEMENT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1EEA7BD0)
#define SYSTEM_XML_LINQ_XELEMENT_READELEMENTFROM_OFFSET UNITYSDK_OFFSET(0x1EEA8230)
#define SYSTEM_XML_LINQ_XELEMENT_SETENDELEMENTLINEINFO_OFFSET UNITYSDK_OFFSET(0x1EEA6280)
#define SYSTEM_XML_LINQ_XELEMENT_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x1EEA8000)
#define SYSTEM_XML_LINQ_XELEMENT_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET UNITYSDK_OFFSET(0x1EEA8010)
#define SYSTEM_XML_LINQ_XELEMENT_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET UNITYSDK_OFFSET(0x1EEA9270)
#define SYSTEM_XML_LINQ_XELEMENT_VALIDATENODE_OFFSET UNITYSDK_OFFSET(0x1EEA9AB0)
#define SYSTEM_XML_LINQ_XELEMENT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EEA7F70)
#define SYSTEM_XML_LINQ_XELEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EEA7A80)
#define SYSTEM_XML_LINQ_XELEMENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1EEA1780)
#define SYSTEM_XML_LINQ_XELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEA3A40)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XElement_TypeDefinitionIndex = 3895;

	class XElement : public ::System::Xml::Linq::XContainer
	{
	public:
		::System::Xml::Linq::XName* name; // 0x30
		::System::Xml::Linq::XAttribute* lastAttr; // 0x38

		::System::Void _ctor(::System::Xml::Linq::XName* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Xml::Linq::XElement* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Xml::Linq::XStreamingElement* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XStreamingElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT__CTOR_2_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Xml::Linq::XName* get_Name()
		{
			return ((::System::Xml::Linq::XName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_GET_NAME_OFFSET))(this);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_GET_NODETYPE_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_GET_VALUE_OFFSET))(this);
		}

		::System::Xml::Linq::XAttribute* Attribute(::System::Xml::Linq::XName* a1)
		{
			return ((::System::Xml::Linq::XAttribute*(*)(::PVOID, ::System::Xml::Linq::XName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_ATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XAttribute*>* Attributes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XAttribute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_ATTRIBUTES_OFFSET))(this);
		}

		::System::String* GetPrefixOfNamespace(::System::Xml::Linq::XNamespace* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::Linq::XNamespace*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_GETPREFIXOFNAMESPACE_OFFSET))(this, a1);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_WRITETO_OFFSET))(this, a1);
		}

		::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema()
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET))(this);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET))(this, a1);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET))(this, a1);
		}

		::System::Void AddAttribute(::System::Xml::Linq::XAttribute* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_ADDATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Void AddAttributeSkipNotify(::System::Xml::Linq::XAttribute* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_ADDATTRIBUTESKIPNOTIFY_OFFSET))(this, a1);
		}

		::System::Void AppendAttribute(::System::Xml::Linq::XAttribute* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_APPENDATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Void AppendAttributeSkipNotify(::System::Xml::Linq::XAttribute* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_APPENDATTRIBUTESKIPNOTIFY_OFFSET))(this, a1);
		}

		::System::Xml::Linq::XNode* CloneNode()
		{
			return ((::System::Xml::Linq::XNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_CLONENODE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XAttribute*>* GetAttributes(::System::Xml::Linq::XName* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XAttribute*>*(*)(::PVOID, ::System::Xml::Linq::XName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_GETATTRIBUTES_OFFSET))(this, a1);
		}

		::System::String* GetNamespaceOfPrefixInScope(::System::String* a1, ::System::Xml::Linq::XElement* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Xml::Linq::XElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_GETNAMESPACEOFPREFIXINSCOPE_OFFSET))(this, a1, a2);
		}

		::System::Void ReadElementFrom(::System::Xml::XmlReader* a1, ::System::Xml::Linq::LoadOptions a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Xml::Linq::LoadOptions))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_READELEMENTFROM_OFFSET))(this, a1, a2);
		}

		::System::Void SetEndElementLineInfo(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_SETENDELEMENTLINEINFO_OFFSET))(this, a1, a2);
		}

		::System::Void ValidateNode(::System::Xml::Linq::XNode* a1, ::System::Xml::Linq::XNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XNode*, ::System::Xml::Linq::XNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_VALIDATENODE_OFFSET))(this, a1, a2);
		}
	};
}
