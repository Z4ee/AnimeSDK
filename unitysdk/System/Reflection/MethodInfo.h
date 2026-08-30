#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Reflection/MemberTypes.h"
#include "unitysdk/System/Reflection/MethodBase.h"

namespace System { class Delegate; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Reflection { class ICustomAttributeProvider; }
namespace System::Reflection { class ParameterInfo; }

#define SYSTEM_REFLECTION_METHODINFO_CREATEDELEGATE_1_OFFSET UNITYSDK_OFFSET(0x1BD9A650)
#define SYSTEM_REFLECTION_METHODINFO_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1BD9A5F0)
#define SYSTEM_REFLECTION_METHODINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BD9A400)
#define SYSTEM_REFLECTION_METHODINFO_GETBASEMETHOD_OFFSET UNITYSDK_OFFSET(0x1BD9A6B0)
#define SYSTEM_REFLECTION_METHODINFO_GETGENERICARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1BD9A4D0)
#define SYSTEM_REFLECTION_METHODINFO_GETGENERICMETHODDEFINITION_OFFSET UNITYSDK_OFFSET(0x1BD9A530)
#define SYSTEM_REFLECTION_METHODINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BD9A410)
#define SYSTEM_REFLECTION_METHODINFO_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x1BD9A420)
#define SYSTEM_REFLECTION_METHODINFO_GET_RETURNPARAMETER_OFFSET UNITYSDK_OFFSET(0x1BD9A480)
#define SYSTEM_REFLECTION_METHODINFO_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x1BD9A430)
#define SYSTEM_REFLECTION_METHODINFO_MAKEGENERICMETHOD_OFFSET UNITYSDK_OFFSET(0x1BD9A590)
#define SYSTEM_REFLECTION_METHODINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1BD99180)
#define SYSTEM_REFLECTION_METHODINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1BD993B0)
#define SYSTEM_REFLECTION_METHODINFO_SYSTEM_RUNTIME_INTEROPSERVICES__METHODINFO_GETIDSOFNAMES_OFFSET UNITYSDK_OFFSET(0x1BD9A6C0)
#define SYSTEM_REFLECTION_METHODINFO_SYSTEM_RUNTIME_INTEROPSERVICES__METHODINFO_GETTYPEINFOCOUNT_OFFSET UNITYSDK_OFFSET(0x1BD9A780)
#define SYSTEM_REFLECTION_METHODINFO_SYSTEM_RUNTIME_INTEROPSERVICES__METHODINFO_GETTYPEINFO_OFFSET UNITYSDK_OFFSET(0x1BD9A740)
#define SYSTEM_REFLECTION_METHODINFO_SYSTEM_RUNTIME_INTEROPSERVICES__METHODINFO_GETTYPE_OFFSET UNITYSDK_OFFSET(0x1BD9A700)
#define SYSTEM_REFLECTION_METHODINFO_SYSTEM_RUNTIME_INTEROPSERVICES__METHODINFO_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BD9A7C0)
#define SYSTEM_REFLECTION_METHODINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD9A3F0)

namespace System::Reflection
{
	inline static constexpr unsigned int MethodInfo_TypeDefinitionIndex = 580;

	class MethodInfo : public ::System::Reflection::MethodBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO__CTOR_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::Reflection::MethodInfo* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::System::Reflection::MethodInfo* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::Reflection::MemberTypes get_MemberType()
		{
			return ((::System::Reflection::MemberTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_GET_MEMBERTYPE_OFFSET))(this);
		}

		::System::Type* get_ReturnType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_GET_RETURNTYPE_OFFSET))(this);
		}

		::System::Reflection::ParameterInfo* get_ReturnParameter()
		{
			return ((::System::Reflection::ParameterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_GET_RETURNPARAMETER_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* GetGenericArguments()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_GETGENERICARGUMENTS_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* GetGenericMethodDefinition()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_GETGENERICMETHODDEFINITION_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* MakeGenericMethod(::Il2CppArray<::System::Type*>* a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_MAKEGENERICMETHOD_OFFSET))(this, a1);
		}

		::System::Delegate* CreateDelegate(::System::Type* a1)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_CREATEDELEGATE_OFFSET))(this, a1);
		}

		::System::Delegate* CreateDelegate_1(::System::Type* a1, ::System::Object* a2)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_CREATEDELEGATE_1_OFFSET))(this, a1, a2);
		}

		::System::Reflection::MethodInfo* GetBaseMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_GETBASEMETHOD_OFFSET))(this);
		}

		::System::Void System_Runtime_InteropServices__MethodInfo_GetIDsOfNames(::System::Guid& a1, ::System::IntPtr a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::IntPtr a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid&, ::System::IntPtr, ::System::UInt32, ::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_SYSTEM_RUNTIME_INTEROPSERVICES__METHODINFO_GETIDSOFNAMES_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Type* System_Runtime_InteropServices__MethodInfo_GetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_SYSTEM_RUNTIME_INTEROPSERVICES__METHODINFO_GETTYPE_OFFSET))(this);
		}

		::System::Void System_Runtime_InteropServices__MethodInfo_GetTypeInfo(::System::UInt32 a1, ::System::UInt32 a2, ::System::IntPtr a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_SYSTEM_RUNTIME_INTEROPSERVICES__METHODINFO_GETTYPEINFO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void System_Runtime_InteropServices__MethodInfo_GetTypeInfoCount(::System::UInt32& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_SYSTEM_RUNTIME_INTEROPSERVICES__METHODINFO_GETTYPEINFOCOUNT_OFFSET))(this, a1);
		}

		::System::Void System_Runtime_InteropServices__MethodInfo_Invoke(::System::UInt32 a1, ::System::Guid& a2, ::System::UInt32 a3, ::System::Int16 a4, ::System::IntPtr a5, ::System::IntPtr a6, ::System::IntPtr a7, ::System::IntPtr a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Guid&, ::System::UInt32, ::System::Int16, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_SYSTEM_RUNTIME_INTEROPSERVICES__METHODINFO_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}
	};
}
