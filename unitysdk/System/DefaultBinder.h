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

#define SYSTEM_DEFAULTBINDER_BINDTOFIELD_OFFSET UNITYSDK_OFFSET(0x1BCBBFE0)
#define SYSTEM_DEFAULTBINDER_BINDTOMETHOD_OFFSET UNITYSDK_OFFSET(0x1BCB7D80)
#define SYSTEM_DEFAULTBINDER_CANCONVERTPRIMITIVEOBJECTTOTYPE_OFFSET UNITYSDK_OFFSET(0x1BCBB9E0)
#define SYSTEM_DEFAULTBINDER_CANCONVERTPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x1BCBD650)
#define SYSTEM_DEFAULTBINDER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x1BCBFC80)
#define SYSTEM_DEFAULTBINDER_COMPAREMETHODSIGANDNAME_OFFSET UNITYSDK_OFFSET(0x1BCC0D70)
#define SYSTEM_DEFAULTBINDER_CREATEPARAMORDER_OFFSET UNITYSDK_OFFSET(0x1BCBB5E0)
#define SYSTEM_DEFAULTBINDER_EXACTBINDING_OFFSET UNITYSDK_OFFSET(0x1BCBFFF0)
#define SYSTEM_DEFAULTBINDER_EXACTPROPERTYBINDING_OFFSET UNITYSDK_OFFSET(0x1BCC08B0)
#define SYSTEM_DEFAULTBINDER_FINDMOSTDERIVEDNEWSLOTMETH_OFFSET UNITYSDK_OFFSET(0x1BCC05D0)
#define SYSTEM_DEFAULTBINDER_FINDMOSTSPECIFICFIELD_OFFSET UNITYSDK_OFFSET(0x1BCBC610)
#define SYSTEM_DEFAULTBINDER_FINDMOSTSPECIFICMETHOD_OFFSET UNITYSDK_OFFSET(0x1BCBBBE0)
#define SYSTEM_DEFAULTBINDER_FINDMOSTSPECIFICPROPERTY_OFFSET UNITYSDK_OFFSET(0x1BCBF900)
#define SYSTEM_DEFAULTBINDER_FINDMOSTSPECIFICTYPE_OFFSET UNITYSDK_OFFSET(0x1BCBEC30)
#define SYSTEM_DEFAULTBINDER_FINDMOSTSPECIFIC_OFFSET UNITYSDK_OFFSET(0x1BCBF470)
#define SYSTEM_DEFAULTBINDER_GETHIERARCHYDEPTH_OFFSET UNITYSDK_OFFSET(0x1BCC1030)
#define SYSTEM_DEFAULTBINDER_REORDERARGUMENTARRAY_OFFSET UNITYSDK_OFFSET(0x1BCBFCE0)
#define SYSTEM_DEFAULTBINDER_REORDERPARAMS_OFFSET UNITYSDK_OFFSET(0x1BCBBA60)
#define SYSTEM_DEFAULTBINDER_SELECTMETHOD_OFFSET UNITYSDK_OFFSET(0x1BCBC990)
#define SYSTEM_DEFAULTBINDER_SELECTPROPERTY_OFFSET UNITYSDK_OFFSET(0x1BCBD950)
#define SYSTEM_DEFAULTBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC10E0)

namespace System
{
	inline static constexpr unsigned int DefaultBinder_TypeDefinitionIndex = 229;

