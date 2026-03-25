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
template <typename T1, typename T2> class __f__AnonymousType6_2;

#define XLUA_UTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x104918B0)
#define XLUA_UTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x104918E0)
#define XLUA_UTILS___C__GENITEMGETTER_B__5_0_OFFSET UNITYSDK_OFFSET(0x104918F0)
#define XLUA_UTILS___C__GENITEMSETTER_B__6_0_OFFSET UNITYSDK_OFFSET(0x104919A0)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_0_OFFSET UNITYSDK_OFFSET(0x10491D80)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_10_OFFSET UNITYSDK_OFFSET(0x10491A50)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_11_OFFSET UNITYSDK_OFFSET(0x10491AB0)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_1_OFFSET UNITYSDK_OFFSET(0x10491E30)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_2_OFFSET UNITYSDK_OFFSET(0x10491E40)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_3_OFFSET UNITYSDK_OFFSET(0x10491B10)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_4_OFFSET UNITYSDK_OFFSET(0x10491B40)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_5_OFFSET UNITYSDK_OFFSET(0x10491BA0)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_6_OFFSET UNITYSDK_OFFSET(0x10491C40)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_7_OFFSET UNITYSDK_OFFSET(0x10491C80)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_8_OFFSET UNITYSDK_OFFSET(0x10491CA0)
#define XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_9_OFFSET UNITYSDK_OFFSET(0x10491D70)
#define XLUA_UTILS___C__ISINBLACKLIST_B__49_0_OFFSET UNITYSDK_OFFSET(0x10491EC0)
#define XLUA_UTILS___C__MAKEREFLECTIONWRAP_B__10_0_OFFSET UNITYSDK_OFFSET(0x10491E50)
#define XLUA_UTILS___C__MAKEREFLECTIONWRAP_B__10_1_OFFSET UNITYSDK_OFFSET(0x10491E80)
#define XLUA_UTILS___C__MAKEREFLECTIONWRAP_B__10_2_OFFSET UNITYSDK_OFFSET(0x10491EB0)

namespace XLua
{
	inline static constexpr unsigned int Utils___c_TypeDefinitionIndex = 40543;

