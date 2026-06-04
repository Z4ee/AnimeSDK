#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitHandle; }

#define SYSTEM_IO_FILESTREAMASYNCRESULT_CBWRAPPER_OFFSET UNITYSDK_OFFSET(0x18717080)
#define SYSTEM_IO_FILESTREAMASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x18717120)
#define SYSTEM_IO_FILESTREAMASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x18717140)
#define SYSTEM_IO_FILESTREAMASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x18717130)
#define SYSTEM_IO_FILESTREAMASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x18717150)
#define SYSTEM_IO_FILESTREAMASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x18715DB0)

namespace System::IO
{
	inline static constexpr unsigned int FileStreamAsyncResult_TypeDefinitionIndex = 717;

	class FileStreamAsyncResult : public ::System::Object
	{
	public:
		::System::Object* state; // 0x10
		::System::AsyncCallback* realcb; // 0x18
		::System::Threading::ManualResetEvent* wh; // 0x20
		::System::AsyncCallback* cb; // 0x28
		::System::Int32 OriginalCount; // 0x30
		::System::Boolean completedSynch; // 0x34
		::System::Boolean completed; // 0x35
		::System::Int32 Count; // 0x38
		::System::Int32 BytesRead; // 0x3C

		::System::Void _ctor(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAMASYNCRESULT__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void CBWrapper(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILESTREAMASYNCRESULT_CBWRAPPER_OFFSET))(a1);
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
