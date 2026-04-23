#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_HELPURLATTRIBUTE_GET_URL_OFFSET UNITYSDK_OFFSET(0x1A44B6C0)
#define UNITYENGINE_HELPURLATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A44B6B0)

namespace UnityEngine
{
	inline static constexpr unsigned int HelpURLAttribute_TypeDefinitionIndex = 4118;

	class HelpURLAttribute : public ::System::Attribute
	{
	public:
		::System::String* m_Url; // 0x10

		::System::Void _ctor(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_HELPURLATTRIBUTE__CTOR_OFFSET))(this, url);
		}

		::System::String* get_URL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HELPURLATTRIBUTE_GET_URL_OFFSET))(this);
		}
	};
}
