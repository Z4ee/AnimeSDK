#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json::Internal { class AutomataDictionary; }

#define UTF8JSON_UNITY_VECTOR2FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C4B9A20)
#define UTF8JSON_UNITY_VECTOR2FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C4B97F0)
#define UTF8JSON_UNITY_VECTOR2FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4B9580)

namespace Utf8Json::Unity
{
	inline static constexpr unsigned int Vector2Formatter_TypeDefinitionIndex = 85521;

	class Vector2Formatter : public ::System::Object
	{
	public:
		::Il2CppArray<::Il2CppArray<::System::Byte>*>* ____stringByteKeys; // 0x10
		::Utf8Json::Internal::AutomataDictionary* ____keyMapping; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_UNITY_VECTOR2FORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::UnityEngine::Vector2 value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::UnityEngine::Vector2, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_UNITY_VECTOR2FORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::UnityEngine::Vector2 Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_UNITY_VECTOR2FORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
