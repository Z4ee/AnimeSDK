#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class SendOrPostCallback; }
namespace System::Threading { class WaitCallback; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2C6640)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C6680)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE___C__THROWASYNC_B__6_0_OFFSET UNITYSDK_OFFSET(0x1C2C6690)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE___C__THROWASYNC_B__6_1_OFFSET UNITYSDK_OFFSET(0x1C2C6750)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncMethodBuilderCore___c_TypeDefinitionIndex = 1357;

	class AsyncMethodBuilderCore___c : public ::System::Object
	{
	public:
		static ::System::Threading::SendOrPostCallback** StaticGet___9__6_0()
		{
			return (::System::Threading::SendOrPostCallback**)Il2CppClass::FromTypeDefinitionIndex(AsyncMethodBuilderCore___c_TypeDefinitionIndex)->GetStaticField(0x158F0);
		}
		static ::System::Runtime::CompilerServices::AsyncMethodBuilderCore___c** StaticGet___9()
		{
			return (::System::Runtime::CompilerServices::AsyncMethodBuilderCore___c**)Il2CppClass::FromTypeDefinitionIndex(AsyncMethodBuilderCore___c_TypeDefinitionIndex)->GetStaticField(0x158F8);
		}
		static ::System::Threading::WaitCallback** StaticGet___9__6_1()
		{
			return (::System::Threading::WaitCallback**)Il2CppClass::FromTypeDefinitionIndex(AsyncMethodBuilderCore___c_TypeDefinitionIndex)->GetStaticField(0x15900);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE___C__CTOR_OFFSET))(this);
		}

		::System::Void _ThrowAsync_b__6_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE___C__THROWASYNC_B__6_0_OFFSET))(this, a1);
		}

		::System::Void _ThrowAsync_b__6_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE___C__THROWASYNC_B__6_1_OFFSET))(this, a1);
		}
	};
}
