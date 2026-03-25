#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class DelegateData; }
namespace System { class MulticastDelegate; }
namespace System { class RuntimeType; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_DELEGATE_ALLOCDELEGATELIKE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x162B1BC0)
#define SYSTEM_DELEGATE_ARG_TYPE_MATCH_OFFSET UNITYSDK_OFFSET(0x162AF2F0)
#define SYSTEM_DELEGATE_ARG_TYPE_MATCH_THIS_OFFSET UNITYSDK_OFFSET(0x162AF3A0)
#define SYSTEM_DELEGATE_CLONE_OFFSET UNITYSDK_OFFSET(0x162B10E0)
#define SYSTEM_DELEGATE_COMBINEIMPL_OFFSET UNITYSDK_OFFSET(0x162B1950)
#define SYSTEM_DELEGATE_COMBINE_1_OFFSET UNITYSDK_OFFSET(0x162B18F0)
#define SYSTEM_DELEGATE_COMBINE_OFFSET UNITYSDK_OFFSET(0x162B17B0)
#define SYSTEM_DELEGATE_CREATEDELEGATENOSECURITYCHECK_OFFSET UNITYSDK_OFFSET(0x162B1B70)
#define SYSTEM_DELEGATE_CREATEDELEGATE_1_OFFSET UNITYSDK_OFFSET(0x162AF580)
#define SYSTEM_DELEGATE_CREATEDELEGATE_2_OFFSET UNITYSDK_OFFSET(0x162B0510)
#define SYSTEM_DELEGATE_CREATEDELEGATE_3_OFFSET UNITYSDK_OFFSET(0x162B0530)
#define SYSTEM_DELEGATE_CREATEDELEGATE_4_OFFSET UNITYSDK_OFFSET(0x162B0550)
#define SYSTEM_DELEGATE_CREATEDELEGATE_5_OFFSET UNITYSDK_OFFSET(0x162B0570)
#define SYSTEM_DELEGATE_CREATEDELEGATE_6_OFFSET UNITYSDK_OFFSET(0x162B09A0)
#define SYSTEM_DELEGATE_CREATEDELEGATE_7_OFFSET UNITYSDK_OFFSET(0x162B0A70)
#define SYSTEM_DELEGATE_CREATEDELEGATE_8_OFFSET UNITYSDK_OFFSET(0x162B0A90)
#define SYSTEM_DELEGATE_CREATEDELEGATE_9_OFFSET UNITYSDK_OFFSET(0x162B0590)
#define SYSTEM_DELEGATE_CREATEDELEGATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x162AF2A0)
#define SYSTEM_DELEGATE_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x162AF560)
#define SYSTEM_DELEGATE_DYNAMICINVOKEIMPL_OFFSET UNITYSDK_OFFSET(0x162B0CC0)
#define SYSTEM_DELEGATE_DYNAMICINVOKE_OFFSET UNITYSDK_OFFSET(0x162B0B80)
#define SYSTEM_DELEGATE_EQUALS_OFFSET UNITYSDK_OFFSET(0x162B1180)
#define SYSTEM_DELEGATE_GETCANDIDATEMETHOD_OFFSET UNITYSDK_OFFSET(0x162B05B0)
#define SYSTEM_DELEGATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x162B1240)
#define SYSTEM_DELEGATE_GETINVOCATIONLIST_OFFSET UNITYSDK_OFFSET(0x162B1710)
#define SYSTEM_DELEGATE_GETMETHODIMPL_OFFSET UNITYSDK_OFFSET(0x162B12B0)
#define SYSTEM_DELEGATE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x162B1320)
#define SYSTEM_DELEGATE_GETVIRTUALMETHOD_INTERNAL_OFFSET UNITYSDK_OFFSET(0x162AF280)
#define SYSTEM_DELEGATE_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x162AF270)
#define SYSTEM_DELEGATE_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x162AF290)
#define SYSTEM_DELEGATE_INITIALIZEDELEGATEDATA_OFFSET UNITYSDK_OFFSET(0x162B0B90)
#define SYSTEM_DELEGATE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x162B1B30)
#define SYSTEM_DELEGATE_REMOVEIMPL_OFFSET UNITYSDK_OFFSET(0x162B1AF0)
#define SYSTEM_DELEGATE_REMOVE_OFFSET UNITYSDK_OFFSET(0x162B19B0)
#define SYSTEM_DELEGATE_RETURN_TYPE_MATCH_OFFSET UNITYSDK_OFFSET(0x162AF450)
#define SYSTEM_DELEGATE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x162AF1B0)
#define SYSTEM_DELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x162AF0E0)

