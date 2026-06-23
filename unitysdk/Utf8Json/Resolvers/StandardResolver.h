#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_RESOLVERS_STANDARDRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7971C0)

namespace Utf8Json::Resolvers
{
	inline static constexpr unsigned int StandardResolver_TypeDefinitionIndex = 91114;

	class StandardResolver : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_AllowPrivateSnakeCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x4E8C0);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_CamelCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x4E8C8);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_AllowPrivateExcludeNull()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x4E8D0);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_AllowPrivateCamelCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x4E8D8);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_ExcludeNull()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x4E8E0);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_ExcludeNullCamelCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x4E8E8);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_AllowPrivate()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x4E8F0);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_Default()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x4E8F8);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_SnakeCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x4E900);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_AllowPrivateExcludeNullCamelCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x4E908);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_AllowPrivateExcludeNullSnakeCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x4E910);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_ExcludeNullSnakeCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x4E918);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_STANDARDRESOLVER__CCTOR_OFFSET))();
		}
	};
}
