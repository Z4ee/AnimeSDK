#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/XLua/LazyMemberTypes.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class PropertyInfo; }
namespace XLua { class ObjectTranslator; }
namespace XLua::LuaDLL { class lua_CSFunction; }

#define XLUA_UTILS_ABS_IDX_OFFSET UNITYSDK_OFFSET(0xCDF1DC0)
#define XLUA_UTILS_BEGINCLASSREGISTER_OFFSET UNITYSDK_OFFSET(0xCDF38C0)
#define XLUA_UTILS_BEGINOBJECTREGISTER_1_OFFSET UNITYSDK_OFFSET(0xCDF1240)
#define XLUA_UTILS_BEGINOBJECTREGISTER_OFFSET UNITYSDK_OFFSET(0xCDF05E0)
#define XLUA_UTILS_ENDCLASSREGISTER_OFFSET UNITYSDK_OFFSET(0xCDF3F70)
#define XLUA_UTILS_ENDOBJECTREGISTER_OFFSET UNITYSDK_OFFSET(0xCDF1DD0)
#define XLUA_UTILS_GENENUMCASTFROM_OFFSET UNITYSDK_OFFSET(0xCDE5EC0)
#define XLUA_UTILS_GENFIELDGETTER_OFFSET UNITYSDK_OFFSET(0xCDE5560)
#define XLUA_UTILS_GENFIELDSETTER_OFFSET UNITYSDK_OFFSET(0xCDE5660)
#define XLUA_UTILS_GENITEMGETTER_OFFSET UNITYSDK_OFFSET(0xCDE5760)
#define XLUA_UTILS_GENITEMSETTER_OFFSET UNITYSDK_OFFSET(0xCDE5B10)
#define XLUA_UTILS_GETALLTYPES_OFFSET UNITYSDK_OFFSET(0xCDE5200)
#define XLUA_UTILS_GETEXTENDEDTYPE_OFFSET UNITYSDK_OFFSET(0xCDF5CA0)
#define XLUA_UTILS_GETEXTENSIONMETHODSOF_OFFSET UNITYSDK_OFFSET(0xCDE5F40)
#define XLUA_UTILS_GETINTEGERUSERDATAPROPERTY_OFFSET UNITYSDK_OFFSET(0xCDE7C10)
#define XLUA_UTILS_GETMAINSTATE_OFFSET UNITYSDK_OFFSET(0xCDE4FE0)
#define XLUA_UTILS_GETPATHOFTYPE_OFFSET UNITYSDK_OFFSET(0xCDF4A00)
#define XLUA_UTILS_HASINTEGERUSERDATAATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xCDE7AA0)
#define XLUA_UTILS_ISINBLACKLIST_OFFSET UNITYSDK_OFFSET(0xCDF6500)
#define XLUA_UTILS_ISPARAMSMATCH_OFFSET UNITYSDK_OFFSET(0xCDF4F50)
#define XLUA_UTILS_ISPUBLIC_OFFSET UNITYSDK_OFFSET(0xCDF6160)
#define XLUA_UTILS_ISSTATICPINVOKECSFUNCTION_OFFSET UNITYSDK_OFFSET(0xCDF5F90)
#define XLUA_UTILS_ISSUPPORTEDMETHOD_OFFSET UNITYSDK_OFFSET(0xCDF54F0)
#define XLUA_UTILS_LAZYREFLECTIONCALL_OFFSET UNITYSDK_OFFSET(0xCDE34B0)
#define XLUA_UTILS_LOADCSTABLE_OFFSET UNITYSDK_OFFSET(0xCDECB00)
#define XLUA_UTILS_LOADFIELD_OFFSET UNITYSDK_OFFSET(0xCDE4E60)
#define XLUA_UTILS_LOADUPVALUE_OFFSET UNITYSDK_OFFSET(0xCDEB4E0)
#define XLUA_UTILS_MAKEGENERICMETHODWITHCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0xCDF59C0)
#define XLUA_UTILS_MAKEPRIVATEACCESSIBLE_OFFSET UNITYSDK_OFFSET(0xCDEBE40)
#define XLUA_UTILS_MAKEREFLECTIONWRAP_OFFSET UNITYSDK_OFFSET(0xCDE7CA0)
#define XLUA_UTILS_REFLECTIONWRAP_OFFSET UNITYSDK_OFFSET(0xCDECF20)
#define XLUA_UTILS_REGISTERENUMTYPE_OFFSET UNITYSDK_OFFSET(0xCDEB9B0)
#define XLUA_UTILS_REGISTERFUNC_OFFSET UNITYSDK_OFFSET(0xCDF2D20)
#define XLUA_UTILS_REGISTERLAZYFUNC_OFFSET UNITYSDK_OFFSET(0xCDF3590)
#define XLUA_UTILS_REGISTEROBJECT_OFFSET UNITYSDK_OFFSET(0xCDEBCE0)
#define XLUA_UTILS_REGISTERREFLECTIONFUNC_OFFSET UNITYSDK_OFFSET(0xCDF2ED0)
#define XLUA_UTILS_SETCSTABLE_OFFSET UNITYSDK_OFFSET(0xCDEFBC0)
#define XLUA_UTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xCDF6EA0)
#define XLUA_UTILS__M_REFLECTION_FUNC_OFFSET UNITYSDK_OFFSET(0xCDF3240)

