#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class ParameterInfo; }
namespace XLua { class DelegateBridgeBase; }

#define XLUA_OBJECTTRANSLATOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x132BD5C0)
#define XLUA_OBJECTTRANSLATOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x132BD5F0)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6632_0_OFFSET UNITYSDK_OFFSET(0x132BD720)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6632_1_OFFSET UNITYSDK_OFFSET(0x132BD600)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6632_2_OFFSET UNITYSDK_OFFSET(0x132BD660)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6632_3_OFFSET UNITYSDK_OFFSET(0x132BD690)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6632_4_OFFSET UNITYSDK_OFFSET(0x132BD6F0)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6632_5_OFFSET UNITYSDK_OFFSET(0x132BD730)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6632_6_OFFSET UNITYSDK_OFFSET(0x132BD740)
#define XLUA_OBJECTTRANSLATOR___C__GETDELEGATE_B__6633_0_OFFSET UNITYSDK_OFFSET(0x132BD770)

namespace XLua
{
	inline static constexpr unsigned int ObjectTranslator___c_TypeDefinitionIndex = 46903;

	class ObjectTranslator___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>** StaticGet___9__6632_2()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x2EA90);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__6632_3()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x2EA98);
		}
		static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>** StaticGet___9__6632_6()
		{
			return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x2EAA0);
		}
		static ::System::Func_2<::XLua::DelegateBridgeBase*, ::System::Delegate*>** StaticGet___9__6632_5()
		{
			return (::System::Func_2<::XLua::DelegateBridgeBase*, ::System::Delegate*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x2EAA8);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__6632_1()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x2EAB0);
		}
		static ::System::Func_2<::XLua::DelegateBridgeBase*, ::System::Delegate*>** StaticGet___9__6632_0()
		{
			return (::System::Func_2<::XLua::DelegateBridgeBase*, ::System::Delegate*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x2EAB8);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>** StaticGet___9__6632_4()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x2EAC0);
		}
		static ::XLua::ObjectTranslator___c** StaticGet___9()
		{
			return (::XLua::ObjectTranslator___c**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x2EAC8);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__6633_0()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x2EAD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _getCreatorUsingGeneric_b__6632_1(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6632_1_OFFSET))(this, a1);
		}

		::System::Int32 _getCreatorUsingGeneric_b__6632_2(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6632_2_OFFSET))(this, a1);
		}

		::System::Boolean _getCreatorUsingGeneric_b__6632_3(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6632_3_OFFSET))(this, a1);
		}

		::System::Int32 _getCreatorUsingGeneric_b__6632_4(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6632_4_OFFSET))(this, a1);
		}

		::System::Delegate* _getCreatorUsingGeneric_b__6632_0(::XLua::DelegateBridgeBase* a1)
		{
			return ((::System::Delegate*(*)(::PVOID, ::XLua::DelegateBridgeBase*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6632_0_OFFSET))(this, a1);
		}

		::System::Delegate* _getCreatorUsingGeneric_b__6632_5(::XLua::DelegateBridgeBase* a1)
		{
			return ((::System::Delegate*(*)(::PVOID, ::XLua::DelegateBridgeBase*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6632_5_OFFSET))(this, a1);
		}

		::System::Type* _getCreatorUsingGeneric_b__6632_6(::System::Reflection::ParameterInfo* a1)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6632_6_OFFSET))(this, a1);
		}

		::System::Boolean _getDelegate_b__6633_0(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETDELEGATE_B__6633_0_OFFSET))(this, a1);
		}
	};
}
