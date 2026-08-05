#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/FieldAttributes.h"
#include "unitysdk/System/Reflection/RtFieldInfo.h"
#include "unitysdk/System/RuntimeFieldHandle.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class CustomAttributeData; }
namespace System::Reflection { class FieldInfo; }

#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1E121E00)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_3FEA8408C5ED329C_OFFSET UNITYSDK_OFFSET(0x1E121E20)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_6A56EDCDE2C256CF_OFFSET UNITYSDK_OFFSET(0x1E121E10)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_6C5DB94BC17DC310_OFFSET UNITYSDK_OFFSET(0x1E121E30)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_6CFEC17E221C0D5F_OFFSET UNITYSDK_OFFSET(0x1E1223C0)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_8004D4ED772C50A9_OFFSET UNITYSDK_OFFSET(0x1E122130)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1E122450)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_877A0AD1A030E792_OFFSET UNITYSDK_OFFSET(0x1E121EB0)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_902DF0EBAEE505C6_OFFSET UNITYSDK_OFFSET(0x1E122140)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1E122030)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_A3C117624446E448_OFFSET UNITYSDK_OFFSET(0x1E1223D0)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x1E121D90)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x1E121D80)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_D287159D79F5E58E_OFFSET UNITYSDK_OFFSET(0x1E121DA0)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_D702C669788B2208_OFFSET UNITYSDK_OFFSET(0x1E121E70)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x1E1220C0)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_EF4CA801247CB4D4_OFFSET UNITYSDK_OFFSET(0x1E121D60)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x1E121E40)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_F9ADD3A7AD93E733_OFFSET UNITYSDK_OFFSET(0x1E121D70)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_FB9A1387D38501D0_1_OFFSET UNITYSDK_OFFSET(0x1E121DE0)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_FB9A1387D38501D0_OFFSET UNITYSDK_OFFSET(0x1E121DD0)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoField_TypeDefinitionIndex = 590;

	class MonoField : public ::System::Reflection::RtFieldInfo
	{
	public:
		::System::IntPtr Field_5_1; // 0x10
		::System::RuntimeFieldHandle Field_5_0; // 0x18
		::System::String* Field_5_7; // 0x20
		::System::Type* Field_5_6; // 0x28
		::System::Reflection::FieldAttributes Field_5_5; // 0x30

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Reflection::FieldAttributes Method_5_EF4CA801247CB4D4()
		{
			return ((::System::Reflection::FieldAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_EF4CA801247CB4D4_OFFSET))(this);
		}

		::System::RuntimeFieldHandle Method_5_F9ADD3A7AD93E733()
		{
			return ((::System::RuntimeFieldHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_F9ADD3A7AD93E733_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::System::Type* Method_5_D287159D79F5E58E(::System::Boolean declaring)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_D287159D79F5E58E_OFFSET))(this, declaring);
		}

		::System::Type* Method_5_FB9A1387D38501D0()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_FB9A1387D38501D0_OFFSET))(this);
		}

		::System::Type* Method_5_FB9A1387D38501D0_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_FB9A1387D38501D0_1_OFFSET))(this);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::Boolean Method_5_6A56EDCDE2C256CF(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_6A56EDCDE2C256CF_OFFSET))(this, attributeType, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_5_3FEA8408C5ED329C(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_3FEA8408C5ED329C_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_5_6C5DB94BC17DC310(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_6C5DB94BC17DC310_OFFSET))(this, attributeType, inherit);
		}

		::System::Int32 Method_5_F5599B7DA8E7E53C()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_F5599B7DA8E7E53C_OFFSET))(this);
		}

		::System::Object* Method_5_D702C669788B2208(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_D702C669788B2208_OFFSET))(this, obj);
		}

		::System::Object* Method_5_877A0AD1A030E792(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_877A0AD1A030E792_OFFSET))(this, obj);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		static ::System::Void Method_5_8004D4ED772C50A9(::System::Reflection::FieldInfo* fi, ::System::Object* obj, ::System::Object* value)
		{
			return ((::System::Void(*)(::System::Reflection::FieldInfo*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_8004D4ED772C50A9_OFFSET))(fi, obj, value);
		}

		::System::Void Method_5_902DF0EBAEE505C6(::System::Object* obj, ::System::Object* val, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_902DF0EBAEE505C6_OFFSET))(this, obj, val, invokeAttr, binder, culture);
		}

		::System::Object* Method_5_6CFEC17E221C0D5F()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_6CFEC17E221C0D5F_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* Method_5_A3C117624446E448()
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_A3C117624446E448_OFFSET))(this);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_9681042564541CD6_OFFSET))(this);
		}
	};
}
