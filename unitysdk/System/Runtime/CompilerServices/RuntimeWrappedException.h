#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Object; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x179BF220)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION_GET_WRAPPEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x179BF210)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x179BF2F0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x179BF3B0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x179BF160)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RuntimeWrappedException_TypeDefinitionIndex = 1358;

	class RuntimeWrappedException : public ::System::Exception
	{
	public:
		::System::Object* m_wrappedException; // 0x88

		::System::Void _ctor(::System::Object* thrownObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION__CTOR_OFFSET))(this, thrownObject);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION__CTOR_1_OFFSET))(this, info, context);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION__CTOR_2_OFFSET))(this);
		}

		::System::Object* get_WrappedException()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION_GET_WRAPPEDEXCEPTION_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION_GETOBJECTDATA_OFFSET))(this, info, context);
		}
	};
}
