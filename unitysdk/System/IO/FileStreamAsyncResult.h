#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitHandle; }

#define SYSTEM_IO_FILESTREAMASYNCRESULT_CBWRAPPER_OFFSET UNITYSDK_OFFSET(0x1D6877D0)
#define SYSTEM_IO_FILESTREAMASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x1D687860)
#define SYSTEM_IO_FILESTREAMASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x1D687880)
#define SYSTEM_IO_FILESTREAMASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x1D687870)
#define SYSTEM_IO_FILESTREAMASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1D687890)
#define SYSTEM_IO_FILESTREAMASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D687730)

namespace System::IO
{
	inline static constexpr unsigned int FileStreamAsyncResult_TypeDefinitionIndex = 683;

	class FileStreamAsyncResult : public ::System::Object
	{
	public:
		::System::Object* state; // 0x10
		::System::Threading::ManualResetEvent* wh; // 0x18
		::System::AsyncCallback* cb; // 0x20
		::System::AsyncCallback* realcb; // 0x28
		::System::Int32 Count; // 0x30
		::System::Boolean completedSynch; // 0x34
		::System::Boolean completed; // 0x35
		::System::Int32 OriginalCount; // 0x38
		::System::Int32 BytesRead; // 0x3C

		::System::Void _ctor(::System::AsyncCallback* cb, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAMASYNCRESULT__CTOR_OFFSET))(this, cb, state);
		}

		static ::System::Void CBWrapper(::System::IAsyncResult* ares)
		{
			return ((::System::Void(*)(::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAMASYNCRESULT_CBWRAPPER_OFFSET))(ares);
		}

		::System::Object* get_AsyncState()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAMASYNCRESULT_GET_ASYNCSTATE_OFFSET))(this);
		}

		::System::Boolean get_CompletedSynchronously()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAMASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET))(this);
		}

		::System::Threading::WaitHandle* get_AsyncWaitHandle()
		{
			return ((::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAMASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAMASYNCRESULT_GET_ISCOMPLETED_OFFSET))(this);
		}
	};
}
