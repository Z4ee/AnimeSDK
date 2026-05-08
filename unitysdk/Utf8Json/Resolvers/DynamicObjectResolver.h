#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_RESOLVERS_DYNAMICOBJECTRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C21E9D0)

namespace Utf8Json::Resolvers
{
	inline static constexpr unsigned int DynamicObjectResolver_TypeDefinitionIndex = 85538;

	class DynamicObjectResolver : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_ExcludeNull()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver_TypeDefinitionIndex)->GetStaticField(0x4A020);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_CamelCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver_TypeDefinitionIndex)->GetStaticField(0x4A028);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_AllowPrivate()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver_TypeDefinitionIndex)->GetStaticField(0x4A030);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_AllowPrivateExcludeNullCamelCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver_TypeDefinitionIndex)->GetStaticField(0x4A038);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_AllowPrivateExcludeNull()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver_TypeDefinitionIndex)->GetStaticField(0x4A040);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_AllowPrivateCamelCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver_TypeDefinitionIndex)->GetStaticField(0x4A048);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_ExcludeNullSnakeCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver_TypeDefinitionIndex)->GetStaticField(0x4A050);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_SnakeCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver_TypeDefinitionIndex)->GetStaticField(0x4A058);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_AllowPrivateExcludeNullSnakeCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver_TypeDefinitionIndex)->GetStaticField(0x4A060);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_Default()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver_TypeDefinitionIndex)->GetStaticField(0x4A068);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_AllowPrivateSnakeCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver_TypeDefinitionIndex)->GetStaticField(0x4A070);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_ExcludeNullCamelCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver_TypeDefinitionIndex)->GetStaticField(0x4A078);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_DYNAMICOBJECTRESOLVER__CCTOR_OFFSET))();
		}
	};
}
