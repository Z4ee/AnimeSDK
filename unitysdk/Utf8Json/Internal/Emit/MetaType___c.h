#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ConstructorInfo; }
namespace Utf8Json::Internal::Emit { class MetaMember; }

#define UTF8JSON_INTERNAL_EMIT_METATYPE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB25570)
#define UTF8JSON_INTERNAL_EMIT_METATYPE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB255B0)
#define UTF8JSON_INTERNAL_EMIT_METATYPE___C___CTOR_B__26_0_OFFSET UNITYSDK_OFFSET(0x1FB255C0)
#define UTF8JSON_INTERNAL_EMIT_METATYPE___C___CTOR_B__26_1_OFFSET UNITYSDK_OFFSET(0x1FB255F0)
#define UTF8JSON_INTERNAL_EMIT_METATYPE___C___CTOR_B__26_2_OFFSET UNITYSDK_OFFSET(0x1FB25640)
#define UTF8JSON_INTERNAL_EMIT_METATYPE___C___CTOR_B__26_3_OFFSET UNITYSDK_OFFSET(0x1FB25670)
#define UTF8JSON_INTERNAL_EMIT_METATYPE___C___CTOR_B__26_4_OFFSET UNITYSDK_OFFSET(0x1FB256A0)
#define UTF8JSON_INTERNAL_EMIT_METATYPE___C___CTOR_B__26_5_OFFSET UNITYSDK_OFFSET(0x1FB256B0)

namespace Utf8Json::Internal::Emit
{
	inline static constexpr unsigned int MetaType___c_TypeDefinitionIndex = 95191;

	class MetaType___c : public ::System::Object
	{
	public:
		static ::Utf8Json::Internal::Emit::MetaType___c** StaticGet___9()
		{
			return (::Utf8Json::Internal::Emit::MetaType___c**)Il2CppClass::FromTypeDefinitionIndex(MetaType___c_TypeDefinitionIndex)->GetStaticField(0x53220);
		}
		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>** StaticGet___9__26_2()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MetaType___c_TypeDefinitionIndex)->GetStaticField(0x53228);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Utf8Json::Internal::Emit::MetaMember*>, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Utf8Json::Internal::Emit::MetaMember*>>** StaticGet___9__26_5()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Utf8Json::Internal::Emit::MetaMember*>, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Utf8Json::Internal::Emit::MetaMember*>>**)Il2CppClass::FromTypeDefinitionIndex(MetaType___c_TypeDefinitionIndex)->GetStaticField(0x53230);
		}
		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Int32>** StaticGet___9__26_3()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MetaType___c_TypeDefinitionIndex)->GetStaticField(0x53238);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Utf8Json::Internal::Emit::MetaMember*>, ::System::String*>** StaticGet___9__26_4()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Utf8Json::Internal::Emit::MetaMember*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MetaType___c_TypeDefinitionIndex)->GetStaticField(0x53240);
		}
		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MetaType___c_TypeDefinitionIndex)->GetStaticField(0x53248);
		}
		static ::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>** StaticGet___9__26_1()
		{
			return (::System::Func_2<::System::Reflection::ConstructorInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MetaType___c_TypeDefinitionIndex)->GetStaticField(0x53250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METATYPE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METATYPE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__26_0(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METATYPE___C___CTOR_B__26_0_OFFSET))(this, x);
		}

		::System::Boolean __ctor_b__26_1(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METATYPE___C___CTOR_B__26_1_OFFSET))(this, x);
		}

		::System::Boolean __ctor_b__26_2(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METATYPE___C___CTOR_B__26_2_OFFSET))(this, x);
		}

		::System::Int32 __ctor_b__26_3(::System::Reflection::ConstructorInfo* x)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METATYPE___C___CTOR_B__26_3_OFFSET))(this, x);
		}

		::System::String* __ctor_b__26_4(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Utf8Json::Internal::Emit::MetaMember*> x)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Utf8Json::Internal::Emit::MetaMember*>))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METATYPE___C___CTOR_B__26_4_OFFSET))(this, x);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Utf8Json::Internal::Emit::MetaMember*> __ctor_b__26_5(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Utf8Json::Internal::Emit::MetaMember*> x)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Utf8Json::Internal::Emit::MetaMember*>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Utf8Json::Internal::Emit::MetaMember*>))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METATYPE___C___CTOR_B__26_5_OFFSET))(this, x);
		}
	};
}
