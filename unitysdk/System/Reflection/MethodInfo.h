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

#define SYSTEM_REFLECTION_METHODINFO_CREATEDELEGATE_1_OFFSET UNITYSDK_OFFSET(0x179A40D0)
#define SYSTEM_REFLECTION_METHODINFO_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x179A4070)
#define SYSTEM_REFLECTION_METHODINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x179A3E80)
#define SYSTEM_REFLECTION_METHODINFO_GETBASEMETHOD_OFFSET UNITYSDK_OFFSET(0x179A4130)
#define SYSTEM_REFLECTION_METHODINFO_GETGENERICARGUMENTS_OFFSET UNITYSDK_OFFSET(0x179A3F50)
#define SYSTEM_REFLECTION_METHODINFO_GETGENERICMETHODDEFINITION_OFFSET UNITYSDK_OFFSET(0x179A3FB0)
#define SYSTEM_REFLECTION_METHODINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x179A3E90)
#define SYSTEM_REFLECTION_METHODINFO_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x179A3EA0)
#define SYSTEM_REFLECTION_METHODINFO_GET_RETURNPARAMETER_OFFSET UNITYSDK_OFFSET(0x179A3F00)
#define SYSTEM_REFLECTION_METHODINFO_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x179A3EB0)
#define SYSTEM_REFLECTION_METHODINFO_MAKEGENERICMETHOD_OFFSET UNITYSDK_OFFSET(0x179A4010)
#define SYSTEM_REFLECTION_METHODINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x179A34A0)
#define SYSTEM_REFLECTION_METHODINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x179A3600)
#define SYSTEM_REFLECTION_METHODINFO_SYSTEM_RUNTIME_INTEROPSERVICES__METHODINFO_GETIDSOFNAMES_OFFSET UNITYSDK_OFFSET(0x179A4140)
#define SYSTEM_REFLECTION_METHODINFO_SYSTEM_RUNTIME_INTEROPSERVICES__METHODINFO_GETTYPEINFOCOUNT_OFFSET UNITYSDK_OFFSET(0x179A4200)
#define SYSTEM_REFLECTION_METHODINFO_SYSTEM_RUNTIME_INTEROPSERVICES__METHODINFO_GETTYPEINFO_OFFSET UNITYSDK_OFFSET(0x179A41C0)
#define SYSTEM_REFLECTION_METHODINFO_SYSTEM_RUNTIME_INTEROPSERVICES__METHODINFO_GETTYPE_OFFSET UNITYSDK_OFFSET(0x179A4180)
#define SYSTEM_REFLECTION_METHODINFO_SYSTEM_RUNTIME_INTEROPSERVICES__METHODINFO_INVOKE_OFFSET UNITYSDK_OFFSET(0x179A4240)
#define SYSTEM_REFLECTION_METHODINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x179A3E70)

namespace System::Reflection
{
	inline static constexpr unsigned int MethodInfo_TypeDefinitionIndex = 578;

	class MethodInfo : public ::System::Reflection::MethodBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO__CTOR_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::Reflection::MethodInfo* left, ::System::Reflection::MethodInfo* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::System::Reflection::MethodInfo* left, ::System::Reflection::MethodInfo* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_EQUALS_OFFSET))(this, obj);
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

		::System::Reflection::MethodInfo* MakeGenericMethod(::Il2CppArray<::System::Type*>* typeArguments)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_MAKEGENERICMETHOD_OFFSET))(this, typeArguments);
		}

		::System::Delegate* CreateDelegate(::System::Type* delegateType)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_CREATEDELEGATE_OFFSET))(this, delegateType);
		}

		::System::Delegate* CreateDelegate_1(::System::Type* delegateType, ::System::Object* target)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_CREATEDELEGATE_1_OFFSET))(this, delegateType, target);
		}

		::System::Reflection::MethodInfo* GetBaseMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_GETBASEMETHOD_OFFSET))(this);
		}

		::System::Void System_Runtime_InteropServices__MethodInfo_GetIDsOfNames(::System::Guid& riid, ::System::IntPtr rgszNames, ::System::UInt32 cNames, ::System::UInt32 lcid, ::System::IntPtr rgDispId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Guid&, ::System::IntPtr, ::System::UInt32, ::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_SYSTEM_RUNTIME_INTEROPSERVICES__METHODINFO_GETIDSOFNAMES_OFFSET))(this, riid, rgszNames, cNames, lcid, rgDispId);
		}

		::System::Type* System_Runtime_InteropServices__MethodInfo_GetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_SYSTEM_RUNTIME_INTEROPSERVICES__METHODINFO_GETTYPE_OFFSET))(this);
		}

		::System::Void System_Runtime_InteropServices__MethodInfo_GetTypeInfo(::System::UInt32 iTInfo, ::System::UInt32 lcid, ::System::IntPtr ppTInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_SYSTEM_RUNTIME_INTEROPSERVICES__METHODINFO_GETTYPEINFO_OFFSET))(this, iTInfo, lcid, ppTInfo);
		}

		::System::Void System_Runtime_InteropServices__MethodInfo_GetTypeInfoCount(::System::UInt32& pcTInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_SYSTEM_RUNTIME_INTEROPSERVICES__METHODINFO_GETTYPEINFOCOUNT_OFFSET))(this, pcTInfo);
		}

		::System::Void System_Runtime_InteropServices__MethodInfo_Invoke(::System::UInt32 dispIdMember, ::System::Guid& riid, ::System::UInt32 lcid, ::System::Int16 wFlags, ::System::IntPtr pDispParams, ::System::IntPtr pVarResult, ::System::IntPtr pExcepInfo, ::System::IntPtr puArgErr)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Guid&, ::System::UInt32, ::System::Int16, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODINFO_SYSTEM_RUNTIME_INTEROPSERVICES__METHODINFO_INVOKE_OFFSET))(this, dispIdMember, riid, lcid, wFlags, pDispParams, pVarResult, pExcepInfo, puArgErr);
		}
	};
}
