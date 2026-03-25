#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Linq/SaveOptions.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Xml::Linq { class XContainer; }
namespace System::Xml::Linq { class XElement; }
namespace System::Xml::Linq { class XObjectChangeEventArgs; }

#define SYSTEM_XML_LINQ_XOBJECT_ADDANNOTATION_OFFSET UNITYSDK_OFFSET(0x1855DBF0)
#define SYSTEM_XML_LINQ_XOBJECT_ANNOTATION_OFFSET UNITYSDK_OFFSET(0x1855F730)
#define SYSTEM_XML_LINQ_XOBJECT_GETSAVEOPTIONSFROMANNOTATIONS_OFFSET UNITYSDK_OFFSET(0x1855F1C0)
#define SYSTEM_XML_LINQ_XOBJECT_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1855B380)
#define SYSTEM_XML_LINQ_XOBJECT_GET_HASBASEURI_OFFSET UNITYSDK_OFFSET(0x1855B340)
#define SYSTEM_XML_LINQ_XOBJECT_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1855F6C0)
#define SYSTEM_XML_LINQ_XOBJECT_NOTIFYCHANGED_OFFSET UNITYSDK_OFFSET(0x18558D40)
#define SYSTEM_XML_LINQ_XOBJECT_NOTIFYCHANGING_OFFSET UNITYSDK_OFFSET(0x18558CA0)
#define SYSTEM_XML_LINQ_XOBJECT_SETBASEURI_OFFSET UNITYSDK_OFFSET(0x1855B250)
#define SYSTEM_XML_LINQ_XOBJECT_SETLINEINFO_OFFSET UNITYSDK_OFFSET(0x1855B2A0)
#define SYSTEM_XML_LINQ_XOBJECT_SKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x18557B10)
#define SYSTEM_XML_LINQ_XOBJECT_SYSTEM_XML_IXMLLINEINFO_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x1855F880)
#define SYSTEM_XML_LINQ_XOBJECT_SYSTEM_XML_IXMLLINEINFO_GET_LINEPOSITION_OFFSET UNITYSDK_OFFSET(0x1855F8D0)
#define SYSTEM_XML_LINQ_XOBJECT_SYSTEM_XML_IXMLLINEINFO_HASLINEINFO_OFFSET UNITYSDK_OFFSET(0x1855F840)
#define SYSTEM_XML_LINQ_XOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x18555CE0)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XObject_TypeDefinitionIndex = 4894;

	class XObject : public ::System::Object
	{
	public:
		::System::Xml::Linq::XContainer* parent; // 0x10
		::System::Object* annotations; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT__CTOR_OFFSET))(this);
		}

		::System::String* get_BaseUri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_GET_BASEURI_OFFSET))(this);
		}

		::System::Xml::Linq::XElement* get_Parent()
		{
			return ((::System::Xml::Linq::XElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_GET_PARENT_OFFSET))(this);
		}

		::System::Void AddAnnotation(::System::Object* annotation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_ADDANNOTATION_OFFSET))(this, annotation);
		}

		::System::Object* Annotation(::System::Type* type)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_ANNOTATION_OFFSET))(this, type);
		}

		::System::Boolean System_Xml_IXmlLineInfo_HasLineInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_SYSTEM_XML_IXMLLINEINFO_HASLINEINFO_OFFSET))(this);
		}

		::System::Int32 System_Xml_IXmlLineInfo_get_LineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_SYSTEM_XML_IXMLLINEINFO_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Int32 System_Xml_IXmlLineInfo_get_LinePosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_SYSTEM_XML_IXMLLINEINFO_GET_LINEPOSITION_OFFSET))(this);
		}

		::System::Boolean get_HasBaseUri()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_GET_HASBASEURI_OFFSET))(this);
		}

		::System::Boolean NotifyChanged(::System::Object* sender, ::System::Xml::Linq::XObjectChangeEventArgs* e)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Xml::Linq::XObjectChangeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_NOTIFYCHANGED_OFFSET))(this, sender, e);
		}

		::System::Boolean NotifyChanging(::System::Object* sender, ::System::Xml::Linq::XObjectChangeEventArgs* e)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Xml::Linq::XObjectChangeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_NOTIFYCHANGING_OFFSET))(this, sender, e);
		}

		::System::Void SetBaseUri(::System::String* baseUri)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_SETBASEURI_OFFSET))(this, baseUri);
		}

		::System::Void SetLineInfo(::System::Int32 lineNumber, ::System::Int32 linePosition)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_SETLINEINFO_OFFSET))(this, lineNumber, linePosition);
		}

		::System::Boolean SkipNotify()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_SKIPNOTIFY_OFFSET))(this);
		}

		::System::Xml::Linq::SaveOptions GetSaveOptionsFromAnnotations()
		{
			return ((::System::Xml::Linq::SaveOptions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XOBJECT_GETSAVEOPTIONSFROMANNOTATIONS_OFFSET))(this);
		}
	};
}
