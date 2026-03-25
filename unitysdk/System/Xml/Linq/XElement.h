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

#define SYSTEM_XML_LINQ_XELEMENT_ADDATTRIBUTESKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x1855DA40)
#define SYSTEM_XML_LINQ_XELEMENT_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1855D700)
#define SYSTEM_XML_LINQ_XELEMENT_APPENDATTRIBUTESKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x18559BB0)
#define SYSTEM_XML_LINQ_XELEMENT_APPENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1855D800)
#define SYSTEM_XML_LINQ_XELEMENT_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1855C910)
#define SYSTEM_XML_LINQ_XELEMENT_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1855C8D0)
#define SYSTEM_XML_LINQ_XELEMENT_CLONENODE_OFFSET UNITYSDK_OFFSET(0x1855DB80)
#define SYSTEM_XML_LINQ_XELEMENT_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1855C970)
#define SYSTEM_XML_LINQ_XELEMENT_GETNAMESPACEOFPREFIXINSCOPE_OFFSET UNITYSDK_OFFSET(0x1855C9D0)
#define SYSTEM_XML_LINQ_XELEMENT_GETPREFIXOFNAMESPACE_OFFSET UNITYSDK_OFFSET(0x18556B80)
#define SYSTEM_XML_LINQ_XELEMENT_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1855C7F0)
#define SYSTEM_XML_LINQ_XELEMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1855C800)
#define SYSTEM_XML_LINQ_XELEMENT_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1855C810)
#define SYSTEM_XML_LINQ_XELEMENT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1855C820)
#define SYSTEM_XML_LINQ_XELEMENT_READELEMENTFROM_OFFSET UNITYSDK_OFFSET(0x1855CE00)
#define SYSTEM_XML_LINQ_XELEMENT_SETENDELEMENTLINEINFO_OFFSET UNITYSDK_OFFSET(0x1855B2F0)
#define SYSTEM_XML_LINQ_XELEMENT_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET UNITYSDK_OFFSET(0x1855CC40)
#define SYSTEM_XML_LINQ_XELEMENT_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET UNITYSDK_OFFSET(0x1855CC50)
#define SYSTEM_XML_LINQ_XELEMENT_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET UNITYSDK_OFFSET(0x1855D670)
#define SYSTEM_XML_LINQ_XELEMENT_VALIDATENODE_OFFSET UNITYSDK_OFFSET(0x1855DF20)
#define SYSTEM_XML_LINQ_XELEMENT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1855CBB0)
#define SYSTEM_XML_LINQ_XELEMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1855C6D0)
#define SYSTEM_XML_LINQ_XELEMENT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x185584D0)
#define SYSTEM_XML_LINQ_XELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18559B40)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XElement_TypeDefinitionIndex = 4908;

	class XElement : public ::System::Xml::Linq::XContainer
	{
	public:
		::System::Xml::Linq::XName* name; // 0x30
		::System::Xml::Linq::XAttribute* lastAttr; // 0x38

		::System::Void _ctor(::System::Xml::Linq::XName* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT__CTOR_OFFSET))(this, name);
		}

		::System::Void _ctor_1(::System::Xml::Linq::XElement* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT__CTOR_1_OFFSET))(this, other);
		}

		::System::Void _ctor_2(::System::Xml::Linq::XStreamingElement* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XStreamingElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT__CTOR_2_OFFSET))(this, other);
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

		::System::Xml::Linq::XAttribute* Attribute(::System::Xml::Linq::XName* name)
		{
			return ((::System::Xml::Linq::XAttribute*(*)(::PVOID, ::System::Xml::Linq::XName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_ATTRIBUTE_OFFSET))(this, name);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XAttribute*>* Attributes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XAttribute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_ATTRIBUTES_OFFSET))(this);
		}

		::System::String* GetPrefixOfNamespace(::System::Xml::Linq::XNamespace* ns)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::Linq::XNamespace*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_GETPREFIXOFNAMESPACE_OFFSET))(this, ns);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_WRITETO_OFFSET))(this, writer);
		}

		::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema()
		{
			return ((::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_GETSCHEMA_OFFSET))(this);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_READXML_OFFSET))(this, reader);
		}

		::System::Void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_SYSTEM_XML_SERIALIZATION_IXMLSERIALIZABLE_WRITEXML_OFFSET))(this, writer);
		}

		::System::Void AddAttribute(::System::Xml::Linq::XAttribute* a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_ADDATTRIBUTE_OFFSET))(this, a);
		}

		::System::Void AddAttributeSkipNotify(::System::Xml::Linq::XAttribute* a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_ADDATTRIBUTESKIPNOTIFY_OFFSET))(this, a);
		}

		::System::Void AppendAttribute(::System::Xml::Linq::XAttribute* a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_APPENDATTRIBUTE_OFFSET))(this, a);
		}

		::System::Void AppendAttributeSkipNotify(::System::Xml::Linq::XAttribute* a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_APPENDATTRIBUTESKIPNOTIFY_OFFSET))(this, a);
		}

		::System::Xml::Linq::XNode* CloneNode()
		{
			return ((::System::Xml::Linq::XNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_CLONENODE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XAttribute*>* GetAttributes(::System::Xml::Linq::XName* name)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XAttribute*>*(*)(::PVOID, ::System::Xml::Linq::XName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_GETATTRIBUTES_OFFSET))(this, name);
		}

		::System::String* GetNamespaceOfPrefixInScope(::System::String* prefix, ::System::Xml::Linq::XElement* outOfScope)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Xml::Linq::XElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_GETNAMESPACEOFPREFIXINSCOPE_OFFSET))(this, prefix, outOfScope);
		}

		::System::Void ReadElementFrom(::System::Xml::XmlReader* r, ::System::Xml::Linq::LoadOptions o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Xml::Linq::LoadOptions))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_READELEMENTFROM_OFFSET))(this, r, o);
		}

		::System::Void SetEndElementLineInfo(::System::Int32 lineNumber, ::System::Int32 linePosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_SETENDELEMENTLINEINFO_OFFSET))(this, lineNumber, linePosition);
		}

		::System::Void ValidateNode(::System::Xml::Linq::XNode* node, ::System::Xml::Linq::XNode* previous)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XNode*, ::System::Xml::Linq::XNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XELEMENT_VALIDATENODE_OFFSET))(this, node, previous);
		}
	};
}
