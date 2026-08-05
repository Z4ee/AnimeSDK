#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/ConstructorInfo.h"
#include "unitysdk/System/Reflection/MethodAttributes.h"
#include "unitysdk/System/Reflection/MethodImplAttributes.h"
#include "unitysdk/System/RuntimeMethodHandle.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class ParameterInfo; }
namespace System::Reflection::Emit { class ILGenerator; }

#define SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1D8C11B0)
#define SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1D8C1170)
#define SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GETILGENERATOR_OFFSET UNITYSDK_OFFSET(0x1D8C1040)
#define SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GETMETHODIMPLEMENTATIONFLAGS_OFFSET UNITYSDK_OFFSET(0x1D8C11F0)
#define SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GETPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1D8C1090)
#define SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1D8C0F50)
#define SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x1D8C0FA0)
#define SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GET_METHODHANDLE_OFFSET UNITYSDK_OFFSET(0x1D8C10F0)
#define SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D8C0FF0)
#define SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1D8C1130)
#define SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_INVOKE_1_OFFSET UNITYSDK_OFFSET(0x1D8C1270)
#define SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D8C1230)
#define SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x1D8C12B0)
#define SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C10E0)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int ConstructorBuilder_TypeDefinitionIndex = 612;

	class ConstructorBuilder : public ::System::Reflection::ConstructorInfo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER__CTOR_OFFSET))(this);
		}

		::System::Reflection::MethodAttributes get_Attributes()
		{
			return ((::System::Reflection::MethodAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Type* get_DeclaringType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GET_DECLARINGTYPE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GET_NAME_OFFSET))(this);
		}

		::System::Reflection::Emit::ILGenerator* GetILGenerator()
		{
			return ((::System::Reflection::Emit::ILGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GETILGENERATOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* GetParameters()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GETPARAMETERS_OFFSET))(this);
		}

		::System::RuntimeMethodHandle get_MethodHandle()
		{
			return ((::System::RuntimeMethodHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GET_METHODHANDLE_OFFSET))(this);
		}

		::System::Type* get_ReflectedType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GET_REFLECTEDTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GETCUSTOMATTRIBUTES_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GETCUSTOMATTRIBUTES_1_OFFSET))(this, attributeType, inherit);
		}

		::System::Reflection::MethodImplAttributes GetMethodImplementationFlags()
		{
			return ((::System::Reflection::MethodImplAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_GETMETHODIMPLEMENTATIONFLAGS_OFFSET))(this);
		}

		::System::Object* Invoke(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* parameters, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_INVOKE_OFFSET))(this, obj, invokeAttr, binder, parameters, culture);
		}

		::System::Object* Invoke_1(::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* parameters, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_INVOKE_1_OFFSET))(this, invokeAttr, binder, parameters, culture);
		}

		::System::Boolean IsDefined(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_CONSTRUCTORBUILDER_ISDEFINED_OFFSET))(this, attributeType, inherit);
		}
	};
}
