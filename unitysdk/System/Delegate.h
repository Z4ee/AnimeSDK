#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class DelegateData; }
namespace System { class MulticastDelegate; }
namespace System { class RuntimeType; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_DELEGATE_ALLOCDELEGATELIKE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x186968B0)
#define SYSTEM_DELEGATE_ARG_TYPE_MATCH_OFFSET UNITYSDK_OFFSET(0x18694160)
#define SYSTEM_DELEGATE_ARG_TYPE_MATCH_THIS_OFFSET UNITYSDK_OFFSET(0x18694210)
#define SYSTEM_DELEGATE_CLONE_OFFSET UNITYSDK_OFFSET(0x18695E20)
#define SYSTEM_DELEGATE_COMBINEIMPL_OFFSET UNITYSDK_OFFSET(0x18696680)
#define SYSTEM_DELEGATE_COMBINE_1_OFFSET UNITYSDK_OFFSET(0x18696620)
#define SYSTEM_DELEGATE_COMBINE_OFFSET UNITYSDK_OFFSET(0x18696500)
#define SYSTEM_DELEGATE_CREATEDELEGATENOSECURITYCHECK_OFFSET UNITYSDK_OFFSET(0x186968A0)
#define SYSTEM_DELEGATE_CREATEDELEGATE_1_OFFSET UNITYSDK_OFFSET(0x186943F0)
#define SYSTEM_DELEGATE_CREATEDELEGATE_2_OFFSET UNITYSDK_OFFSET(0x18695260)
#define SYSTEM_DELEGATE_CREATEDELEGATE_3_OFFSET UNITYSDK_OFFSET(0x18695280)
#define SYSTEM_DELEGATE_CREATEDELEGATE_4_OFFSET UNITYSDK_OFFSET(0x186952A0)
#define SYSTEM_DELEGATE_CREATEDELEGATE_5_OFFSET UNITYSDK_OFFSET(0x186952C0)
#define SYSTEM_DELEGATE_CREATEDELEGATE_6_OFFSET UNITYSDK_OFFSET(0x186956C0)
#define SYSTEM_DELEGATE_CREATEDELEGATE_7_OFFSET UNITYSDK_OFFSET(0x186957F0)
#define SYSTEM_DELEGATE_CREATEDELEGATE_8_OFFSET UNITYSDK_OFFSET(0x18695810)
#define SYSTEM_DELEGATE_CREATEDELEGATE_9_OFFSET UNITYSDK_OFFSET(0x186952E0)
#define SYSTEM_DELEGATE_CREATEDELEGATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x18694150)
#define SYSTEM_DELEGATE_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x186943D0)
#define SYSTEM_DELEGATE_DYNAMICINVOKEIMPL_OFFSET UNITYSDK_OFFSET(0x18695A70)
#define SYSTEM_DELEGATE_DYNAMICINVOKE_OFFSET UNITYSDK_OFFSET(0x18695930)
#define SYSTEM_DELEGATE_EQUALS_OFFSET UNITYSDK_OFFSET(0x18695EC0)
#define SYSTEM_DELEGATE_GETCANDIDATEMETHOD_OFFSET UNITYSDK_OFFSET(0x18695300)
#define SYSTEM_DELEGATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18695F90)
#define SYSTEM_DELEGATE_GETINVOCATIONLIST_OFFSET UNITYSDK_OFFSET(0x18696480)
#define SYSTEM_DELEGATE_GETMETHODIMPL_OFFSET UNITYSDK_OFFSET(0x18696000)
#define SYSTEM_DELEGATE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x186960A0)
#define SYSTEM_DELEGATE_GETTYPEHANDLE_OFFSET UNITYSDK_OFFSET(0x186968E0)
#define SYSTEM_DELEGATE_GETVIRTUALMETHOD_INTERNAL_OFFSET UNITYSDK_OFFSET(0x18694110)
#define SYSTEM_DELEGATE_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x18694100)
#define SYSTEM_DELEGATE_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x18694140)
#define SYSTEM_DELEGATE_INITIALIZEDELEGATEDATA_OFFSET UNITYSDK_OFFSET(0x18695940)
#define SYSTEM_DELEGATE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18696860)
#define SYSTEM_DELEGATE_REMOVEIMPL_OFFSET UNITYSDK_OFFSET(0x18696820)
#define SYSTEM_DELEGATE_REMOVE_OFFSET UNITYSDK_OFFSET(0x186966E0)
#define SYSTEM_DELEGATE_RETURN_TYPE_MATCH_OFFSET UNITYSDK_OFFSET(0x186942C0)
#define SYSTEM_DELEGATE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18694040)
#define SYSTEM_DELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18693F70)

namespace System
{
	inline static constexpr unsigned int Delegate_TypeDefinitionIndex = 385;

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