	class Utils___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>** StaticGet___9__8_2()
		{
			return (::System::Func_2<::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x475E0);
		}
		static ::System::Func_2<::System::Linq::IGrouping_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>** StaticGet___9__8_9()
		{
			return (::System::Func_2<::System::Linq::IGrouping_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x475E8);
		}
		static ::System::Func_2<::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x475F0);
		}
		static ::System::Func_2<::System::Reflection::PropertyInfo*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Reflection::PropertyInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x475F8);
		}
		static ::System::Func_2<::__f__AnonymousType6_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Type*>** StaticGet___9__8_6()
		{
			return (::System::Func_2<::__f__AnonymousType6_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x47600);
		}
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__8_11()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x47608);
		}
		static ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*, ::System::Boolean>** StaticGet___9__8_1()
		{
			return (::System::Func_2<::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x47610);
		}
		static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__8_10()
		{
			return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x47618);
		}
		static ::System::Func_2<::__f__AnonymousType6_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Boolean>** StaticGet___9__8_5()
		{
			return (::System::Func_2<::__f__AnonymousType6_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x47620);
		}
		static ::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Boolean>** StaticGet___9__49_0()
		{
			return (::System::Func_2<::System::Reflection::ParameterInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x47628);
		}
		static ::System::Func_2<::__f__AnonymousType6_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Reflection::MethodInfo*>** StaticGet___9__8_7()
		{
			return (::System::Func_2<::__f__AnonymousType6_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x47630);
		}
		static ::System::Func_3<::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*>** StaticGet___9__10_2()
		{
			return (::System::Func_3<::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x47638);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::String*>** StaticGet___9__10_1()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x47640);
		}
		static ::System::Func_3<::System::Type*, ::System::Reflection::MethodInfo*, ::__f__AnonymousType6_2<::System::Type*, ::System::Reflection::MethodInfo*>*>** StaticGet___9__8_4()
		{
			return (::System::Func_3<::System::Type*, ::System::Reflection::MethodInfo*, ::__f__AnonymousType6_2<::System::Type*, ::System::Reflection::MethodInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x47648);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::String*>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x47650);
		}
		static ::System::Func_2<::System::Reflection::PropertyInfo*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::Reflection::PropertyInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x47658);
		}
		static ::System::Func_2<::System::Linq::IGrouping_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Type*>** StaticGet___9__8_8()
		{
			return (::System::Func_2<::System::Linq::IGrouping_2<::System::Type*, ::System::Reflection::MethodInfo*>*, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x47660);
		}
		static ::System::Func_2<::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>** StaticGet___9__8_3()
		{
			return (::System::Func_2<::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x47668);
		}
		static ::XLua::Utils___c** StaticGet___9()
		{
			return (::XLua::Utils___c**)Il2CppClass::FromTypeDefinitionIndex(Utils___c_TypeDefinitionIndex)->GetStaticField(0x47670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_UTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _genItemGetter_b__5_0(::System::Reflection::PropertyInfo* prop)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GENITEMGETTER_B__5_0_OFFSET))(this, prop);
		}

		::System::Boolean _genItemSetter_b__6_0(::System::Reflection::PropertyInfo* prop)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GENITEMSETTER_B__6_0_OFFSET))(this, prop);
		}

		::System::Boolean _GetExtensionMethodsOf_b__8_10(::System::Type* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_10_OFFSET))(this, t);
		}

		::System::Boolean _GetExtensionMethodsOf_b__8_11(::System::Type* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_11_OFFSET))(this, t);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* _GetExtensionMethodsOf_b__8_3(::System::Type* type)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_3_OFFSET))(this, type);
		}

		::__f__AnonymousType6_2<::System::Type*, ::System::Reflection::MethodInfo*>* _GetExtensionMethodsOf_b__8_4(::System::Type* type, ::System::Reflection::MethodInfo* method)
		{
			return ((::__f__AnonymousType6_2<::System::Type*, ::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Type*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_4_OFFSET))(this, type, method);
		}

		::System::Boolean _GetExtensionMethodsOf_b__8_5(::__f__AnonymousType6_2<::System::Type*, ::System::Reflection::MethodInfo*>* __h__TransparentIdentifier0)
		{
			return ((::System::Boolean(*)(::PVOID, ::__f__AnonymousType6_2<::System::Type*, ::System::Reflection::MethodInfo*>*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_5_OFFSET))(this, __h__TransparentIdentifier0);
		}

		::System::Type* _GetExtensionMethodsOf_b__8_6(::__f__AnonymousType6_2<::System::Type*, ::System::Reflection::MethodInfo*>* __h__TransparentIdentifier0)
		{
			return ((::System::Type*(*)(::PVOID, ::__f__AnonymousType6_2<::System::Type*, ::System::Reflection::MethodInfo*>*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_6_OFFSET))(this, __h__TransparentIdentifier0);
		}

		::System::Reflection::MethodInfo* _GetExtensionMethodsOf_b__8_7(::__f__AnonymousType6_2<::System::Type*, ::System::Reflection::MethodInfo*>* __h__TransparentIdentifier0)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::__f__AnonymousType6_2<::System::Type*, ::System::Reflection::MethodInfo*>*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_7_OFFSET))(this, __h__TransparentIdentifier0);
		}

		::System::Type* _GetExtensionMethodsOf_b__8_8(::System::Linq::IGrouping_2<::System::Type*, ::System::Reflection::MethodInfo*>* g)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Linq::IGrouping_2<::System::Type*, ::System::Reflection::MethodInfo*>*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_8_OFFSET))(this, g);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* _GetExtensionMethodsOf_b__8_9(::System::Linq::IGrouping_2<::System::Type*, ::System::Reflection::MethodInfo*>* g)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Linq::IGrouping_2<::System::Type*, ::System::Reflection::MethodInfo*>*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_9_OFFSET))(this, g);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* _GetExtensionMethodsOf_b__8_0(::System::Type* ifType)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_0_OFFSET))(this, ifType);
		}

		::System::Boolean _GetExtensionMethodsOf_b__8_1(::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* methods)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_1_OFFSET))(this, methods);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* _GetExtensionMethodsOf_b__8_2(::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* methods)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__GETEXTENSIONMETHODSOF_B__8_2_OFFSET))(this, methods);
		}

		::System::String* _makeReflectionWrap_b__10_0(::System::Reflection::MethodInfo* p)
		{
			return ((::System::String*(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__MAKEREFLECTIONWRAP_B__10_0_OFFSET))(this, p);
		}

		::System::String* _makeReflectionWrap_b__10_1(::System::Reflection::MethodInfo* q)
		{
			return ((::System::String*(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__MAKEREFLECTIONWRAP_B__10_1_OFFSET))(this, q);
		}

		::System::Reflection::MethodInfo* _makeReflectionWrap_b__10_2(::System::Reflection::MethodInfo* p, ::System::Reflection::MethodInfo* q)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__MAKEREFLECTIONWRAP_B__10_2_OFFSET))(this, p, q);
		}

		::System::Boolean _IsInBlackList_b__49_0(::System::Reflection::ParameterInfo* p)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS___C__ISINBLACKLIST_B__49_0_OFFSET))(this, p);
		}
	};
}
