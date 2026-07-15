#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_HELPURLATTRIBUTE_GET_URL_OFFSET UNITYSDK_OFFSET(0x1CCC5AB0)
#define UNITYENGINE_HELPURLATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCC5AA0)

namespace UnityEngine
{
	inline static constexpr unsigned int HelpURLAttribute_TypeDefinitionIndex = 4297;

	class HelpURLAttribute : public ::System::Attribute
	{
	public:
		::System::String* m_Url; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_HELPURLATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_URL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HELPURLATTRIBUTE_GET_URL_OFFSET))(this);
		}
	};
}
