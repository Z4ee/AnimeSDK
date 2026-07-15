#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class SendOrPostCallback; }
namespace System::Threading { class WaitCallback; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8232A0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8232E0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE___C__THROWASYNC_B__6_0_OFFSET UNITYSDK_OFFSET(0x1A8232F0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE___C__THROWASYNC_B__6_1_OFFSET UNITYSDK_OFFSET(0x1A8233B0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncMethodBuilderCore___c_TypeDefinitionIndex = 1350;

	class AsyncMethodBuilderCore___c : public ::System::Object
	{
	public:
		static ::System::Runtime::CompilerServices::AsyncMethodBuilderCore___c** StaticGet___9()
		{
			return (::System::Runtime::CompilerServices::AsyncMethodBuilderCore___c**)Il2CppClass::FromTypeDefinitionIndex(AsyncMethodBuilderCore___c_TypeDefinitionIndex)->GetStaticField(0x108A0);
		}
		static ::System::Threading::WaitCallback** StaticGet___9__6_1()
		{
			return (::System::Threading::WaitCallback**)Il2CppClass::FromTypeDefinitionIndex(AsyncMethodBuilderCore___c_TypeDefinitionIndex)->GetStaticField(0x108A8);
		}
		static ::System::Threading::SendOrPostCallback** StaticGet___9__6_0()
		{
			return (::System::Threading::SendOrPostCallback**)Il2CppClass::FromTypeDefinitionIndex(AsyncMethodBuilderCore___c_TypeDefinitionIndex)->GetStaticField(0x108B0);
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
