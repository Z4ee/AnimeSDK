#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/MethodAttributes.h"
#include "unitysdk/System/Reflection/MethodImplAttributes.h"
#include "unitysdk/System/Reflection/MethodInfo.h"
#include "unitysdk/System/Reflection/ParameterAttributes.h"
#include "unitysdk/System/RuntimeMethodHandle.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class ICustomAttributeProvider; }
namespace System::Reflection { class ParameterInfo; }
namespace System::Reflection::Emit { class GenericTypeParameterBuilder; }
namespace System::Reflection::Emit { class ILGenerator; }
namespace System::Reflection::Emit { class ParameterBuilder; }

#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_DEFINEGENERICPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1ADBD360)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_DEFINEPARAMETER_OFFSET UNITYSDK_OFFSET(0x1ADBD3B0)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_GETBASEDEFINITION_OFFSET UNITYSDK_OFFSET(0x1ADBD5C0)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1ADBD640)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1ADBD600)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_GETILGENERATOR_OFFSET UNITYSDK_OFFSET(0x1ADBD400)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_GETMETHODIMPLEMENTATIONFLAGS_OFFSET UNITYSDK_OFFSET(0x1ADBD680)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_GETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1ADBD450)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1ADBD270)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x1ADBD2C0)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_GET_METHODHANDLE_OFFSET UNITYSDK_OFFSET(0x1ADBD500)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1ADBD310)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1ADBD540)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_GET_RETURNTYPECUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1ADBD580)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ADBD6C0)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x1ADBD700)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_SETRETURNTYPE_OFFSET UNITYSDK_OFFSET(0x1ADBD4A0)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADBD4F0)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int MethodBuilder_TypeDefinitionIndex = 619;

	class MethodBuilder : public ::System::Reflection::MethodInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_METHODBUILDER__CTOR_OFFSET))(this);
		}

		::System::Reflection::MethodAttributes get_Attributes()
		{
			return ((::System::Reflection::MethodAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_METHODBUILDER_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Type* get_DeclaringType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_METHODBUILDER_GET_DECLARINGTYPE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_METHODBUILDER_GET_NAME_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::Emit::GenericTypeParameterBuilder*>* DefineGenericParameters(::Il2CppArray<::System::String*>* names)
		{
			return ((::Il2CppArray<::System::Reflection::Emit::GenericTypeParameterBuilder*>*(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_METHODBUILDER_DEFINEGENERICPARAMETERS_OFFSET))(this, names);
		}

		::System::Reflection::Emit::ParameterBuilder* DefineParameter(::System::Int32 position, ::System::Reflection::ParameterAttributes attributes, ::System::String* strParamName)
		{
			return ((::System::Reflection::Emit::ParameterBuilder*(*)(::PVOID, ::System::Int32, ::System::Reflection::ParameterAttributes, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_METHODBUILDER_DEFINEPARAMETER_OFFSET))(this, position, attributes, strParamName);
		}

		::System::Reflection::Emit::ILGenerator* GetILGenerator()
		{
			return ((::System::Reflection::Emit::ILGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_METHODBUILDER_GETILGENERATOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* GetParameters()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_METHODBUILDER_GETPARAMETERS_OFFSET))(this);
		}

		::System::Void SetReturnType(::System::Type* returnType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_METHODBUILDER_SETRETURNTYPE_OFFSET))(this, returnType);
		}

		::System::RuntimeMethodHandle get_MethodHandle()
		{
			return ((::System::RuntimeMethodHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_METHODBUILDER_GET_METHODHANDLE_OFFSET))(this);
		}

		::System::Type* get_ReflectedType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_METHODBUILDER_GET_REFLECTEDTYPE_OFFSET))(this);
		}

		::System::Reflection::ICustomAttributeProvider* get_ReturnTypeCustomAttributes()
		{
			return ((::System::Reflection::ICustomAttributeProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_METHODBUILDER_GET_RETURNTYPECUSTOMATTRIBUTES_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* GetBaseDefinition()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_METHODBUILDER_GETBASEDEFINITION_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_METHODBUILDER_GETCUSTOMATTRIBUTES_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_METHODBUILDER_GETCUSTOMATTRIBUTES_1_OFFSET))(this, attributeType, inherit);
		}

		::System::Reflection::MethodImplAttributes GetMethodImplementationFlags()
		{
			return ((::System::Reflection::MethodImplAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_METHODBUILDER_GETMETHODIMPLEMENTATIONFLAGS_OFFSET))(this);
		}

		::System::Object* Invoke(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* parameters, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_METHODBUILDER_INVOKE_OFFSET))(this, obj, invokeAttr, binder, parameters, culture);
		}

		::System::Boolean IsDefined(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_METHODBUILDER_ISDEFINED_OFFSET))(this, attributeType, inherit);
		}
	};
}
