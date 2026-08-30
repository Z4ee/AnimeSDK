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
template <typename T1, typename T2> class __f__AnonymousType12_2;

#define XLUA_UTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCDF6EE0)
#define XLUA_UTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCDF6F10)
#define XLUA_UTILS___C__GENITEMGETTER_B__5_0_OFFSET UNITYSDK_OFFSET(0xCDF6F20)
#define XLUA_UTILS___C__GENITEMSETTER_B__6_0_OFFSET UNITYSDK_OFFSET(0xCDF7100)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_0_OFFSET UNITYSDK_OFFSET(0xCDF77E0)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_10_OFFSET UNITYSDK_OFFSET(0xCDF72E0)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_11_OFFSET UNITYSDK_OFFSET(0xCDF73A0)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_1_OFFSET UNITYSDK_OFFSET(0xCDF7880)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_2_OFFSET UNITYSDK_OFFSET(0xCDF7890)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_3_OFFSET UNITYSDK_OFFSET(0xCDF7460)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_4_OFFSET UNITYSDK_OFFSET(0xCDF74F0)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_5_OFFSET UNITYSDK_OFFSET(0xCDF7550)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_6_OFFSET UNITYSDK_OFFSET(0xCDF7650)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_7_OFFSET UNITYSDK_OFFSET(0xCDF7690)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_8_OFFSET UNITYSDK_OFFSET(0xCDF76B0)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_9_OFFSET UNITYSDK_OFFSET(0xCDF77D0)
#define XLUA_UTILS___C__ISINBLACKLIST_B__51_0_OFFSET UNITYSDK_OFFSET(0xCDF79D0)
#define XLUA_UTILS___C__MAKEREFLECTIONWRAP_B__12_0_OFFSET UNITYSDK_OFFSET(0xCDF78A0)
#define XLUA_UTILS___C__MAKEREFLECTIONWRAP_B__12_1_OFFSET UNITYSDK_OFFSET(0xCDF7930)
#define XLUA_UTILS___C__MAKEREFLECTIONWRAP_B__12_2_OFFSET UNITYSDK_OFFSET(0xCDF79C0)

namespace XLua
{
	inline static constexpr unsigned int Utils___c_TypeDefinitionIndex = 50598;

	class Utils___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::__f__AnonymousType12_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Boolean>** StaticGet___9__8_5()
		{
			return (::System::Func_2<::__f__AnonymousType12_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x6CCE0);
		}
		static ::System::Func_3<::System::Type*, ::System::Reflection::MethodInfo*, ::__f__AnonymousType12_2<::System::Type*, ::System::Reflection::MethodInfo*>*>** StaticGet___9__8_4()
		{
			return (::System::Func_3<::System::Type*, ::System::Reflection::MethodInfo*, ::__f__AnonymousType12_2<::System::Type*, ::System::Reflection::MethodInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x6CCE8);
		}
		static ::XLua::Utils___c** StaticGet___9()
		{
			return (::XLua::Utils___c**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x6CCF0);
		}
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__8_10()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x6CCF8);
		}
		static ::System::Func_2<::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>** StaticGet___9__8_3()
		{
			return (::System::Func_2<::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x6CD00);
		}
		static ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>** StaticGet___9__8_2()
		{
			return (::System::Func_2<::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x6CD08);
		}
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__8_11()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x6CD10);
		}
		static ::System::Func_2<::__f__AnonymousType12_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Type*>** StaticGet___9__8_6()
		{
			return (::System::Func_2<::__f__AnonymousType12_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x6CD18);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::String*>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x6CD20);
		}
		static ::System::Func_2<::System::Linq::IGrouping_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Type*>** StaticGet___9__8_8()
		{
			return (::System::Func_2<::System::Linq::IGrouping_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x6CD28);
		}
		static ::System::Func_2<::System::Linq::IGrouping_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>** StaticGet___9__8_9()
		{
			return (::System::Func_2<::System::Linq::IGrouping_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x6CD30);
		}
		static ::System::Func_3<::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*>** StaticGet___9__12_2()
		{
			return (::System::Func_3<::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x6CD38);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::String*>** StaticGet___9__12_1()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x6CD40);
		}
		static ::System::Func_2<::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x6CD48);
		}
		static ::System::Func_2<::System::Reflection::PropertyInfo*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Reflection::PropertyInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x6CD50);
		}
		static ::System::Func_2<::__f__AnonymousType12_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Reflection::MethodInfo*>** StaticGet___9__8_7()
		{
			return (::System::Func_2<::__f__AnonymousType12_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x6CD58);
		}
		static ::System::Func_2<::System::Reflection::PropertyInfo*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::Reflection::PropertyInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x6CD60);
		}
		static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Boolean>** StaticGet___9__51_0()
		{
			return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x6CD68);
		}
		static ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*, ::System::Boolean>** StaticGet___9__8_1()
		{
			return (::System::Func_2<::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x6CD70);
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

		::__f__AnonymousType12_2<::System::Type*, ::System::Reflection::MethodInfo*>* _GetExtensionMethodsOf_b__8_4(::System::Type* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::__f__AnonymousType12_2<::System::Type*, ::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Type*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_4_OFFSET))(this, a1, a2);
		}

		::System::Boolean _GetExtensionMethodsOf_b__8_5(::__f__AnonymousType12_2<::System::Type*, ::System::Reflection::MethodInfo*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::__f__AnonymousType12_2<::System::Type*, ::System::Reflection::MethodInfo*>*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_5_OFFSET))(this, a1);
		}

		::System::Type* _GetExtensionMethodsOf_b__8_6(::__f__AnonymousType12_2<::System::Type*, ::System::Reflection::MethodInfo*>* a1)
		{
			return ((::System::Type*(*)(::PVOID, ::__f__AnonymousType12_2<::System::Type*, ::System::Reflection::MethodInfo*>*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_6_OFFSET))(this, a1);
		}

		::System::Reflection::MethodInfo* _GetExtensionMethodsOf_b__8_7(::__f__AnonymousType12_2<::System::Type*, ::System::Reflection::MethodInfo*>* a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::__f__AnonymousType12_2<::System::Type*, ::System::Reflection::MethodInfo*>*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_7_OFFSET))(this, a1);
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

		::System::String* _makeReflectionWrap_b__12_0(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__MAKEREFLECTIONWRAP_B__12_0_OFFSET))(this, a1);
		}

		::System::String* _makeReflectionWrap_b__12_1(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__MAKEREFLECTIONWRAP_B__12_1_OFFSET))(this, a1);
		}

		::System::Reflection::MethodInfo* _makeReflectionWrap_b__12_2(::System::Reflection::MethodInfo* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__MAKEREFLECTIONWRAP_B__12_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsInBlackList_b__51_0(::System::Reflection::ParameterInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__ISINBLACKLIST_B__51_0_OFFSET))(this, a1);
		}
	};
}
