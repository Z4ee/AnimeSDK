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

#define SYSTEM_REFLECTION_METHODBASE_CONSTRUCTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x18755BD0)
#define SYSTEM_REFLECTION_METHODBASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x187558F0)
#define SYSTEM_REFLECTION_METHODBASE_FORMATNAMEANDSIG_OFFSET UNITYSDK_OFFSET(0x18755E40)
#define SYSTEM_REFLECTION_METHODBASE_GETGENERICARGUMENTS_OFFSET UNITYSDK_OFFSET(0x18755920)
#define SYSTEM_REFLECTION_METHODBASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1874AF70)
#define SYSTEM_REFLECTION_METHODBASE_GETMETHODBODYINTERNAL_OFFSET UNITYSDK_OFFSET(0x187560C0)
#define SYSTEM_REFLECTION_METHODBASE_GETMETHODBODY_1_OFFSET UNITYSDK_OFFSET(0x187560D0)
#define SYSTEM_REFLECTION_METHODBASE_GETMETHODBODY_OFFSET UNITYSDK_OFFSET(0x18755B80)
#define SYSTEM_REFLECTION_METHODBASE_GETMETHODFROMHANDLEINTERNALTYPE_NATIVE_OFFSET UNITYSDK_OFFSET(0x18756080)
#define SYSTEM_REFLECTION_METHODBASE_GETMETHODFROMHANDLEINTERNALTYPE_OFFSET UNITYSDK_OFFSET(0x187558D0)
#define SYSTEM_REFLECTION_METHODBASE_GETMETHODFROMHANDLENOGENERICCHECK_1_OFFSET UNITYSDK_OFFSET(0x18756090)
#define SYSTEM_REFLECTION_METHODBASE_GETMETHODFROMHANDLENOGENERICCHECK_OFFSET UNITYSDK_OFFSET(0x18756070)
#define SYSTEM_REFLECTION_METHODBASE_GETMETHODFROMHANDLE_OFFSET UNITYSDK_OFFSET(0x18755790)
#define SYSTEM_REFLECTION_METHODBASE_GETPARAMETERSCOUNT_OFFSET UNITYSDK_OFFSET(0x18756040)
#define SYSTEM_REFLECTION_METHODBASE_GETPARAMETERSINTERNAL_OFFSET UNITYSDK_OFFSET(0x18756030)
#define SYSTEM_REFLECTION_METHODBASE_GETPARAMETERSNOCOPY_OFFSET UNITYSDK_OFFSET(0x18755900)
#define SYSTEM_REFLECTION_METHODBASE_GETPARAMETERTYPES_OFFSET UNITYSDK_OFFSET(0x18755F20)
#define SYSTEM_REFLECTION_METHODBASE_GET_CALLINGCONVENTION_OFFSET UNITYSDK_OFFSET(0x18755910)
#define SYSTEM_REFLECTION_METHODBASE_GET_CONTAINSGENERICPARAMETERS_OFFSET UNITYSDK_OFFSET(0x18755990)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISABSTRACT_OFFSET UNITYSDK_OFFSET(0x18755AD0)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x18755B10)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISFINAL_OFFSET UNITYSDK_OFFSET(0x18755A90)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISGENERICMETHODDEFINITION_OFFSET UNITYSDK_OFFSET(0x18755980)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISGENERICMETHOD_OFFSET UNITYSDK_OFFSET(0x187559A0)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISPRIVATE_OFFSET UNITYSDK_OFFSET(0x18755A50)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISPUBLIC_OFFSET UNITYSDK_OFFSET(0x18755A30)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISSECURITYCRITICAL_OFFSET UNITYSDK_OFFSET(0x187559B0)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISSPECIALNAME_OFFSET UNITYSDK_OFFSET(0x18755AF0)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x18755A70)
#define SYSTEM_REFLECTION_METHODBASE_GET_ISVIRTUAL_OFFSET UNITYSDK_OFFSET(0x18755AB0)
#define SYSTEM_REFLECTION_METHODBASE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18755A00)
#define SYSTEM_REFLECTION_METHODBASE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x187544B0)
#define SYSTEM_REFLECTION_METHODBASE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x187544A0)
#define SYSTEM_REFLECTION_METHODBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1874AEC0)

namespace System::Reflection
{
	inline static constexpr unsigned int MethodBase_TypeDefinitionIndex = 574;

	class MethodBase : public ::System::Reflection::MemberInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE__CTOR_OFFSET))(this);
		}

		static ::System::Reflection::MethodBase* GetMethodFromHandle(::System::RuntimeMethodHandle a1)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::RuntimeMethodHandle))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETMETHODFROMHANDLE_OFFSET))(a1);
		}

		static ::System::Boolean op_Equality(::System::Reflection::MethodBase* a1, ::System::Reflection::MethodBase* a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::System::Reflection::MethodBase* a1, ::System::Reflection::MethodBase* a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_EQUALS_OFFSET))(this, a1);
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

		::System::Object* Invoke(::System::Object* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_INVOKE_OFFSET))(this, a1, a2);
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

		static ::System::String* ConstructParameters(::Il2CppArray<::System::Type*>* a1, ::System::Reflection::CallingConventions a2, ::System::Boolean a3)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Type*>*, ::System::Reflection::CallingConventions, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_CONSTRUCTPARAMETERS_OFFSET))(a1, a2, a3);
		}

		::System::String* FormatNameAndSig(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_FORMATNAMEANDSIG_OFFSET))(this, a1);
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

		static ::System::Reflection::MethodBase* GetMethodFromHandleNoGenericCheck(::System::RuntimeMethodHandle a1)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::RuntimeMethodHandle))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETMETHODFROMHANDLENOGENERICCHECK_OFFSET))(a1);
		}

		static ::System::Reflection::MethodBase* GetMethodFromHandleNoGenericCheck_1(::System::RuntimeMethodHandle a1, ::System::RuntimeTypeHandle a2)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::RuntimeMethodHandle, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETMETHODFROMHANDLENOGENERICCHECK_1_OFFSET))(a1, a2);
		}

		static ::System::Reflection::MethodBody* GetMethodBodyInternal(::System::IntPtr a1)
		{
			return ((::System::Reflection::MethodBody*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETMETHODBODYINTERNAL_OFFSET))(a1);
		}

		static ::System::Reflection::MethodBody* GetMethodBody_1(::System::IntPtr a1)
		{
			return ((::System::Reflection::MethodBody*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETMETHODBODY_1_OFFSET))(a1);
		}

		static ::System::Reflection::MethodBase* GetMethodFromHandleInternalType(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETMETHODFROMHANDLEINTERNALTYPE_OFFSET))(a1, a2);
		}

		static ::System::Reflection::MethodBase* GetMethodFromHandleInternalType_native(::System::IntPtr a1, ::System::IntPtr a2, ::System::Boolean a3)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::IntPtr, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_GETMETHODFROMHANDLEINTERNALTYPE_NATIVE_OFFSET))(a1, a2, a3);
		}
	};
}
