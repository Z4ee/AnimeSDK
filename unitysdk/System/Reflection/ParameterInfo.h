#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/CallingConventions.h"
#include "unitysdk/System/Reflection/ParameterAttributes.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MemberInfo; }
namespace System::Runtime::InteropServices { class MarshalAsAttribute; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_08FDEBD8D01774E4_OFFSET UNITYSDK_OFFSET(0x1AC934C0)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_0E9CD5BE0B9B7B7D_OFFSET UNITYSDK_OFFSET(0x1AC93510)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1AC930F0)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_1724EA74DE9CE64C_OFFSET UNITYSDK_OFFSET(0x1AC93480)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_4D657599804A2D94_OFFSET UNITYSDK_OFFSET(0x1AC933F0)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_5A6F21CC19C5EDF3_OFFSET UNITYSDK_OFFSET(0x1AC93440)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_71BFA430EBCD890A_OFFSET UNITYSDK_OFFSET(0x1AC92B20)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_7FA212012BF4615B_OFFSET UNITYSDK_OFFSET(0x1AC935A0)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1AC92B10)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x1AC930A0)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1AC93100)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_DEB409BBC483B3E1_OFFSET UNITYSDK_OFFSET(0x1AC93520)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_E450ECF301C56542_OFFSET UNITYSDK_OFFSET(0x1AC930E0)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_E4B39F56000B60BC_OFFSET UNITYSDK_OFFSET(0x1AC92CC0)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_E5F116DB69E8300A_OFFSET UNITYSDK_OFFSET(0x1AC93110)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1AC930C0)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1AC930D0)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x1AC92CB0)
#define SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1AC930B0)

namespace System::Reflection
{
	inline static constexpr unsigned int ParameterInfo_TypeDefinitionIndex = 607;

	class ParameterInfo : public ::System::Object
	{
	public:
		::System::Type* Field_1_0; // 0x10
		::System::Object* Field_1_1; // 0x18
		::System::Reflection::MemberInfo* Field_1_2; // 0x20
		::System::String* Field_1_3; // 0x28
		::System::Int32 Field_1_4; // 0x30
		::System::Reflection::ParameterAttributes Field_1_5; // 0x34
		::System::Runtime::InteropServices::MarshalAsAttribute* Field_1_6; // 0x38

		::System::Void Method_1_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_832295EC279E5994_OFFSET))(this);
		}

		::System::String* Method_1_71BFA430EBCD890A()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_71BFA430EBCD890A_OFFSET))(this);
		}

		static ::System::Void Method_1_E4B39F56000B60BC(::System::Text::StringBuilder* sb, ::Il2CppArray<::System::Reflection::ParameterInfo*>* p, ::System::Reflection::CallingConventions callingConvention, ::System::Boolean serialization)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::System::Reflection::CallingConventions, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_E4B39F56000B60BC_OFFSET))(sb, p, callingConvention, serialization);
		}

		::System::Type* Method_1_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_A99467CE9479C990_OFFSET))(this);
		}

		::System::Boolean Method_1_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Boolean Method_1_F0088C88851A7DFB_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
		}

		::System::Boolean Method_1_F0088C88851A7DFB_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
		}

		::System::Boolean Method_1_F0088C88851A7DFB_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_F0088C88851A7DFB_3_OFFSET))(this);
		}

		::System::Reflection::MemberInfo* Method_1_E450ECF301C56542()
		{
			return ((::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_E450ECF301C56542_OFFSET))(this);
		}

		::System::String* Method_1_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_126AB3935214AA22_OFFSET))(this);
		}

		::System::Int32 Method_1_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* Method_1_E5F116DB69E8300A()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_E5F116DB69E8300A_OFFSET))(this);
		}

		::System::Object* Method_1_4D657599804A2D94()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_4D657599804A2D94_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* Method_1_5A6F21CC19C5EDF3(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_5A6F21CC19C5EDF3_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_1_1724EA74DE9CE64C(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_1724EA74DE9CE64C_OFFSET))(this, attributeType, inherit);
		}

		::System::Object* Method_1_08FDEBD8D01774E4(::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_08FDEBD8D01774E4_OFFSET))(this, context);
		}

		::System::Boolean Method_1_0E9CD5BE0B9B7B7D(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_0E9CD5BE0B9B7B7D_OFFSET))(this, attributeType, inherit);
		}

		static ::System::Reflection::ParameterInfo* Method_1_DEB409BBC483B3E1(::System::Reflection::ParameterInfo* pinfo, ::System::Reflection::MemberInfo* member)
		{
			return ((::System::Reflection::ParameterInfo*(*)(::System::Reflection::ParameterInfo*, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_DEB409BBC483B3E1_OFFSET))(pinfo, member);
		}

		static ::System::Reflection::ParameterInfo* Method_1_7FA212012BF4615B(::System::Type* type, ::System::Reflection::MemberInfo* member, ::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs)
		{
			return ((::System::Reflection::ParameterInfo*(*)(::System::Type*, ::System::Reflection::MemberInfo*, ::System::Runtime::InteropServices::MarshalAsAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_METHOD_1_7FA212012BF4615B_OFFSET))(type, member, marshalAs);
		}
	};
}
