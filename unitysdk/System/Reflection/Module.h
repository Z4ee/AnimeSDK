#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class TypeFilter; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_MODULE_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1ADBD7A0)
#define SYSTEM_REFLECTION_MODULE_METHOD_1_26DD7186BC555445_OFFSET UNITYSDK_OFFSET(0x1ADBDD80)
#define SYSTEM_REFLECTION_MODULE_METHOD_1_27F7B55D2DEA317A_OFFSET UNITYSDK_OFFSET(0x1ADBD750)
#define SYSTEM_REFLECTION_MODULE_METHOD_1_3F0DC7F0CFD61AC0_OFFSET UNITYSDK_OFFSET(0x1ADBDB00)
#define SYSTEM_REFLECTION_MODULE_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1ADBDDC0)
#define SYSTEM_REFLECTION_MODULE_METHOD_1_5A492E3AB0C5318A_OFFSET UNITYSDK_OFFSET(0x1ADBDC40)
#define SYSTEM_REFLECTION_MODULE_METHOD_1_5D167B4CE356F1EB_OFFSET UNITYSDK_OFFSET(0x1ADBDCC0)
#define SYSTEM_REFLECTION_MODULE_METHOD_1_5DC902B3096CCBC1_OFFSET UNITYSDK_OFFSET(0x1ADBDB40)
#define SYSTEM_REFLECTION_MODULE_METHOD_1_63951049797CF5B8_OFFSET UNITYSDK_OFFSET(0x1ADBDD00)
#define SYSTEM_REFLECTION_MODULE_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1ADBD740)
#define SYSTEM_REFLECTION_MODULE_METHOD_1_A65400A3D788C5F2_1_OFFSET UNITYSDK_OFFSET(0x1ADBDC80)
#define SYSTEM_REFLECTION_MODULE_METHOD_1_A65400A3D788C5F2_OFFSET UNITYSDK_OFFSET(0x1ADBDC00)
#define SYSTEM_REFLECTION_MODULE_METHOD_1_B12B136156DD1036_OFFSET UNITYSDK_OFFSET(0x1ADBD7F0)
#define SYSTEM_REFLECTION_MODULE_METHOD_1_BE93448C242149EA_OFFSET UNITYSDK_OFFSET(0x1ADBD990)
#define SYSTEM_REFLECTION_MODULE_METHOD_1_BFE281B35E13FE9F_OFFSET UNITYSDK_OFFSET(0x1ADBDD40)
#define SYSTEM_REFLECTION_MODULE_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1ADBDAC0)
#define SYSTEM_REFLECTION_MODULE_METHOD_1_D4DAD71FB8873F3F_OFFSET UNITYSDK_OFFSET(0x1ADBD810)
#define SYSTEM_REFLECTION_MODULE_METHOD_1_D7E943944352C19E_OFFSET UNITYSDK_OFFSET(0x1ADBDAD0)
#define SYSTEM_REFLECTION_MODULE_METHOD_1_E7A06E70E83E006B_OFFSET UNITYSDK_OFFSET(0x1ADBDAB0)
#define SYSTEM_REFLECTION_MODULE_METHOD_1_F4779E52B1AE4857_OFFSET UNITYSDK_OFFSET(0x1ADBD7B0)

namespace System::Reflection
{
	inline static constexpr unsigned int Module_TypeDefinitionIndex = 582;

	class Module : public ::System::Object
	{
	public:
		static ::System::Reflection::TypeFilter** StaticGet_Field_1_0()
		{
			return (::System::Reflection::TypeFilter**)Il2CppClass::FromTypeDefinitionIndex(Module_TypeDefinitionIndex)->GetStaticField(0x14F0);
		}
		static ::System::Reflection::TypeFilter** StaticGet_Field_1_1()
		{
			return (::System::Reflection::TypeFilter**)Il2CppClass::FromTypeDefinitionIndex(Module_TypeDefinitionIndex)->GetStaticField(0x14F8);
		}
		// static const ::System::Reflection::BindingFlags Field_1_9; // 0x0
		::System::IntPtr Field_1_2; // 0x10
		::System::Reflection::Assembly* Field_1_3; // 0x18
		::System::String* Field_1_4; // 0x20
		::System::String* Field_1_5; // 0x28
		::System::String* Field_1_6; // 0x30
		::System::Boolean Field_1_7; // 0x38
		::System::Int32 Field_1_8; // 0x3C

		::System::Void Method_1_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_1_832295EC279E5994_OFFSET))(this);
		}

		static ::System::Void Method_1_5790A55946AA509D()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_1_5790A55946AA509D_OFFSET))();
		}

		::System::Void Method_1_27F7B55D2DEA317A(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_1_27F7B55D2DEA317A_OFFSET))(this, info, context);
		}

		::System::String* Method_1_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_1_126AB3935214AA22_OFFSET))(this);
		}

		::System::Guid Method_1_F4779E52B1AE4857()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_1_F4779E52B1AE4857_OFFSET))(this);
		}

		static ::System::Boolean Method_1_D4DAD71FB8873F3F(::System::Type* m, ::System::Object* filterCriteria)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_1_D4DAD71FB8873F3F_OFFSET))(m, filterCriteria);
		}

		static ::System::Boolean Method_1_BE93448C242149EA(::System::Type* m, ::System::Object* filterCriteria)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_1_BE93448C242149EA_OFFSET))(m, filterCriteria);
		}

		::System::String* Method_1_B12B136156DD1036()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_1_B12B136156DD1036_OFFSET))(this);
		}

		::System::Boolean Method_1_E7A06E70E83E006B(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_1_E7A06E70E83E006B_OFFSET))(this, o);
		}

		::System::Int32 Method_1_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
		}

		static ::System::Boolean Method_1_D7E943944352C19E(::System::Reflection::Module* left, ::System::Reflection::Module* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::Module*, ::System::Reflection::Module*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_1_D7E943944352C19E_OFFSET))(left, right);
		}

		::System::Reflection::Assembly* Method_1_3F0DC7F0CFD61AC0()
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_1_3F0DC7F0CFD61AC0_OFFSET))(this);
		}

		::System::String* Method_1_A65400A3D788C5F2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_1_A65400A3D788C5F2_OFFSET))(this);
		}

		::System::Guid Method_1_5A492E3AB0C5318A()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_1_5A492E3AB0C5318A_OFFSET))(this);
		}

		::System::String* Method_1_A65400A3D788C5F2_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_1_A65400A3D788C5F2_1_OFFSET))(this);
		}

		static ::System::Exception* Method_1_5DC902B3096CCBC1()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_1_5DC902B3096CCBC1_OFFSET))();
		}

		::System::Boolean Method_1_5D167B4CE356F1EB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_1_5D167B4CE356F1EB_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* Method_1_63951049797CF5B8(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_1_63951049797CF5B8_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_1_BFE281B35E13FE9F(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_1_BFE281B35E13FE9F_OFFSET))(this, attributeType, inherit);
		}

		::System::Boolean Method_1_26DD7186BC555445(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MODULE_METHOD_1_26DD7186BC555445_OFFSET))(this, attributeType, inherit);
		}
	};
}
