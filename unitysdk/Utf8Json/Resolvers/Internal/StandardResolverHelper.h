#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_RESOLVERS_INTERNAL_STANDARDRESOLVERHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC04640)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int StandardResolverHelper_TypeDefinitionIndex = 85598;

	class StandardResolverHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Utf8Json::IJsonFormatterResolver*>** StaticGet_CompositeResolverBase()
		{
			return (::Il2CppArray<::Utf8Json::IJsonFormatterResolver*>**)Il2CppClass::FromTypeDefinitionIndex(StandardResolverHelper_TypeDefinitionIndex)->GetStaticField(0x4A010);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_STANDARDRESOLVERHELPER__CCTOR_OFFSET))();
		}
	};
}
