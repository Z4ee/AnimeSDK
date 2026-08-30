#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/RuntimePropertyHandle.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/MemberInfo.h"
#include "unitysdk/System/Reflection/MemberTypes.h"
#include "unitysdk/System/Reflection/PropertyAttributes.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class NotImplementedException; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class ParameterInfo; }

#define SYSTEM_REFLECTION_PROPERTYINFO_CREATENIE_OFFSET UNITYSDK_OFFSET(0x1C43DA10)
#define SYSTEM_REFLECTION_PROPERTYINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C43DB60)
#define SYSTEM_REFLECTION_PROPERTYINFO_GETCONSTANTVALUE_OFFSET UNITYSDK_OFFSET(0x1C43DAC0)
#define SYSTEM_REFLECTION_PROPERTYINFO_GETGETMETHOD_OFFSET UNITYSDK_OFFSET(0x1C43D660)
#define SYSTEM_REFLECTION_PROPERTYINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C43DB70)
#define SYSTEM_REFLECTION_PROPERTYINFO_GETOPTIONALCUSTOMMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1C43D9F0)
#define SYSTEM_REFLECTION_PROPERTYINFO_GETPROPERTYFROMHANDLE_OFFSET UNITYSDK_OFFSET(0x1C43DC50)
#define SYSTEM_REFLECTION_PROPERTYINFO_GETRAWCONSTANTVALUE_OFFSET UNITYSDK_OFFSET(0x1C43DB10)
#define SYSTEM_REFLECTION_PROPERTYINFO_GETREQUIREDCUSTOMMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1C43DA00)
#define SYSTEM_REFLECTION_PROPERTYINFO_GETSETMETHOD_OFFSET UNITYSDK_OFFSET(0x1C43D6E0)
#define SYSTEM_REFLECTION_PROPERTYINFO_GETVALUE_1_OFFSET UNITYSDK_OFFSET(0x1C43D800)
#define SYSTEM_REFLECTION_PROPERTYINFO_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1C43D760)
#define SYSTEM_REFLECTION_PROPERTYINFO_GET_GETMETHOD_OFFSET UNITYSDK_OFFSET(0x1C43D540)
#define SYSTEM_REFLECTION_PROPERTYINFO_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x1C43D640)
#define SYSTEM_REFLECTION_PROPERTYINFO_GET_SETMETHOD_OFFSET UNITYSDK_OFFSET(0x1C43D5C0)
#define SYSTEM_REFLECTION_PROPERTYINFO_INTERNAL_FROM_HANDLE_TYPE_OFFSET UNITYSDK_OFFSET(0x1C43DBE0)
#define SYSTEM_REFLECTION_PROPERTYINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1C43DB80)
#define SYSTEM_REFLECTION_PROPERTYINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1C43DBB0)
#define SYSTEM_REFLECTION_PROPERTYINFO_SETVALUE_1_OFFSET UNITYSDK_OFFSET(0x1C43D950)
#define SYSTEM_REFLECTION_PROPERTYINFO_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1C43D8A0)
#define SYSTEM_REFLECTION_PROPERTYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C43D650)

namespace System::Reflection
{
	inline static constexpr unsigned int PropertyInfo_TypeDefinitionIndex = 637;

	class PropertyInfo : public ::System::Reflection::MemberInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO__CTOR_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_GetMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GET_GETMETHOD_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* get_SetMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GET_SETMETHOD_OFFSET))(this);
		}

		::System::Reflection::MemberTypes get_MemberType()
		{
			return ((::System::Reflection::MemberTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GET_MEMBERTYPE_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* GetGetMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GETGETMETHOD_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* GetSetMethod()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GETSETMETHOD_OFFSET))(this);
		}

		::System::Object* GetValue(::System::Object* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Object* GetValue_1(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GETVALUE_1_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::Object* a1, ::System::Object* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_SETVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetValue_1(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_SETVALUE_1_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Type*>* GetOptionalCustomModifiers()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GETOPTIONALCUSTOMMODIFIERS_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* GetRequiredCustomModifiers()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GETREQUIREDCUSTOMMODIFIERS_OFFSET))(this);
		}

		static ::System::NotImplementedException* CreateNIE()
		{
			return ((::System::NotImplementedException*(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_CREATENIE_OFFSET))();
		}

		::System::Object* GetConstantValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GETCONSTANTVALUE_OFFSET))(this);
		}

		::System::Object* GetRawConstantValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GETRAWCONSTANTVALUE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::Reflection::PropertyInfo* a1, ::System::Reflection::PropertyInfo* a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::System::Reflection::PropertyInfo* a1, ::System::Reflection::PropertyInfo* a2)
		{
			return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Reflection::PropertyInfo* internal_from_handle_type(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_INTERNAL_FROM_HANDLE_TYPE_OFFSET))(a1, a2);
		}

		static ::System::Reflection::PropertyInfo* GetPropertyFromHandle(::Mono::RuntimePropertyHandle a1, ::System::RuntimeTypeHandle a2)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::Mono::RuntimePropertyHandle, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GETPROPERTYFROMHANDLE_OFFSET))(a1, a2);
		}
	};
}
