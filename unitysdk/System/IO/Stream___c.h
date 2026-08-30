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

#define SYSTEM_IO_STREAM___C__BEGINENDREADASYNC_B__43_0_OFFSET UNITYSDK_OFFSET(0x1BD5D310)
#define SYSTEM_IO_STREAM___C__BEGINENDREADASYNC_B__43_1_OFFSET UNITYSDK_OFFSET(0x1BD5D3E0)
#define SYSTEM_IO_STREAM___C__BEGINENDWRITEASYNC_B__53_0_OFFSET UNITYSDK_OFFSET(0x1BD5D6F0)
#define SYSTEM_IO_STREAM___C__BEGINENDWRITEASYNC_B__53_1_OFFSET UNITYSDK_OFFSET(0x1BD5D7C0)
#define SYSTEM_IO_STREAM___C__BEGINREADINTERNAL_B__39_0_OFFSET UNITYSDK_OFFSET(0x1BD5D160)
#define SYSTEM_IO_STREAM___C__BEGINWRITEINTERNAL_B__46_0_OFFSET UNITYSDK_OFFSET(0x1BD5D470)
#define SYSTEM_IO_STREAM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD5D0E0)
#define SYSTEM_IO_STREAM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD5D110)
#define SYSTEM_IO_STREAM___C__ENSUREASYNCACTIVESEMAPHOREINITIALIZED_B__4_0_OFFSET UNITYSDK_OFFSET(0x1BD5D120)
#define SYSTEM_IO_STREAM___C__RUNREADWRITETASKWHENREADY_B__47_0_OFFSET UNITYSDK_OFFSET(0x1BD5D600)

namespace System::IO
{
	inline static constexpr unsigned int Stream___c_TypeDefinitionIndex = 690;

	class Stream___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__39_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Stream___c_TypeDefinitionIndex)->GetStaticField(0xC5B0);
		}
		static ::System::Func_3<::System::IO::Stream*, ::System::IAsyncResult*, ::System::Threading::Tasks::VoidTaskResult>** StaticGet___9__53_1()
		{
			return (::System::Func_3<::System::IO::Stream*, ::System::IAsyncResult*, ::System::Threading::Tasks::VoidTaskResult>**)Il2CppClass::FromTypeDefinitionIndex(Stream___c_TypeDefinitionIndex)->GetStaticField(0xC5B8);
		}
		static ::System::IO::Stream___c** StaticGet___9()
		{
			return (::System::IO::Stream___c**)Il2CppClass::FromTypeDefinitionIndex(Stream___c_TypeDefinitionIndex)->GetStaticField(0xC5C0);
		}
		static ::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>** StaticGet___9__47_0()
		{
			return (::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Stream___c_TypeDefinitionIndex)->GetStaticField(0xC5C8);
		}
		static ::System::Func_5<::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>** StaticGet___9__53_0()
		{
			return (::System::Func_5<::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>**)Il2CppClass::FromTypeDefinitionIndex(Stream___c_TypeDefinitionIndex)->GetStaticField(0xC5D0);
		}
		static ::System::Func_1<::System::Threading::SemaphoreSlim*>** StaticGet___9__4_0()
		{
			return (::System::Func_1<::System::Threading::SemaphoreSlim*>**)Il2CppClass::FromTypeDefinitionIndex(Stream___c_TypeDefinitionIndex)->GetStaticField(0xC5D8);
		}
		static ::System::Func_3<::System::IO::Stream*, ::System::IAsyncResult*, ::System::Int32>** StaticGet___9__43_1()
		{
			return (::System::Func_3<::System::IO::Stream*, ::System::IAsyncResult*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Stream___c_TypeDefinitionIndex)->GetStaticField(0xC5E0);
		}
		static ::System::Func_5<::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>** StaticGet___9__43_0()
		{
			return (::System::Func_5<::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>**)Il2CppClass::FromTypeDefinitionIndex(Stream___c_TypeDefinitionIndex)->GetStaticField(0xC5E8);
		}
		static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__46_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Stream___c_TypeDefinitionIndex)->GetStaticField(0xC5F0);
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

		::System::Int32 _BeginReadInternal_b__39_0(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM___C__BEGINREADINTERNAL_B__39_0_OFFSET))(this, a1);
		}

		::System::IAsyncResult* _BeginEndReadAsync_b__43_0(::System::IO::Stream* a1, ::System::IO::Stream_ReadWriteParameters a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM___C__BEGINENDREADASYNC_B__43_0_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 _BeginEndReadAsync_b__43_1(::System::IO::Stream* a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IO::Stream*, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM___C__BEGINENDREADASYNC_B__43_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 _BeginWriteInternal_b__46_0(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM___C__BEGINWRITEINTERNAL_B__46_0_OFFSET))(this, a1);
		}

		::System::Void _RunReadWriteTaskWhenReady_b__47_0(::System::Threading::Tasks::Task* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM___C__RUNREADWRITETASKWHENREADY_B__47_0_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* _BeginEndWriteAsync_b__53_0(::System::IO::Stream* a1, ::System::IO::Stream_ReadWriteParameters a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IO::Stream*, ::System::IO::Stream_ReadWriteParameters, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM___C__BEGINENDWRITEASYNC_B__53_0_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Threading::Tasks::VoidTaskResult _BeginEndWriteAsync_b__53_1(::System::IO::Stream* a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Threading::Tasks::VoidTaskResult(*)(::PVOID, ::System::IO::Stream*, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_IO_STREAM___C__BEGINENDWRITEASYNC_B__53_1_OFFSET))(this, a1, a2);
		}
	};
}
