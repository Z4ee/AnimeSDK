#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/Binder.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/ParameterModifier.h"

namespace System { class Object; }
namespace System { class RuntimeType; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class ParameterInfo; }
namespace System::Reflection { class PropertyInfo; }

#define SYSTEM_DEFAULTBINDER_BINDTOFIELD_OFFSET UNITYSDK_OFFSET(0x1C314150)
#define SYSTEM_DEFAULTBINDER_BINDTOMETHOD_OFFSET UNITYSDK_OFFSET(0x1C310CA0)
#define SYSTEM_DEFAULTBINDER_CANCONVERTPRIMITIVEOBJECTTOTYPE_OFFSET UNITYSDK_OFFSET(0x1C313D70)
#define SYSTEM_DEFAULTBINDER_CANCONVERTPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x1C315370)
#define SYSTEM_DEFAULTBINDER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x1C316890)
#define SYSTEM_DEFAULTBINDER_COMPAREMETHODSIGANDNAME_OFFSET UNITYSDK_OFFSET(0x1C317510)
#define SYSTEM_DEFAULTBINDER_CREATEPARAMORDER_OFFSET UNITYSDK_OFFSET(0x1C313910)
#define SYSTEM_DEFAULTBINDER_EXACTBINDING_OFFSET UNITYSDK_OFFSET(0x1C316C90)
#define SYSTEM_DEFAULTBINDER_EXACTPROPERTYBINDING_OFFSET UNITYSDK_OFFSET(0x1C3170F0)
#define SYSTEM_DEFAULTBINDER_FINDMOSTDERIVEDNEWSLOTMETH_OFFSET UNITYSDK_OFFSET(0x1C316FB0)
#define SYSTEM_DEFAULTBINDER_FINDMOSTSPECIFICFIELD_OFFSET UNITYSDK_OFFSET(0x1C314950)
#define SYSTEM_DEFAULTBINDER_FINDMOSTSPECIFICMETHOD_OFFSET UNITYSDK_OFFSET(0x1C314010)
#define SYSTEM_DEFAULTBINDER_FINDMOSTSPECIFICPROPERTY_OFFSET UNITYSDK_OFFSET(0x1C316710)
#define SYSTEM_DEFAULTBINDER_FINDMOSTSPECIFICTYPE_OFFSET UNITYSDK_OFFSET(0x1C3160C0)
#define SYSTEM_DEFAULTBINDER_FINDMOSTSPECIFIC_OFFSET UNITYSDK_OFFSET(0x1C316380)
#define SYSTEM_DEFAULTBINDER_GETHIERARCHYDEPTH_OFFSET UNITYSDK_OFFSET(0x1C317650)
#define SYSTEM_DEFAULTBINDER_REORDERARGUMENTARRAY_OFFSET UNITYSDK_OFFSET(0x1C3168F0)
#define SYSTEM_DEFAULTBINDER_REORDERPARAMS_OFFSET UNITYSDK_OFFSET(0x1C313E00)
#define SYSTEM_DEFAULTBINDER_SELECTMETHOD_OFFSET UNITYSDK_OFFSET(0x1C314AD0)
#define SYSTEM_DEFAULTBINDER_SELECTPROPERTY_OFFSET UNITYSDK_OFFSET(0x1C315570)
#define SYSTEM_DEFAULTBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C317790)

namespace System
{
	inline static constexpr unsigned int DefaultBinder_TypeDefinitionIndex = 216;

