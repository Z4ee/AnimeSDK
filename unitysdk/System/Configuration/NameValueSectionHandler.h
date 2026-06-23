#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml { class XmlNode; }

#define SYSTEM_CONFIGURATION_NAMEVALUESECTIONHANDLER_CREATE_OFFSET UNITYSDK_OFFSET(0x1C88F940)
#define SYSTEM_CONFIGURATION_NAMEVALUESECTIONHANDLER_GET_KEYATTRIBUTENAME_OFFSET UNITYSDK_OFFSET(0x1C88F8C0)
#define SYSTEM_CONFIGURATION_NAMEVALUESECTIONHANDLER_GET_VALUEATTRIBUTENAME_OFFSET UNITYSDK_OFFSET(0x1C88F900)
#define SYSTEM_CONFIGURATION_NAMEVALUESECTIONHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C88F880)

namespace System::Configuration
{
	inline static constexpr unsigned int NameValueSectionHandler_TypeDefinitionIndex = 4216;

	class NameValueSectionHandler : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_NAMEVALUESECTIONHANDLER__CTOR_OFFSET))(this);
		}

		::System::String* get_KeyAttributeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_NAMEVALUESECTIONHANDLER_GET_KEYATTRIBUTENAME_OFFSET))(this);
		}

		::System::String* get_ValueAttributeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_NAMEVALUESECTIONHANDLER_GET_VALUEATTRIBUTENAME_OFFSET))(this);
		}

		::System::Object* Create(::System::Object* parent, ::System::Object* context, ::System::Xml::XmlNode* section)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_NAMEVALUESECTIONHANDLER_CREATE_OFFSET))(this, parent, context, section);
		}
	};
}
