#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }

#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_JSONWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F356180)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex = 95077;

	class DynamicObjectTypeBuilder_EmitInfo_JsonWriter : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_WriteValueSeparator()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x52CD0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_GetEncodedPropertyNameWithBeginObject()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x52CD8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_WriteNull()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x52CE0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_WriteBeginObject()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x52CE8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_GetEncodedPropertyNameWithPrefixValueSeparator()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x52CF0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_WriteRaw()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x52CF8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_WriteEndObject()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x52D00);
		}
		static ::System::Reflection::MethodInfo** StaticGet_GetEncodedPropertyNameWithoutQuotation()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x52D08);
		}
		static ::System::Reflection::MethodInfo** StaticGet_GetEncodedPropertyName()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonWriter_TypeDefinitionIndex)->GetStaticField(0x52D10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_JSONWRITER__CCTOR_OFFSET))();
		}
	};
}
