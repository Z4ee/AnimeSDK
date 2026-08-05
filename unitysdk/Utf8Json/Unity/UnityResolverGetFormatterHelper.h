#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define UTF8JSON_UNITY_UNITYRESOLVERGETFORMATTERHELPER_GETFORMATTER_OFFSET UNITYSDK_OFFSET(0x1F358040)
#define UTF8JSON_UNITY_UNITYRESOLVERGETFORMATTERHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F357670)

namespace Utf8Json::Unity
{
	inline static constexpr unsigned int UnityResolverGetFormatterHelper_TypeDefinitionIndex = 95027;

	class UnityResolverGetFormatterHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>** StaticGet_lookup()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UnityResolverGetFormatterHelper_TypeDefinitionIndex)->GetStaticField(0x52DC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_UNITY_UNITYRESOLVERGETFORMATTERHELPER__CCTOR_OFFSET))();
		}

		static ::System::Object* GetFormatter(::System::Type* t)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UTF8JSON_UNITY_UNITYRESOLVERGETFORMATTERHELPER_GETFORMATTER_OFFSET))(t);
		}
	};
}
