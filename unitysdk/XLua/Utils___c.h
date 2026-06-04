#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Linq { template <typename T1, typename T2> class IGrouping_2; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class ParameterInfo; }
namespace System::Reflection { class PropertyInfo; }
template <typename T1, typename T2> class __f__AnonymousType10_2;

#define XLUA_UTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1344D800)
#define XLUA_UTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1344D830)
#define XLUA_UTILS___C__GENITEMGETTER_B__5_0_OFFSET UNITYSDK_OFFSET(0x1344D840)
#define XLUA_UTILS___C__GENITEMSETTER_B__6_0_OFFSET UNITYSDK_OFFSET(0x1344D8E0)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_0_OFFSET UNITYSDK_OFFSET(0x1344DCA0)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_10_OFFSET UNITYSDK_OFFSET(0x1344D980)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_11_OFFSET UNITYSDK_OFFSET(0x1344D9E0)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_1_OFFSET UNITYSDK_OFFSET(0x1344DD40)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_2_OFFSET UNITYSDK_OFFSET(0x1344DD50)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_3_OFFSET UNITYSDK_OFFSET(0x1344DA40)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_4_OFFSET UNITYSDK_OFFSET(0x1344DA70)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_5_OFFSET UNITYSDK_OFFSET(0x1344DAD0)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_6_OFFSET UNITYSDK_OFFSET(0x1344DB60)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_7_OFFSET UNITYSDK_OFFSET(0x1344DBA0)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_8_OFFSET UNITYSDK_OFFSET(0x1344DBC0)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_9_OFFSET UNITYSDK_OFFSET(0x1344DC90)
#define XLUA_UTILS___C__ISINBLACKLIST_B__49_0_OFFSET UNITYSDK_OFFSET(0x1344DDD0)
#define XLUA_UTILS___C__MAKEREFLECTIONWRAP_B__10_0_OFFSET UNITYSDK_OFFSET(0x1344DD60)
#define XLUA_UTILS___C__MAKEREFLECTIONWRAP_B__10_1_OFFSET UNITYSDK_OFFSET(0x1344DD90)
#define XLUA_UTILS___C__MAKEREFLECTIONWRAP_B__10_2_OFFSET UNITYSDK_OFFSET(0x1344DDC0)

namespace XLua
{
	inline static constexpr unsigned int Utils___c_TypeDefinitionIndex = 47046;

