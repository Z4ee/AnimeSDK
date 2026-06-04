#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class Stream; }
namespace System::Text { class Decoder; }
namespace System::Text { class Encoding; }
namespace System::Threading { class ManualResetEvent; }

#define SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_CANCELOPERATION_OFFSET UNITYSDK_OFFSET(0x1AF42D30)
#define SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1AF42BA0)
#define SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AF42BC0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int AsyncStreamReader_TypeDefinitionIndex = 2534;

	class AsyncStreamReader : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* byteBuffer; // 0x10
		::System::Object* syncObject; // 0x18
		::System::Text::Decoder* decoder; // 0x20
		::System::Threading::ManualResetEvent* eofEvent; // 0x28
		::System::Text::Encoding* encoding; // 0x30
		::Il2CppArray<::System::Char>* charBuffer; // 0x38
		::System::IO::Stream* stream; // 0x40
		::System::Boolean cancelOperation; // 0x48

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_CLOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void CancelOperation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_CANCELOPERATION_OFFSET))(this);
		}
	};
}
