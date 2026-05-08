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

#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1A97F9B0)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_227461ECA347F719_OFFSET UNITYSDK_OFFSET(0x1A97F9E0)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_2D8AE2AF2AC0AF1B_OFFSET UNITYSDK_OFFSET(0x1A97FF70)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_3FEA8408C5ED329C_OFFSET UNITYSDK_OFFSET(0x1A97F9D0)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_5C90471BE03E101A_1_OFFSET UNITYSDK_OFFSET(0x1A97F990)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_5C90471BE03E101A_OFFSET UNITYSDK_OFFSET(0x1A97F980)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_8004D4ED772C50A9_OFFSET UNITYSDK_OFFSET(0x1A97FCE0)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1A980000)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_902DF0EBAEE505C6_OFFSET UNITYSDK_OFFSET(0x1A97FCF0)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1A97FBE0)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_A3C117624446E448_OFFSET UNITYSDK_OFFSET(0x1A97FF80)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_A886283F1E86B93E_OFFSET UNITYSDK_OFFSET(0x1A97F9C0)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x1A97F940)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x1A97F930)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_D702C669788B2208_OFFSET UNITYSDK_OFFSET(0x1A97FA20)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x1A97FC70)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_DFC1823AE8168541_OFFSET UNITYSDK_OFFSET(0x1A97FA60)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_E1A4F7D5DAA182CE_OFFSET UNITYSDK_OFFSET(0x1A97F950)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_EF4CA801247CB4D4_OFFSET UNITYSDK_OFFSET(0x1A97F910)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x1A97F9F0)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_F9ADD3A7AD93E733_OFFSET UNITYSDK_OFFSET(0x1A97F920)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoField_TypeDefinitionIndex = 590;

	class MonoField : public ::System::Reflection::RtFieldInfo
	{
	public:
		::System::IntPtr Field_5_0; // 0x10
		::System::RuntimeFieldHandle Field_5_1; // 0x18
		::System::String* Field_5_2; // 0x20
		::System::Type* Field_5_3; // 0x28
		::System::Reflection::FieldAttributes Field_5_4; // 0x30

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

		::System::Type* Method_5_E1A4F7D5DAA182CE(::System::Boolean declaring)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_E1A4F7D5DAA182CE_OFFSET))(this, declaring);
		}

		::System::Type* Method_5_5C90471BE03E101A()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_5C90471BE03E101A_OFFSET))(this);
		}

		::System::Type* Method_5_5C90471BE03E101A_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_5C90471BE03E101A_1_OFFSET))(this);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::Boolean Method_5_A886283F1E86B93E(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_A886283F1E86B93E_OFFSET))(this, attributeType, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_5_3FEA8408C5ED329C(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_3FEA8408C5ED329C_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_5_227461ECA347F719(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_227461ECA347F719_OFFSET))(this, attributeType, inherit);
		}

		::System::Int32 Method_5_F5599B7DA8E7E53C()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_F5599B7DA8E7E53C_OFFSET))(this);
		}

		::System::Object* Method_5_D702C669788B2208(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_D702C669788B2208_OFFSET))(this, obj);
		}

		::System::Object* Method_5_DFC1823AE8168541(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_DFC1823AE8168541_OFFSET))(this, obj);
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

		::System::Object* Method_5_2D8AE2AF2AC0AF1B()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_2D8AE2AF2AC0AF1B_OFFSET))(this);
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
