#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class ParameterInfo; }
namespace XLua { class DelegateBridgeBase; }

#define XLUA_OBJECTTRANSLATOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1164CEA0)
#define XLUA_OBJECTTRANSLATOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1164CED0)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6514_0_OFFSET UNITYSDK_OFFSET(0x1164D000)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6514_1_OFFSET UNITYSDK_OFFSET(0x1164CEE0)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6514_2_OFFSET UNITYSDK_OFFSET(0x1164CF40)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6514_3_OFFSET UNITYSDK_OFFSET(0x1164CF70)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6514_4_OFFSET UNITYSDK_OFFSET(0x1164CFD0)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6514_5_OFFSET UNITYSDK_OFFSET(0x1164D010)
#define XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6514_6_OFFSET UNITYSDK_OFFSET(0x1164D020)
#define XLUA_OBJECTTRANSLATOR___C__GETDELEGATE_B__6515_0_OFFSET UNITYSDK_OFFSET(0x1164D050)

namespace XLua
{
	inline static constexpr unsigned int ObjectTranslator___c_TypeDefinitionIndex = 46313;

	class ObjectTranslator___c : public ::System::Object
	{
	public:
		static ::XLua::ObjectTranslator___c** StaticGet___9()
		{
			return (::XLua::ObjectTranslator___c**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x13250);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>** StaticGet___9__6514_4()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x13258);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>** StaticGet___9__6514_2()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x13260);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__6514_3()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x13268);
		}
		static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>** StaticGet___9__6514_6()
		{
			return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x13270);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__6515_0()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x13278);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__6514_1()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x13280);
		}
		static ::System::Func_2<::XLua::DelegateBridgeBase*, ::System::Delegate*>** StaticGet___9__6514_5()
		{
			return (::System::Func_2<::XLua::DelegateBridgeBase*, ::System::Delegate*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x13288);
		}
		static ::System::Func_2<::XLua::DelegateBridgeBase*, ::System::Delegate*>** StaticGet___9__6514_0()
		{
			return (::System::Func_2<::XLua::DelegateBridgeBase*, ::System::Delegate*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectTranslator___c_TypeDefinitionIndex)->GetStaticField(0x13290);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _getCreatorUsingGeneric_b__6514_1(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6514_1_OFFSET))(this, m);
		}

		::System::Int32 _getCreatorUsingGeneric_b__6514_2(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6514_2_OFFSET))(this, m);
		}

		::System::Boolean _getCreatorUsingGeneric_b__6514_3(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6514_3_OFFSET))(this, m);
		}

		::System::Int32 _getCreatorUsingGeneric_b__6514_4(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6514_4_OFFSET))(this, m);
		}

		::System::Delegate* _getCreatorUsingGeneric_b__6514_0(::XLua::DelegateBridgeBase* x)
		{
			return ((::System::Delegate*(*)(::PVOID, ::XLua::DelegateBridgeBase*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6514_0_OFFSET))(this, x);
		}

		::System::Delegate* _getCreatorUsingGeneric_b__6514_5(::XLua::DelegateBridgeBase* x)
		{
			return ((::System::Delegate*(*)(::PVOID, ::XLua::DelegateBridgeBase*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6514_5_OFFSET))(this, x);
		}

		::System::Type* _getCreatorUsingGeneric_b__6514_6(::System::Reflection::ParameterInfo* pinfo)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETCREATORUSINGGENERIC_B__6514_6_OFFSET))(this, pinfo);
		}

		::System::Boolean _getDelegate_b__6515_0(::System::Reflection::MethodInfo* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR___C__GETDELEGATE_B__6515_0_OFFSET))(this, m);
		}
	};
}
