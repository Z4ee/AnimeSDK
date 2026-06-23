#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }

#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_JSONWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF66FB0)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex = 91144;

	class DynamicObjectTypeBuilder_EmitInfo_JsonWriter : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_WriteBeginObject()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x4EB20);
		}
		static ::System::Reflection::MethodInfo** StaticGet_WriteNull()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x4EB28);
		}
		static ::System::Reflection::MethodInfo** StaticGet_WriteEndObject()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x4EB30);
		}
		static ::System::Reflection::MethodInfo** StaticGet_WriteRaw()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x4EB38);
		}
		static ::System::Reflection::MethodInfo** StaticGet_GetEncodedPropertyName()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x4EB40);
		}
		static ::System::Reflection::MethodInfo** StaticGet_GetEncodedPropertyNameWithoutQuotation()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x4EB48);
		}
		static ::System::Reflection::MethodInfo** StaticGet_WriteValueSeparator()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x4EB50);
		}
		static ::System::Reflection::MethodInfo** StaticGet_GetEncodedPropertyNameWithBeginObject()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x4EB58);
		}
		static ::System::Reflection::MethodInfo** StaticGet_GetEncodedPropertyNameWithPrefixValueSeparator()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x4EB60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_JSONWRITER__CCTOR_OFFSET))();
		}
	};
}
