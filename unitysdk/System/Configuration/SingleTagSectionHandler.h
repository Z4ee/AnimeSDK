#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Xml { class XmlNode; }

#define SYSTEM_CONFIGURATION_SINGLETAGSECTIONHANDLER_CREATE_OFFSET UNITYSDK_OFFSET(0x1C87D1B0)
#define SYSTEM_CONFIGURATION_SINGLETAGSECTIONHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C87D170)

namespace System::Configuration
{
	inline static constexpr unsigned int SingleTagSectionHandler_TypeDefinitionIndex = 4230;

	class SingleTagSectionHandler : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SINGLETAGSECTIONHANDLER__CTOR_OFFSET))(this);
		}

		::System::Object* Create(::System::Object* parent, ::System::Object* context, ::System::Xml::XmlNode* section)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SINGLETAGSECTIONHANDLER_CREATE_OFFSET))(this, parent, context, section);
		}
	};
}
