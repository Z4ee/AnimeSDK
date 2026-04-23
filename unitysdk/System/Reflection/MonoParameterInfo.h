#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/RuntimeParameterInfo.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class ParameterInfo; }
namespace System::Runtime::InteropServices { class MarshalAsAttribute; }

#define SYSTEM_REFLECTION_MONOPARAMETERINFO_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x179A8510)
#define SYSTEM_REFLECTION_MONOPARAMETERINFO_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x179A8550)
#define SYSTEM_REFLECTION_MONOPARAMETERINFO_GETREQUIREDCUSTOMMODIFIERS_OFFSET UNITYSDK_OFFSET(0x179A8570)
#define SYSTEM_REFLECTION_MONOPARAMETERINFO_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x179A8330)
#define SYSTEM_REFLECTION_MONOPARAMETERINFO_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x179A8560)
#define SYSTEM_REFLECTION_MONOPARAMETERINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x179A8300)
#define SYSTEM_REFLECTION_MONOPARAMETERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x179A8270)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoParameterInfo_TypeDefinitionIndex = 626;

	class MonoParameterInfo : public ::System::Reflection::RuntimeParameterInfo
	{
	public:
		::System::Void _ctor(::System::Reflection::ParameterInfo* pinfo, ::System::Reflection::MemberInfo* member)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ParameterInfo*, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO__CTOR_OFFSET))(this, pinfo, member);
		}

		::System::Void _ctor_1(::System::Type* type, ::System::Reflection::MemberInfo* member, ::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Reflection::MemberInfo*, ::System::Runtime::InteropServices::MarshalAsAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO__CTOR_1_OFFSET))(this, type, member, marshalAs);
		}

		::System::Object* get_DefaultValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO_GET_DEFAULTVALUE_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO_GETCUSTOMATTRIBUTES_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO_GETCUSTOMATTRIBUTES_1_OFFSET))(this, attributeType, inherit);
		}

		::System::Boolean IsDefined(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO_ISDEFINED_OFFSET))(this, attributeType, inherit);
		}

		::Il2CppArray<::System::Type*>* GetRequiredCustomModifiers()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO_GETREQUIREDCUSTOMMODIFIERS_OFFSET))(this);
		}
	};
}
