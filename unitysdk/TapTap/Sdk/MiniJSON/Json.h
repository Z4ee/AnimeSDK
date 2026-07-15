#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define TAPTAP_SDK_MINIJSON_JSON_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1D3650)
#define TAPTAP_SDK_MINIJSON_JSON_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1D4960)

namespace TapTap::Sdk::MiniJSON
{
	inline static constexpr unsigned int Json_TypeDefinitionIndex = 7088;

	class Json : public ::System::Object
	{
	public:
		static ::System::Object* Deserialize(::System::String* a1)
		{
			return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_MINIJSON_JSON_DESERIALIZE_OFFSET))(a1);
		}

		static ::System::String* Serialize(::System::Object* a1)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_MINIJSON_JSON_SERIALIZE_OFFSET))(a1);
		}
	};
}
