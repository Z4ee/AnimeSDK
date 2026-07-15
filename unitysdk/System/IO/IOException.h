#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_IO_IOEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B851F30)
#define SYSTEM_IO_IOEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B859DE0)
#define SYSTEM_IO_IOEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B859E50)
#define SYSTEM_IO_IOEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1B859ED0)
#define SYSTEM_IO_IOEXCEPTION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1B852880)
#define SYSTEM_IO_IOEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B858B20)

namespace System::IO
{
	inline static constexpr unsigned int IOException_TypeDefinitionIndex = 677;

	class IOException : public ::System::SystemException
	{
	public:
		::System::String* _maybeFullPath; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_IOEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_IOEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IO_IOEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::String* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_IO_IOEXCEPTION__CTOR_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_4(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_IO_IOEXCEPTION__CTOR_4_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_5(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_IO_IOEXCEPTION__CTOR_5_OFFSET))(this, a1, a2);
		}
	};
}
