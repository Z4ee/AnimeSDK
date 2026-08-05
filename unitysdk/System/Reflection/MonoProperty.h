#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/MonoPropertyInfo.h"
#include "unitysdk/System/Reflection/PInfo.h"
#include "unitysdk/System/Reflection/PropertyAttributes.h"
#include "unitysdk/System/Reflection/RuntimePropertyInfo.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class CustomAttributeData; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class MonoProperty_GetterAdapter; }
namespace System::Reflection { class ParameterInfo; }
namespace System::Reflection { template <typename T1, typename T2> class MonoProperty_Getter_2; }
namespace System::Reflection { template <typename T> class MonoProperty_StaticGetter_1; }

#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_05E464B9CAC756A1_OFFSET UNITYSDK_OFFSET(0x1D812110)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_10EC6489D15FFD02_OFFSET UNITYSDK_OFFSET(0x1D811830)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_12DA696B15A6370D_OFFSET UNITYSDK_OFFSET(0x1D811760)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_16AF1654F4A22E33_OFFSET UNITYSDK_OFFSET(0x1D811D70)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_1B5DA46E353A9159_OFFSET UNITYSDK_OFFSET(0x1D8120C0)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x1D8117E0)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1D811790)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_3FEA8408C5ED329C_OFFSET UNITYSDK_OFFSET(0x1D8120B0)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_49D29DF713180894_1_OFFSET UNITYSDK_OFFSET(0x1D811950)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_49D29DF713180894_OFFSET UNITYSDK_OFFSET(0x1D811920)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_6A56EDCDE2C256CF_OFFSET UNITYSDK_OFFSET(0x1D8120A0)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1D812660)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_84B0DF23CE7DDC55_1_OFFSET UNITYSDK_OFFSET(0x1D812000)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_84B0DF23CE7DDC55_OFFSET UNITYSDK_OFFSET(0x1D811CD0)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_A3C117624446E448_OFFSET UNITYSDK_OFFSET(0x1D8125E0)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_B080FE6CC13DF58A_OFFSET UNITYSDK_OFFSET(0x1D811730)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_CABA3E30AEE242B2_OFFSET UNITYSDK_OFFSET(0x1D8120D0)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_D9A02A471595B0C3_OFFSET UNITYSDK_OFFSET(0x1D8119B0)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x1D811980)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_F7EA4E718E0CF004_OFFSET UNITYSDK_OFFSET(0x1D812340)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoProperty_TypeDefinitionIndex = 603;

	class MonoProperty : public ::System::Reflection::RuntimePropertyInfo
	{
	public:
		::System::IntPtr Field_4_0; // 0x10
		::System::IntPtr Field_4_7; // 0x18
		::System::Reflection::MonoPropertyInfo Field_4_6; // 0x20
		::System::Reflection::PInfo Field_4_5; // 0x50
		::System::Reflection::MonoProperty_GetterAdapter* Field_4_4; // 0x58

		::System::Void Method_4_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_4_B080FE6CC13DF58A(::System::Reflection::PInfo flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::PInfo))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_B080FE6CC13DF58A_OFFSET))(this, flags);
		}

		::System::Reflection::PropertyAttributes Method_4_12DA696B15A6370D()
		{
			return ((::System::Reflection::PropertyAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_12DA696B15A6370D_OFFSET))(this);
		}

		::System::Boolean Method_4_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Boolean Method_4_1D4018D4200358D0_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_1D4018D4200358D0_1_OFFSET))(this);
		}

		::System::Type* Method_4_10EC6489D15FFD02()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_10EC6489D15FFD02_OFFSET))(this);
		}

		::System::Type* Method_4_49D29DF713180894()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_49D29DF713180894_OFFSET))(this);
		}

		::System::Type* Method_4_49D29DF713180894_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_49D29DF713180894_1_OFFSET))(this);
		}

		::System::String* Method_4_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::MethodInfo*>* Method_4_D9A02A471595B0C3(::System::Boolean nonPublic)
		{
			return ((::Il2CppArray<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_D9A02A471595B0C3_OFFSET))(this, nonPublic);
		}

		::System::Reflection::MethodInfo* Method_4_84B0DF23CE7DDC55(::System::Boolean nonPublic)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_84B0DF23CE7DDC55_OFFSET))(this, nonPublic);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* Method_4_16AF1654F4A22E33()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_16AF1654F4A22E33_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_4_84B0DF23CE7DDC55_1(::System::Boolean nonPublic)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_84B0DF23CE7DDC55_1_OFFSET))(this, nonPublic);
		}

		::System::Boolean Method_4_6A56EDCDE2C256CF(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_6A56EDCDE2C256CF_OFFSET))(this, attributeType, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_4_3FEA8408C5ED329C(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_3FEA8408C5ED329C_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_4_1B5DA46E353A9159(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_1B5DA46E353A9159_OFFSET))(this, attributeType, inherit);
		}

		::System::Object* Method_4_CABA3E30AEE242B2(::System::Object* obj, ::Il2CppArray<::System::Object*>* index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_CABA3E30AEE242B2_OFFSET))(this, obj, index);
		}

		::System::Object* Method_4_05E464B9CAC756A1(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* index, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_05E464B9CAC756A1_OFFSET))(this, obj, invokeAttr, binder, index, culture);
		}

		::System::Void Method_4_F7EA4E718E0CF004(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* index, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_F7EA4E718E0CF004_OFFSET))(this, obj, value, invokeAttr, binder, index, culture);
		}

		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* Method_4_A3C117624446E448()
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_A3C117624446E448_OFFSET))(this);
		}
	};
}
