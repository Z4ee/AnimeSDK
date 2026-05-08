#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IAsyncResult; }
namespace System::Collections { class Queue; }
namespace System::Diagnostics { class Process; }
namespace System::Diagnostics { class UserCallBack; }
namespace System::IO { class Stream; }
namespace System::Text { class Decoder; }
namespace System::Text { class Encoding; }
namespace System::Text { class StringBuilder; }
namespace System::Threading { class ManualResetEvent; }

#define SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_BEGINREADLINE_OFFSET UNITYSDK_OFFSET(0x193A63B0)
#define SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_CANCELOPERATION_OFFSET UNITYSDK_OFFSET(0x193A6660)
#define SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x193A61C0)
#define SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x193A6290)
#define SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_FLUSHMESSAGEQUEUE_OFFSET UNITYSDK_OFFSET(0x193A64E0)
#define SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_GETLINESFROMSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x193A6D90)
#define SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_GET_BASESTREAM_OFFSET UNITYSDK_OFFSET(0x193A63A0)
#define SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_GET_CURRENTENCODING_OFFSET UNITYSDK_OFFSET(0x193A6390)
#define SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_INIT_OFFSET UNITYSDK_OFFSET(0x193A60B0)
#define SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_READBUFFER_OFFSET UNITYSDK_OFFSET(0x193A6670)
#define SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x193A61E0)
#define SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_WAITUTILEOF_OFFSET UNITYSDK_OFFSET(0x193A7020)
#define SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193A5FD0)
#define SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x193A5FA0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int AsyncStreamReader_TypeDefinitionIndex = 2778;

	class AsyncStreamReader : public ::System::Object
	{
	public:
		// static const ::System::Int32 DefaultBufferSize = 0x400; // 0x0
		// static const ::System::Int32 MinBufferSize = 0x80; // 0x0
		::Il2CppArray<::System::Char>* charBuffer; // 0x10
		::System::Diagnostics::Process* process; // 0x18
		::System::Object* syncObject; // 0x20
		::System::IO::Stream* stream; // 0x28
		::System::Threading::ManualResetEvent* eofEvent; // 0x30
		::System::Text::StringBuilder* sb; // 0x38
		::Il2CppArray<::System::Byte>* byteBuffer; // 0x40
		::System::Text::Decoder* decoder; // 0x48
		::System::Collections::Queue* messageQueue; // 0x50
		::System::Diagnostics::UserCallBack* userCallBack; // 0x58
		::System::Text::Encoding* encoding; // 0x60
		::System::Int32 currentLinePos; // 0x68
		::System::Boolean bLastCarriageReturn; // 0x6C
		::System::Boolean cancelOperation; // 0x6D
		::System::Int32 _maxCharsPerBuffer; // 0x70

		::System::Void _ctor(::System::Diagnostics::Process* process, ::System::IO::Stream* stream, ::System::Diagnostics::UserCallBack* callback, ::System::Text::Encoding* encoding)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Process*, ::System::IO::Stream*, ::System::Diagnostics::UserCallBack*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER__CTOR_OFFSET))(this, process, stream, callback, encoding);
		}

		::System::Void _ctor_1(::System::Diagnostics::Process* process, ::System::IO::Stream* stream, ::System::Diagnostics::UserCallBack* callback, ::System::Text::Encoding* encoding, ::System::Int32 bufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Process*, ::System::IO::Stream*, ::System::Diagnostics::UserCallBack*, ::System::Text::Encoding*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER__CTOR_1_OFFSET))(this, process, stream, callback, encoding, bufferSize);
		}

		::System::Void Init(::System::Diagnostics::Process* process, ::System::IO::Stream* stream, ::System::Diagnostics::UserCallBack* callback, ::System::Text::Encoding* encoding, ::System::Int32 bufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Process*, ::System::IO::Stream*, ::System::Diagnostics::UserCallBack*, ::System::Text::Encoding*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_INIT_OFFSET))(this, process, stream, callback, encoding, bufferSize);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_CLOSE_OFFSET))(this);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Text::Encoding* get_CurrentEncoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_GET_CURRENTENCODING_OFFSET))(this);
		}

		::System::IO::Stream* get_BaseStream()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_GET_BASESTREAM_OFFSET))(this);
		}

		::System::Void BeginReadLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_BEGINREADLINE_OFFSET))(this);
		}

		::System::Void CancelOperation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_CANCELOPERATION_OFFSET))(this);
		}

		::System::Void ReadBuffer(::System::IAsyncResult* ar)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_READBUFFER_OFFSET))(this, ar);
		}

		::System::Void GetLinesFromStringBuilder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_GETLINESFROMSTRINGBUILDER_OFFSET))(this);
		}

		::System::Void FlushMessageQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_FLUSHMESSAGEQUEUE_OFFSET))(this);
		}

		::System::Void WaitUtilEOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_ASYNCSTREAMREADER_WAITUTILEOF_OFFSET))(this);
		}
	};
}
