#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Xml/Linq/LoadOptions.h"
#include "unitysdk/System/Xml/Linq/XNode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Text { class StringBuilder; }
namespace System::Xml { class XmlReader; }
namespace System::Xml { class XmlWriter; }
namespace System::Xml::Linq { class XAttribute; }

#define SYSTEM_XML_LINQ_XCONTAINER_ADDATTRIBUTESKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x185585E0)
#define SYSTEM_XML_LINQ_XCONTAINER_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x185585D0)
#define SYSTEM_XML_LINQ_XCONTAINER_ADDCONTENTSKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x18557B80)
#define SYSTEM_XML_LINQ_XCONTAINER_ADDNODESKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x185585F0)
#define SYSTEM_XML_LINQ_XCONTAINER_ADDNODE_OFFSET UNITYSDK_OFFSET(0x18558030)
#define SYSTEM_XML_LINQ_XCONTAINER_ADDSTRINGSKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x18558790)
#define SYSTEM_XML_LINQ_XCONTAINER_ADDSTRING_OFFSET UNITYSDK_OFFSET(0x18558130)
#define SYSTEM_XML_LINQ_XCONTAINER_ADD_OFFSET UNITYSDK_OFFSET(0x185576E0)
#define SYSTEM_XML_LINQ_XCONTAINER_APPENDNODESKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x18557520)
#define SYSTEM_XML_LINQ_XCONTAINER_APPENDNODE_OFFSET UNITYSDK_OFFSET(0x18558A00)
#define SYSTEM_XML_LINQ_XCONTAINER_APPENDTEXT_OFFSET UNITYSDK_OFFSET(0x18558FF0)
#define SYSTEM_XML_LINQ_XCONTAINER_CONVERTTEXTTONODE_OFFSET UNITYSDK_OFFSET(0x18558970)
#define SYSTEM_XML_LINQ_XCONTAINER_GETDATETIMESTRING_OFFSET UNITYSDK_OFFSET(0x185590C0)
#define SYSTEM_XML_LINQ_XCONTAINER_GETSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x18555D00)
#define SYSTEM_XML_LINQ_XCONTAINER_GET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x185575C0)
#define SYSTEM_XML_LINQ_XCONTAINER_NODES_OFFSET UNITYSDK_OFFSET(0x18558550)
#define SYSTEM_XML_LINQ_XCONTAINER_READCONTENTFROM_1_OFFSET UNITYSDK_OFFSET(0x18559D00)
#define SYSTEM_XML_LINQ_XCONTAINER_READCONTENTFROM_OFFSET UNITYSDK_OFFSET(0x18559120)
#define SYSTEM_XML_LINQ_XCONTAINER_REMOVENODE_OFFSET UNITYSDK_OFFSET(0x1855B3F0)
#define SYSTEM_XML_LINQ_XCONTAINER_VALIDATENODE_OFFSET UNITYSDK_OFFSET(0x1855B6B0)
#define SYSTEM_XML_LINQ_XCONTAINER_VALIDATESTRING_OFFSET UNITYSDK_OFFSET(0x1855B6C0)
#define SYSTEM_XML_LINQ_XCONTAINER_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x1855B6D0)
#define SYSTEM_XML_LINQ_XCONTAINER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18557380)
#define SYSTEM_XML_LINQ_XCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x18557370)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XContainer_TypeDefinitionIndex = 4905;

	class XContainer : public ::System::Xml::Linq::XNode
	{
	public:
		::System::Object* content; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Xml::Linq::XContainer* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XContainer*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER__CTOR_1_OFFSET))(this, other);
		}

		::System::Xml::Linq::XNode* get_LastNode()
		{
			return ((::System::Xml::Linq::XNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_GET_LASTNODE_OFFSET))(this);
		}

		::System::Void Add(::System::Object* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_ADD_OFFSET))(this, content);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XNode*>* Nodes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_NODES_OFFSET))(this);
		}

		::System::Void AddAttribute(::System::Xml::Linq::XAttribute* a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_ADDATTRIBUTE_OFFSET))(this, a);
		}

		::System::Void AddAttributeSkipNotify(::System::Xml::Linq::XAttribute* a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_ADDATTRIBUTESKIPNOTIFY_OFFSET))(this, a);
		}

		::System::Void AddContentSkipNotify(::System::Object* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_ADDCONTENTSKIPNOTIFY_OFFSET))(this, content);
		}

		::System::Void AddNode(::System::Xml::Linq::XNode* n)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_ADDNODE_OFFSET))(this, n);
		}

		::System::Void AddNodeSkipNotify(::System::Xml::Linq::XNode* n)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_ADDNODESKIPNOTIFY_OFFSET))(this, n);
		}

		::System::Void AddString(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_ADDSTRING_OFFSET))(this, s);
		}

		::System::Void AddStringSkipNotify(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_ADDSTRINGSKIPNOTIFY_OFFSET))(this, s);
		}

		::System::Void AppendNode(::System::Xml::Linq::XNode* n)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_APPENDNODE_OFFSET))(this, n);
		}

		::System::Void AppendNodeSkipNotify(::System::Xml::Linq::XNode* n)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_APPENDNODESKIPNOTIFY_OFFSET))(this, n);
		}

		::System::Void AppendText(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_APPENDTEXT_OFFSET))(this, sb);
		}

		::System::Void ConvertTextToNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_CONVERTTEXTTONODE_OFFSET))(this);
		}

		static ::System::String* GetDateTimeString(::System::DateTime value)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_GETDATETIMESTRING_OFFSET))(value);
		}

		static ::System::String* GetStringValue(::System::Object* value)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_GETSTRINGVALUE_OFFSET))(value);
		}

		::System::Void ReadContentFrom(::System::Xml::XmlReader* r)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_READCONTENTFROM_OFFSET))(this, r);
		}

		::System::Void ReadContentFrom_1(::System::Xml::XmlReader* r, ::System::Xml::Linq::LoadOptions o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Xml::Linq::LoadOptions))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_READCONTENTFROM_1_OFFSET))(this, r, o);
		}

		::System::Void RemoveNode(::System::Xml::Linq::XNode* n)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_REMOVENODE_OFFSET))(this, n);
		}

		::System::Void ValidateNode(::System::Xml::Linq::XNode* node, ::System::Xml::Linq::XNode* previous)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XNode*, ::System::Xml::Linq::XNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_VALIDATENODE_OFFSET))(this, node, previous);
		}

		::System::Void ValidateString(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_VALIDATESTRING_OFFSET))(this, s);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_WRITECONTENTTO_OFFSET))(this, writer);
		}
	};
}
