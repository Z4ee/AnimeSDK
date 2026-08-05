#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }

#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_JSONREADER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB96BF0)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_EmitInfo_JsonReader_TypeDefinitionIndex = 95079;

	class DynamicObjectTypeBuilder_EmitInfo_JsonReader : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_ReadNextBlock()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonReader_TypeDefinitionIndex)->GetStaticField(0x52D30);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadPropertyNameSegmentUnsafe()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonReader_TypeDefinitionIndex)->GetStaticField(0x52D38);
		}
		static ::System::Reflection::MethodInfo** StaticGet_GetBufferUnsafe()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonReader_TypeDefinitionIndex)->GetStaticField(0x52D40);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadIsNull()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonReader_TypeDefinitionIndex)->GetStaticField(0x52D48);
		}
		static ::System::Reflection::MethodInfo** StaticGet_GetCurrentOffsetUnsafe()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonReader_TypeDefinitionIndex)->GetStaticField(0x52D50);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadIsBeginObjectWithVerify()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonReader_TypeDefinitionIndex)->GetStaticField(0x52D58);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ReadIsEndObjectWithSkipValueSeparator()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_JsonReader_TypeDefinitionIndex)->GetStaticField(0x52D60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_JSONREADER__CCTOR_OFFSET))();
		}
	};
}
