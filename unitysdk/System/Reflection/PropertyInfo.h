#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/RuntimePropertyHandle.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/MemberInfo.h"
#include "unitysdk/System/Reflection/MemberTypes.h"
#include "unitysdk/System/Reflection/PropertyAttributes.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class ParameterInfo; }

#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_066F893FDE90FA5B_1_OFFSET UNITYSDK_OFFSET(0x1D812820)
#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_066F893FDE90FA5B_OFFSET UNITYSDK_OFFSET(0x1D8127F0)
#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_083577508CCFDAF3_OFFSET UNITYSDK_OFFSET(0x1D8127D0)
#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_174799846CA15A4F_OFFSET UNITYSDK_OFFSET(0x1D8127A0)
#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_1AAEC4BA42500199_OFFSET UNITYSDK_OFFSET(0x1D812740)
#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_3AD23FC3E0027BD0_OFFSET UNITYSDK_OFFSET(0x1D8128C0)
#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_4731EF2FE426A6EB_OFFSET UNITYSDK_OFFSET(0x1D812850)
#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_49E3FA61F17A6A16_OFFSET UNITYSDK_OFFSET(0x1D8126B0)
#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_7496EFF6EF43D7C2_OFFSET UNITYSDK_OFFSET(0x1D812770)
#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1D8126C0)
#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_845A70D2AF300EB9_1_OFFSET UNITYSDK_OFFSET(0x1D812690)
#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_845A70D2AF300EB9_2_OFFSET UNITYSDK_OFFSET(0x1D8126D0)
#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_845A70D2AF300EB9_3_OFFSET UNITYSDK_OFFSET(0x1D8126F0)
#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_845A70D2AF300EB9_OFFSET UNITYSDK_OFFSET(0x1D812670)
#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_993C03AFE823E7FA_OFFSET UNITYSDK_OFFSET(0x1D812710)
#define SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1D8127E0)

namespace System::Reflection
{
	inline static constexpr unsigned int PropertyInfo_TypeDefinitionIndex = 608;

	class PropertyInfo : public ::System::Reflection::MemberInfo
	{
	public:
		::System::Void Method_2_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_832295EC279E5994_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_2_845A70D2AF300EB9()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_845A70D2AF300EB9_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_2_845A70D2AF300EB9_1()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_845A70D2AF300EB9_1_OFFSET))(this);
		}

		::System::Reflection::MemberTypes Method_2_49E3FA61F17A6A16()
		{
			return ((::System::Reflection::MemberTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_49E3FA61F17A6A16_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_2_845A70D2AF300EB9_2()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_845A70D2AF300EB9_2_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_2_845A70D2AF300EB9_3()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_845A70D2AF300EB9_3_OFFSET))(this);
		}

		::System::Object* Method_2_993C03AFE823E7FA(::System::Object* obj, ::Il2CppArray<::System::Object*>* index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_993C03AFE823E7FA_OFFSET))(this, obj, index);
		}

		::System::Object* Method_2_1AAEC4BA42500199(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_1AAEC4BA42500199_OFFSET))(this, obj);
		}

		::System::Void Method_2_7496EFF6EF43D7C2(::System::Object* obj, ::System::Object* value, ::Il2CppArray<::System::Object*>* index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_7496EFF6EF43D7C2_OFFSET))(this, obj, value, index);
		}

		::System::Void Method_2_174799846CA15A4F(::System::Object* obj, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_174799846CA15A4F_OFFSET))(this, obj, value);
		}

		::System::Boolean Method_2_083577508CCFDAF3(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_083577508CCFDAF3_OFFSET))(this, obj);
		}

		::System::Int32 Method_2_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
		}

		static ::System::Boolean Method_2_066F893FDE90FA5B(::System::Reflection::PropertyInfo* left, ::System::Reflection::PropertyInfo* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_066F893FDE90FA5B_OFFSET))(left, right);
		}

		static ::System::Boolean Method_2_066F893FDE90FA5B_1(::System::Reflection::PropertyInfo* left, ::System::Reflection::PropertyInfo* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_066F893FDE90FA5B_1_OFFSET))(left, right);
		}

		static ::System::Reflection::PropertyInfo* Method_2_4731EF2FE426A6EB(::System::IntPtr event_handle, ::System::IntPtr type_handle)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_4731EF2FE426A6EB_OFFSET))(event_handle, type_handle);
		}

		static ::System::Reflection::PropertyInfo* Method_2_3AD23FC3E0027BD0(::Mono::RuntimePropertyHandle handle, ::System::RuntimeTypeHandle reflectedType)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::Mono::RuntimePropertyHandle, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_METHOD_2_3AD23FC3E0027BD0_OFFSET))(handle, reflectedType);
		}
	};
}
