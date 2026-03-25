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
namespace System::Reflection::Emit { class ILGenerator; }
namespace System::Reflection::Emit { class ParameterBuilder; }

#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_DEFINEPARAMETER_OFFSET UNITYSDK_OFFSET(0x1636F170)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_GETBASEDEFINITION_OFFSET UNITYSDK_OFFSET(0x1636F320)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1636F3A0)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1636F360)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_GETILGENERATOR_OFFSET UNITYSDK_OFFSET(0x1636F1C0)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_GETMETHODIMPLEMENTATIONFLAGS_OFFSET UNITYSDK_OFFSET(0x1636F3E0)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_GETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1636F210)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1636F080)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x1636F0D0)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_GET_METHODHANDLE_OFFSET UNITYSDK_OFFSET(0x1636F260)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1636F120)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1636F2A0)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_GET_RETURNTYPECUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1636F2E0)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1636F420)
#define SYSTEM_REFLECTION_EMIT_METHODBUILDER_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x1636F460)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int MethodBuilder_TypeDefinitionIndex = 648;

	class MethodBuilder : public ::System::Reflection::MethodInfo
	{
	public:
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
