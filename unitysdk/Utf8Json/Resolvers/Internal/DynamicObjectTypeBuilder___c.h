#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/Resolvers/Internal/DynamicObjectTypeBuilder_DeserializeInfo.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class MethodInfo; }
namespace Utf8Json::Internal::Emit { class MetaMember; }

#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDANONYMOUSFORMATTER_B__7_0_OFFSET UNITYSDK_OFFSET(0x1F95CA60)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDANONYMOUSFORMATTER_B__7_3_OFFSET UNITYSDK_OFFSET(0x1F95CAA0)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDANONYMOUSFORMATTER_B__7_4_OFFSET UNITYSDK_OFFSET(0x1F95CAC0)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDCONSTRUCTOR_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F95CAE0)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDCONSTRUCTOR_B__8_1_OFFSET UNITYSDK_OFFSET(0x1F95CB00)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDCUSTOMFORMATTERFIELD_B__9_0_OFFSET UNITYSDK_OFFSET(0x1F95CB20)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZE_B__12_1_OFFSET UNITYSDK_OFFSET(0x1F95CBC0)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__10_0_OFFSET UNITYSDK_OFFSET(0x1F95CB50)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__10_2_OFFSET UNITYSDK_OFFSET(0x1F95CB70)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDTYPE_B__6_0_OFFSET UNITYSDK_OFFSET(0x1F95CA20)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F95C9D0)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F95CA10)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__EMITDESERIALIZEVALUE_B__13_0_OFFSET UNITYSDK_OFFSET(0x1F95CBF0)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__EMITNEWOBJECT_B__14_1_OFFSET UNITYSDK_OFFSET(0x1F95CC20)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__EMITNEWOBJECT_B__14_3_OFFSET UNITYSDK_OFFSET(0x1F95CC40)
#define UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__EMITSERIALIZEVALUE_B__11_0_OFFSET UNITYSDK_OFFSET(0x1F95CB90)