namespace XLua
{
	inline static constexpr unsigned int Utils_TypeDefinitionIndex = 50596;

	class Utils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::XLua::LuaDLL::lua_CSFunction*>** StaticGet_funcs()
		{
			return (::System::Collections::Generic::List_1<::XLua::LuaDLL::lua_CSFunction*>**)Il2CppClass::FromTypeDefinitionIndex(Utils_TypeDefinitionIndex)->GetStaticField(0x6CD80);
		}
		// static const ::System::Int32 OBJ_META_IDX = 0xFFFFFFFC; // 0x0
		// static const ::System::Int32 METHOD_IDX = 0xFFFFFFFD; // 0x0
		// static const ::System::Int32 GETTER_IDX = 0xFFFFFFFE; // 0x0
		// static const ::System::Int32 SETTER_IDX = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 CLS_IDX = 0xFFFFFFFC; // 0x0
		// static const ::System::Int32 CLS_META_IDX = 0xFFFFFFFD; // 0x0
		// static const ::System::Int32 CLS_GETTER_IDX = 0xFFFFFFFE; // 0x0
		// static const ::System::Int32 CLS_SETTER_IDX = 0xFFFFFFFF; // 0x0
		// static const ::System::String* LuaIndexsFieldName; // 0x0
		// static const ::System::String* LuaNewIndexsFieldName; // 0x0
		// static const ::System::String* LuaClassIndexsFieldName; // 0x0
		// static const ::System::String* LuaClassNewIndexsFieldName; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_UTILS__CCTOR_OFFSET))();
		}

		static ::System::Boolean LoadField(::System::IntPtr a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_UTILS_LOADFIELD_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr GetMainState(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_UTILS_GETMAINSTATE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::Type*>* GetAllTypes(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_UTILS_GETALLTYPES_OFFSET))(a1, a2);
		}

		static ::XLua::LuaDLL::lua_CSFunction* genFieldGetter(::System::Type* a1, ::System::Reflection::FieldInfo* a2)
		{
			return ((::XLua::LuaDLL::lua_CSFunction*(*)(::System::Type*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS_GENFIELDGETTER_OFFSET))(a1, a2);
		}

		static ::XLua::LuaDLL::lua_CSFunction* genFieldSetter(::System::Type* a1, ::System::Reflection::FieldInfo* a2)
		{
			return ((::XLua::LuaDLL::lua_CSFunction*(*)(::System::Type*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS_GENFIELDSETTER_OFFSET))(a1, a2);
		}

		static ::XLua::LuaDLL::lua_CSFunction* genItemGetter(::System::Type* a1, ::Il2CppArray<::System::Reflection::PropertyInfo*>* a2)
		{
			return ((::XLua::LuaDLL::lua_CSFunction*(*)(::System::Type*, ::Il2CppArray<::System::Reflection::PropertyInfo*>*))((::PBYTE)hIl2Cpp + XLUA_UTILS_GENITEMGETTER_OFFSET))(a1, a2);
		}

		static ::XLua::LuaDLL::lua_CSFunction* genItemSetter(::System::Type* a1, ::Il2CppArray<::System::Reflection::PropertyInfo*>* a2)
		{
			return ((::XLua::LuaDLL::lua_CSFunction*(*)(::System::Type*, ::Il2CppArray<::System::Reflection::PropertyInfo*>*))((::PBYTE)hIl2Cpp + XLUA_UTILS_GENITEMSETTER_OFFSET))(a1, a2);
		}

		static ::XLua::LuaDLL::lua_CSFunction* genEnumCastFrom(::System::Type* a1)
		{
			return ((::XLua::LuaDLL::lua_CSFunction*(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_UTILS_GENENUMCASTFROM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* GetExtensionMethodsOf(::System::Type* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_UTILS_GETEXTENSIONMETHODSOF_OFFSET))(a1);
		}

		static ::System::Boolean HasIntegerUserDataAttribute(::System::Reflection::PropertyInfo* a1)
		{
			return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS_HASINTEGERUSERDATAATTRIBUTE_OFFSET))(a1);
		}

		static ::System::Reflection::PropertyInfo* GetIntegerUserDataProperty(::Il2CppArray<::System::Reflection::PropertyInfo*>* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::Il2CppArray<::System::Reflection::PropertyInfo*>*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS_GETINTEGERUSERDATAPROPERTY_OFFSET))(a1, a2);
		}

		static ::System::Void makeReflectionWrap(::System::IntPtr a1, ::System::Type* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Int32 a9, ::XLua::LuaDLL::lua_CSFunction*& a10, ::XLua::LuaDLL::lua_CSFunction*& a11, ::System::Reflection::BindingFlags a12)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Type*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::XLua::LuaDLL::lua_CSFunction*&, ::XLua::LuaDLL::lua_CSFunction*&, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + XLUA_UTILS_MAKEREFLECTIONWRAP_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
		}

		static ::System::Void loadUpvalue(::System::IntPtr a1, ::System::Type* a2, ::System::String* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Type*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_UTILS_LOADUPVALUE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void RegisterEnumType(::System::IntPtr a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_UTILS_REGISTERENUMTYPE_OFFSET))(a1, a2);
		}

		static ::System::Void MakePrivateAccessible(::System::IntPtr a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_UTILS_MAKEPRIVATEACCESSIBLE_OFFSET))(a1, a2);
		}

		static ::System::Int32 LazyReflectionCall(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_UTILS_LAZYREFLECTIONCALL_OFFSET))(a1);
		}

		static ::System::Void ReflectionWrap(::System::IntPtr a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_UTILS_REFLECTIONWRAP_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BeginObjectRegister(::System::Type* a1, ::System::IntPtr a2, ::XLua::ObjectTranslator* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::System::Type*, ::System::IntPtr, ::XLua::ObjectTranslator*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_UTILS_BEGINOBJECTREGISTER_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void BeginObjectRegister_1(::System::Type* a1, ::System::String* a2, ::System::IntPtr a3, ::XLua::ObjectTranslator* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Int32 a9)
		{
			return ((::System::Void(*)(::System::Type*, ::System::String*, ::System::IntPtr, ::XLua::ObjectTranslator*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_UTILS_BEGINOBJECTREGISTER_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Int32 abs_idx(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_UTILS_ABS_IDX_OFFSET))(a1, a2);
		}

		static ::System::Void EndObjectRegister(::System::Type* a1, ::System::IntPtr a2, ::XLua::ObjectTranslator* a3, ::XLua::LuaDLL::lua_CSFunction* a4, ::XLua::LuaDLL::lua_CSFunction* a5, ::System::Type* a6, ::XLua::LuaDLL::lua_CSFunction* a7, ::XLua::LuaDLL::lua_CSFunction* a8)
		{
			return ((::System::Void(*)(::System::Type*, ::System::IntPtr, ::XLua::ObjectTranslator*, ::XLua::LuaDLL::lua_CSFunction*, ::XLua::LuaDLL::lua_CSFunction*, ::System::Type*, ::XLua::LuaDLL::lua_CSFunction*, ::XLua::LuaDLL::lua_CSFunction*))((::PBYTE)hIl2Cpp + XLUA_UTILS_ENDOBJECTREGISTER_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void RegisterFunc(::System::IntPtr a1, ::System::Int32 a2, ::System::String* a3, ::XLua::LuaDLL::lua_CSFunction* a4)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::String*, ::XLua::LuaDLL::lua_CSFunction*))((::PBYTE)hIl2Cpp + XLUA_UTILS_REGISTERFUNC_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void RegisterReflectionFunc(::System::IntPtr a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_UTILS_REGISTERREFLECTIONFUNC_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 _m_reflection_func(::System::IntPtr a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_UTILS__M_REFLECTION_FUNC_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterLazyFunc(::System::IntPtr a1, ::System::Int32 a2, ::System::String* a3, ::System::Type* a4, ::XLua::LazyMemberTypes a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::String*, ::System::Type*, ::XLua::LazyMemberTypes, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_UTILS_REGISTERLAZYFUNC_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void RegisterObject(::System::IntPtr a1, ::XLua::ObjectTranslator* a2, ::System::Int32 a3, ::System::String* a4, ::System::Object* a5)
		{
			return ((::System::Void(*)(::System::IntPtr, ::XLua::ObjectTranslator*, ::System::Int32, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_UTILS_REGISTEROBJECT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void BeginClassRegister(::System::Type* a1, ::System::IntPtr a2, ::XLua::LuaDLL::lua_CSFunction* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::System::Type*, ::System::IntPtr, ::XLua::LuaDLL::lua_CSFunction*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_UTILS_BEGINCLASSREGISTER_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void EndClassRegister(::System::Type* a1, ::System::IntPtr a2, ::XLua::ObjectTranslator* a3)
		{
			return ((::System::Void(*)(::System::Type*, ::System::IntPtr, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_UTILS_ENDCLASSREGISTER_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* getPathOfType(::System::Type* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_UTILS_GETPATHOFTYPE_OFFSET))(a1);
		}

		static ::System::Void LoadCSTable(::System::IntPtr a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_UTILS_LOADCSTABLE_OFFSET))(a1, a2);
		}

		static ::System::Void SetCSTable(::System::IntPtr a1, ::System::Type* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_UTILS_SETCSTABLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsParamsMatch(::System::Reflection::MethodInfo* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS_ISPARAMSMATCH_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsSupportedMethod(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS_ISSUPPORTEDMETHOD_OFFSET))(a1);
		}

		static ::System::Reflection::MethodInfo* MakeGenericMethodWithConstraints(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS_MAKEGENERICMETHODWITHCONSTRAINTS_OFFSET))(a1);
		}

		static ::System::Type* getExtendedType(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Type*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS_GETEXTENDEDTYPE_OFFSET))(a1);
		}

		static ::System::Boolean IsStaticPInvokeCSFunction(::XLua::LuaDLL::lua_CSFunction* a1)
		{
			return ((::System::Boolean(*)(::XLua::LuaDLL::lua_CSFunction*))((::PBYTE)hIl2Cpp + XLUA_UTILS_ISSTATICPINVOKECSFUNCTION_OFFSET))(a1);
		}

		static ::System::Boolean IsPublic(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_UTILS_ISPUBLIC_OFFSET))(a1);
		}

		static ::System::Void IsInBlackList(::System::Reflection::MemberInfo* a1, ::System::Boolean& a2, ::System::String*& a3)
		{
			return ((::System::Void(*)(::System::Reflection::MemberInfo*, ::System::Boolean&, ::System::String*&))((::PBYTE)hIl2Cpp + XLUA_UTILS_ISINBLACKLIST_OFFSET))(a1, a2, a3);
		}
	};
}
