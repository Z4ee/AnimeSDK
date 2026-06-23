#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json::Internal { class AutomataDictionary; }

#define UTF8JSON_UNITY_QUATERNIONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E857370)
#define UTF8JSON_UNITY_QUATERNIONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E856F90)
#define UTF8JSON_UNITY_QUATERNIONFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E856BD0)

namespace Utf8Json::Unity
{
	inline static constexpr unsigned int QuaternionFormatter_TypeDefinitionIndex = 91098;

	class QuaternionFormatter : public ::System::Object
	{
	public:
		::Utf8Json::Internal::AutomataDictionary* ____keyMapping; // 0x10
		::Il2CppArray<::Il2CppArray<::System::Byte>*>* ____stringByteKeys; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_UNITY_QUATERNIONFORMATTER__CTOR_OFFSET))(this);
		}

		::System::Void Serialize(::Utf8Json::JsonWriter& writer, ::UnityEngine::Quaternion value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::UnityEngine::Quaternion, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_UNITY_QUATERNIONFORMATTER_SERIALIZE_OFFSET))(this, writer, value, formatterResolver);
		}

		::UnityEngine::Quaternion Deserialize(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_UNITY_QUATERNIONFORMATTER_DESERIALIZE_OFFSET))(this, reader, formatterResolver);
		}
	};
}
