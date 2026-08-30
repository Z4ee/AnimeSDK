#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/CallingConventions.h"
#include "unitysdk/System/Reflection/MethodAttributes.h"
#include "unitysdk/System/Reflection/MethodImplAttributes.h"
#include "unitysdk/System/Reflection/RuntimeConstructorInfo.h"
#include "unitysdk/System/RuntimeMethodHandle.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class CustomAttributeData; }
namespace System::Reflection { class MethodBody; }
namespace System::Reflection { class ParameterInfo; }

#define SYSTEM_REFLECTION_MONOCMETHOD_DOINVOKE_OFFSET UNITYSDK_OFFSET(0x1BD9BB70)
#define SYSTEM_REFLECTION_MONOCMETHOD_GETCUSTOMATTRIBUTESDATA_OFFSET UNITYSDK_OFFSET(0x1BD9CA50)
#define SYSTEM_REFLECTION_MONOCMETHOD_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1BD9C5E0)
#define SYSTEM_REFLECTION_MONOCMETHOD_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1BD9C5D0)
#define SYSTEM_REFLECTION_MONOCMETHOD_GETMETHODBODY_OFFSET UNITYSDK_OFFSET(0x1BD9C5F0)
#define SYSTEM_REFLECTION_MONOCMETHOD_GETMETHODIMPLEMENTATIONFLAGS_OFFSET UNITYSDK_OFFSET(0x1BD9B770)
#define SYSTEM_REFLECTION_MONOCMETHOD_GETPARAMETERSCOUNT_OFFSET UNITYSDK_OFFSET(0x1BD9B850)
#define SYSTEM_REFLECTION_MONOCMETHOD_GETPARAMETERSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BD9B810)
#define SYSTEM_REFLECTION_MONOCMETHOD_GETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1BD9B7D0)
#define SYSTEM_REFLECTION_MONOCMETHOD_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1BD9C3C0)
#define SYSTEM_REFLECTION_MONOCMETHOD_GET_CALLINGCONVENTION_OFFSET UNITYSDK_OFFSET(0x1BD9C3D0)
#define SYSTEM_REFLECTION_MONOCMETHOD_GET_CONTAINSGENERICPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1BD9C430)
#define SYSTEM_REFLECTION_MONOCMETHOD_GET_CORE_CLR_SECURITY_LEVEL_OFFSET UNITYSDK_OFFSET(0x1BD9CAD0)
#define SYSTEM_REFLECTION_MONOCMETHOD_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x1BD9BB10)
#define SYSTEM_REFLECTION_MONOCMETHOD_GET_ISSECURITYCRITICAL_OFFSET UNITYSDK_OFFSET(0x1BD9CAE0)
#define SYSTEM_REFLECTION_MONOCMETHOD_GET_METHODHANDLE_OFFSET UNITYSDK_OFFSET(0x1BD9C3B0)
#define SYSTEM_REFLECTION_MONOCMETHOD_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1BD9C510)
#define SYSTEM_REFLECTION_MONOCMETHOD_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1BD9C500)
#define SYSTEM_REFLECTION_MONOCMETHOD_INTERNALINVOKE_1_OFFSET UNITYSDK_OFFSET(0x1BD9C290)
#define SYSTEM_REFLECTION_MONOCMETHOD_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0x1BD9B8A0)
#define SYSTEM_REFLECTION_MONOCMETHOD_INVOKE_1_OFFSET UNITYSDK_OFFSET(0x1BD9C380)
#define SYSTEM_REFLECTION_MONOCMETHOD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BD9B8C0)
#define SYSTEM_REFLECTION_MONOCMETHOD_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x1BD9C5C0)
#define SYSTEM_REFLECTION_MONOCMETHOD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BD9C600)
#define SYSTEM_REFLECTION_MONOCMETHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD9CAF0)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoCMethod_TypeDefinitionIndex = 624;

	class MonoCMethod : public ::System::Reflection::RuntimeConstructorInfo
	{
	public:
		::System::IntPtr mhandle; // 0x10
		::System::String* name; // 0x18
		::System::Type* reftype; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD__CTOR_OFFSET))(this);
		}

		::System::Reflection::MethodImplAttributes GetMethodImplementationFlags()
		{
			return ((::System::Reflection::MethodImplAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_GETMETHODIMPLEMENTATIONFLAGS_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* GetParameters()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_GETPARAMETERS_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* GetParametersInternal()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_GETPARAMETERSINTERNAL_OFFSET))(this);
		}

		::System::Int32 GetParametersCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_GETPARAMETERSCOUNT_OFFSET))(this);
		}

		::System::Object* InternalInvoke(::System::Object* a1, ::Il2CppArray<::System::Object*>* a2, ::System::Exception*& a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::System::Exception*&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_INTERNALINVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* Invoke(::System::Object* a1, ::System::Reflection::BindingFlags a2, ::System::Reflection::Binder* a3, ::Il2CppArray<::System::Object*>* a4, ::System::Globalization::CultureInfo* a5)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Object* DoInvoke(::System::Object* a1, ::System::Reflection::BindingFlags a2, ::System::Reflection::Binder* a3, ::Il2CppArray<::System::Object*>* a4, ::System::Globalization::CultureInfo* a5)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_DOINVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Object* InternalInvoke_1(::System::Object* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_INTERNALINVOKE_1_OFFSET))(this, a1, a2);
		}

		::System::Object* Invoke_1(::System::Reflection::BindingFlags a1, ::System::Reflection::Binder* a2, ::Il2CppArray<::System::Object*>* a3, ::System::Globalization::CultureInfo* a4)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_INVOKE_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::RuntimeMethodHandle get_MethodHandle()
		{
			return ((::System::RuntimeMethodHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_GET_METHODHANDLE_OFFSET))(this);
		}

		::System::Reflection::MethodAttributes get_Attributes()
		{
			return ((::System::Reflection::MethodAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Reflection::CallingConventions get_CallingConvention()
		{
			return ((::System::Reflection::CallingConventions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_GET_CALLINGCONVENTION_OFFSET))(this);
		}

		::System::Boolean get_ContainsGenericParameters()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_GET_CONTAINSGENERICPARAMETERS_OFFSET))(this);
		}

		::System::Type* get_ReflectedType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_GET_REFLECTEDTYPE_OFFSET))(this);
		}

		::System::Type* get_DeclaringType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_GET_DECLARINGTYPE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_GET_NAME_OFFSET))(this);
		}

		::System::Boolean IsDefined(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_ISDEFINED_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean a1)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_GETCUSTOMATTRIBUTES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_GETCUSTOMATTRIBUTES_1_OFFSET))(this, a1, a2);
		}

		::System::Reflection::MethodBody* GetMethodBody()
		{
			return ((::System::Reflection::MethodBody*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_GETMETHODBODY_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_TOSTRING_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributesData()
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_GETCUSTOMATTRIBUTESDATA_OFFSET))(this);
		}

		static ::System::Int32 get_core_clr_security_level()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_GET_CORE_CLR_SECURITY_LEVEL_OFFSET))();
		}

		::System::Boolean get_IsSecurityCritical()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOCMETHOD_GET_ISSECURITYCRITICAL_OFFSET))(this);
		}
	};
}
