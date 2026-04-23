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

#define SYSTEM_REFLECTION_PROPERTYINFO_CREATENIE_OFFSET UNITYSDK_OFFSET(0x179AB200)
#define SYSTEM_REFLECTION_PROPERTYINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x179AB350)
#define SYSTEM_REFLECTION_PROPERTYINFO_GETCONSTANTVALUE_OFFSET UNITYSDK_OFFSET(0x179AB2B0)
#define SYSTEM_REFLECTION_PROPERTYINFO_GETGETMETHOD_OFFSET UNITYSDK_OFFSET(0x179AB0E0)
#define SYSTEM_REFLECTION_PROPERTYINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x179AB360)
#define SYSTEM_REFLECTION_PROPERTYINFO_GETOPTIONALCUSTOMMODIFIERS_OFFSET UNITYSDK_OFFSET(0x179AB1E0)
#define SYSTEM_REFLECTION_PROPERTYINFO_GETPROPERTYFROMHANDLE_OFFSET UNITYSDK_OFFSET(0x179AB430)
#define SYSTEM_REFLECTION_PROPERTYINFO_GETRAWCONSTANTVALUE_OFFSET UNITYSDK_OFFSET(0x179AB300)
#define SYSTEM_REFLECTION_PROPERTYINFO_GETREQUIREDCUSTOMMODIFIERS_OFFSET UNITYSDK_OFFSET(0x179AB1F0)
#define SYSTEM_REFLECTION_PROPERTYINFO_GETSETMETHOD_OFFSET UNITYSDK_OFFSET(0x179AB100)
#define SYSTEM_REFLECTION_PROPERTYINFO_GETVALUE_1_OFFSET UNITYSDK_OFFSET(0x179AB150)
#define SYSTEM_REFLECTION_PROPERTYINFO_GETVALUE_OFFSET UNITYSDK_OFFSET(0x179AB120)
#define SYSTEM_REFLECTION_PROPERTYINFO_GET_GETMETHOD_OFFSET UNITYSDK_OFFSET(0x179AB080)
#define SYSTEM_REFLECTION_PROPERTYINFO_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x179AB0C0)
#define SYSTEM_REFLECTION_PROPERTYINFO_GET_SETMETHOD_OFFSET UNITYSDK_OFFSET(0x179AB0A0)
#define SYSTEM_REFLECTION_PROPERTYINFO_INTERNAL_FROM_HANDLE_TYPE_OFFSET UNITYSDK_OFFSET(0x179AB3D0)
#define SYSTEM_REFLECTION_PROPERTYINFO_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x179AB370)
#define SYSTEM_REFLECTION_PROPERTYINFO_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x179AB3A0)
#define SYSTEM_REFLECTION_PROPERTYINFO_SETVALUE_1_OFFSET UNITYSDK_OFFSET(0x179AB1B0)
#define SYSTEM_REFLECTION_PROPERTYINFO_SETVALUE_OFFSET UNITYSDK_OFFSET(0x179AB180)
#define SYSTEM_REFLECTION_PROPERTYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x179AB0D0)

namespace System::Reflection
{
	inline static constexpr unsigned int PropertyInfo_TypeDefinitionIndex = 635;

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

		::System::Object* GetValue(::System::Object* obj, ::Il2CppArray<::System::Object*>* index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GETVALUE_OFFSET))(this, obj, index);
		}

		::System::Object* GetValue_1(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GETVALUE_1_OFFSET))(this, obj);
		}

		::System::Void SetValue(::System::Object* obj, ::System::Object* value, ::Il2CppArray<::System::Object*>* index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_SETVALUE_OFFSET))(this, obj, value, index);
		}

		::System::Void SetValue_1(::System::Object* obj, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_SETVALUE_1_OFFSET))(this, obj, value);
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

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::Reflection::PropertyInfo* left, ::System::Reflection::PropertyInfo* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::System::Reflection::PropertyInfo* left, ::System::Reflection::PropertyInfo* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_OP_INEQUALITY_OFFSET))(left, right);
		}

		static ::System::Reflection::PropertyInfo* internal_from_handle_type(::System::IntPtr event_handle, ::System::IntPtr type_handle)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_INTERNAL_FROM_HANDLE_TYPE_OFFSET))(event_handle, type_handle);
		}

		static ::System::Reflection::PropertyInfo* GetPropertyFromHandle(::Mono::RuntimePropertyHandle handle, ::System::RuntimeTypeHandle reflectedType)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::Mono::RuntimePropertyHandle, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PROPERTYINFO_GETPROPERTYFROMHANDLE_OFFSET))(handle, reflectedType);
		}
	};
}
