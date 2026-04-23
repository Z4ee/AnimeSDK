#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/Stream_ReadWriteParameters.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/Tasks/VoidTaskResult.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::IO { class Stream; }
namespace System::Threading { class SemaphoreSlim; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_IO_STREAM___C__BEGINENDREADASYNC_B__43_0_OFFSET UNITYSDK_OFFSET(0x1796EFC0)
#define SYSTEM_IO_STREAM___C__BEGINENDREADASYNC_B__43_1_OFFSET UNITYSDK_OFFSET(0x1796F010)
#define SYSTEM_IO_STREAM___C__BEGINENDWRITEASYNC_B__53_0_OFFSET UNITYSDK_OFFSET(0x1796F230)
#define SYSTEM_IO_STREAM___C__BEGINENDWRITEASYNC_B__53_1_OFFSET UNITYSDK_OFFSET(0x1796F280)
#define SYSTEM_IO_STREAM___C__BEGINREADINTERNAL_B__39_0_OFFSET UNITYSDK_OFFSET(0x1796EEA0)
#define SYSTEM_IO_STREAM___C__BEGINWRITEINTERNAL_B__46_0_OFFSET UNITYSDK_OFFSET(0x1796F040)
#define SYSTEM_IO_STREAM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1796EE20)
#define SYSTEM_IO_STREAM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1796EE50)
#define SYSTEM_IO_STREAM___C__ENSUREASYNCACTIVESEMAPHOREINITIALIZED_B__4_0_OFFSET UNITYSDK_OFFSET(0x1796EE60)
#define SYSTEM_IO_STREAM___C__RUNREADWRITETASKWHENREADY_B__47_0_OFFSET UNITYSDK_OFFSET(0x1796F150)

namespace System::IO
{
	inline static constexpr unsigned int Stream___c_TypeDefinitionIndex = 688;

	class Stream___c : public ::System::Object
	{
	public:
		static ::System::Func_3<::System::IO::Stream*, ::System::IAsyncResult*, ::System::Threading::Tasks::VoidTaskResult>** StaticGet___9__53_1()
		{
			return (::System::Func_3<::System::IO::Stream*, ::System::IAsyncResult*, ::System::Threading::Tasks::VoidTaskResult>**)Il2CppClass::FromTypeDefinitionIndex(Stream___c_TypeDefinitionIndex)->GetStaticField(0x84F0);
		}
		static ::System::Func_1<::System::Threading::SemaphoreSlim*>** StaticGet___9__4_0()
		{
			return (::System::Func_1<::System::Threading::SemaphoreSlim*>**)Il2CppClass::FromTypeDefinitionIndex(Stream___c_TypeDefinitionIndex)->GetStaticField(0x84F8);
		}
		static ::System::IO::Stream___c** StaticGet___9()
		{
			return (::System::IO::Stream___c**)Il2CppClass::FromTypeDefinitionIndex(Stream___c_TypeDefinitionIndex)->GetStaticField(0x8500);
		}
		static ::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>** StaticGet___9__47_0()
		{
			return (::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Stream___c_TypeDefinitionIndex)->GetStaticField(0x8508);
		}
		static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__39_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Stream___c_TypeDefinitionIndex)->GetStaticField(0x8510);
		}
		static ::System::Func_5<::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>** StaticGet___9__53_0()
		{
			return (::System::Func_5<::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>**)Il2CppClass::FromTypeDefinitionIndex(Stream___c_TypeDefinitionIndex)->GetStaticField(0x8518);
		}
		static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__46_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Stream___c_TypeDefinitionIndex)->GetStaticField(0x8520);
		}
		static ::System::Func_5<::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>** StaticGet___9__43_0()
		{
			return (::System::Func_5<::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>**)Il2CppClass::FromTypeDefinitionIndex(Stream___c_TypeDefinitionIndex)->GetStaticField(0x8528);
		}
		static ::System::Func_3<::System::IO::Stream*, ::System::IAsyncResult*, ::System::Int32>** StaticGet___9__43_1()
		{
			return (::System::Func_3<::System::IO::Stream*, ::System::IAsyncResult*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Stream___c_TypeDefinitionIndex)->GetStaticField(0x8530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM___C__CTOR_OFFSET))(this);
		}

		::System::Threading::SemaphoreSlim* _EnsureAsyncActiveSemaphoreInitialized_b__4_0()
		{
			return ((::System::Threading::SemaphoreSlim*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM___C__ENSUREASYNCACTIVESEMAPHOREINITIALIZED_B__4_0_OFFSET))(this);
		}

		::System::Int32 _BeginReadInternal_b__39_0(::System::Object* _p0_)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM___C__BEGINREADINTERNAL_B__39_0_OFFSET))(this, _p0_);
		}

		::System::IAsyncResult* _BeginEndReadAsync_b__43_0(::System::IO::Stream* stream, ::System::IO::Stream_ReadWriteParameters args, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM___C__BEGINENDREADASYNC_B__43_0_OFFSET))(this, stream, args, callback, state);
		}

		::System::Int32 _BeginEndReadAsync_b__43_1(::System::IO::Stream* stream, ::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IO::Stream*, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM___C__BEGINENDREADASYNC_B__43_1_OFFSET))(this, stream, asyncResult);
		}

		::System::Int32 _BeginWriteInternal_b__46_0(::System::Object* _p0_)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM___C__BEGINWRITEINTERNAL_B__46_0_OFFSET))(this, _p0_);
		}

		::System::Void _RunReadWriteTaskWhenReady_b__47_0(::System::Threading::Tasks::Task* t, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM___C__RUNREADWRITETASKWHENREADY_B__47_0_OFFSET))(this, t, state);
		}

		::System::IAsyncResult* _BeginEndWriteAsync_b__53_0(::System::IO::Stream* stream, ::System::IO::Stream_ReadWriteParameters args, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM___C__BEGINENDWRITEASYNC_B__53_0_OFFSET))(this, stream, args, callback, state);
		}

		::System::Threading::Tasks::VoidTaskResult _BeginEndWriteAsync_b__53_1(::System::IO::Stream* stream, ::System::IAsyncResult* asyncResult)
		{
			return ((::System::Threading::Tasks::VoidTaskResult(*)(::PVOID, ::System::IO::Stream*, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM___C__BEGINENDWRITEASYNC_B__53_1_OFFSET))(this, stream, asyncResult);
		}
	};
}
