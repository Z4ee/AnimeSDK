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

#define XLUA_UTILS_ABS_IDX_OFFSET UNITYSDK_OFFSET(0x1048DCC0)
#define XLUA_UTILS_BEGINCLASSREGISTER_OFFSET UNITYSDK_OFFSET(0x1048F5B0)
#define XLUA_UTILS_BEGINOBJECTREGISTER_1_OFFSET UNITYSDK_OFFSET(0x1048D280)
#define XLUA_UTILS_BEGINOBJECTREGISTER_OFFSET UNITYSDK_OFFSET(0x1048C830)
#define XLUA_UTILS_ENDCLASSREGISTER_OFFSET UNITYSDK_OFFSET(0x1048FC80)
#define XLUA_UTILS_ENDOBJECTREGISTER_OFFSET UNITYSDK_OFFSET(0x1048DCD0)
#define XLUA_UTILS_GENENUMCASTFROM_OFFSET UNITYSDK_OFFSET(0x10484B70)
#define XLUA_UTILS_GENFIELDGETTER_OFFSET UNITYSDK_OFFSET(0x104844B0)
#define XLUA_UTILS_GENFIELDSETTER_OFFSET UNITYSDK_OFFSET(0x10484550)
#define XLUA_UTILS_GENITEMGETTER_OFFSET UNITYSDK_OFFSET(0x104845F0)
#define XLUA_UTILS_GENITEMSETTER_OFFSET UNITYSDK_OFFSET(0x104848B0)
#define XLUA_UTILS_GETALLTYPES_OFFSET UNITYSDK_OFFSET(0x104841B0)
#define XLUA_UTILS_GETEXTENDEDTYPE_OFFSET UNITYSDK_OFFSET(0x10490FD0)
#define XLUA_UTILS_GETEXTENSIONMETHODSOF_OFFSET UNITYSDK_OFFSET(0x10484BE0)
#define XLUA_UTILS_GETMAINSTATE_OFFSET UNITYSDK_OFFSET(0x10483F90)
#define XLUA_UTILS_GETPATHOFTYPE_OFFSET UNITYSDK_OFFSET(0x10490640)
#define XLUA_UTILS_ISINBLACKLIST_OFFSET UNITYSDK_OFFSET(0x10491330)
#define XLUA_UTILS_ISPARAMSMATCH_OFFSET UNITYSDK_OFFSET(0x104908C0)
#define XLUA_UTILS_ISPUBLIC_OFFSET UNITYSDK_OFFSET(0x104911E0)
#define XLUA_UTILS_ISSTATICPINVOKECSFUNCTION_OFFSET UNITYSDK_OFFSET(0x10491150)
#define XLUA_UTILS_ISSUPPORTEDMETHOD_OFFSET UNITYSDK_OFFSET(0x10490B50)
#define XLUA_UTILS_LAZYREFLECTIONCALL_OFFSET UNITYSDK_OFFSET(0x10482970)
#define XLUA_UTILS_LOADCSTABLE_OFFSET UNITYSDK_OFFSET(0x104892B0)
#define XLUA_UTILS_LOADFIELD_OFFSET UNITYSDK_OFFSET(0x10483E10)
#define XLUA_UTILS_LOADUPVALUE_OFFSET UNITYSDK_OFFSET(0x10487EE0)
#define XLUA_UTILS_MAKEGENERICMETHODWITHCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x10490D90)
#define XLUA_UTILS_MAKEPRIVATEACCESSIBLE_OFFSET UNITYSDK_OFFSET(0x10488850)
#define XLUA_UTILS_MAKEREFLECTIONWRAP_OFFSET UNITYSDK_OFFSET(0x10485D70)
#define XLUA_UTILS_REFLECTIONWRAP_OFFSET UNITYSDK_OFFSET(0x104896A0)
#define XLUA_UTILS_REGISTERENUMTYPE_OFFSET UNITYSDK_OFFSET(0x104883B0)
#define XLUA_UTILS_REGISTERFUNC_OFFSET UNITYSDK_OFFSET(0x1048EBC0)
#define XLUA_UTILS_REGISTERLAZYFUNC_OFFSET UNITYSDK_OFFSET(0x1048F2F0)
#define XLUA_UTILS_REGISTEROBJECT_OFFSET UNITYSDK_OFFSET(0x104886F0)
#define XLUA_UTILS_REGISTERREFLECTIONFUNC_OFFSET UNITYSDK_OFFSET(0x1048ED00)
#define XLUA_UTILS_SETCSTABLE_OFFSET UNITYSDK_OFFSET(0x1048BE50)
#define XLUA_UTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x10491870)
#define XLUA_UTILS__M_REFLECTION_FUNC_OFFSET UNITYSDK_OFFSET(0x1048EFA0)

