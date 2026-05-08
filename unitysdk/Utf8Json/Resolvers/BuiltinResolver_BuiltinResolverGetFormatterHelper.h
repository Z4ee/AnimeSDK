#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define UTF8JSON_RESOLVERS_BUILTINRESOLVER_BUILTINRESOLVERGETFORMATTERHELPER_GETFORMATTER_OFFSET UNITYSDK_OFFSET(0x1C38BF00)
#define UTF8JSON_RESOLVERS_BUILTINRESOLVER_BUILTINRESOLVERGETFORMATTERHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C38C000)

namespace Utf8Json::Resolvers
{
	inline static constexpr unsigned int BuiltinResolver_BuiltinResolverGetFormatterHelper_TypeDefinitionIndex = 85532;

	class BuiltinResolver_BuiltinResolverGetFormatterHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>** StaticGet_formatterMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(BuiltinResolver_BuiltinResolverGetFormatterHelper_TypeDefinitionIndex)->GetStaticField(0x4A6E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_BUILTINRESOLVER_BUILTINRESOLVERGETFORMATTERHELPER__CCTOR_OFFSET))();
		}

		static ::System::Object* GetFormatter(::System::Type* t)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_BUILTINRESOLVER_BUILTINRESOLVERGETFORMATTERHELPER_GETFORMATTER_OFFSET))(t);
		}
	};
}