	class DefaultBinder : public ::System::Reflection::Binder
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER__CTOR_OFFSET))(this);
		}

		::System::Reflection::MethodBase* BindToMethod(::System::Reflection::BindingFlags bindingAttr, ::Il2CppArray<::System::Reflection::MethodBase*>* match, ::Il2CppArray<::System::Object*>*& args, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers, ::System::Globalization::CultureInfo* cultureInfo, ::Il2CppArray<::System::String*>* names, ::System::Object*& state)
		{
			return ((::System::Reflection::MethodBase*(*)(::PVOID, ::System::Reflection::BindingFlags, ::Il2CppArray<::System::Reflection::MethodBase*>*, ::Il2CppArray<::System::Object*>*&, ::Il2CppArray<::System::Reflection::ParameterModifier>*, ::System::Globalization::CultureInfo*, ::Il2CppArray<::System::String*>*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_BINDTOMETHOD_OFFSET))(this, bindingAttr, match, args, modifiers, cultureInfo, names, state);
		}

		::System::Reflection::FieldInfo* BindToField(::System::Reflection::BindingFlags bindingAttr, ::Il2CppArray<::System::Reflection::FieldInfo*>* match, ::System::Object* value, ::System::Globalization::CultureInfo* cultureInfo)
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID, ::System::Reflection::BindingFlags, ::Il2CppArray<::System::Reflection::FieldInfo*>*, ::System::Object*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_BINDTOFIELD_OFFSET))(this, bindingAttr, match, value, cultureInfo);
		}

		::System::Reflection::MethodBase* SelectMethod(::System::Reflection::BindingFlags bindingAttr, ::Il2CppArray<::System::Reflection::MethodBase*>* match, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::MethodBase*(*)(::PVOID, ::System::Reflection::BindingFlags, ::Il2CppArray<::System::Reflection::MethodBase*>*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_SELECTMETHOD_OFFSET))(this, bindingAttr, match, types, modifiers);
		}

		::System::Reflection::PropertyInfo* SelectProperty(::System::Reflection::BindingFlags bindingAttr, ::Il2CppArray<::System::Reflection::PropertyInfo*>* match, ::System::Type* returnType, ::Il2CppArray<::System::Type*>* indexes, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::Reflection::BindingFlags, ::Il2CppArray<::System::Reflection::PropertyInfo*>*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_SELECTPROPERTY_OFFSET))(this, bindingAttr, match, returnType, indexes, modifiers);
		}

		::System::Object* ChangeType(::System::Object* value, ::System::Type* type, ::System::Globalization::CultureInfo* cultureInfo)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_CHANGETYPE_OFFSET))(this, value, type, cultureInfo);
		}

		::System::Void ReorderArgumentArray(::Il2CppArray<::System::Object*>*& args, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*&, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_REORDERARGUMENTARRAY_OFFSET))(this, args, state);
		}

		static ::System::Reflection::MethodBase* ExactBinding(::Il2CppArray<::System::Reflection::MethodBase*>* match, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::MethodBase*(*)(::Il2CppArray<::System::Reflection::MethodBase*>*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_EXACTBINDING_OFFSET))(match, types, modifiers);
		}

		static ::System::Reflection::PropertyInfo* ExactPropertyBinding(::Il2CppArray<::System::Reflection::PropertyInfo*>* match, ::System::Type* returnType, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Reflection::ParameterModifier>* modifiers)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::Il2CppArray<::System::Reflection::PropertyInfo*>*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_EXACTPROPERTYBINDING_OFFSET))(match, returnType, types, modifiers);
		}

		static ::System::Int32 FindMostSpecific(::Il2CppArray<::System::Reflection::ParameterInfo*>* p1, ::Il2CppArray<::System::Int32>* paramOrder1, ::System::Type* paramArrayType1, ::Il2CppArray<::System::Reflection::ParameterInfo*>* p2, ::Il2CppArray<::System::Int32>* paramOrder2, ::System::Type* paramArrayType2, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::Il2CppArray<::System::Int32>*, ::System::Type*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::Il2CppArray<::System::Int32>*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_FINDMOSTSPECIFIC_OFFSET))(p1, paramOrder1, paramArrayType1, p2, paramOrder2, paramArrayType2, types, args);
		}

		static ::System::Int32 FindMostSpecificType(::System::Type* c1, ::System::Type* c2, ::System::Type* t)
		{
			return ((::System::Int32(*)(::System::Type*, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_FINDMOSTSPECIFICTYPE_OFFSET))(c1, c2, t);
		}

		static ::System::Int32 FindMostSpecificMethod(::System::Reflection::MethodBase* m1, ::Il2CppArray<::System::Int32>* paramOrder1, ::System::Type* paramArrayType1, ::System::Reflection::MethodBase* m2, ::Il2CppArray<::System::Int32>* paramOrder2, ::System::Type* paramArrayType2, ::Il2CppArray<::System::Type*>* types, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Int32(*)(::System::Reflection::MethodBase*, ::Il2CppArray<::System::Int32>*, ::System::Type*, ::System::Reflection::MethodBase*, ::Il2CppArray<::System::Int32>*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_FINDMOSTSPECIFICMETHOD_OFFSET))(m1, paramOrder1, paramArrayType1, m2, paramOrder2, paramArrayType2, types, args);
		}

		static ::System::Int32 FindMostSpecificField(::System::Reflection::FieldInfo* cur1, ::System::Reflection::FieldInfo* cur2)
		{
			return ((::System::Int32(*)(::System::Reflection::FieldInfo*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_FINDMOSTSPECIFICFIELD_OFFSET))(cur1, cur2);
		}

		static ::System::Int32 FindMostSpecificProperty(::System::Reflection::PropertyInfo* cur1, ::System::Reflection::PropertyInfo* cur2)
		{
			return ((::System::Int32(*)(::System::Reflection::PropertyInfo*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_FINDMOSTSPECIFICPROPERTY_OFFSET))(cur1, cur2);
		}

		static ::System::Boolean CompareMethodSigAndName(::System::Reflection::MethodBase* m1, ::System::Reflection::MethodBase* m2)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_COMPAREMETHODSIGANDNAME_OFFSET))(m1, m2);
		}

		static ::System::Int32 GetHierarchyDepth(::System::Type* t)
		{
			return ((::System::Int32(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_GETHIERARCHYDEPTH_OFFSET))(t);
		}

		static ::System::Reflection::MethodBase* FindMostDerivedNewSlotMeth(::Il2CppArray<::System::Reflection::MethodBase*>* match, ::System::Int32 cMatches)
		{
			return ((::System::Reflection::MethodBase*(*)(::Il2CppArray<::System::Reflection::MethodBase*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_FINDMOSTDERIVEDNEWSLOTMETH_OFFSET))(match, cMatches);
		}

		static ::System::Void ReorderParams(::Il2CppArray<::System::Int32>* paramOrder, ::Il2CppArray<::System::Object*>* vars)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_REORDERPARAMS_OFFSET))(paramOrder, vars);
		}

		static ::System::Boolean CreateParamOrder(::Il2CppArray<::System::Int32>* paramOrder, ::Il2CppArray<::System::Reflection::ParameterInfo*>* pars, ::Il2CppArray<::System::String*>* names)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_CREATEPARAMORDER_OFFSET))(paramOrder, pars, names);
		}

		static ::System::Boolean CanConvertPrimitive(::System::RuntimeType* source, ::System::RuntimeType* target)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_CANCONVERTPRIMITIVE_OFFSET))(source, target);
		}

		static ::System::Boolean CanConvertPrimitiveObjectToType(::System::Object* source, ::System::RuntimeType* type)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_CANCONVERTPRIMITIVEOBJECTTOTYPE_OFFSET))(source, type);
		}
	};
}
