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

#define SYSTEM_XML_LINQ_XCONTAINER_ADDATTRIBUTESKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x1AE09B90)
#define SYSTEM_XML_LINQ_XCONTAINER_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AE09B80)
#define SYSTEM_XML_LINQ_XCONTAINER_ADDCONTENTSKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x1AE09190)
#define SYSTEM_XML_LINQ_XCONTAINER_ADDNODESKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x1AE09BA0)
#define SYSTEM_XML_LINQ_XCONTAINER_ADDNODE_OFFSET UNITYSDK_OFFSET(0x1AE09590)
#define SYSTEM_XML_LINQ_XCONTAINER_ADDSTRINGSKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x1AE09D40)
#define SYSTEM_XML_LINQ_XCONTAINER_ADDSTRING_OFFSET UNITYSDK_OFFSET(0x1AE09690)
#define SYSTEM_XML_LINQ_XCONTAINER_ADD_OFFSET UNITYSDK_OFFSET(0x1AE08CD0)
#define SYSTEM_XML_LINQ_XCONTAINER_APPENDNODESKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x1AE08B10)
#define SYSTEM_XML_LINQ_XCONTAINER_APPENDNODE_OFFSET UNITYSDK_OFFSET(0x1AE09FB0)
#define SYSTEM_XML_LINQ_XCONTAINER_APPENDTEXT_OFFSET UNITYSDK_OFFSET(0x1AE0A5A0)
#define SYSTEM_XML_LINQ_XCONTAINER_CONVERTTEXTTONODE_OFFSET UNITYSDK_OFFSET(0x1AE09F20)
#define SYSTEM_XML_LINQ_XCONTAINER_GETDATETIMESTRING_OFFSET UNITYSDK_OFFSET(0x1AE0A680)
#define SYSTEM_XML_LINQ_XCONTAINER_GETSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x1AE07270)
#define SYSTEM_XML_LINQ_XCONTAINER_GET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x1AE08BB0)
#define SYSTEM_XML_LINQ_XCONTAINER_NODES_OFFSET UNITYSDK_OFFSET(0x1AE09B00)
#define SYSTEM_XML_LINQ_XCONTAINER_READCONTENTFROM_1_OFFSET UNITYSDK_OFFSET(0x1AE0B2C0)
#define SYSTEM_XML_LINQ_XCONTAINER_READCONTENTFROM_OFFSET UNITYSDK_OFFSET(0x1AE0A6E0)
#define SYSTEM_XML_LINQ_XCONTAINER_REMOVENODE_OFFSET UNITYSDK_OFFSET(0x1AE0C9E0)
#define SYSTEM_XML_LINQ_XCONTAINER_VALIDATENODE_OFFSET UNITYSDK_OFFSET(0x1AE0CCC0)
#define SYSTEM_XML_LINQ_XCONTAINER_VALIDATESTRING_OFFSET UNITYSDK_OFFSET(0x1AE0CCD0)
#define SYSTEM_XML_LINQ_XCONTAINER_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x1AE0CCE0)
#define SYSTEM_XML_LINQ_XCONTAINER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AE08960)
#define SYSTEM_XML_LINQ_XCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE08950)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XContainer_TypeDefinitionIndex = 3880;

	class XContainer : public ::System::Xml::Linq::XNode
	{
	public:
		::System::Object* content; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Xml::Linq::XContainer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XContainer*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER__CTOR_1_OFFSET))(this, a1);
		}

		::System::Xml::Linq::XNode* get_LastNode()
		{
			return ((::System::Xml::Linq::XNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_GET_LASTNODE_OFFSET))(this);
		}

		::System::Void Add(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_ADD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XNode*>* Nodes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_NODES_OFFSET))(this);
		}

		::System::Void AddAttribute(::System::Xml::Linq::XAttribute* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_ADDATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Void AddAttributeSkipNotify(::System::Xml::Linq::XAttribute* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_ADDATTRIBUTESKIPNOTIFY_OFFSET))(this, a1);
		}

		::System::Void AddContentSkipNotify(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_ADDCONTENTSKIPNOTIFY_OFFSET))(this, a1);
		}

		::System::Void AddNode(::System::Xml::Linq::XNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_ADDNODE_OFFSET))(this, a1);
		}

		::System::Void AddNodeSkipNotify(::System::Xml::Linq::XNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_ADDNODESKIPNOTIFY_OFFSET))(this, a1);
		}

		::System::Void AddString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_ADDSTRING_OFFSET))(this, a1);
		}

		::System::Void AddStringSkipNotify(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_ADDSTRINGSKIPNOTIFY_OFFSET))(this, a1);
		}

		::System::Void AppendNode(::System::Xml::Linq::XNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_APPENDNODE_OFFSET))(this, a1);
		}

		::System::Void AppendNodeSkipNotify(::System::Xml::Linq::XNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_APPENDNODESKIPNOTIFY_OFFSET))(this, a1);
		}

		::System::Void AppendText(::System::Text::StringBuilder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_APPENDTEXT_OFFSET))(this, a1);
		}

		::System::Void ConvertTextToNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_CONVERTTEXTTONODE_OFFSET))(this);
		}

		static ::System::String* GetDateTimeString(::System::DateTime a1)
		{
			return ((::System::String*(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_GETDATETIMESTRING_OFFSET))(a1);
		}

		static ::System::String* GetStringValue(::System::Object* a1)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_GETSTRINGVALUE_OFFSET))(a1);
		}

		::System::Void ReadContentFrom(::System::Xml::XmlReader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_READCONTENTFROM_OFFSET))(this, a1);
		}

		::System::Void ReadContentFrom_1(::System::Xml::XmlReader* a1, ::System::Xml::Linq::LoadOptions a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Xml::Linq::LoadOptions))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_READCONTENTFROM_1_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveNode(::System::Xml::Linq::XNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_REMOVENODE_OFFSET))(this, a1);
		}

		::System::Void ValidateNode(::System::Xml::Linq::XNode* a1, ::System::Xml::Linq::XNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XNode*, ::System::Xml::Linq::XNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_VALIDATENODE_OFFSET))(this, a1, a2);
		}

		::System::Void ValidateString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_VALIDATESTRING_OFFSET))(this, a1);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XCONTAINER_WRITECONTENTTO_OFFSET))(this, a1);
		}
	};
}
