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

#define SYSTEM_REFLECTION_METHODBASE_CONSTRUCTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x16376C90)
#define SYSTEM_REFLECTION_METHODBASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x163769B0)
#define SYSTEM_REFLECTION_METHODBASE_FORMATNAMEANDSIG_OFFSET UNITYSDK_OFFSET(0x16376F20)
#define SYSTEM_REFLECTION_METHODBASE_GETGENERICARGUMENTS_OFFSET UNITYSDK_OFFSET(0x163769E0)
#define SYSTEM_REFLECTION_METHODBASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1636A660)
#define SYSTEM_REFLECTION_METHODBASE_GETMETHODBODYINTERNAL_OFFSET UNITYSDK_OFFSET(0x163771D0)
#define SYSTEM_REFLECTION_METHODBASE_GETMETHODBODY_1_OFFSET UNITYSDK_OFFSET(0x163771E0)
#define SYSTEM_REFLECTION_METHODBASE_GETMETHODBODY_OFFSET UNITYSDK_OFFSET(0x16376C40)
#define SYSTEM_REFLECTION_METHODBASE_GETMETHODFROMHANDLEINTERNALTYPE_NATIVE_OFFSET UNITYSDK_OFFSET(0x16377190)
#define SYSTEM_REFLECTION_METHODBASE_GETMETHODFROMHANDLEINTERNALTYPE_OFFSET UNITYSDK_OFFSET(0x16376990)
#define SYSTEM_REFLECTION_METHODBASE_GETMETHODFROMHANDLENOGENERICCHECK_1_OFFSET UNITYSDK_OFFSET(0x163771A0)
#define SYSTEM_REFLECTION_METHODBASE_GETMETHODFROMHANDLENOGENERICCHECK_OFFSET UNITYSDK_OFFSET(0x16377180)
#define SYSTEM_REFLECTION_METHODBASE_GETMETHODFROMHANDLE_OFFSET UNITYSDK_OFFSET(0x16376850)
#define SYSTEM_REFLECTION_METHODBASE_GETPARAMETERSCOUNT_OFFSET UNITYSDK_OFFSET(0x16377150)
#define SYSTEM_REFLECTION_METHODBASE_GETPARAMETERSINTERNAL_OFFSET UNITYSDK_OFFSET(0x16377140)
#define SYSTEM_REFLECTION_METHODBASE_GETPARAMETERSNOCOPY_OFFSET UNITYSDK_OFFSET(0x163769C0)
#define SYSTEM_REFLECTION_METHODBASE_GETPARAMETERTYPES_OFFSET UNITYSDK_OFFSET(0x16377000)
#define SYSTEM_REFLECTION_METHODBASE_GET_CALLINGCONVENTION_OFFSET UNITYSDK_OFFSET(0x163769D0)
#define SYSTEM_REFLECTION_METHODBASE_GET_CONTAINSGENERICPARAMETERS_OFFSET UNITYSDK_OFFSET(0x16376A50)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISABSTRACT_OFFSET UNITYSDK_OFFSET(0x16376B90)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x16376BD0)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISFINAL_OFFSET UNITYSDK_OFFSET(0x16376B50)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISGENERICMETHODDEFINITION_OFFSET UNITYSDK_OFFSET(0x16376A40)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISGENERICMETHOD_OFFSET UNITYSDK_OFFSET(0x16376A60)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISPRIVATE_OFFSET UNITYSDK_OFFSET(0x16376B10)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISPUBLIC_OFFSET UNITYSDK_OFFSET(0x16376AF0)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISSECURITYCRITICAL_OFFSET UNITYSDK_OFFSET(0x16376A70)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISSPECIALNAME_OFFSET UNITYSDK_OFFSET(0x16376BB0)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x16376B30)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISVIRTUAL_OFFSET UNITYSDK_OFFSET(0x16376B70)
#define SYSTEM_REFLECTION_METHODBASE_INVOKE_OFFSET UNITYSDK_OFFSET(0x16376AC0)
#define SYSTEM_REFLECTION_METHODBASE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x16375400)
#define SYSTEM_REFLECTION_METHODBASE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x163753F0)
#define SYSTEM_REFLECTION_METHODBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1636A5B0)

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