	class DefaultBinder : public ::System::Reflection::Binder
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER__CTOR_OFFSET))(this);
		}

		::System::Reflection::MethodBase* BindToMethod(::System::Reflection::BindingFlags a1, ::Il2CppArray<::System::Reflection::MethodBase*>* a2, ::Il2CppArray<::System::Object*>*& a3, ::Il2CppArray<::System::Reflection::ParameterModifier>* a4, ::System::Globalization::CultureInfo* a5, ::Il2CppArray<::System::String*>* a6, ::System::Object*& a7)
		{
			return ((::System::Reflection::MethodBase*(*)(::PVOID, ::System::Reflection::BindingFlags, ::Il2CppArray<::System::Reflection::MethodBase*>*, ::Il2CppArray<::System::Object*>*&, ::Il2CppArray<::System::Reflection::ParameterModifier>*, ::System::Globalization::CultureInfo*, ::Il2CppArray<::System::String*>*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_BINDTOMETHOD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Reflection::FieldInfo* BindToField(::System::Reflection::BindingFlags a1, ::Il2CppArray<::System::Reflection::FieldInfo*>* a2, ::System::Object* a3, ::System::Globalization::CultureInfo* a4)
		{
			return ((::System::Reflection::FieldInfo*(*)(::PVOID, ::System::Reflection::BindingFlags, ::Il2CppArray<::System::Reflection::FieldInfo*>*, ::System::Object*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_BINDTOFIELD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Reflection::MethodBase* SelectMethod(::System::Reflection::BindingFlags a1, ::Il2CppArray<::System::Reflection::MethodBase*>* a2, ::Il2CppArray<::System::Type*>* a3, ::Il2CppArray<::System::Reflection::ParameterModifier>* a4)
		{
			return ((::System::Reflection::MethodBase*(*)(::PVOID, ::System::Reflection::BindingFlags, ::Il2CppArray<::System::Reflection::MethodBase*>*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_SELECTMETHOD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Reflection::PropertyInfo* SelectProperty(::System::Reflection::BindingFlags a1, ::Il2CppArray<::System::Reflection::PropertyInfo*>* a2, ::System::Type* a3, ::Il2CppArray<::System::Type*>* a4, ::Il2CppArray<::System::Reflection::ParameterModifier>* a5)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::PVOID, ::System::Reflection::BindingFlags, ::Il2CppArray<::System::Reflection::PropertyInfo*>*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_SELECTPROPERTY_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Object* ChangeType(::System::Object* a1, ::System::Type* a2, ::System::Globalization::CultureInfo* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_CHANGETYPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ReorderArgumentArray(::Il2CppArray<::System::Object*>*& a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*&, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_REORDERARGUMENTARRAY_OFFSET))(this, a1, a2);
		}

		static ::System::Reflection::MethodBase* ExactBinding(::Il2CppArray<::System::Reflection::MethodBase*>* a1, ::Il2CppArray<::System::Type*>* a2, ::Il2CppArray<::System::Reflection::ParameterModifier>* a3)
		{
			return ((::System::Reflection::MethodBase*(*)(::Il2CppArray<::System::Reflection::MethodBase*>*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_EXACTBINDING_OFFSET))(a1, a2, a3);
		}

		static ::System::Reflection::PropertyInfo* ExactPropertyBinding(::Il2CppArray<::System::Reflection::PropertyInfo*>* a1, ::System::Type* a2, ::Il2CppArray<::System::Type*>* a3, ::Il2CppArray<::System::Reflection::ParameterModifier>* a4)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::Il2CppArray<::System::Reflection::PropertyInfo*>*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Reflection::ParameterModifier>*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_EXACTPROPERTYBINDING_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 FindMostSpecific(::Il2CppArray<::System::Reflection::ParameterInfo*>* a1, ::Il2CppArray<::System::Int32>* a2, ::System::Type* a3, ::Il2CppArray<::System::Reflection::ParameterInfo*>* a4, ::Il2CppArray<::System::Int32>* a5, ::System::Type* a6, ::Il2CppArray<::System::Type*>* a7, ::Il2CppArray<::System::Object*>* a8)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::Il2CppArray<::System::Int32>*, ::System::Type*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::Il2CppArray<::System::Int32>*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_FINDMOSTSPECIFIC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Int32 FindMostSpecificType(::System::Type* a1, ::System::Type* a2, ::System::Type* a3)
		{
			return ((::System::Int32(*)(::System::Type*, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_FINDMOSTSPECIFICTYPE_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 FindMostSpecificMethod(::System::Reflection::MethodBase* a1, ::Il2CppArray<::System::Int32>* a2, ::System::Type* a3, ::System::Reflection::MethodBase* a4, ::Il2CppArray<::System::Int32>* a5, ::System::Type* a6, ::Il2CppArray<::System::Type*>* a7, ::Il2CppArray<::System::Object*>* a8)
		{
			return ((::System::Int32(*)(::System::Reflection::MethodBase*, ::Il2CppArray<::System::Int32>*, ::System::Type*, ::System::Reflection::MethodBase*, ::Il2CppArray<::System::Int32>*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_FINDMOSTSPECIFICMETHOD_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Int32 FindMostSpecificField(::System::Reflection::FieldInfo* a1, ::System::Reflection::FieldInfo* a2)
		{
			return ((::System::Int32(*)(::System::Reflection::FieldInfo*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_FINDMOSTSPECIFICFIELD_OFFSET))(a1, a2);
		}

		static ::System::Int32 FindMostSpecificProperty(::System::Reflection::PropertyInfo* a1, ::System::Reflection::PropertyInfo* a2)
		{
			return ((::System::Int32(*)(::System::Reflection::PropertyInfo*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_FINDMOSTSPECIFICPROPERTY_OFFSET))(a1, a2);
		}

		static ::System::Boolean CompareMethodSigAndName(::System::Reflection::MethodBase* a1, ::System::Reflection::MethodBase* a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_COMPAREMETHODSIGANDNAME_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetHierarchyDepth(::System::Type* a1)
		{
			return ((::System::Int32(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_GETHIERARCHYDEPTH_OFFSET))(a1);
		}

		static ::System::Reflection::MethodBase* FindMostDerivedNewSlotMeth(::Il2CppArray<::System::Reflection::MethodBase*>* a1, ::System::Int32 a2)
		{
			return ((::System::Reflection::MethodBase*(*)(::Il2CppArray<::System::Reflection::MethodBase*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_FINDMOSTDERIVEDNEWSLOTMETH_OFFSET))(a1, a2);
		}

		static ::System::Void ReorderParams(::Il2CppArray<::System::Int32>* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_REORDERPARAMS_OFFSET))(a1, a2);
		}

		static ::System::Boolean CreateParamOrder(::Il2CppArray<::System::Int32>* a1, ::Il2CppArray<::System::Reflection::ParameterInfo*>* a2, ::Il2CppArray<::System::String*>* a3)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_CREATEPARAMORDER_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean CanConvertPrimitive(::System::RuntimeType* a1, ::System::RuntimeType* a2)
		{
			return ((::System::Boolean(*)(::System::RuntimeType*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_CANCONVERTPRIMITIVE_OFFSET))(a1, a2);
		}

		static ::System::Boolean CanConvertPrimitiveObjectToType(::System::Object* a1, ::System::RuntimeType* a2)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_DEFAULTBINDER_CANCONVERTPRIMITIVEOBJECTTOTYPE_OFFSET))(a1, a2);
		}
	};
}
