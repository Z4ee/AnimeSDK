#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS_ATOMICLOOPSTATEUPDATE_1_OFFSET UNITYSDK_OFFSET(0x1AC9E1C0)
#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS_ATOMICLOOPSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1AC9E150)
#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS_CANCEL_OFFSET UNITYSDK_OFFSET(0x1AC9E2F0)
#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS_GET_LOOPSTATEFLAGS_OFFSET UNITYSDK_OFFSET(0x1AC9E140)
#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS_SETEXCEPTIONAL_OFFSET UNITYSDK_OFFSET(0x1AC9E240)
#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC9E400)
#define SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC9E3A0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int ParallelLoopStateFlags_TypeDefinitionIndex = 892;

	class ParallelLoopStateFlags : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_PLS_STOPPED()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ParallelLoopStateFlags_TypeDefinitionIndex)->GetStaticField(0x510);
		}
		static ::System::Int32* StaticGet_PLS_BROKEN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ParallelLoopStateFlags_TypeDefinitionIndex)->GetStaticField(0x514);
		}
		static ::System::Int32* StaticGet_PLS_EXCEPTIONAL()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ParallelLoopStateFlags_TypeDefinitionIndex)->GetStaticField(0x518);
		}
		static ::System::Int32* StaticGet_PLS_NONE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ParallelLoopStateFlags_TypeDefinitionIndex)->GetStaticField(0x51C);
		}
		static ::System::Int32* StaticGet_PLS_CANCELED()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ParallelLoopStateFlags_TypeDefinitionIndex)->GetStaticField(0x520);
		}
		::System::Int32 m_LoopStateFlags; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS__CCTOR_OFFSET))();
		}

		::System::Int32 get_LoopStateFlags()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS_GET_LOOPSTATEFLAGS_OFFSET))(this);
		}

		::System::Boolean AtomicLoopStateUpdate(::System::Int32 newState, ::System::Int32 illegalStates)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS_ATOMICLOOPSTATEUPDATE_OFFSET))(this, newState, illegalStates);
		}

		::System::Boolean AtomicLoopStateUpdate_1(::System::Int32 newState, ::System::Int32 illegalStates, ::System::Int32& oldState)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS_ATOMICLOOPSTATEUPDATE_1_OFFSET))(this, newState, illegalStates, oldState);
		}

		::System::Void SetExceptional()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS_SETEXCEPTIONAL_OFFSET))(this);
		}

		::System::Boolean Cancel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_PARALLELLOOPSTATEFLAGS_CANCEL_OFFSET))(this);
		}
	};
}
