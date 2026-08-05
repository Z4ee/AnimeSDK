#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/MethodAttributes.h"
#include "unitysdk/System/Reflection/MethodImplAttributes.h"
#include "unitysdk/System/Reflection/MethodInfo.h"
#include "unitysdk/System/RuntimeMethodHandle.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class ICustomAttributeProvider; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class ParameterInfo; }
namespace System::Reflection::Emit { class ILGenerator; }

#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GETBASEDEFINITION_OFFSET UNITYSDK_OFFSET(0x1E4454E0)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1E445560)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1E445520)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GETILGENERATOR_OFFSET UNITYSDK_OFFSET(0x1E4455A0)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GETMETHODIMPLEMENTATIONFLAGS_OFFSET UNITYSDK_OFFSET(0x1E4455E0)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1E445620)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1E445360)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x1E4453A0)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_METHODHANDLE_OFFSET UNITYSDK_OFFSET(0x1E4453E0)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E445420)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1E445460)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_RETURNTYPECUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1E4454A0)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E445660)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x1E4456A0)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E445320)
#define SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4452E0)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int DynamicMethod_TypeDefinitionIndex = 1628;

	class DynamicMethod : public ::System::Reflection::MethodInfo
	{
	public:
		::System::Void _ctor(::System::String* name, ::System::Type* returnType, ::Il2CppArray<::System::Type*>* parameterTypes, ::System::Reflection::Module* m, ::System::Boolean skipVisibility)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::System::Reflection::Module*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD__CTOR_OFFSET))(this, name, returnType, parameterTypes, m, skipVisibility);
		}

		::System::Void _ctor_1(::System::String* name, ::System::Type* returnType, ::Il2CppArray<::System::Type*>* parameterTypes, ::System::Type* owner, ::System::Boolean skipVisibility)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::Il2CppArray<::System::Type*>*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD__CTOR_1_OFFSET))(this, name, returnType, parameterTypes, owner, skipVisibility);
		}

		::System::Reflection::MethodAttributes get_Attributes()
		{
			return ((::System::Reflection::MethodAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Type* get_DeclaringType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_DECLARINGTYPE_OFFSET))(this);
		}

		::System::RuntimeMethodHandle get_MethodHandle()
		{
			return ((::System::RuntimeMethodHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_METHODHANDLE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_NAME_OFFSET))(this);
		}

		::System::Type* get_ReflectedType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_REFLECTEDTYPE_OFFSET))(this);
		}

		::System::Reflection::ICustomAttributeProvider* get_ReturnTypeCustomAttributes()
		{
			return ((::System::Reflection::ICustomAttributeProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GET_RETURNTYPECUSTOMATTRIBUTES_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* GetBaseDefinition()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GETBASEDEFINITION_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GETCUSTOMATTRIBUTES_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GETCUSTOMATTRIBUTES_1_OFFSET))(this, attributeType, inherit);
		}

		::System::Reflection::Emit::ILGenerator* GetILGenerator()
		{
			return ((::System::Reflection::Emit::ILGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GETILGENERATOR_OFFSET))(this);
		}

		::System::Reflection::MethodImplAttributes GetMethodImplementationFlags()
		{
			return ((::System::Reflection::MethodImplAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GETMETHODIMPLEMENTATIONFLAGS_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* GetParameters()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_GETPARAMETERS_OFFSET))(this);
		}

		::System::Object* Invoke(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* parameters, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_INVOKE_OFFSET))(this, obj, invokeAttr, binder, parameters, culture);
		}

		::System::Boolean IsDefined(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_DYNAMICMETHOD_ISDEFINED_OFFSET))(this, attributeType, inherit);
		}
	};
}
