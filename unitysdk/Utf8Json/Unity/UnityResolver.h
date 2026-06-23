#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_UNITY_UNITYRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E797470)
#define UTF8JSON_UNITY_UNITYRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E797460)

namespace Utf8Json::Unity
{
	inline static constexpr unsigned int UnityResolver_TypeDefinitionIndex = 91092;

	class UnityResolver : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_Instance()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(UnityResolver_TypeDefinitionIndex)->GetStaticField(0x4E9D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_UNITY_UNITYRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_UNITY_UNITYRESOLVER__CCTOR_OFFSET))();
		}
	};
}
