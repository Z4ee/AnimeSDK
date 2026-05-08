#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class MethodInfo; }

#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C21F690)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_GETNULLABLEHASVALUE_OFFSET UNITYSDK_OFFSET(0x1C21F940)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C21F360)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C21FA70)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex = 85569;

	class DynamicObjectTypeBuilder_EmitInfo : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_GetCustomAttributeJsonFormatterAttribute()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex)->GetStaticField(0x4A370);
		}
		static ::System::Reflection::MethodInfo** StaticGet_GetTypeFromHandle()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex)->GetStaticField(0x4A378);
		}
		static ::System::Reflection::MethodInfo** StaticGet_GetUninitializedObject()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex)->GetStaticField(0x4A380);
		}
		static ::System::Reflection::MethodInfo** StaticGet_TypeGetProperty()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex)->GetStaticField(0x4A388);
		}
		static ::System::Reflection::MethodInfo** StaticGet_GetFormatterWithVerify()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex)->GetStaticField(0x4A390);
		}
		static ::System::Reflection::MethodInfo** StaticGet_GetTypeMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex)->GetStaticField(0x4A398);
		}
		static ::System::Reflection::MethodInfo** StaticGet_NongenericSerialize()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex)->GetStaticField(0x4A3A0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ActivatorCreateInstance()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex)->GetStaticField(0x4A3A8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_TypeEquals()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex)->GetStaticField(0x4A3B0);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_InvalidOperationExceptionConstructor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex)->GetStaticField(0x4A3B8);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_ObjectCtor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex)->GetStaticField(0x4A3C0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_TypeGetField()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex)->GetStaticField(0x4A3C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO__CCTOR_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* Serialize(::System::Type* type)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_SERIALIZE_OFFSET))(type);
		}

		static ::System::Reflection::MethodInfo* Deserialize(::System::Type* type)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_DESERIALIZE_OFFSET))(type);
		}

		static ::System::Reflection::MethodInfo* GetNullableHasValue(::System::Type* type)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_GETNULLABLEHASVALUE_OFFSET))(type);
		}
	};
}
