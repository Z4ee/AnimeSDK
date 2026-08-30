#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection { class MethodInfo; }
namespace XLua { class InternalGlobals_TryArrayGet; }
namespace XLua { class InternalGlobals_TryArraySet; }
namespace XLua { class ObjectTranslatorPool; }
namespace XLua::LuaDLL { class lua_CSFunction; }

#define XLUA_INTERNALGLOBALS_INITEXTENSIONMETHODS_00_OFFSET UNITYSDK_OFFSET(0x12B19960)
#define XLUA_INTERNALGLOBALS__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B191D0)
#define XLUA_INTERNALGLOBALS__CTOR_OFFSET UNITYSDK_OFFSET(0x12B1F9C0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals_TypeDefinitionIndex = 50466;

	class InternalGlobals : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_strBuff()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(InternalGlobals_TypeDefinitionIndex)->GetStaticField(0x65980);
		}
		static ::XLua::ObjectTranslatorPool** StaticGet_objectTranslatorPool()
		{
			return (::XLua::ObjectTranslatorPool**)Il2CppClass::FromTypeDefinitionIndex(InternalGlobals_TypeDefinitionIndex)->GetStaticField(0x65988);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>** StaticGet_extensionMethodMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(InternalGlobals_TypeDefinitionIndex)->GetStaticField(0x65990);
		}
		static ::XLua::InternalGlobals_TryArraySet** StaticGet_genTryArraySetPtr()
		{
			return (::XLua::InternalGlobals_TryArraySet**)Il2CppClass::FromTypeDefinitionIndex(InternalGlobals_TypeDefinitionIndex)->GetStaticField(0x65998);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_supportOp()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InternalGlobals_TypeDefinitionIndex)->GetStaticField(0x659A0);
		}
		static ::XLua::InternalGlobals_TryArrayGet** StaticGet_genTryArrayGetPtr()
		{
			return (::XLua::InternalGlobals_TryArrayGet**)Il2CppClass::FromTypeDefinitionIndex(InternalGlobals_TypeDefinitionIndex)->GetStaticField(0x659A8);
		}
		static ::XLua::LuaDLL::lua_CSFunction** StaticGet_LazyReflectionWrap()
		{
			return (::XLua::LuaDLL::lua_CSFunction**)Il2CppClass::FromTypeDefinitionIndex(InternalGlobals_TypeDefinitionIndex)->GetStaticField(0x659B0);
		}
		static ::System::Int32* StaticGet_LUA_REGISTRYINDEX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(InternalGlobals_TypeDefinitionIndex)->GetStaticField(0x150A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS__CTOR_OFFSET))(this);
		}

		static ::System::Void InitExtensionMethods_00(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS_INITEXTENSIONMETHODS_00_OFFSET))(a1);
		}
	};
}
