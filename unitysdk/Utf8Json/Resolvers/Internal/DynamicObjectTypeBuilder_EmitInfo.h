#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class MethodInfo; }

#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1F95D190)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_GETNULLABLEHASVALUE_OFFSET UNITYSDK_OFFSET(0x1F95D440)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1F95CE60)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F95D570)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex = 95076;

	class DynamicObjectTypeBuilder_EmitInfo : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_TypeGetProperty()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex)->GetStaticField(0x52C70);
		}
		static ::System::Reflection::MethodInfo** StaticGet_GetTypeFromHandle()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex)->GetStaticField(0x52C78);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_ObjectCtor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex)->GetStaticField(0x52C80);
		}
		static ::System::Reflection::MethodInfo** StaticGet_ActivatorCreateInstance()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex)->GetStaticField(0x52C88);
		}
		static ::System::Reflection::ConstructorInfo** StaticGet_InvalidOperationExceptionConstructor()
		{
			return (::System::Reflection::ConstructorInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex)->GetStaticField(0x52C90);
		}
		static ::System::Reflection::MethodInfo** StaticGet_TypeEquals()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex)->GetStaticField(0x52C98);
		}
		static ::System::Reflection::MethodInfo** StaticGet_TypeGetField()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex)->GetStaticField(0x52CA0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_GetUninitializedObject()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex)->GetStaticField(0x52CA8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_GetFormatterWithVerify()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex)->GetStaticField(0x52CB0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_NongenericSerialize()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex)->GetStaticField(0x52CB8);
		}
		static ::System::Reflection::MethodInfo** StaticGet_GetTypeMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex)->GetStaticField(0x52CC0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_GetCustomAttributeJsonFormatterAttribute()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_EmitInfo_TypeDefinitionIndex)->GetStaticField(0x52CC8);
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
