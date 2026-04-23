#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/CallingConventions.h"
#include "unitysdk/System/Reflection/MemberInfo.h"
#include "unitysdk/System/Reflection/MethodAttributes.h"
#include "unitysdk/System/Reflection/MethodImplAttributes.h"
#include "unitysdk/System/RuntimeMethodHandle.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class MethodBody; }
namespace System::Reflection { class ParameterInfo; }

#define SYSTEM_REFLECTION_METHODBASE_CONSTRUCTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x179A38F0)
#define SYSTEM_REFLECTION_METHODBASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x179A3610)
#define SYSTEM_REFLECTION_METHODBASE_FORMATNAMEANDSIG_OFFSET UNITYSDK_OFFSET(0x179A3B80)
#define SYSTEM_REFLECTION_METHODBASE_GETGENERICARGUMENTS_OFFSET UNITYSDK_OFFSET(0x179A3640)
#define SYSTEM_REFLECTION_METHODBASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17997230)
#define SYSTEM_REFLECTION_METHODBASE_GETMETHODBODYINTERNAL_OFFSET UNITYSDK_OFFSET(0x179A3E30)
#define SYSTEM_REFLECTION_METHODBASE_GETMETHODBODY_1_OFFSET UNITYSDK_OFFSET(0x179A3E40)
#define SYSTEM_REFLECTION_METHODBASE_GETMETHODBODY_OFFSET UNITYSDK_OFFSET(0x179A38A0)
#define SYSTEM_REFLECTION_METHODBASE_GETMETHODFROMHANDLEINTERNALTYPE_NATIVE_OFFSET UNITYSDK_OFFSET(0x179A3DF0)
#define SYSTEM_REFLECTION_METHODBASE_GETMETHODFROMHANDLEINTERNALTYPE_OFFSET UNITYSDK_OFFSET(0x179A35F0)
#define SYSTEM_REFLECTION_METHODBASE_GETMETHODFROMHANDLENOGENERICCHECK_1_OFFSET UNITYSDK_OFFSET(0x179A3E00)
#define SYSTEM_REFLECTION_METHODBASE_GETMETHODFROMHANDLENOGENERICCHECK_OFFSET UNITYSDK_OFFSET(0x179A3DE0)
#define SYSTEM_REFLECTION_METHODBASE_GETMETHODFROMHANDLE_OFFSET UNITYSDK_OFFSET(0x179A34B0)
#define SYSTEM_REFLECTION_METHODBASE_GETPARAMETERSCOUNT_OFFSET UNITYSDK_OFFSET(0x179A3DB0)
#define SYSTEM_REFLECTION_METHODBASE_GETPARAMETERSINTERNAL_OFFSET UNITYSDK_OFFSET(0x179A3DA0)
#define SYSTEM_REFLECTION_METHODBASE_GETPARAMETERSNOCOPY_OFFSET UNITYSDK_OFFSET(0x179A3620)
#define SYSTEM_REFLECTION_METHODBASE_GETPARAMETERTYPES_OFFSET UNITYSDK_OFFSET(0x179A3C60)
#define SYSTEM_REFLECTION_METHODBASE_GET_CALLINGCONVENTION_OFFSET UNITYSDK_OFFSET(0x179A3630)
#define SYSTEM_REFLECTION_METHODBASE_GET_CONTAINSGENERICPARAMETERS_OFFSET UNITYSDK_OFFSET(0x179A36B0)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISABSTRACT_OFFSET UNITYSDK_OFFSET(0x179A37F0)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x179A3830)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISFINAL_OFFSET UNITYSDK_OFFSET(0x179A37B0)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISGENERICMETHODDEFINITION_OFFSET UNITYSDK_OFFSET(0x179A36A0)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISGENERICMETHOD_OFFSET UNITYSDK_OFFSET(0x179A36C0)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISPRIVATE_OFFSET UNITYSDK_OFFSET(0x179A3770)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISPUBLIC_OFFSET UNITYSDK_OFFSET(0x179A3750)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISSECURITYCRITICAL_OFFSET UNITYSDK_OFFSET(0x179A36D0)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISSPECIALNAME_OFFSET UNITYSDK_OFFSET(0x179A3810)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x179A3790)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISVIRTUAL_OFFSET UNITYSDK_OFFSET(0x179A37D0)
#define SYSTEM_REFLECTION_METHODBASE_INVOKE_OFFSET UNITYSDK_OFFSET(0x179A3720)
#define SYSTEM_REFLECTION_METHODBASE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x179A2060)
#define SYSTEM_REFLECTION_METHODBASE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x179A2050)
#define SYSTEM_REFLECTION_METHODBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x17997180)

namespace System::Reflection
{
	inline static constexpr unsigned int MethodBase_TypeDefinitionIndex = 575;

