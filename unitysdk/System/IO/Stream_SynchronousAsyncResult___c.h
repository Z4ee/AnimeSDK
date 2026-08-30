#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }
namespace System::Threading { class ManualResetEvent; }

#define SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D46F640)
#define SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D46F680)
#define SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT___C__GET_ASYNCWAITHANDLE_B__12_0_OFFSET UNITYSDK_OFFSET(0x1D46F690)

namespace System::IO
{
	inline static constexpr unsigned int Stream_SynchronousAsyncResult___c_TypeDefinitionIndex = 689;

	class Stream_SynchronousAsyncResult___c : public ::System::Object
	{
	public:
		static ::System::IO::Stream_SynchronousAsyncResult___c** StaticGet___9()
		{
			return (::System::IO::Stream_SynchronousAsyncResult___c**)Il2CppClass::FromTypeDefinitionIndex(Stream_SynchronousAsyncResult___c_TypeDefinitionIndex)->GetStaticField(0xC850);
		}
		static ::System::Func_1<::System::Threading::ManualResetEvent*>** StaticGet___9__12_0()
		{
			return (::System::Func_1<::System::Threading::ManualResetEvent*>**)Il2CppClass::FromTypeDefinitionIndex(Stream_SynchronousAsyncResult___c_TypeDefinitionIndex)->GetStaticField(0xC858);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT___C__CTOR_OFFSET))(this);
		}

		::System::Threading::ManualResetEvent* _get_AsyncWaitHandle_b__12_0()
		{
			return ((::System::Threading::ManualResetEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM_SYNCHRONOUSASYNCRESULT___C__GET_ASYNCWAITHANDLE_B__12_0_OFFSET))(this);
		}
	};
}
