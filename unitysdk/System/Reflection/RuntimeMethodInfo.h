#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/MethodInfo.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Delegate; }
namespace System { class Object; }
namespace System { class RuntimeType; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class RuntimeModule; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_45DB550DE2BB43E0_OFFSET UNITYSDK_OFFSET(0x1CD8FD80)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_47C8CC41656E6D8F_OFFSET UNITYSDK_OFFSET(0x1CD90090)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_658233F71CDC01ED_OFFSET UNITYSDK_OFFSET(0x1CD8FE10)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1CD90360)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_BD8BD1FF69385F21_1_OFFSET UNITYSDK_OFFSET(0x1CD902E0)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_BD8BD1FF69385F21_OFFSET UNITYSDK_OFFSET(0x1CD90010)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_C860641BF77A41F9_OFFSET UNITYSDK_OFFSET(0x1CD8FE80)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_D8261B12A3259C12_OFFSET UNITYSDK_OFFSET(0x1CD8FFE0)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_E0730323297BCBC5_OFFSET UNITYSDK_OFFSET(0x1CD8FCF0)
#define SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_F463834B57D971BE_OFFSET UNITYSDK_OFFSET(0x1CD8FFC0)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeMethodInfo_TypeDefinitionIndex = 592;

	class RuntimeMethodInfo : public ::System::Reflection::MethodInfo
	{
	public:
		::System::Void Method_4_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_832295EC279E5994_OFFSET))(this);
		}

		::System::Reflection::Module* Method_4_E0730323297BCBC5()
		{
			return ((::System::Reflection::Module*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_E0730323297BCBC5_OFFSET))(this);
		}

		::System::RuntimeType* Method_4_658233F71CDC01ED()
		{
			return ((::System::RuntimeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_658233F71CDC01ED_OFFSET))(this);
		}

		::System::String* Method_4_C860641BF77A41F9(::System::Boolean serialization)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_C860641BF77A41F9_OFFSET))(this, serialization);
		}

		::System::Delegate* Method_4_F463834B57D971BE(::System::Type* delegateType)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_F463834B57D971BE_OFFSET))(this, delegateType);
		}

		::System::Delegate* Method_4_D8261B12A3259C12(::System::Type* delegateType, ::System::Object* target)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_D8261B12A3259C12_OFFSET))(this, delegateType, target);
		}

		::System::String* Method_4_BD8BD1FF69385F21()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_BD8BD1FF69385F21_OFFSET))(this);
		}

		::System::Reflection::RuntimeModule* Method_4_45DB550DE2BB43E0()
		{
			return ((::System::Reflection::RuntimeModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_45DB550DE2BB43E0_OFFSET))(this);
		}

		::System::Void Method_4_47C8CC41656E6D8F(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_47C8CC41656E6D8F_OFFSET))(this, info, context);
		}

		::System::String* Method_4_BD8BD1FF69385F21_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEMETHODINFO_METHOD_4_BD8BD1FF69385F21_1_OFFSET))(this);
		}
	};
}
