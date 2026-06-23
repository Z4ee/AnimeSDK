#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/RuntimeParameterInfo.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class ParameterInfo; }
namespace System::Runtime::InteropServices { class MarshalAsAttribute; }

#define SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_3_227461ECA347F719_OFFSET UNITYSDK_OFFSET(0x1BA25450)
#define SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_3_3FEA8408C5ED329C_OFFSET UNITYSDK_OFFSET(0x1BA25460)
#define SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_3_A886283F1E86B93E_OFFSET UNITYSDK_OFFSET(0x1BA25470)
#define SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_3_ACB6C6E15D765345_OFFSET UNITYSDK_OFFSET(0x1BA25260)
#define SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_3_D0751B0BE077AEC4_OFFSET UNITYSDK_OFFSET(0x1BA251D0)
#define SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_3_D11F921D2AEB66BD_OFFSET UNITYSDK_OFFSET(0x1BA25200)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoParameterInfo_TypeDefinitionIndex = 599;

	class MonoParameterInfo : public ::System::Reflection::RuntimeParameterInfo
	{
	public:
		::System::Void Method_3_D0751B0BE077AEC4(::System::Reflection::ParameterInfo* pinfo, ::System::Reflection::MemberInfo* member)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ParameterInfo*, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_3_D0751B0BE077AEC4_OFFSET))(this, pinfo, member);
		}

		::System::Void Method_3_D11F921D2AEB66BD(::System::Type* type, ::System::Reflection::MemberInfo* member, ::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Reflection::MemberInfo*, ::System::Runtime::InteropServices::MarshalAsAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_3_D11F921D2AEB66BD_OFFSET))(this, type, member, marshalAs);
		}

		::System::Object* Method_3_ACB6C6E15D765345()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_3_ACB6C6E15D765345_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* Method_3_3FEA8408C5ED329C(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_3_3FEA8408C5ED329C_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_3_227461ECA347F719(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_3_227461ECA347F719_OFFSET))(this, attributeType, inherit);
		}

		::System::Boolean Method_3_A886283F1E86B93E(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO_METHOD_3_A886283F1E86B93E_OFFSET))(this, attributeType, inherit);
		}
	};
}
