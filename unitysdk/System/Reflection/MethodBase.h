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

#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_083577508CCFDAF3_OFFSET UNITYSDK_OFFSET(0x18C61970)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_0915866CD83E899B_OFFSET UNITYSDK_OFFSET(0x18C621E0)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_106D8FAA36AD637B_OFFSET UNITYSDK_OFFSET(0x18C61C10)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_200489BA9B5FC653_OFFSET UNITYSDK_OFFSET(0x18C5B040)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_2F730F34E4C17B6E_1_OFFSET UNITYSDK_OFFSET(0x18C62220)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_2F730F34E4C17B6E_OFFSET UNITYSDK_OFFSET(0x18C62210)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_4231193AE490101B_OFFSET UNITYSDK_OFFSET(0x18C618A0)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_549DB8B146E4945B_OFFSET UNITYSDK_OFFSET(0x18C62030)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_5E72916301E347E2_OFFSET UNITYSDK_OFFSET(0x18C61BA0)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_6C06AA2933C8D14A_OFFSET UNITYSDK_OFFSET(0x18C621C0)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_811527211B802BD9_OFFSET UNITYSDK_OFFSET(0x18C61760)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x18C61960)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_84993E31F4FB35BC_OFFSET UNITYSDK_OFFSET(0x18C621D0)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_A23671C5151B5231_OFFSET UNITYSDK_OFFSET(0x18C618B0)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_B28E4D719DA9F08F_OFFSET UNITYSDK_OFFSET(0x18C619B0)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_B6F7C07820522785_OFFSET UNITYSDK_OFFSET(0x18C619A0)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_BBBCC29F1F1F0499_OFFSET UNITYSDK_OFFSET(0x18C560C0)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_BDB668AB780CC35F_OFFSET UNITYSDK_OFFSET(0x18C61A40)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_C345B28144730082_OFFSET UNITYSDK_OFFSET(0x18C61F20)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_C3A609084BF3E777_1_OFFSET UNITYSDK_OFFSET(0x18C62180)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_C3A609084BF3E777_OFFSET UNITYSDK_OFFSET(0x18C61990)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x18C61980)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_D5F1805833F94C3C_OFFSET UNITYSDK_OFFSET(0x18C61A90)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_E1C1FC21D2B0C6F0_OFFSET UNITYSDK_OFFSET(0x18C61C60)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x18C61A20)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x18C61A30)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x18C61AC0)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0x18C61AE0)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_F0088C88851A7DFB_5_OFFSET UNITYSDK_OFFSET(0x18C61B00)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_F0088C88851A7DFB_6_OFFSET UNITYSDK_OFFSET(0x18C61B20)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_F0088C88851A7DFB_7_OFFSET UNITYSDK_OFFSET(0x18C61B40)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_F0088C88851A7DFB_8_OFFSET UNITYSDK_OFFSET(0x18C61B60)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_F0088C88851A7DFB_9_OFFSET UNITYSDK_OFFSET(0x18C61B80)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18C61A10)
#define SYSTEM_REFLECTION_METHODBASE_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x18C62190)

namespace System::Reflection
{
	inline static constexpr unsigned int MethodBase_TypeDefinitionIndex = 549;