	class MethodBase : public ::System::Reflection::MemberInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE__CTOR_OFFSET))(this);
		}

		static ::System::Reflection::MethodBase* GetMethodFromHandle(::System::RuntimeMethodHandle handle)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::RuntimeMethodHandle))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETMETHODFROMHANDLE_OFFSET))(handle);
		}

		static ::System::Boolean op_Equality(::System::Reflection::MethodBase* left, ::System::Reflection::MethodBase* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::System::Reflection::MethodBase* left, ::System::Reflection::MethodBase* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETHASHCODE_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* GetParametersNoCopy()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETPARAMETERSNOCOPY_OFFSET))(this);
		}

		::System::Reflection::CallingConventions get_CallingConvention()
		{
			return ((::System::Reflection::CallingConventions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_CALLINGCONVENTION_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* GetGenericArguments()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETGENERICARGUMENTS_OFFSET))(this);
		}

		::System::Boolean get_IsGenericMethodDefinition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_ISGENERICMETHODDEFINITION_OFFSET))(this);
		}

		::System::Boolean get_ContainsGenericParameters()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_CONTAINSGENERICPARAMETERS_OFFSET))(this);
		}

		::System::Boolean get_IsGenericMethod()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_ISGENERICMETHOD_OFFSET))(this);
		}

		::System::Boolean get_IsSecurityCritical()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_ISSECURITYCRITICAL_OFFSET))(this);
		}

		::System::Object* Invoke(::System::Object* obj, ::Il2CppArray<::System::Object*>* parameters)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_INVOKE_OFFSET))(this, obj, parameters);
		}

		::System::Boolean get_IsPublic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_ISPUBLIC_OFFSET))(this);
		}

		::System::Boolean get_IsPrivate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_ISPRIVATE_OFFSET))(this);
		}

		::System::Boolean get_IsStatic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_ISSTATIC_OFFSET))(this);
		}

		::System::Boolean get_IsFinal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_ISFINAL_OFFSET))(this);
		}

		::System::Boolean get_IsVirtual()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_ISVIRTUAL_OFFSET))(this);
		}

		::System::Boolean get_IsAbstract()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_ISABSTRACT_OFFSET))(this);
		}

		::System::Boolean get_IsSpecialName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_ISSPECIALNAME_OFFSET))(this);
		}

		::System::Boolean get_IsConstructor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GET_ISCONSTRUCTOR_OFFSET))(this);
		}

		::System::Reflection::MethodBody* GetMethodBody()
		{
			return ((::System::Reflection::MethodBody*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETMETHODBODY_OFFSET))(this);
		}

		static ::System::String* ConstructParameters(::Il2CppArray<::System::Type*>* parameterTypes, ::System::Reflection::CallingConventions callingConvention, ::System::Boolean serialization)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Type*>*, ::System::Reflection::CallingConventions, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_CONSTRUCTPARAMETERS_OFFSET))(parameterTypes, callingConvention, serialization);
		}

		::System::String* FormatNameAndSig(::System::Boolean serialization)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_FORMATNAMEANDSIG_OFFSET))(this, serialization);
		}

		::Il2CppArray<::System::Type*>* GetParameterTypes()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETPARAMETERTYPES_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* GetParametersInternal()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETPARAMETERSINTERNAL_OFFSET))(this);
		}

		::System::Int32 GetParametersCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETPARAMETERSCOUNT_OFFSET))(this);
		}

		static ::System::Reflection::MethodBase* GetMethodFromHandleNoGenericCheck(::System::RuntimeMethodHandle handle)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::RuntimeMethodHandle))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETMETHODFROMHANDLENOGENERICCHECK_OFFSET))(handle);
		}

		static ::System::Reflection::MethodBase* GetMethodFromHandleNoGenericCheck_1(::System::RuntimeMethodHandle handle, ::System::RuntimeTypeHandle reflectedType)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::RuntimeMethodHandle, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETMETHODFROMHANDLENOGENERICCHECK_1_OFFSET))(handle, reflectedType);
		}

		static ::System::Reflection::MethodBody* GetMethodBodyInternal(::System::IntPtr handle)
		{
			return ((::System::Reflection::MethodBody*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETMETHODBODYINTERNAL_OFFSET))(handle);
		}

		static ::System::Reflection::MethodBody* GetMethodBody_1(::System::IntPtr handle)
		{
			return ((::System::Reflection::MethodBody*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETMETHODBODY_1_OFFSET))(handle);
		}

		static ::System::Reflection::MethodBase* GetMethodFromHandleInternalType(::System::IntPtr method_handle, ::System::IntPtr type_handle)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETMETHODFROMHANDLEINTERNALTYPE_OFFSET))(method_handle, type_handle);
		}

		static ::System::Reflection::MethodBase* GetMethodFromHandleInternalType_native(::System::IntPtr method_handle, ::System::IntPtr type_handle, ::System::Boolean genericCheck)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::IntPtr, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETMETHODFROMHANDLEINTERNALTYPE_NATIVE_OFFSET))(method_handle, type_handle, genericCheck);
		}
	};
}