		::System::Void _ctor(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE__CTOR_1_OFFSET))(this, a1, a2);
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

		static ::System::Delegate* CreateDelegate_internal(::System::Type* a1, ::System::Object* a2, ::System::Reflection::MethodInfo* a3, ::System::Boolean a4)
		{
			return ((::System::Delegate*(*)(::System::Type*, ::System::Object*, ::System::Reflection::MethodInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_INTERNAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean arg_type_match(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_ARG_TYPE_MATCH_OFFSET))(a1, a2);
		}

		static ::System::Boolean arg_type_match_this(::System::Type* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_ARG_TYPE_MATCH_THIS_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean return_type_match(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_RETURN_TYPE_MATCH_OFFSET))(a1, a2);
		}

		static ::System::Delegate* CreateDelegate(::System::Type* a1, ::System::Object* a2, ::System::Reflection::MethodInfo* a3, ::System::Boolean a4)
		{
			return ((::System::Delegate*(*)(::System::Type*, ::System::Object*, ::System::Reflection::MethodInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Delegate* CreateDelegate_1(::System::Type* a1, ::System::Object* a2, ::System::Reflection::MethodInfo* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Delegate*(*)(::System::Type*, ::System::Object*, ::System::Reflection::MethodInfo*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Delegate* CreateDelegate_2(::System::Type* a1, ::System::Object* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Delegate*(*)(::System::Type*, ::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Delegate* CreateDelegate_3(::System::Type* a1, ::System::Reflection::MethodInfo* a2, ::System::Boolean a3)
		{
			return ((::System::Delegate*(*)(::System::Type*, ::System::Reflection::MethodInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Delegate* CreateDelegate_4(::System::Type* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Delegate*(*)(::System::Type*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_4_OFFSET))(a1, a2);
		}

		static ::System::Delegate* CreateDelegate_5(::System::Type* a1, ::System::Object* a2, ::System::String* a3)
		{
			return ((::System::Delegate*(*)(::System::Type*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_5_OFFSET))(a1, a2, a3);
		}

		static ::System::Reflection::MethodInfo* GetCandidateMethod(::System::Type* a1, ::System::Type* a2, ::System::String* a3, ::System::Reflection::BindingFlags a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::Type*, ::System::String*, ::System::Reflection::BindingFlags, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_GETCANDIDATEMETHOD_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Delegate* CreateDelegate_6(::System::Type* a1, ::System::Type* a2, ::System::String* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Delegate*(*)(::System::Type*, ::System::Type*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_6_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Delegate* CreateDelegate_7(::System::Type* a1, ::System::Type* a2, ::System::String* a3)
		{
			return ((::System::Delegate*(*)(::System::Type*, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_7_OFFSET))(a1, a2, a3);
		}

		static ::System::Delegate* CreateDelegate_8(::System::Type* a1, ::System::Object* a2, ::System::String* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Delegate*(*)(::System::Type*, ::System::Object*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_8_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Delegate* CreateDelegate_9(::System::Type* a1, ::System::Object* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Delegate*(*)(::System::Type*, ::System::Object*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATE_9_OFFSET))(a1, a2, a3, a4);
		}

		::System::Object* DynamicInvoke(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_DYNAMICINVOKE_OFFSET))(this, a1);
		}

		::System::Void InitializeDelegateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_INITIALIZEDELEGATEDATA_OFFSET))(this);
		}

		::System::Object* DynamicInvokeImpl(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_DYNAMICINVOKEIMPL_OFFSET))(this, a1);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_GETHASHCODE_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* GetMethodImpl()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_GETMETHODIMPL_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Delegate*>* GetInvocationList()
		{
			return ((::Il2CppArray<::System::Delegate*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_GETINVOCATIONLIST_OFFSET))(this);
		}

		static ::System::Delegate* Combine(::System::Delegate* a1, ::System::Delegate* a2)
		{
			return ((::System::Delegate*(*)(::System::Delegate*, ::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_COMBINE_OFFSET))(a1, a2);
		}

		static ::System::Delegate* Combine_1(::Il2CppArray<::System::Delegate*>* a1)
		{
			return ((::System::Delegate*(*)(::Il2CppArray<::System::Delegate*>*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_COMBINE_1_OFFSET))(a1);
		}

		::System::Delegate* CombineImpl(::System::Delegate* a1)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_COMBINEIMPL_OFFSET))(this, a1);
		}

		static ::System::Delegate* Remove(::System::Delegate* a1, ::System::Delegate* a2)
		{
			return ((::System::Delegate*(*)(::System::Delegate*, ::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_REMOVE_OFFSET))(a1, a2);
		}

		::System::Delegate* RemoveImpl(::System::Delegate* a1)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_REMOVEIMPL_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::System::Delegate* a1, ::System::Delegate* a2)
		{
			return ((::System::Boolean(*)(::System::Delegate*, ::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Delegate* CreateDelegateNoSecurityCheck(::System::RuntimeType* a1, ::System::Object* a2, ::System::Reflection::MethodInfo* a3)
		{
			return ((::System::Delegate*(*)(::System::RuntimeType*, ::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_CREATEDELEGATENOSECURITYCHECK_OFFSET))(a1, a2, a3);
		}

		static ::System::MulticastDelegate* AllocDelegateLike_internal(::System::Delegate* a1)
		{
			return ((::System::MulticastDelegate*(*)(::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_ALLOCDELEGATELIKE_INTERNAL_OFFSET))(a1);
		}

		static ::System::RuntimeTypeHandle GetTypeHandle(::System::Object* a1)
		{
			return ((::System::RuntimeTypeHandle(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATE_GETTYPEHANDLE_OFFSET))(a1);
		}
	};
}
