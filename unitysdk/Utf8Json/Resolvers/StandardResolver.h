#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_RESOLVERS_STANDARDRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C456B80)

namespace Utf8Json::Resolvers
{
	inline static constexpr unsigned int StandardResolver_TypeDefinitionIndex = 85540;

	class StandardResolver : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_Default()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x4A170);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_AllowPrivateCamelCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x4A178);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_ExcludeNullCamelCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x4A180);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_AllowPrivateExcludeNull()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x4A188);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_AllowPrivateExcludeNullSnakeCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x4A190);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_SnakeCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x4A198);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_ExcludeNullSnakeCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x4A1A0);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_ExcludeNull()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x4A1A8);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_AllowPrivateExcludeNullCamelCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x4A1B0);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_AllowPrivateSnakeCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x4A1B8);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_CamelCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x4A1C0);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_AllowPrivate()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(StandardResolver_TypeDefinitionIndex)->GetStaticField(0x4A1C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_STANDARDRESOLVER__CCTOR_OFFSET))();
		}
	};
}
