#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlLinkedNode.h"

namespace System { class String; }
namespace System::Xml { class XmlDocument; }

#define SYSTEM_XML_XMLCHARACTERDATA_CHECKONDATA_OFFSET UNITYSDK_OFFSET(0x19D4D5E0)
#define SYSTEM_XML_XMLCHARACTERDATA_GET_DATA_OFFSET UNITYSDK_OFFSET(0x19D4D1F0)
#define SYSTEM_XML_XMLCHARACTERDATA_GET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x19D4D1D0)
#define SYSTEM_XML_XMLCHARACTERDATA_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x19D4D1B0)
#define SYSTEM_XML_XMLCHARACTERDATA_SET_DATA_OFFSET UNITYSDK_OFFSET(0x19D4D210)
#define SYSTEM_XML_XMLCHARACTERDATA_SET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x19D4D1E0)
#define SYSTEM_XML_XMLCHARACTERDATA_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x19D4D1C0)
#define SYSTEM_XML_XMLCHARACTERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19D4D130)

namespace System::Xml
{
	inline static constexpr unsigned int XmlCharacterData_TypeDefinitionIndex = 1754;

	class XmlCharacterData : public ::System::Xml::XmlLinkedNode
	{
	public:
		::System::String* data; // 0x20

		::System::Void _ctor(::System::String* data, ::System::Xml::XmlDocument* doc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARACTERDATA__CTOR_OFFSET))(this, data, doc);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARACTERDATA_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARACTERDATA_SET_VALUE_OFFSET))(this, value);
		}

		::System::String* get_InnerText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARACTERDATA_GET_INNERTEXT_OFFSET))(this);
		}

		::System::Void set_InnerText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARACTERDATA_SET_INNERTEXT_OFFSET))(this, value);
		}

		::System::String* get_Data()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARACTERDATA_GET_DATA_OFFSET))(this);
		}

		::System::Void set_Data(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARACTERDATA_SET_DATA_OFFSET))(this, value);
		}

		::System::Boolean CheckOnData(::System::String* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCHARACTERDATA_CHECKONDATA_OFFSET))(this, data);
		}
	};
}
