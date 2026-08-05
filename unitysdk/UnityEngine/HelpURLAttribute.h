#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_HELPURLATTRIBUTE_GET_URL_OFFSET UNITYSDK_OFFSET(0x1EB5E410)

namespace UnityEngine
{
	inline static constexpr unsigned int HelpURLAttribute_TypeDefinitionIndex = 5330;

	class HelpURLAttribute : public ::System::Attribute
	{
	public:
		::System::String* m_Url; // 0x10

		::System::String* get_URL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HELPURLATTRIBUTE_GET_URL_OFFSET))(this);
		}
	};
}
