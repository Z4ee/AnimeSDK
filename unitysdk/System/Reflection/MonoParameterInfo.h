#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/RuntimeParameterInfo.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class ParameterInfo; }
namespace System::Runtime::InteropServices { class MarshalAsAttribute; }

#define SYSTEM_REFLECTION_MONOPARAMETERINFO_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1BD9F1E0)
#define SYSTEM_REFLECTION_MONOPARAMETERINFO_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1BD9F220)
#define SYSTEM_REFLECTION_MONOPARAMETERINFO_GETREQUIREDCUSTOMMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1BD9F240)
#define SYSTEM_REFLECTION_MONOPARAMETERINFO_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1BD9F020)
#define SYSTEM_REFLECTION_MONOPARAMETERINFO_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x1BD9F230)
#define SYSTEM_REFLECTION_MONOPARAMETERINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BD9EFF0)
#define SYSTEM_REFLECTION_MONOPARAMETERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD9EDD0)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoParameterInfo_TypeDefinitionIndex = 628;

	class MonoParameterInfo : public ::System::Reflection::RuntimeParameterInfo
	{
	public:
		::System::Void _ctor(::System::Reflection::ParameterInfo* a1, ::System::Reflection::MemberInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ParameterInfo*, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Type* a1, ::System::Reflection::MemberInfo* a2, ::System::Runtime::InteropServices::MarshalAsAttribute* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Reflection::MemberInfo*, ::System::Runtime::InteropServices::MarshalAsAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* get_DefaultValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO_GET_DEFAULTVALUE_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean a1)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO_GETCUSTOMATTRIBUTES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO_GETCUSTOMATTRIBUTES_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsDefined(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO_ISDEFINED_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Type*>* GetRequiredCustomModifiers()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPARAMETERINFO_GETREQUIREDCUSTOMMODIFIERS_OFFSET))(this);
		}
	};
}