	class MethodBase : public ::System::Reflection::MemberInfo
	{
	public:
		::System::Void Method_2_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_832295EC279E5994_OFFSET))(this);
		}

		static ::System::Reflection::MethodBase* Method_2_811527211B802BD9(::System::RuntimeMethodHandle handle)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::RuntimeMethodHandle))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_811527211B802BD9_OFFSET))(handle);
		}

		static ::System::Reflection::MethodBase* Method_2_A23671C5151B5231(::System::RuntimeMethodHandle handle, ::System::RuntimeTypeHandle declaringType)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::RuntimeMethodHandle, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_A23671C5151B5231_OFFSET))(handle, declaringType);
		}

		static ::System::Boolean Method_2_BBBCC29F1F1F0499(::System::Reflection::MethodBase* left, ::System::Reflection::MethodBase* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_BBBCC29F1F1F0499_OFFSET))(left, right);
		}

		static ::System::Boolean Method_2_200489BA9B5FC653(::System::Reflection::MethodBase* left, ::System::Reflection::MethodBase* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::MethodBase*, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_200489BA9B5FC653_OFFSET))(left, right);
		}

		::System::Boolean Method_2_083577508CCFDAF3(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_083577508CCFDAF3_OFFSET))(this, obj);
		}

		::System::Int32 Method_2_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* Method_2_C3A609084BF3E777()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_C3A609084BF3E777_OFFSET))(this);
		}

		::System::Reflection::CallingConventions Method_2_B6F7C07820522785()
		{
			return ((::System::Reflection::CallingConventions(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_B6F7C07820522785_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* Method_2_B28E4D719DA9F08F()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_B28E4D719DA9F08F_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_F0088C88851A7DFB_2_OFFSET))(this);
		}

		::System::Boolean Method_2_BDB668AB780CC35F()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_BDB668AB780CC35F_OFFSET))(this);
		}

		::System::Object* Method_2_D5F1805833F94C3C(::System::Object* obj, ::Il2CppArray<::System::Object*>* parameters)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_D5F1805833F94C3C_OFFSET))(this, obj, parameters);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_F0088C88851A7DFB_3_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_F0088C88851A7DFB_4_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_F0088C88851A7DFB_5_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_6()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_F0088C88851A7DFB_6_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_7()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_F0088C88851A7DFB_7_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_8()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_F0088C88851A7DFB_8_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_9()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_F0088C88851A7DFB_9_OFFSET))(this);
		}

		::System::Boolean Method_2_5E72916301E347E2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_5E72916301E347E2_OFFSET))(this);
		}

		::System::Reflection::MethodBody* Method_2_106D8FAA36AD637B()
		{
			return ((::System::Reflection::MethodBody*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_106D8FAA36AD637B_OFFSET))(this);
		}

		static ::System::String* Method_2_E1C1FC21D2B0C6F0(::Il2CppArray<::System::Type*>* parameterTypes, ::System::Reflection::CallingConventions callingConvention, ::System::Boolean serialization)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Type*>*, ::System::Reflection::CallingConventions, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_E1C1FC21D2B0C6F0_OFFSET))(parameterTypes, callingConvention, serialization);
		}

		::System::String* Method_2_C345B28144730082(::System::Boolean serialization)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_C345B28144730082_OFFSET))(this, serialization);
		}

		::Il2CppArray<::System::Type*>* Method_2_549DB8B146E4945B()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_549DB8B146E4945B_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* Method_2_C3A609084BF3E777_1()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_C3A609084BF3E777_1_OFFSET))(this);
		}

		::System::Int32 Method_2_F5599B7DA8E7E53C()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
		}

		static ::System::Reflection::MethodBase* Method_2_6C06AA2933C8D14A(::System::RuntimeMethodHandle handle)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::RuntimeMethodHandle))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_6C06AA2933C8D14A_OFFSET))(handle);
		}

		static ::System::Reflection::MethodBase* Method_2_0915866CD83E899B(::System::RuntimeMethodHandle handle, ::System::RuntimeTypeHandle reflectedType)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::RuntimeMethodHandle, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_0915866CD83E899B_OFFSET))(handle, reflectedType);
		}

		static ::System::Reflection::MethodBody* Method_2_2F730F34E4C17B6E(::System::IntPtr handle)
		{
			return ((::System::Reflection::MethodBody*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_2F730F34E4C17B6E_OFFSET))(handle);
		}

		static ::System::Reflection::MethodBody* Method_2_2F730F34E4C17B6E_1(::System::IntPtr handle)
		{
			return ((::System::Reflection::MethodBody*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_2F730F34E4C17B6E_1_OFFSET))(handle);
		}

		static ::System::Reflection::MethodBase* Method_2_4231193AE490101B(::System::IntPtr method_handle, ::System::IntPtr type_handle)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_4231193AE490101B_OFFSET))(method_handle, type_handle);
		}

		static ::System::Reflection::MethodBase* Method_2_84993E31F4FB35BC(::System::IntPtr method_handle, ::System::IntPtr type_handle, ::System::Boolean genericCheck)
		{
			return ((::System::Reflection::MethodBase*(*)(::System::IntPtr, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_METHODBASE_METHOD_2_84993E31F4FB35BC_OFFSET))(method_handle, type_handle, genericCheck);
		}
	};
}
