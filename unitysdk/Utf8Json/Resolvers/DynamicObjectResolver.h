#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_RESOLVERS_DYNAMICOBJECTRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E56B020)

namespace Utf8Json::Resolvers
{
	inline static constexpr unsigned int DynamicObjectResolver_TypeDefinitionIndex = 91112;

	class DynamicObjectResolver : public ::System::Object
	{
	public:
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_AllowPrivateExcludeNull()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver_TypeDefinitionIndex)->GetStaticField(0x4E770);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_ExcludeNullSnakeCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver_TypeDefinitionIndex)->GetStaticField(0x4E778);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_CamelCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver_TypeDefinitionIndex)->GetStaticField(0x4E780);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_Default()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver_TypeDefinitionIndex)->GetStaticField(0x4E788);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_ExcludeNull()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver_TypeDefinitionIndex)->GetStaticField(0x4E790);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_AllowPrivateCamelCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver_TypeDefinitionIndex)->GetStaticField(0x4E798);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_AllowPrivateExcludeNullSnakeCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver_TypeDefinitionIndex)->GetStaticField(0x4E7A0);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_AllowPrivate()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver_TypeDefinitionIndex)->GetStaticField(0x4E7A8);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_AllowPrivateSnakeCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver_TypeDefinitionIndex)->GetStaticField(0x4E7B0);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_ExcludeNullCamelCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver_TypeDefinitionIndex)->GetStaticField(0x4E7B8);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_AllowPrivateExcludeNullCamelCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver_TypeDefinitionIndex)->GetStaticField(0x4E7C0);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_SnakeCase()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver_TypeDefinitionIndex)->GetStaticField(0x4E7C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_DYNAMICOBJECTRESOLVER__CCTOR_OFFSET))();
		}
	};
}
