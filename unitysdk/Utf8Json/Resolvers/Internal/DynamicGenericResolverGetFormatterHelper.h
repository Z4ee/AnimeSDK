#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1E688090)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER_GETFORMATTER_OFFSET UNITYSDK_OFFSET(0x1E686A50)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6880E0)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicGenericResolverGetFormatterHelper_TypeDefinitionIndex = 91115;

	class DynamicGenericResolverGetFormatterHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>** StaticGet_formatterMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicGenericResolverGetFormatterHelper_TypeDefinitionIndex)->GetStaticField(0x4F2D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER__CCTOR_OFFSET))();
		}

		static ::System::Object* GetFormatter(::System::Type* t)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER_GETFORMATTER_OFFSET))(t);
		}

		static ::System::Object* CreateInstance(::System::Type* genericType, ::Il2CppArray<::System::Type*>* genericTypeArguments, ::Il2CppArray<::System::Object*>* arguments)
		{
			return ((::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICGENERICRESOLVERGETFORMATTERHELPER_CREATEINSTANCE_OFFSET))(genericType, genericTypeArguments, arguments);
		}
	};
}
