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

#define SYSTEM_XML_LINQ_XCONTAINER_ADDATTRIBUTESKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x1EEA1890)
#define SYSTEM_XML_LINQ_XCONTAINER_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1EEA1880)
#define SYSTEM_XML_LINQ_XCONTAINER_ADDCONTENTSKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x1EEA0C00)
#define SYSTEM_XML_LINQ_XCONTAINER_ADDNODESKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x1EEA18A0)
#define SYSTEM_XML_LINQ_XCONTAINER_ADDNODE_OFFSET UNITYSDK_OFFSET(0x1EEA1140)
#define SYSTEM_XML_LINQ_XCONTAINER_ADDSTRINGSKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x1EEA1B10)
#define SYSTEM_XML_LINQ_XCONTAINER_ADDSTRING_OFFSET UNITYSDK_OFFSET(0x1EEA1320)
#define SYSTEM_XML_LINQ_XCONTAINER_ADD_OFFSET UNITYSDK_OFFSET(0x1EEA0610)
#define SYSTEM_XML_LINQ_XCONTAINER_APPENDNODESKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x1EEA0450)
#define SYSTEM_XML_LINQ_XCONTAINER_APPENDNODE_OFFSET UNITYSDK_OFFSET(0x1EEA1E00)
#define SYSTEM_XML_LINQ_XCONTAINER_APPENDTEXT_OFFSET UNITYSDK_OFFSET(0x1EEA23F0)
#define SYSTEM_XML_LINQ_XCONTAINER_CONVERTTEXTTONODE_OFFSET UNITYSDK_OFFSET(0x1EEA1D70)
#define SYSTEM_XML_LINQ_XCONTAINER_GETDATETIMESTRING_OFFSET UNITYSDK_OFFSET(0x1EEA2540)
#define SYSTEM_XML_LINQ_XCONTAINER_GETSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x1EE9EA30)
#define SYSTEM_XML_LINQ_XCONTAINER_GET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x1EEA04F0)
#define SYSTEM_XML_LINQ_XCONTAINER_NODES_OFFSET UNITYSDK_OFFSET(0x1EEA1800)
#define SYSTEM_XML_LINQ_XCONTAINER_READCONTENTFROM_1_OFFSET UNITYSDK_OFFSET(0x1EEA3C00)
#define SYSTEM_XML_LINQ_XCONTAINER_READCONTENTFROM_OFFSET UNITYSDK_OFFSET(0x1EEA25A0)
#define SYSTEM_XML_LINQ_XCONTAINER_REMOVENODE_OFFSET UNITYSDK_OFFSET(0x1EEA6380)
#define SYSTEM_XML_LINQ_XCONTAINER_VALIDATENODE_OFFSET UNITYSDK_OFFSET(0x1EEA6650)
#define SYSTEM_XML_LINQ_XCONTAINER_VALIDATESTRING_OFFSET UNITYSDK_OFFSET(0x1EEA6660)
#define SYSTEM_XML_LINQ_XCONTAINER_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x1EEA6670)
#define SYSTEM_XML_LINQ_XCONTAINER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EEA0220)
#define SYSTEM_XML_LINQ_XCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEA0210)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XContainer_TypeDefinitionIndex = 3892;

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
