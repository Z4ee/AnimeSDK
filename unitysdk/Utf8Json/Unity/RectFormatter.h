#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json::Internal { class AutomataDictionary; }

#define UTF8JSON_UNITY_RECTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C1D6550)
#define UTF8JSON_UNITY_RECTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C1D6170)
#define UTF8JSON_UNITY_RECTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D5DB0)

namespace Utf8Json::Unity
{
	inline static constexpr unsigned int RectFormatter_TypeDefinitionIndex = 85527;

	class RectFormatter : public ::System::Object
	{
	public:
		::Utf8Json::Internal::AutomataDictionary* ____keyMapping; // 0x10
		::Il2CppArray<::Il2CppArray<::System::Byte>*>* ____stringByteKeys; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_UNITY_RECTFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::UnityEngine::Rect value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::UnityEngine::Rect, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_UNITY_RECTFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::UnityEngine::Rect Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_UNITY_RECTFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
