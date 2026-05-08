#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/RuntimeEventInfo.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Reflection { class CustomAttributeData; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_REFLECTION_MONOEVENT_METHOD_4_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1AC929B0)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_4_227461ECA347F719_OFFSET UNITYSDK_OFFSET(0x1AC92A70)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_4_3FEA8408C5ED329C_OFFSET UNITYSDK_OFFSET(0x1AC92A60)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1AC92B00)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_4_A3C117624446E448_OFFSET UNITYSDK_OFFSET(0x1AC92A80)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_4_A886283F1E86B93E_OFFSET UNITYSDK_OFFSET(0x1AC92A50)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_4_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x1AC92980)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_4_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x1AC92950)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_4_D8BF40F27BE9947D_OFFSET UNITYSDK_OFFSET(0x1AC929E0)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_4_F233C8CA1CBA6C47_1_OFFSET UNITYSDK_OFFSET(0x1AC928D0)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_4_F233C8CA1CBA6C47_2_OFFSET UNITYSDK_OFFSET(0x1AC92480)
#define SYSTEM_REFLECTION_MONOEVENT_METHOD_4_F233C8CA1CBA6C47_OFFSET UNITYSDK_OFFSET(0x1AC920B0)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoEvent_TypeDefinitionIndex = 587;

	class MonoEvent : public ::System::Reflection::RuntimeEventInfo
	{
	public:
		::System::IntPtr Field_4_0; // 0x18
		::System::IntPtr Field_4_1; // 0x20

		::System::Void Method_4_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_4_832295EC279E5994_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_4_F233C8CA1CBA6C47(::System::Boolean nonPublic)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_4_F233C8CA1CBA6C47_OFFSET))(this, nonPublic);
		}

		::System::Reflection::MethodInfo* Method_4_F233C8CA1CBA6C47_1(::System::Boolean nonPublic)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_4_F233C8CA1CBA6C47_1_OFFSET))(this, nonPublic);
		}

		::System::Reflection::MethodInfo* Method_4_F233C8CA1CBA6C47_2(::System::Boolean nonPublic)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_4_F233C8CA1CBA6C47_2_OFFSET))(this, nonPublic);
		}

		::System::Type* Method_4_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_4_A99467CE9479C990_OFFSET))(this);
		}

		::System::Type* Method_4_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_4_A99467CE9479C990_1_OFFSET))(this);
		}

		::System::String* Method_4_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_4_126AB3935214AA22_OFFSET))(this);
		}

		::System::String* Method_4_D8BF40F27BE9947D()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_4_D8BF40F27BE9947D_OFFSET))(this);
		}

		::System::Boolean Method_4_A886283F1E86B93E(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_4_A886283F1E86B93E_OFFSET))(this, attributeType, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_4_3FEA8408C5ED329C(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_4_3FEA8408C5ED329C_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_4_227461ECA347F719(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_4_227461ECA347F719_OFFSET))(this, attributeType, inherit);
		}

		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* Method_4_A3C117624446E448()
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOEVENT_METHOD_4_A3C117624446E448_OFFSET))(this);
		}
	};
}
