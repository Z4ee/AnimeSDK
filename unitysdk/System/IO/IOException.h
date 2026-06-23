#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_IO_IOEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BE1FD50)
#define SYSTEM_IO_IOEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BE23D00)
#define SYSTEM_IO_IOEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1BE23D90)
#define SYSTEM_IO_IOEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1BE23E30)
#define SYSTEM_IO_IOEXCEPTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1BE20530)
#define SYSTEM_IO_IOEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE23AA0)

namespace System::IO
{
	inline static constexpr unsigned int IOException_TypeDefinitionIndex = 646;

	class IOException : public ::System::SystemException
	{
	public:
		::System::String* _maybeFullPath; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_IOEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_IOEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Int32 hresult)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_IOEXCEPTION__CTOR_2_OFFSET))(this, message, hresult);
		}

		::System::Void _ctor_3(::System::String* message, ::System::Int32 hresult, ::System::String* maybeFullPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_IOEXCEPTION__CTOR_3_OFFSET))(this, message, hresult, maybeFullPath);
		}

		::System::Void _ctor_4(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_IO_IOEXCEPTION__CTOR_4_OFFSET))(this, message, innerException);
		}

		::System::Void _ctor_5(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_IO_IOEXCEPTION__CTOR_5_OFFSET))(this, info, context);
		}
	};
}