namespace XLua
{
	inline static constexpr unsigned int Utils_TypeDefinitionIndex = 40541;

	class Utils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::XLua::LuaDLL::lua_CSFunction*>** StaticGet_funcs()
		{
			return (::System::Collections::Generic::List_1<::XLua::LuaDLL::lua_CSFunction*>**)Il2CppClass::FromTypeDefinitionIndex(Utils_TypeDefinitionIndex)->GetStaticField(0x478F0);
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

		static ::System::Boolean LoadField(::System::IntPtr L, ::System::Int32 idx, ::System::String* field_name)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_UTILS_LOADFIELD_OFFSET))(L, idx, field_name);
		}

		static ::System::IntPtr GetMainState(::System::IntPtr L)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_UTILS_GETMAINSTATE_OFFSET))(L);
		}

		static ::System::Collections::Generic::List_1<::System::Type*>* GetAllTypes(::System::Boolean exclude_generic_definition, ::System::Boolean withoutExeAssembly)
		{
			return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_UTILS_GETALLTYPES_OFFSET))(exclude_generic_definition, withoutExeAssembly);
		}

		static ::XLua::LuaDLL::lua_CSFunction* genFieldGetter(::System::Type* type, ::System::Reflection::FieldInfo* field)
		{
			return ((::XLua::LuaDLL::lua_CSFunction*(*)(::System::Type*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS_GENFIELDGETTER_OFFSET))(type, field);
		}

		static ::XLua::LuaDLL::lua_CSFunction* genFieldSetter(::System::Type* type, ::System::Reflection::FieldInfo* field)
		{
			return ((::XLua::LuaDLL::lua_CSFunction*(*)(::System::Type*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS_GENFIELDSETTER_OFFSET))(type, field);
		}

		static ::XLua::LuaDLL::lua_CSFunction* genItemGetter(::System::Type* type, ::Il2CppArray<::System::Reflection::PropertyInfo*>* props)
		{
			return ((::XLua::LuaDLL::lua_CSFunction*(*)(::System::Type*, ::Il2CppArray<::System::Reflection::PropertyInfo*>*))((::PBYTE)hIl2Cpp + XLUA_UTILS_GENITEMGETTER_OFFSET))(type, props);
		}

		static ::XLua::LuaDLL::lua_CSFunction* genItemSetter(::System::Type* type, ::Il2CppArray<::System::Reflection::PropertyInfo*>* props)
		{
			return ((::XLua::LuaDLL::lua_CSFunction*(*)(::System::Type*, ::Il2CppArray<::System::Reflection::PropertyInfo*>*))((::PBYTE)hIl2Cpp + XLUA_UTILS_GENITEMSETTER_OFFSET))(type, props);
		}

		static ::XLua::LuaDLL::lua_CSFunction* genEnumCastFrom(::System::Type* type)
		{
			return ((::XLua::LuaDLL::lua_CSFunction*(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_UTILS_GENENUMCASTFROM_OFFSET))(type);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* GetExtensionMethodsOf(::System::Type* type_to_be_extend)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_UTILS_GETEXTENSIONMETHODSOF_OFFSET))(type_to_be_extend);
		}

		static ::System::Void makeReflectionWrap(::System::IntPtr L, ::System::Type* type, ::System::Int32 cls_field, ::System::Int32 cls_getter, ::System::Int32 cls_setter, ::System::Int32 obj_field, ::System::Int32 obj_getter, ::System::Int32 obj_setter, ::System::Int32 obj_meta, ::XLua::LuaDLL::lua_CSFunction*& item_getter, ::XLua::LuaDLL::lua_CSFunction*& item_setter, ::System::Reflection::BindingFlags access)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Type*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::XLua::LuaDLL::lua_CSFunction*&, ::XLua::LuaDLL::lua_CSFunction*&, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + XLUA_UTILS_MAKEREFLECTIONWRAP_OFFSET))(L, type, cls_field, cls_getter, cls_setter, obj_field, obj_getter, obj_setter, obj_meta, item_getter, item_setter, access);
		}

		static ::System::Void loadUpvalue(::System::IntPtr L, ::System::Type* type, ::System::String* metafunc, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Type*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_UTILS_LOADUPVALUE_OFFSET))(L, type, metafunc, index);
		}

		static ::System::Void RegisterEnumType(::System::IntPtr L, ::System::Type* type)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_UTILS_REGISTERENUMTYPE_OFFSET))(L, type);
		}

		static ::System::Void MakePrivateAccessible(::System::IntPtr L, ::System::Type* type)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_UTILS_MAKEPRIVATEACCESSIBLE_OFFSET))(L, type);
		}

		static ::System::Int32 LazyReflectionCall(::System::IntPtr L)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_UTILS_LAZYREFLECTIONCALL_OFFSET))(L);
		}

		static ::System::Void ReflectionWrap(::System::IntPtr L, ::System::Type* type, ::System::Boolean privateAccessible)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_UTILS_REFLECTIONWRAP_OFFSET))(L, type, privateAccessible);
		}

		static ::System::Void BeginObjectRegister(::System::Type* type, ::System::IntPtr L, ::XLua::ObjectTranslator* translator, ::System::Int32 meta_count, ::System::Int32 method_count, ::System::Int32 getter_count, ::System::Int32 setter_count, ::System::Int32 type_id)
		{
			return ((::System::Void(*)(::System::Type*, ::System::IntPtr, ::XLua::ObjectTranslator*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_UTILS_BEGINOBJECTREGISTER_OFFSET))(type, L, translator, meta_count, method_count, getter_count, setter_count, type_id);
		}

		static ::System::Void BeginObjectRegister_1(::System::Type* type, ::System::String* fullName, ::System::IntPtr L, ::XLua::ObjectTranslator* translator, ::System::Int32 meta_count, ::System::Int32 method_count, ::System::Int32 getter_count, ::System::Int32 setter_count, ::System::Int32 type_id)
		{
			return ((::System::Void(*)(::System::Type*, ::System::String*, ::System::IntPtr, ::XLua::ObjectTranslator*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_UTILS_BEGINOBJECTREGISTER_1_OFFSET))(type, fullName, L, translator, meta_count, method_count, getter_count, setter_count, type_id);
		}

		static ::System::Int32 abs_idx(::System::Int32 top, ::System::Int32 idx)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_UTILS_ABS_IDX_OFFSET))(top, idx);
		}

		static ::System::Void EndObjectRegister(::System::Type* type, ::System::IntPtr L, ::XLua::ObjectTranslator* translator, ::XLua::LuaDLL::lua_CSFunction* csIndexer, ::XLua::LuaDLL::lua_CSFunction* csNewIndexer, ::System::Type* base_type, ::XLua::LuaDLL::lua_CSFunction* arrayIndexer, ::XLua::LuaDLL::lua_CSFunction* arrayNewIndexer)
		{
			return ((::System::Void(*)(::System::Type*, ::System::IntPtr, ::XLua::ObjectTranslator*, ::XLua::LuaDLL::lua_CSFunction*, ::XLua::LuaDLL::lua_CSFunction*, ::System::Type*, ::XLua::LuaDLL::lua_CSFunction*, ::XLua::LuaDLL::lua_CSFunction*))((::PBYTE)hIl2Cpp + XLUA_UTILS_ENDOBJECTREGISTER_OFFSET))(type, L, translator, csIndexer, csNewIndexer, base_type, arrayIndexer, arrayNewIndexer);
		}

		static ::System::Void RegisterFunc(::System::IntPtr L, ::System::Int32 idx, ::System::String* name, ::XLua::LuaDLL::lua_CSFunction* func)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::String*, ::XLua::LuaDLL::lua_CSFunction*))((::PBYTE)hIl2Cpp + XLUA_UTILS_REGISTERFUNC_OFFSET))(L, idx, name, func);
		}

		static ::System::Void RegisterReflectionFunc(::System::IntPtr L, ::System::Int32 idx, ::System::String* name)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_UTILS_REGISTERREFLECTIONFUNC_OFFSET))(L, idx, name);
		}

		static ::System::Int32 _m_reflection_func(::System::IntPtr L, ::System::String* funcName)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_UTILS__M_REFLECTION_FUNC_OFFSET))(L, funcName);
		}

		static ::System::Void RegisterLazyFunc(::System::IntPtr L, ::System::Int32 idx, ::System::String* name, ::System::Type* type, ::XLua::LazyMemberTypes memberType, ::System::Boolean isStatic)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::String*, ::System::Type*, ::XLua::LazyMemberTypes, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_UTILS_REGISTERLAZYFUNC_OFFSET))(L, idx, name, type, memberType, isStatic);
		}

		static ::System::Void RegisterObject(::System::IntPtr L, ::XLua::ObjectTranslator* translator, ::System::Int32 idx, ::System::String* name, ::System::Object* obj)
		{
			return ((::System::Void(*)(::System::IntPtr, ::XLua::ObjectTranslator*, ::System::Int32, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_UTILS_REGISTEROBJECT_OFFSET))(L, translator, idx, name, obj);
		}

		static ::System::Void BeginClassRegister(::System::Type* type, ::System::IntPtr L, ::XLua::LuaDLL::lua_CSFunction* creator, ::System::Int32 class_field_count, ::System::Int32 static_getter_count, ::System::Int32 static_setter_count)
		{
			return ((::System::Void(*)(::System::Type*, ::System::IntPtr, ::XLua::LuaDLL::lua_CSFunction*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_UTILS_BEGINCLASSREGISTER_OFFSET))(type, L, creator, class_field_count, static_getter_count, static_setter_count);
		}

		static ::System::Void EndClassRegister(::System::Type* type, ::System::IntPtr L, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::System::Type*, ::System::IntPtr, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_UTILS_ENDCLASSREGISTER_OFFSET))(type, L, translator);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* getPathOfType(::System::Type* type)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_UTILS_GETPATHOFTYPE_OFFSET))(type);
		}

		static ::System::Void LoadCSTable(::System::IntPtr L, ::System::Type* type)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_UTILS_LOADCSTABLE_OFFSET))(L, type);
		}

		static ::System::Void SetCSTable(::System::IntPtr L, ::System::Type* type, ::System::Int32 cls_table)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Type*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_UTILS_SETCSTABLE_OFFSET))(L, type, cls_table);
		}

		static ::System::Boolean IsParamsMatch(::System::Reflection::MethodInfo* delegateMethod, ::System::Reflection::MethodInfo* bridgeMethod)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS_ISPARAMSMATCH_OFFSET))(delegateMethod, bridgeMethod);
		}

		static ::System::Boolean IsSupportedMethod(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS_ISSUPPORTEDMETHOD_OFFSET))(method);
		}

		static ::System::Reflection::MethodInfo* MakeGenericMethodWithConstraints(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS_MAKEGENERICMETHODWITHCONSTRAINTS_OFFSET))(method);
		}

		static ::System::Type* getExtendedType(::System::Reflection::MethodInfo* method)
		{
			return ((::System::Type*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + XLUA_UTILS_GETEXTENDEDTYPE_OFFSET))(method);
		}

		static ::System::Boolean IsStaticPInvokeCSFunction(::XLua::LuaDLL::lua_CSFunction* csFunction)
		{
			return ((::System::Boolean(*)(::XLua::LuaDLL::lua_CSFunction*))((::PBYTE)hIl2Cpp + XLUA_UTILS_ISSTATICPINVOKECSFUNCTION_OFFSET))(csFunction);
		}

		static ::System::Boolean IsPublic(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_UTILS_ISPUBLIC_OFFSET))(type);
		}

		static ::System::Void IsInBlackList(::System::Reflection::MemberInfo* member, ::System::Boolean& isInBlackList, ::System::String*& reason)
		{
			return ((::System::Void(*)(::System::Reflection::MemberInfo*, ::System::Boolean&, ::System::String*&))((::PBYTE)hIl2Cpp + XLUA_UTILS_ISINBLACKLIST_OFFSET))(member, isInBlackList, reason);
		}
	};
}
