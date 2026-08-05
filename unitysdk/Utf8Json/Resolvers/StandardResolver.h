#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_RESOLVERS_STANDARDRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB72190)

namespace Utf8Json::Resolvers
{
	inline static constexpr unsigned int StandardResolver_TypeDefinitionIndex = 95047;

	class StandardResolver : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_SnakeCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x52A70);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_ExcludeNullCamelCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x52A78);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_AllowPrivateCamelCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x52A80);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_AllowPrivateExcludeNullCamelCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x52A88);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_AllowPrivateExcludeNull()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x52A90);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_AllowPrivateExcludeNullSnakeCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x52A98);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_AllowPrivateSnakeCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x52AA0);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_AllowPrivate()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x52AA8);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_Default()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x52AB0);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_CamelCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x52AB8);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_ExcludeNullSnakeCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x52AC0);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_ExcludeNull()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x52AC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_STANDARDRESOLVER__CCTOR_OFFSET))();
		}
	};
}
