#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_EXECUTIONENGINEEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BD02730)
#define SYSTEM_EXECUTIONENGINEEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BD00330)
#define SYSTEM_EXECUTIONENGINEEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1BD027A0)
#define SYSTEM_EXECUTIONENGINEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD02690)

namespace System
{
	inline static constexpr unsigned int ExecutionEngineException_TypeDefinitionIndex = 246;

	class ExecutionEngineException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXECUTIONENGINEEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_EXECUTIONENGINEEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_EXECUTIONENGINEEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_EXECUTIONENGINEEXCEPTION__CTOR_3_OFFSET))(this, a1, a2);
		}
	};
}
