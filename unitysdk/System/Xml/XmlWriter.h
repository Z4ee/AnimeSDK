#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/WriteState.h"

namespace System { class String; }
namespace System::Xml { class XmlReader; }

#define SYSTEM_XML_XMLWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1D0A6900)
#define SYSTEM_XML_XMLWRITER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1D0A6FC0)
#define SYSTEM_XML_XMLWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D0A6FA0)
#define SYSTEM_XML_XMLWRITER_WRITEATTRIBUTESTRING_1_OFFSET UNITYSDK_OFFSET(0x1D0A6860)
#define SYSTEM_XML_XMLWRITER_WRITEATTRIBUTESTRING_2_OFFSET UNITYSDK_OFFSET(0x1D0A68B0)
#define SYSTEM_XML_XMLWRITER_WRITEATTRIBUTESTRING_OFFSET UNITYSDK_OFFSET(0x1D0A6810)
#define SYSTEM_XML_XMLWRITER_WRITEATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1D0A6910)
#define SYSTEM_XML_XMLWRITER_WRITEELEMENTSTRING_OFFSET UNITYSDK_OFFSET(0x1D0A6F40)
#define SYSTEM_XML_XMLWRITER_WRITENODE_OFFSET UNITYSDK_OFFSET(0x1D0A6B60)
#define SYSTEM_XML_XMLWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1D0A67E0)
#define SYSTEM_XML_XMLWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A7000)

namespace System::Xml
{
	inline static constexpr unsigned int XmlWriter_TypeDefinitionIndex = 1742;

	class XmlWriter : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Char>* writeNodeBuffer; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER__CTOR_OFFSET))(this);
		}

		::System::Void WriteStartElement(::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITESTARTELEMENT_OFFSET))(this, localName, ns);
		}

		::System::Void WriteAttributeString(::System::String* localName, ::System::String* ns, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEATTRIBUTESTRING_OFFSET))(this, localName, ns, value);
		}

		::System::Void WriteAttributeString_1(::System::String* localName, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEATTRIBUTESTRING_1_OFFSET))(this, localName, value);
		}

		::System::Void WriteAttributeString_2(::System::String* prefix, ::System::String* localName, ::System::String* ns, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEATTRIBUTESTRING_2_OFFSET))(this, prefix, localName, ns, value);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void WriteAttributes(::System::Xml::XmlReader* reader, ::System::Boolean defattr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEATTRIBUTES_OFFSET))(this, reader, defattr);
		}

		::System::Void WriteNode(::System::Xml::XmlReader* reader, ::System::Boolean defattr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITENODE_OFFSET))(this, reader, defattr);
		}

		::System::Void WriteElementString(::System::String* localName, ::System::String* ns, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEELEMENTSTRING_OFFSET))(this, localName, ns, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_DISPOSE_1_OFFSET))(this, disposing);
		}
	};
}
