#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }

#define SYSTEM_RUNTIME_EXCEPTIONSERVICES_EXCEPTIONDISPATCHINFO_CAPTURE_OFFSET UNITYSDK_OFFSET(0x16391250)
#define SYSTEM_RUNTIME_EXCEPTIONSERVICES_EXCEPTIONDISPATCHINFO_GET_BINARYSTACKTRACEARRAY_OFFSET UNITYSDK_OFFSET(0x16392D70)
#define SYSTEM_RUNTIME_EXCEPTIONSERVICES_EXCEPTIONDISPATCHINFO_GET_SOURCEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x16392D80)
#define SYSTEM_RUNTIME_EXCEPTIONSERVICES_EXCEPTIONDISPATCHINFO_THROW_1_OFFSET UNITYSDK_OFFSET(0x16392D90)
#define SYSTEM_RUNTIME_EXCEPTIONSERVICES_EXCEPTIONDISPATCHINFO_THROW_OFFSET UNITYSDK_OFFSET(0x16391480)
#define SYSTEM_RUNTIME_EXCEPTIONSERVICES_EXCEPTIONDISPATCHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16392C60)

namespace System::Runtime::ExceptionServices
{
	inline static constexpr unsigned int ExceptionDispatchInfo_TypeDefinitionIndex = 1330;

	class ExceptionDispatchInfo : public ::System::Object
	{
	public:
		::System::Exception* m_Exception; // 0x10
		::System::Object* m_stackTrace; // 0x18

		::System::Void _ctor(::System::Exception* exception)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_EXCEPTIONSERVICES_EXCEPTIONDISPATCHINFO__CTOR_OFFSET))(this, exception);
		}

		::System::Object* get_BinaryStackTraceArray()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_EXCEPTIONSERVICES_EXCEPTIONDISPATCHINFO_GET_BINARYSTACKTRACEARRAY_OFFSET))(this);
		}

		static ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* Capture(::System::Exception* source)
		{
			return ((::System::Runtime::ExceptionServices::ExceptionDispatchInfo*(*)(::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_EXCEPTIONSERVICES_EXCEPTIONDISPATCHINFO_CAPTURE_OFFSET))(source);
		}

		::System::Exception* get_SourceException()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_EXCEPTIONSERVICES_EXCEPTIONDISPATCHINFO_GET_SOURCEEXCEPTION_OFFSET))(this);
		}

		::System::Void Throw()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_EXCEPTIONSERVICES_EXCEPTIONDISPATCHINFO_THROW_OFFSET))(this);
		}

		static ::System::Void Throw_1(::System::Exception* source)
		{
			return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_EXCEPTIONSERVICES_EXCEPTIONDISPATCHINFO_THROW_1_OFFSET))(source);
		}
	};
}