namespace System
{
	inline static constexpr unsigned int Delegate_TypeDefinitionIndex = 386;

	class Delegate : public ::System::Object
	{
	public:
		::System::IntPtr method_ptr; // 0x10
		::System::IntPtr invoke_impl; // 0x18
		::System::Object* m_target; // 0x20
		::System::IntPtr method; // 0x28
		::System::IntPtr delegate_trampoline; // 0x30
		::System::IntPtr extra_arg; // 0x38
		::System::IntPtr method_code; // 0x40
		::System::Reflection::MethodInfo* method_info; // 0x48
		::System::Reflection::MethodInfo* original_method_info; // 0x50
		::System::DelegateData* data; // 0x58
		::System::Boolean method_is_virtual; // 0x60

		::System::Void _ctor(::System::Object* target, ::System::String* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE__CTOR_OFFSET))(this, target, method);
		}

		::System::Void _ctor_1(::System::Type* target, ::System::String* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE__CTOR_1_OFFSET))(this, target, method);
		}

		::System::Reflection::MethodInfo* get_Method()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_GET_METHOD_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* GetVirtualMethod_internal()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_GETVIRTUALMETHOD_INTERNAL_OFFSET))(this);
		}

		::System::Object* get_Target()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_GET_TARGET_OFFSET))(this);
		}

		static ::System::Delegate* CreateDelegate_internal(::System::Type* type, ::System::Object* target, ::System::Reflection::MethodInfo* info, ::System::Boolean throwOnBindFailure)
		{
			return ((::System::Delegate*(*)(::System::Type*, ::System::Object*, ::System::Reflection::MethodInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_INTERNAL_OFFSET))(type, target, info, throwOnBindFailure);
		}

		static ::System::Boolean arg_type_match(::System::Type* delArgType, ::System::Type* argType)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_ARG_TYPE_MATCH_OFFSET))(delArgType, argType);
		}

		static ::System::Boolean arg_type_match_this(::System::Type* delArgType, ::System::Type* argType, ::System::Boolean boxedThis)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_ARG_TYPE_MATCH_THIS_OFFSET))(delArgType, argType, boxedThis);
		}

		static ::System::Boolean return_type_match(::System::Type* delReturnType, ::System::Type* returnType)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_RETURN_TYPE_MATCH_OFFSET))(delReturnType, returnType);
		}

		static ::System::Delegate* CreateDelegate(::System::Type* type, ::System::Object* firstArgument, ::System::Reflection::MethodInfo* method, ::System::Boolean throwOnBindFailure)
		{
			return ((::System::Delegate*(*)(::System::Type*, ::System::Object*, ::System::Reflection::MethodInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_OFFSET))(type, firstArgument, method, throwOnBindFailure);
		}

		static ::System::Delegate* CreateDelegate_1(::System::Type* type, ::System::Object* firstArgument, ::System::Reflection::MethodInfo* method, ::System::Boolean throwOnBindFailure, ::System::Boolean allowClosed)
		{
			return ((::System::Delegate*(*)(::System::Type*, ::System::Object*, ::System::Reflection::MethodInfo*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_1_OFFSET))(type, firstArgument, method, throwOnBindFailure, allowClosed);
		}

		static ::System::Delegate* CreateDelegate_2(::System::Type* type, ::System::Object* firstArgument, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Delegate*(*)(::System::Type*, ::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_2_OFFSET))(type, firstArgument, method);
		}

		static ::System::Delegate* CreateDelegate_3(::System::Type* type, ::System::Reflection::MethodInfo* method, ::System::Boolean throwOnBindFailure)
		{
			return ((::System::Delegate*(*)(::System::Type*, ::System::Reflection::MethodInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_3_OFFSET))(type, method, throwOnBindFailure);
		}

		static ::System::Delegate* CreateDelegate_4(::System::Type* type, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Delegate*(*)(::System::Type*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_4_OFFSET))(type, method);
		}

		static ::System::Delegate* CreateDelegate_5(::System::Type* type, ::System::Object* target, ::System::String* method)
		{
			return ((::System::Delegate*(*)(::System::Type*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_5_OFFSET))(type, target, method);
		}

		static ::System::Reflection::MethodInfo* GetCandidateMethod(::System::Type* type, ::System::Type* target, ::System::String* method, ::System::Reflection::BindingFlags bflags, ::System::Boolean ignoreCase, ::System::Boolean throwOnBindFailure)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::Type*, ::System::String*, ::System::Reflection::BindingFlags, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_GETCANDIDATEMETHOD_OFFSET))(type, target, method, bflags, ignoreCase, throwOnBindFailure);
		}

		static ::System::Delegate* CreateDelegate_6(::System::Type* type, ::System::Type* target, ::System::String* method, ::System::Boolean ignoreCase, ::System::Boolean throwOnBindFailure)
		{
			return ((::System::Delegate*(*)(::System::Type*, ::System::Type*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_6_OFFSET))(type, target, method, ignoreCase, throwOnBindFailure);
		}

		static ::System::Delegate* CreateDelegate_7(::System::Type* type, ::System::Type* target, ::System::String* method)
		{
			return ((::System::Delegate*(*)(::System::Type*, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_7_OFFSET))(type, target, method);
		}

		static ::System::Delegate* CreateDelegate_8(::System::Type* type, ::System::Object* target, ::System::String* method, ::System::Boolean ignoreCase, ::System::Boolean throwOnBindFailure)
		{
			return ((::System::Delegate*(*)(::System::Type*, ::System::Object*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_8_OFFSET))(type, target, method, ignoreCase, throwOnBindFailure);
		}

		static ::System::Delegate* CreateDelegate_9(::System::Type* type, ::System::Object* target, ::System::String* method, ::System::Boolean ignoreCase)
		{
			return ((::System::Delegate*(*)(::System::Type*, ::System::Object*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_9_OFFSET))(type, target, method, ignoreCase);
		}

		::System::Object* DynamicInvoke(::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_DYNAMICINVOKE_OFFSET))(this, args);
		}

		::System::Void InitializeDelegateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_INITIALIZEDELEGATEDATA_OFFSET))(this);
		}

		::System::Object* DynamicInvokeImpl(::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_DYNAMICINVOKEIMPL_OFFSET))(this, args);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_GETHASHCODE_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* GetMethodImpl()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_GETMETHODIMPL_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::Il2CppArray<::System::Delegate*>* GetInvocationList()
		{
			return ((::Il2CppArray<::System::Delegate*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_GETINVOCATIONLIST_OFFSET))(this);
		}

		static ::System::Delegate* Combine(::System::Delegate* a, ::System::Delegate* b)
		{
			return ((::System::Delegate*(*)(::System::Delegate*, ::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_COMBINE_OFFSET))(a, b);
		}

		static ::System::Delegate* Combine_1(::Il2CppArray<::System::Delegate*>* delegates)
		{
			return ((::System::Delegate*(*)(::Il2CppArray<::System::Delegate*>*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_COMBINE_1_OFFSET))(delegates);
		}

		::System::Delegate* CombineImpl(::System::Delegate* d)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_COMBINEIMPL_OFFSET))(this, d);
		}

		static ::System::Delegate* Remove(::System::Delegate* source, ::System::Delegate* value)
		{
			return ((::System::Delegate*(*)(::System::Delegate*, ::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_REMOVE_OFFSET))(source, value);
		}

		::System::Delegate* RemoveImpl(::System::Delegate* d)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_REMOVEIMPL_OFFSET))(this, d);
		}

		static ::System::Boolean op_Equality(::System::Delegate* d1, ::System::Delegate* d2)
		{
			return ((::System::Boolean(*)(::System::Delegate*, ::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_OP_EQUALITY_OFFSET))(d1, d2);
		}

		static ::System::Delegate* CreateDelegateNoSecurityCheck(::System::RuntimeType* type, ::System::Object* firstArgument, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Delegate*(*)(::System::RuntimeType*, ::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATENOSECURITYCHECK_OFFSET))(type, firstArgument, method);
		}

		static ::System::MulticastDelegate* AllocDelegateLike_internal(::System::Delegate* d)
		{
			return ((::System::MulticastDelegate*(*)(::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_ALLOCDELEGATELIKE_INTERNAL_OFFSET))(d);
		}
	};
}