	class Utils___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::__f__AnonymousType10_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Type*>** StaticGet___9__8_6()
		{
			return (::System::Func_2<::__f__AnonymousType10_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x58080);
		}
		static ::System::Func_3<::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*>** StaticGet___9__10_2()
		{
			return (::System::Func_3<::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x58088);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::String*>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x58090);
		}
		static ::System::Func_2<::__f__AnonymousType10_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Boolean>** StaticGet___9__8_5()
		{
			return (::System::Func_2<::__f__AnonymousType10_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x58098);
		}
		static ::System::Func_2<::System::Reflection::PropertyInfo*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::Reflection::PropertyInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x580A0);
		}
		static ::System::Func_2<::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x580A8);
		}
		static ::System::Func_2<::System::Linq::IGrouping_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Type*>** StaticGet___9__8_8()
		{
			return (::System::Func_2<::System::Linq::IGrouping_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x580B0);
		}
		static ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>** StaticGet___9__8_2()
		{
			return (::System::Func_2<::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x580B8);
		}
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__8_10()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x580C0);
		}
		static ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*, ::System::Boolean>** StaticGet___9__8_1()
		{
			return (::System::Func_2<::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x580C8);
		}
		static ::System::Func_2<::System::Linq::IGrouping_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>** StaticGet___9__8_9()
		{
			return (::System::Func_2<::System::Linq::IGrouping_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x580D0);
		}
		static ::XLua::Utils___c** StaticGet___9()
		{
			return (::XLua::Utils___c**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x580D8);
		}
		static ::System::Func_2<::__f__AnonymousType10_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Reflection::MethodInfo*>** StaticGet___9__8_7()
		{
			return (::System::Func_2<::__f__AnonymousType10_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x580E0);
		}
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__8_11()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x580E8);
		}
		static ::System::Func_2<::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>** StaticGet___9__8_3()
		{
			return (::System::Func_2<::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x580F0);
		}
		static ::System::Func_2<::System::Reflection::PropertyInfo*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Reflection::PropertyInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x580F8);
		}
		static ::System::Func_3<::System::Type*, ::System::Reflection::MethodInfo*, ::__f__AnonymousType10_2<::System::Type*, ::System::Reflection::MethodInfo*>*>** StaticGet___9__8_4()
		{
			return (::System::Func_3<::System::Type*, ::System::Reflection::MethodInfo*, ::__f__AnonymousType10_2<::System::Type*, ::System::Reflection::MethodInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x58100);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::String*>** StaticGet___9__10_1()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x58108);
		}
		static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Boolean>** StaticGet___9__49_0()
		{
			return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x58110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_UTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _genItemGetter_b__5_0(::System::Reflection::PropertyInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GENITEMGETTER_B__5_0_OFFSET))(this, a1);
		}

		::System::Boolean _genItemSetter_b__6_0(::System::Reflection::PropertyInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GENITEMSETTER_B__6_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetExtensionMethodsOf_b__8_10(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_10_OFFSET))(this, a1);
		}

		::System::Boolean _GetExtensionMethodsOf_b__8_11(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_11_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* _GetExtensionMethodsOf_b__8_3(::System::Type* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_3_OFFSET))(this, a1);
		}

		::__f__AnonymousType10_2<::System::Type*, ::System::Reflection::MethodInfo*>* _GetExtensionMethodsOf_b__8_4(::System::Type* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::__f__AnonymousType10_2<::System::Type*, ::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Type*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_4_OFFSET))(this, a1, a2);
		}

		::System::Boolean _GetExtensionMethodsOf_b__8_5(::__f__AnonymousType10_2<::System::Type*, ::System::Reflection::MethodInfo*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::__f__AnonymousType10_2<::System::Type*, ::System::Reflection::MethodInfo*>*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_5_OFFSET))(this, a1);
		}

		::System::Type* _GetExtensionMethodsOf_b__8_6(::__f__AnonymousType10_2<::System::Type*, ::System::Reflection::MethodInfo*>* a1)
		{
			return ((::System::Type*(*)(::PVOID, ::__f__AnonymousType10_2<::System::Type*, ::System::Reflection::MethodInfo*>*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_6_OFFSET))(this, a1);
		}

		::System::Reflection::MethodInfo* _GetExtensionMethodsOf_b__8_7(::__f__AnonymousType10_2<::System::Type*, ::System::Reflection::MethodInfo*>* a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::__f__AnonymousType10_2<::System::Type*, ::System::Reflection::MethodInfo*>*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_7_OFFSET))(this, a1);
		}

		::System::Type* _GetExtensionMethodsOf_b__8_8(::System::Linq::IGrouping_2<::System::Type*, ::System::Reflection::MethodInfo*>* a1)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Linq::IGrouping_2<::System::Type*, ::System::Reflection::MethodInfo*>*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_8_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* _GetExtensionMethodsOf_b__8_9(::System::Linq::IGrouping_2<::System::Type*, ::System::Reflection::MethodInfo*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Linq::IGrouping_2<::System::Type*, ::System::Reflection::MethodInfo*>*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_9_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* _GetExtensionMethodsOf_b__8_0(::System::Type* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetExtensionMethodsOf_b__8_1(::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* _GetExtensionMethodsOf_b__8_2(::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_2_OFFSET))(this, a1);
		}

		::System::String* _makeReflectionWrap_b__10_0(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__MAKEREFLECTIONWRAP_B__10_0_OFFSET))(this, a1);
		}

		::System::String* _makeReflectionWrap_b__10_1(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__MAKEREFLECTIONWRAP_B__10_1_OFFSET))(this, a1);
		}

		::System::Reflection::MethodInfo* _makeReflectionWrap_b__10_2(::System::Reflection::MethodInfo* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__MAKEREFLECTIONWRAP_B__10_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsInBlackList_b__49_0(::System::Reflection::ParameterInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__ISINBLACKLIST_B__49_0_OFFSET))(this, a1);
		}
	};
}
