#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/CallingConventions.h"
#include "unitysdk/System/Reflection/MethodAttributes.h"
#include "unitysdk/System/Reflection/MethodImplAttributes.h"
#include "unitysdk/System/Reflection/PInvokeAttributes.h"
#include "unitysdk/System/Reflection/RuntimeMethodInfo.h"
#include "unitysdk/System/RuntimeMethodHandle.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class CustomAttributeData; }
namespace System::Reflection { class ICustomAttributeProvider; }
namespace System::Reflection { class MethodBase; }
namespace System::Reflection { class MethodBody; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class ParameterInfo; }

#define SYSTEM_REFLECTION_MONOMETHOD_CONVERTVALUES_OFFSET UNITYSDK_OFFSET(0x1BD9BE90)
#define SYSTEM_REFLECTION_MONOMETHOD_GETBASEDEFINITION_OFFSET UNITYSDK_OFFSET(0x1BD9D7F0)
#define SYSTEM_REFLECTION_MONOMETHOD_GETBASEMETHOD_OFFSET UNITYSDK_OFFSET(0x1BD9D800)
#define SYSTEM_REFLECTION_MONOMETHOD_GETCUSTOMATTRIBUTESDATA_OFFSET UNITYSDK_OFFSET(0x1BD9E700)
#define SYSTEM_REFLECTION_MONOMETHOD_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1BD9DF00)
#define SYSTEM_REFLECTION_MONOMETHOD_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1BD9DEF0)
#define SYSTEM_REFLECTION_MONOMETHOD_GETGENERICARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1BD9E3B0)
#define SYSTEM_REFLECTION_MONOMETHOD_GETGENERICMETHODDEFINITION_IMPL_OFFSET UNITYSDK_OFFSET(0x1BD9E3D0)
#define SYSTEM_REFLECTION_MONOMETHOD_GETGENERICMETHODDEFINITION_OFFSET UNITYSDK_OFFSET(0x1BD9E410)
#define SYSTEM_REFLECTION_MONOMETHOD_GETMETHODBODY_OFFSET UNITYSDK_OFFSET(0x1BD9E6F0)
#define SYSTEM_REFLECTION_MONOMETHOD_GETMETHODIMPLEMENTATIONFLAGS_OFFSET UNITYSDK_OFFSET(0x1BD9D9B0)
#define SYSTEM_REFLECTION_MONOMETHOD_GETPARAMETERSCOUNT_OFFSET UNITYSDK_OFFSET(0x1BD9DB00)
#define SYSTEM_REFLECTION_MONOMETHOD_GETPARAMETERSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BD9DAC0)
#define SYSTEM_REFLECTION_MONOMETHOD_GETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1BD9DA10)
#define SYSTEM_REFLECTION_MONOMETHOD_GETPINVOKE_OFFSET UNITYSDK_OFFSET(0x1BD9DF10)
#define SYSTEM_REFLECTION_MONOMETHOD_GETPSEUDOCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1BD9DF30)
#define SYSTEM_REFLECTION_MONOMETHOD_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1BD9DDA0)
#define SYSTEM_REFLECTION_MONOMETHOD_GET_BASE_METHOD_OFFSET UNITYSDK_OFFSET(0x1BD9D7E0)
#define SYSTEM_REFLECTION_MONOMETHOD_GET_CALLINGCONVENTION_OFFSET UNITYSDK_OFFSET(0x1BD9DDB0)
#define SYSTEM_REFLECTION_MONOMETHOD_GET_CONTAINSGENERICPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1BD9E4F0)
#define SYSTEM_REFLECTION_MONOMETHOD_GET_CORE_CLR_SECURITY_LEVEL_OFFSET UNITYSDK_OFFSET(0x1BD9E780)
#define SYSTEM_REFLECTION_MONOMETHOD_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x1BD9DE20)
#define SYSTEM_REFLECTION_MONOMETHOD_GET_ISGENERICMETHODDEFINITION_OFFSET UNITYSDK_OFFSET(0x1BD9E4B0)
#define SYSTEM_REFLECTION_MONOMETHOD_GET_ISGENERICMETHOD_OFFSET UNITYSDK_OFFSET(0x1BD9E4C0)
#define SYSTEM_REFLECTION_MONOMETHOD_GET_ISSECURITYCRITICAL_OFFSET UNITYSDK_OFFSET(0x1BD9E790)
#define SYSTEM_REFLECTION_MONOMETHOD_GET_METHODHANDLE_OFFSET UNITYSDK_OFFSET(0x1BD9DD90)
#define SYSTEM_REFLECTION_MONOMETHOD_GET_NAME_1_OFFSET UNITYSDK_OFFSET(0x1BD9DE80)
#define SYSTEM_REFLECTION_MONOMETHOD_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1BD9C570)
#define SYSTEM_REFLECTION_MONOMETHOD_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1BD9DE10)
#define SYSTEM_REFLECTION_MONOMETHOD_GET_RETURNPARAMETER_OFFSET UNITYSDK_OFFSET(0x1BD9D810)
#define SYSTEM_REFLECTION_MONOMETHOD_GET_RETURNTYPECUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1BD9D910)
#define SYSTEM_REFLECTION_MONOMETHOD_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x1BD9D8B0)
#define SYSTEM_REFLECTION_MONOMETHOD_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0x1BD9DB50)
#define SYSTEM_REFLECTION_MONOMETHOD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BD9DB70)
#define SYSTEM_REFLECTION_MONOMETHOD_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x1BD9DEE0)
#define SYSTEM_REFLECTION_MONOMETHOD_MAKEGENERICMETHOD_IMPL_OFFSET UNITYSDK_OFFSET(0x1BD9E3C0)
#define SYSTEM_REFLECTION_MONOMETHOD_MAKEGENERICMETHOD_OFFSET UNITYSDK_OFFSET(0x1BD9E0F0)
#define SYSTEM_REFLECTION_MONOMETHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD9D7D0)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoMethod_TypeDefinitionIndex = 622;

	class MonoMethod : public ::System::Reflection::RuntimeMethodInfo
	{
	public:
		::System::IntPtr mhandle; // 0x10
		::System::String* name; // 0x18
		::System::Type* reftype; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD__CTOR_OFFSET))(this);
		}

		static ::System::String* get_name(::System::Reflection::MethodBase* a1)
		{
			return ((::System::String*(*)(::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GET_NAME_OFFSET))(a1);
		}

		static ::System::Reflection::MonoMethod* get_base_method(::System::Reflection::MonoMethod* a1, ::System::Boolean a2)
		{
			return ((::System::Reflection::MonoMethod*(*)(::System::Reflection::MonoMethod*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GET_BASE_METHOD_OFFSET))(a1, a2);
		}

		::System::Reflection::MethodInfo* GetBaseDefinition()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GETBASEDEFINITION_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* GetBaseMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GETBASEMETHOD_OFFSET))(this);
		}

		::System::Reflection::ParameterInfo* get_ReturnParameter()
		{
			return ((::System::Reflection::ParameterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GET_RETURNPARAMETER_OFFSET))(this);
		}

		::System::Type* get_ReturnType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GET_RETURNTYPE_OFFSET))(this);
		}

		::System::Reflection::ICustomAttributeProvider* get_ReturnTypeCustomAttributes()
		{
			return ((::System::Reflection::ICustomAttributeProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GET_RETURNTYPECUSTOMATTRIBUTES_OFFSET))(this);
		}

		::System::Reflection::MethodImplAttributes GetMethodImplementationFlags()
		{
			return ((::System::Reflection::MethodImplAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GETMETHODIMPLEMENTATIONFLAGS_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* GetParameters()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GETPARAMETERS_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* GetParametersInternal()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GETPARAMETERSINTERNAL_OFFSET))(this);
		}

		::System::Int32 GetParametersCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GETPARAMETERSCOUNT_OFFSET))(this);
		}

		::System::Object* InternalInvoke(::System::Object* a1, ::Il2CppArray<::System::Object*>* a2, ::System::Exception*& a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::System::Exception*&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_INTERNALINVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* Invoke(::System::Object* a1, ::System::Reflection::BindingFlags a2, ::System::Reflection::Binder* a3, ::Il2CppArray<::System::Object*>* a4, ::System::Globalization::CultureInfo* a5)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void ConvertValues(::System::Reflection::Binder* a1, ::Il2CppArray<::System::Object*>* a2, ::Il2CppArray<::System::Reflection::ParameterInfo*>* a3, ::System::Globalization::CultureInfo* a4, ::System::Reflection::BindingFlags a5)
		{
			return ((::System::Void(*)(::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::System::Globalization::CultureInfo*, ::System::Reflection::BindingFlags))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_CONVERTVALUES_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::RuntimeMethodHandle get_MethodHandle()
		{
			return ((::System::RuntimeMethodHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GET_METHODHANDLE_OFFSET))(this);
		}

		::System::Reflection::MethodAttributes get_Attributes()
		{
			return ((::System::Reflection::MethodAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Reflection::CallingConventions get_CallingConvention()
		{
			return ((::System::Reflection::CallingConventions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GET_CALLINGCONVENTION_OFFSET))(this);
		}

		::System::Type* get_ReflectedType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GET_REFLECTEDTYPE_OFFSET))(this);
		}

		::System::Type* get_DeclaringType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GET_DECLARINGTYPE_OFFSET))(this);
		}

		::System::String* get_Name_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GET_NAME_1_OFFSET))(this);
		}

		::System::Boolean IsDefined(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_ISDEFINED_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean a1)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GETCUSTOMATTRIBUTES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GETCUSTOMATTRIBUTES_1_OFFSET))(this, a1, a2);
		}

		::System::Void GetPInvoke(::System::Reflection::PInvokeAttributes& a1, ::System::String*& a2, ::System::String*& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::PInvokeAttributes&, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GETPINVOKE_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Object*>* GetPseudoCustomAttributes()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GETPSEUDOCUSTOMATTRIBUTES_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* MakeGenericMethod(::Il2CppArray<::System::Type*>* a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_MAKEGENERICMETHOD_OFFSET))(this, a1);
		}

		::System::Reflection::MethodInfo* MakeGenericMethod_impl(::Il2CppArray<::System::Type*>* a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_MAKEGENERICMETHOD_IMPL_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Type*>* GetGenericArguments()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GETGENERICARGUMENTS_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* GetGenericMethodDefinition_impl()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GETGENERICMETHODDEFINITION_IMPL_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* GetGenericMethodDefinition()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GETGENERICMETHODDEFINITION_OFFSET))(this);
		}

		::System::Boolean get_IsGenericMethodDefinition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GET_ISGENERICMETHODDEFINITION_OFFSET))(this);
		}

		::System::Boolean get_IsGenericMethod()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GET_ISGENERICMETHOD_OFFSET))(this);
		}

		::System::Boolean get_ContainsGenericParameters()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GET_CONTAINSGENERICPARAMETERS_OFFSET))(this);
		}

		::System::Reflection::MethodBody* GetMethodBody()
		{
			return ((::System::Reflection::MethodBody*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GETMETHODBODY_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributesData()
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GETCUSTOMATTRIBUTESDATA_OFFSET))(this);
		}

		static ::System::Int32 get_core_clr_security_level()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GET_CORE_CLR_SECURITY_LEVEL_OFFSET))();
		}

		::System::Boolean get_IsSecurityCritical()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOMETHOD_GET_ISSECURITYCRITICAL_OFFSET))(this);
		}
	};
}
