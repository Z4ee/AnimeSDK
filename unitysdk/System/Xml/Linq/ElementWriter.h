#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Xml/Linq/NamespaceResolver.h"

namespace System { class String; }
namespace System::Xml { class XmlWriter; }
namespace System::Xml::Linq { class XElement; }
namespace System::Xml::Linq { class XNamespace; }

#define SYSTEM_XML_LINQ_ELEMENTWRITER_GETPREFIXOFNAMESPACE_OFFSET UNITYSDK_OFFSET(0x22D07A0)
#define SYSTEM_XML_LINQ_ELEMENTWRITER_PUSHANCESTORS_OFFSET UNITYSDK_OFFSET(0x22D0850)
#define SYSTEM_XML_LINQ_ELEMENTWRITER_PUSHELEMENT_OFFSET UNITYSDK_OFFSET(0x22D0860)
#define SYSTEM_XML_LINQ_ELEMENTWRITER_WRITEELEMENT_OFFSET UNITYSDK_OFFSET(0x22D0790)
#define SYSTEM_XML_LINQ_ELEMENTWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x22D0870)
#define SYSTEM_XML_LINQ_ELEMENTWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x22D0900)
#define SYSTEM_XML_LINQ_ELEMENTWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x22D0990)
#define SYSTEM_XML_LINQ_ELEMENTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0xDE220)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int ElementWriter_TypeDefinitionIndex = 4918;

	struct alignas(8) ElementWriter
	{
		::System::Xml::XmlWriter* writer; // 0x10
		::System::Xml::Linq::NamespaceResolver resolver; // 0x18

		::System::Void _ctor(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_ELEMENTWRITER__CTOR_OFFSET))(this, writer);
		}

		::System::Void WriteElement(::System::Xml::Linq::XElement* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_ELEMENTWRITER_WRITEELEMENT_OFFSET))(this, e);
		}

		::System::String* GetPrefixOfNamespace(::System::Xml::Linq::XNamespace* ns, ::System::Boolean allowDefaultNamespace)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::Linq::XNamespace*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_ELEMENTWRITER_GETPREFIXOFNAMESPACE_OFFSET))(this, ns, allowDefaultNamespace);
		}

		::System::Void PushAncestors(::System::Xml::Linq::XElement* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_ELEMENTWRITER_PUSHANCESTORS_OFFSET))(this, e);
		}

		::System::Void PushElement(::System::Xml::Linq::XElement* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_ELEMENTWRITER_PUSHELEMENT_OFFSET))(this, e);
		}

		::System::Void WriteEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_ELEMENTWRITER_WRITEENDELEMENT_OFFSET))(this);
		}

		::System::Void WriteFullEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_ELEMENTWRITER_WRITEFULLENDELEMENT_OFFSET))(this);
		}

		::System::Void WriteStartElement(::System::Xml::Linq::XElement* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XElement*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_ELEMENTWRITER_WRITESTARTELEMENT_OFFSET))(this, e);
		}
	};
}
