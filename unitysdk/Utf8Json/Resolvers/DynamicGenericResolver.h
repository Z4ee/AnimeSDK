#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }

#define UTF8JSON_RESOLVERS_DYNAMICGENERICRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3FD150)
#define UTF8JSON_RESOLVERS_DYNAMICGENERICRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3FD140)

namespace Utf8Json::Resolvers
{
	inline static constexpr unsigned int DynamicGenericResolver_TypeDefinitionIndex = 85536;

	class DynamicGenericResolver : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_Instance()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicGenericResolver_TypeDefinitionIndex)->GetStaticField(0x4A4A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_DYNAMICGENERICRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_DYNAMICGENERICRESOLVER__CCTOR_OFFSET))();
		}
	};
}
