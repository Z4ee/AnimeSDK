#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json::Internal { class AutomataDictionary; }

#define UTF8JSON_UNITY_VECTOR4FORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1FBD06A0)
#define UTF8JSON_UNITY_VECTOR4FORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1FBD02C0)
#define UTF8JSON_UNITY_VECTOR4FORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBCFF00)

namespace Utf8Json::Unity
{
	inline static constexpr unsigned int Vector4Formatter_TypeDefinitionIndex = 95030;

	class Vector4Formatter : public ::System::Object
	{
	public:
		::Il2CppArray<::Il2CppArray<::System::Byte>*>* ____stringByteKeys; // 0x10
		::Utf8Json::Internal::AutomataDictionary* ____keyMapping; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_UNITY_VECTOR4FORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::UnityEngine::Vector4 value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::UnityEngine::Vector4, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_UNITY_VECTOR4FORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::UnityEngine::Vector4 Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_UNITY_VECTOR4FORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
