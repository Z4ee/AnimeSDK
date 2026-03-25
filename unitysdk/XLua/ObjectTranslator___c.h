#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class ParameterInfo; }
namespace XLua { class DelegateBridgeBase; }

#define XLUA_OBJECTTRANSLATOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1034E720)
#define XLUA_OBJECTTRANSLATOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1034E750)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6228_0_OFFSET UNITYSDK_OFFSET(0x1034E880)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6228_1_OFFSET UNITYSDK_OFFSET(0x1034E760)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6228_2_OFFSET UNITYSDK_OFFSET(0x1034E7C0)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6228_3_OFFSET UNITYSDK_OFFSET(0x1034E7F0)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6228_4_OFFSET UNITYSDK_OFFSET(0x1034E850)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6228_5_OFFSET UNITYSDK_OFFSET(0x1034E890)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6228_6_OFFSET UNITYSDK_OFFSET(0x1034E8A0)
#define XLUA_OBJECTTRANSLATOR___C__GETDELEGATE_B__6229_0_OFFSET UNITYSDK_OFFSET(0x1034E8D0)

namespace XLua
{
	inline static constexpr unsigned int ObjectTranslator___c_TypeDefinitionIndex = 40404;

	class ObjectTranslator___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>** StaticGet___9__6228_4()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x37650);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__6229_0()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x37658);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__6228_1()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x37660);
		}
		static ::System::Func_2<::XLua::DelegateBridgeBase*, ::System::Delegate*>** StaticGet___9__6228_0()
		{
			return (::System::Func_2<::XLua::DelegateBridgeBase*, ::System::Delegate*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x37668);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>** StaticGet___9__6228_2()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x37670);
		}
		static ::System::Func_2<::XLua::DelegateBridgeBase*, ::System::Delegate*>** StaticGet___9__6228_5()
		{
			return (::System::Func_2<::XLua::DelegateBridgeBase*, ::System::Delegate*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x37678);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__6228_3()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x37680);
		}
		static ::XLua::ObjectTranslator___c** StaticGet___9()
		{
			return (::XLua::ObjectTranslator___c**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x37688);
		}
		static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>** StaticGet___9__6228_6()
		{
			return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x37690);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _getCreatorUsingGeneric_b__6228_1(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6228_1_OFFSET))(this, m);
		}

		::System::Int32 _getCreatorUsingGeneric_b__6228_2(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6228_2_OFFSET))(this, m);
		}

		::System::Boolean _getCreatorUsingGeneric_b__6228_3(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6228_3_OFFSET))(this, m);
		}

		::System::Int32 _getCreatorUsingGeneric_b__6228_4(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6228_4_OFFSET))(this, m);
		}

		::System::Delegate* _getCreatorUsingGeneric_b__6228_0(::XLua::DelegateBridgeBase* x)
		{
			return ((::System::Delegate*(*)(::PVOID, ::XLua::DelegateBridgeBase*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6228_0_OFFSET))(this, x);
		}

		::System::Delegate* _getCreatorUsingGeneric_b__6228_5(::XLua::DelegateBridgeBase* x)
		{
			return ((::System::Delegate*(*)(::PVOID, ::XLua::DelegateBridgeBase*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6228_5_OFFSET))(this, x);
		}

		::System::Type* _getCreatorUsingGeneric_b__6228_6(::System::Reflection::ParameterInfo* pinfo)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6228_6_OFFSET))(this, pinfo);
		}

		::System::Boolean _getDelegate_b__6229_0(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETDELEGATE_B__6229_0_OFFSET))(this, m);
		}
	};
}
