#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace Utf8Json { class IJsonFormatter; }
namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { template <typename T> class IJsonFormatter_1; }
namespace Utf8Json::Internal::Emit { class DynamicAssembly; }

#define UTF8JSON_RESOLVERS_DYNAMICCOMPOSITERESOLVER_CREATE_OFFSET UNITYSDK_OFFSET(0x1E70A3E0)
#define UTF8JSON_RESOLVERS_DYNAMICCOMPOSITERESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E70A380)
#define UTF8JSON_RESOLVERS_DYNAMICCOMPOSITERESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E70A5A0)

namespace Utf8Json::Resolvers
{
	inline static constexpr unsigned int DynamicCompositeResolver_TypeDefinitionIndex = 91109;

	class DynamicCompositeResolver : public ::System::Object
	{
	public:
		static ::Utf8Json::Internal::Emit::DynamicAssembly** StaticGet_assembly()
		{
			return (::Utf8Json::Internal::Emit::DynamicAssembly**)Il2CppClass::FromTypeDefinitionIndex(DynamicCompositeResolver_TypeDefinitionIndex)->GetStaticField(0x4EC60);
		}
		// static const ::System::String* ModuleName; // 0x0
		::Il2CppArray<::Utf8Json::IJsonFormatter*>* formatters; // 0x10
		::Il2CppArray<::Utf8Json::IJsonFormatterResolver*>* resolvers; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_DYNAMICCOMPOSITERESOLVER__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::Il2CppArray<::Utf8Json::IJsonFormatter*>* formatters, ::Il2CppArray<::Utf8Json::IJsonFormatterResolver*>* resolvers)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Utf8Json::IJsonFormatter*>*, ::Il2CppArray<::Utf8Json::IJsonFormatterResolver*>*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_DYNAMICCOMPOSITERESOLVER__CTOR_OFFSET))(this, formatters, resolvers);
		}

		static ::Utf8Json::IJsonFormatterResolver* Create(::Il2CppArray<::Utf8Json::IJsonFormatter*>* formatters, ::Il2CppArray<::Utf8Json::IJsonFormatterResolver*>* resolvers)
		{
			return ((::Utf8Json::IJsonFormatterResolver*(*)(::Il2CppArray<::Utf8Json::IJsonFormatter*>*, ::Il2CppArray<::Utf8Json::IJsonFormatterResolver*>*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_DYNAMICCOMPOSITERESOLVER_CREATE_OFFSET))(formatters, resolvers);
		}
	};
}