namespace Utf8Json::Resolvers::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c_TypeDefinitionIndex = 95088;

	class DynamicObjectTypeBuilder___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Utf8Json::Internal::Emit::MetaMember*, ::System::Boolean>** StaticGet___9__7_3()
		{
			return (::System::Func_2<::Utf8Json::Internal::Emit::MetaMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x52BF0);
		}
		static ::System::Func_2<::Utf8Json::Internal::Emit::MetaMember*, ::System::Boolean>** StaticGet___9__12_1()
		{
			return (::System::Func_2<::Utf8Json::Internal::Emit::MetaMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x52BF8);
		}
		static ::System::Func_2<::Utf8Json::Internal::Emit::MetaMember*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::Utf8Json::Internal::Emit::MetaMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x52C00);
		}
		static ::System::Func_2<::Utf8Json::Internal::Emit::MetaMember*, ::System::Boolean>** StaticGet___9__8_1()
		{
			return (::System::Func_2<::Utf8Json::Internal::Emit::MetaMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x52C08);
		}
		static ::System::Func_2<::Utf8Json::Internal::Emit::MetaMember*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::Utf8Json::Internal::Emit::MetaMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x52C10);
		}
		static ::System::Func_2<::Utf8Json::Internal::Emit::MetaMember*, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::Utf8Json::Internal::Emit::MetaMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x52C18);
		}
		static ::System::Func_2<::Utf8Json::Internal::Emit::MetaMember*, ::System::Boolean>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::Utf8Json::Internal::Emit::MetaMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x52C20);
		}
		static ::Utf8Json::Resolvers::Internal::DynamicObjectTypeBuilder___c** StaticGet___9()
		{
			return (::Utf8Json::Resolvers::Internal::DynamicObjectTypeBuilder___c**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x52C28);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x52C30);
		}
		static ::System::Func_2<::Utf8Json::Internal::Emit::MetaMember*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::Utf8Json::Internal::Emit::MetaMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x52C38);
		}
		static ::System::Func_2<::Utf8Json::Internal::Emit::MetaMember*, ::System::Boolean>** StaticGet___9__10_2()
		{
			return (::System::Func_2<::Utf8Json::Internal::Emit::MetaMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x52C40);
		}
		static ::System::Func_2<::Utf8Json::Internal::Emit::MetaMember*, ::System::Boolean>** StaticGet___9__7_4()
		{
			return (::System::Func_2<::Utf8Json::Internal::Emit::MetaMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x52C48);
		}
		static ::System::Func_2<::Utf8Json::Resolvers::Internal::DynamicObjectTypeBuilder_DeserializeInfo, ::System::Boolean>** StaticGet___9__14_3()
		{
			return (::System::Func_2<::Utf8Json::Resolvers::Internal::DynamicObjectTypeBuilder_DeserializeInfo, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x52C50);
		}
		static ::System::Func_2<::Utf8Json::Resolvers::Internal::DynamicObjectTypeBuilder_DeserializeInfo, ::System::Boolean>** StaticGet___9__14_1()
		{
			return (::System::Func_2<::Utf8Json::Resolvers::Internal::DynamicObjectTypeBuilder_DeserializeInfo, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x52C58);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectTypeBuilder___c_TypeDefinitionIndex)->GetStaticField(0x52C60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _BuildType_b__6_0(::Utf8Json::Internal::Emit::MetaMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Utf8Json::Internal::Emit::MetaMember*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDTYPE_B__6_0_OFFSET))(this, x);
		}

		::System::Boolean _BuildAnonymousFormatter_b__7_0(::Utf8Json::Internal::Emit::MetaMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Utf8Json::Internal::Emit::MetaMember*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDANONYMOUSFORMATTER_B__7_0_OFFSET))(this, x);
		}

		::System::Boolean _BuildAnonymousFormatter_b__7_3(::Utf8Json::Internal::Emit::MetaMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Utf8Json::Internal::Emit::MetaMember*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDANONYMOUSFORMATTER_B__7_3_OFFSET))(this, x);
		}

		::System::Boolean _BuildAnonymousFormatter_b__7_4(::Utf8Json::Internal::Emit::MetaMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Utf8Json::Internal::Emit::MetaMember*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDANONYMOUSFORMATTER_B__7_4_OFFSET))(this, x);
		}

		::System::Boolean _BuildConstructor_b__8_0(::Utf8Json::Internal::Emit::MetaMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Utf8Json::Internal::Emit::MetaMember*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDCONSTRUCTOR_B__8_0_OFFSET))(this, x);
		}

		::System::Boolean _BuildConstructor_b__8_1(::Utf8Json::Internal::Emit::MetaMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Utf8Json::Internal::Emit::MetaMember*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDCONSTRUCTOR_B__8_1_OFFSET))(this, x);
		}

		::System::Boolean _BuildCustomFormatterField_b__9_0(::Utf8Json::Internal::Emit::MetaMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Utf8Json::Internal::Emit::MetaMember*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDCUSTOMFORMATTERFIELD_B__9_0_OFFSET))(this, x);
		}

		::System::Boolean _BuildSerialize_b__10_0(::Utf8Json::Internal::Emit::MetaMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Utf8Json::Internal::Emit::MetaMember*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__10_0_OFFSET))(this, x);
		}

		::System::Boolean _BuildSerialize_b__10_2(::Utf8Json::Internal::Emit::MetaMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Utf8Json::Internal::Emit::MetaMember*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDSERIALIZE_B__10_2_OFFSET))(this, x);
		}

		::System::Int32 _EmitSerializeValue_b__11_0(::System::Reflection::MethodInfo* x)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__EMITSERIALIZEVALUE_B__11_0_OFFSET))(this, x);
		}

		::System::Boolean _BuildDeserialize_b__12_1(::Utf8Json::Internal::Emit::MetaMember* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Utf8Json::Internal::Emit::MetaMember*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__BUILDDESERIALIZE_B__12_1_OFFSET))(this, x);
		}

		::System::Int32 _EmitDeserializeValue_b__13_0(::System::Reflection::MethodInfo* x)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__EMITDESERIALIZEVALUE_B__13_0_OFFSET))(this, x);
		}

		::System::Boolean _EmitNewObject_b__14_1(::Utf8Json::Resolvers::Internal::DynamicObjectTypeBuilder_DeserializeInfo x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Utf8Json::Resolvers::Internal::DynamicObjectTypeBuilder_DeserializeInfo))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__EMITNEWOBJECT_B__14_1_OFFSET))(this, x);
		}

		::System::Boolean _EmitNewObject_b__14_3(::Utf8Json::Resolvers::Internal::DynamicObjectTypeBuilder_DeserializeInfo x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Utf8Json::Resolvers::Internal::DynamicObjectTypeBuilder_DeserializeInfo))((::PBYTE)hIl2Cpp + UTF8JSON_RESOLVERS_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__EMITNEWOBJECT_B__14_3_OFFSET))(this, x);
		}
	};
}
