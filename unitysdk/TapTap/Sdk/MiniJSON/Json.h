#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define TAPTAP_SDK_MINIJSON_JSON_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A1BA7D0)
#define TAPTAP_SDK_MINIJSON_JSON_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A1BBF30)

namespace TapTap::Sdk::MiniJSON
{
	inline static constexpr unsigned int Json_TypeDefinitionIndex = 6466;

	class Json : public ::System::Object
	{
	public:
		static ::System::Object* Deserialize(::System::String* json)
		{
			return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_MINIJSON_JSON_DESERIALIZE_OFFSET))(json);
		}

		static ::System::String* Serialize(::System::Object* obj)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_MINIJSON_JSON_SERIALIZE_OFFSET))(obj);
		}
	};
}
