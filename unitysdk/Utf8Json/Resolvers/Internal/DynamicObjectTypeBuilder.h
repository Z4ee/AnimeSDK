#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/Internal/Emit/ArgumentField.h"
#include "unitysdk/Utf8Json/Resolvers/Internal/DynamicObjectTypeBuilder_DeserializeInfo.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class TypeInfo; }
namespace System::Reflection::Emit { class FieldBuilder; }
namespace System::Reflection::Emit { class ILGenerator; }
namespace System::Reflection::Emit { class LocalBuilder; }
namespace System::Reflection::Emit { class TypeBuilder; }
namespace System::Text::RegularExpressions { class Regex; }
namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json::Internal::Emit { class DynamicAssembly; }
namespace Utf8Json::Internal::Emit { class MetaMember; }
namespace Utf8Json::Internal::Emit { class MetaType; }

#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDANONYMOUSFORMATTER_OFFSET UNITYSDK_OFFSET(0x1BBFEA90)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1BBFB8C0)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDCUSTOMFORMATTERFIELD_OFFSET UNITYSDK_OFFSET(0x1BBFFD50)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BBFD760)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BBFC020)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDTYPE_OFFSET UNITYSDK_OFFSET(0x1BBFB320)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITDESERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x1BC01C60)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITNEWOBJECT_OFFSET UNITYSDK_OFFSET(0x1BC00E20)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITSERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x1BC003A0)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_ISSIDEEFFECTFREECONSTRUCTORTYPE_OFFSET UNITYSDK_OFFSET(0x1BC00930)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_TRYGETINTERFACEENUMERABLEELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BC00270)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC02120)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder_TypeDefinitionIndex = 85567;

	class DynamicObjectTypeBuilder : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_SubtractFullNameRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x4A2D0);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Type*>** StaticGet_jsonPrimitiveTypes()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x4A2D8);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Type*>** StaticGet_ignoreTypes()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x4A2E0);
		}
		static ::System::Int32* StaticGet_nameSequence()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder_TypeDefinitionIndex)->GetStaticField(0x12000);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER__CCTOR_OFFSET))();
		}

		static ::System::Reflection::TypeInfo* BuildType(::Utf8Json::Internal::Emit::DynamicAssembly* assembly, ::System::Type* type, ::System::Func_2<::System::String*, ::System::String*>* nameMutator, ::System::Boolean excludeNull)
		{
			return ((::System::Reflection::TypeInfo*(*)(::Utf8Json::Internal::Emit::DynamicAssembly*, ::System::Type*, ::System::Func_2<::System::String*, ::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDTYPE_OFFSET))(assembly, type, nameMutator, excludeNull);
		}

		static ::System::Object* BuildAnonymousFormatter(::System::Type* type, ::System::Func_2<::System::String*, ::System::String*>* nameMutator, ::System::Boolean excludeNull, ::System::Boolean allowPrivate, ::System::Boolean isException)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Func_2<::System::String*, ::System::String*>*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDANONYMOUSFORMATTER_OFFSET))(type, nameMutator, excludeNull, allowPrivate, isException);
		}

		static ::System::Collections::Generic::Dictionary_2<::Utf8Json::Internal::Emit::MetaMember*, ::System::Reflection::FieldInfo*>* BuildConstructor(::System::Reflection::Emit::TypeBuilder* builder, ::Utf8Json::Internal::Emit::MetaType* info, ::System::Reflection::ConstructorInfo* method, ::System::Reflection::Emit::FieldBuilder* stringByteKeysField, ::System::Reflection::Emit::ILGenerator* il, ::System::Boolean excludeNull, ::System::Boolean hasShouldSerialize)
		{
			return ((::System::Collections::Generic::Dictionary_2<::Utf8Json::Internal::Emit::MetaMember*, ::System::Reflection::FieldInfo*>*(*)(::System::Reflection::Emit::TypeBuilder*, ::Utf8Json::Internal::Emit::MetaType*, ::System::Reflection::ConstructorInfo*, ::System::Reflection::Emit::FieldBuilder*, ::System::Reflection::Emit::ILGenerator*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDCONSTRUCTOR_OFFSET))(builder, info, method, stringByteKeysField, il, excludeNull, hasShouldSerialize);
		}

		static ::System::Collections::Generic::Dictionary_2<::Utf8Json::Internal::Emit::MetaMember*, ::System::Reflection::FieldInfo*>* BuildCustomFormatterField(::System::Reflection::Emit::TypeBuilder* builder, ::Utf8Json::Internal::Emit::MetaType* info, ::System::Reflection::Emit::ILGenerator* il)
		{
			return ((::System::Collections::Generic::Dictionary_2<::Utf8Json::Internal::Emit::MetaMember*, ::System::Reflection::FieldInfo*>*(*)(::System::Reflection::Emit::TypeBuilder*, ::Utf8Json::Internal::Emit::MetaType*, ::System::Reflection::Emit::ILGenerator*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDCUSTOMFORMATTERFIELD_OFFSET))(builder, info, il);
		}

		static ::System::Void BuildSerialize(::System::Type* type, ::Utf8Json::Internal::Emit::MetaType* info, ::System::Reflection::Emit::ILGenerator* il, ::System::Action* emitStringByteKeys, ::System::Func_3<::System::Int32, ::Utf8Json::Internal::Emit::MetaMember*, ::System::Boolean>* tryEmitLoadCustomFormatter, ::System::Boolean excludeNull, ::System::Boolean hasShouldSerialize, ::System::Int32 firstArgIndex)
		{
			return ((::System::Void(*)(::System::Type*, ::Utf8Json::Internal::Emit::MetaType*, ::System::Reflection::Emit::ILGenerator*, ::System::Action*, ::System::Func_3<::System::Int32, ::Utf8Json::Internal::Emit::MetaMember*, ::System::Boolean>*, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDSERIALIZE_OFFSET))(type, info, il, emitStringByteKeys, tryEmitLoadCustomFormatter, excludeNull, hasShouldSerialize, firstArgIndex);
		}

		static ::System::Void EmitSerializeValue(::System::Reflection::TypeInfo* type, ::Utf8Json::Internal::Emit::MetaMember* member, ::System::Reflection::Emit::ILGenerator* il, ::System::Int32 index, ::System::Func_3<::System::Int32, ::Utf8Json::Internal::Emit::MetaMember*, ::System::Boolean>* tryEmitLoadCustomFormatter, ::Utf8Json::Internal::Emit::ArgumentField writer, ::Utf8Json::Internal::Emit::ArgumentField argValue, ::Utf8Json::Internal::Emit::ArgumentField argResolver)
		{
			return ((::System::Void(*)(::System::Reflection::TypeInfo*, ::Utf8Json::Internal::Emit::MetaMember*, ::System::Reflection::Emit::ILGenerator*, ::System::Int32, ::System::Func_3<::System::Int32, ::Utf8Json::Internal::Emit::MetaMember*, ::System::Boolean>*, ::Utf8Json::Internal::Emit::ArgumentField, ::Utf8Json::Internal::Emit::ArgumentField, ::Utf8Json::Internal::Emit::ArgumentField))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITSERIALIZEVALUE_OFFSET))(type, member, il, index, tryEmitLoadCustomFormatter, writer, argValue, argResolver);
		}

		static ::System::Void BuildDeserialize(::System::Type* type, ::Utf8Json::Internal::Emit::MetaType* info, ::System::Reflection::Emit::ILGenerator* il, ::System::Func_3<::System::Int32, ::Utf8Json::Internal::Emit::MetaMember*, ::System::Boolean>* tryEmitLoadCustomFormatter, ::System::Boolean useGetUninitializedObject, ::System::Int32 firstArgIndex)
		{
			return ((::System::Void(*)(::System::Type*, ::Utf8Json::Internal::Emit::MetaType*, ::System::Reflection::Emit::ILGenerator*, ::System::Func_3<::System::Int32, ::Utf8Json::Internal::Emit::MetaMember*, ::System::Boolean>*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_BUILDDESERIALIZE_OFFSET))(type, info, il, tryEmitLoadCustomFormatter, useGetUninitializedObject, firstArgIndex);
		}

		static ::System::Void EmitDeserializeValue(::System::Reflection::Emit::ILGenerator* il, ::Utf8Json::Resolvers::Internal::DynamicObjectTypeBuilder_DeserializeInfo info, ::System::Int32 index, ::System::Func_3<::System::Int32, ::Utf8Json::Internal::Emit::MetaMember*, ::System::Boolean>* tryEmitLoadCustomFormatter, ::Utf8Json::Internal::Emit::ArgumentField reader, ::Utf8Json::Internal::Emit::ArgumentField argResolver)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::Utf8Json::Resolvers::Internal::DynamicObjectTypeBuilder_DeserializeInfo, ::System::Int32, ::System::Func_3<::System::Int32, ::Utf8Json::Internal::Emit::MetaMember*, ::System::Boolean>*, ::Utf8Json::Internal::Emit::ArgumentField, ::Utf8Json::Internal::Emit::ArgumentField))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITDESERIALIZEVALUE_OFFSET))(il, info, index, tryEmitLoadCustomFormatter, reader, argResolver);
		}

		static ::System::Reflection::Emit::LocalBuilder* EmitNewObject(::System::Reflection::Emit::ILGenerator* il, ::System::Type* type, ::Utf8Json::Internal::Emit::MetaType* info, ::Il2CppArray<::Utf8Json::Resolvers::Internal::DynamicObjectTypeBuilder_DeserializeInfo>* members, ::System::Boolean isSideEffectFreeType)
		{
			return ((::System::Reflection::Emit::LocalBuilder*(*)(::System::Reflection::Emit::ILGenerator*, ::System::Type*, ::Utf8Json::Internal::Emit::MetaType*, ::Il2CppArray<::Utf8Json::Resolvers::Internal::DynamicObjectTypeBuilder_DeserializeInfo>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_EMITNEWOBJECT_OFFSET))(il, type, info, members, isSideEffectFreeType);
		}

		static ::System::Boolean IsSideEffectFreeConstructorType(::System::Reflection::ConstructorInfo* ctorInfo)
		{
			return ((::System::Boolean(*)(::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_ISSIDEEFFECTFREECONSTRUCTORTYPE_OFFSET))(ctorInfo);
		}

		static ::System::Boolean TryGetInterfaceEnumerableElementType(::System::Type* type, ::System::Type*& elementType)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*&))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER_TRYGETINTERFACEENUMERABLEELEMENTTYPE_OFFSET))(type, elementType);
		}
	};
}
