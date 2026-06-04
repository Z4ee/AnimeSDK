#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Object; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1876FE60)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION_GET_WRAPPEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1876FE50)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1876FF20)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1876FFE0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1876FDA0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RuntimeWrappedException_TypeDefinitionIndex = 1357;

	class RuntimeWrappedException : public ::System::Exception
	{
	public:
		::System::Object* m_wrappedException; // 0x88

		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION__CTOR_2_OFFSET))(this);
		}

		::System::Object* get_WrappedException()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION_GET_WRAPPEDEXCEPTION_OFFSET))(this);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEWRAPPEDEXCEPTION_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}
	};
}
