#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json::Internal { class AutomataDictionary; }

#define UTF8JSON_UNITY_RECTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1F916220)
#define UTF8JSON_UNITY_RECTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1F915E40)
#define UTF8JSON_UNITY_RECTFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F915A80)

namespace Utf8Json::Unity
{
	inline static constexpr unsigned int RectFormatter_TypeDefinitionIndex = 95034;

	class RectFormatter : public ::System::Object
	{
	public:
		::Il2CppArray<::Il2CppArray<::System::Byte>*>* ____stringByteKeys; // 0x10
		::Utf8Json::Internal::AutomataDictionary* ____keyMapping; // 0x18

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
