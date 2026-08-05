#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::CompilerServices { template <typename T1, typename T2> class ConditionalWeakTable_2_CreateValueCallback; }
namespace System::Threading { class OSSpecificSynchronizationContext; }

#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD08440)
#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD08480)
#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT___C__GET_B__3_0_OFFSET UNITYSDK_OFFSET(0x1DD08490)

namespace System::Threading
{
	inline static constexpr unsigned int OSSpecificSynchronizationContext___c_TypeDefinitionIndex = 833;

	class OSSpecificSynchronizationContext___c : public ::System::Object
	{
	public:
		static ::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>** StaticGet___9__3_0()
		{
			return (::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>**)Il2CppClass::FromTypeDefinitionIndex(OSSpecificSynchronizationContext___c_TypeDefinitionIndex)->GetStaticField(0xE50);
		}
		static ::System::Threading::OSSpecificSynchronizationContext___c** StaticGet___9()
		{
			return (::System::Threading::OSSpecificSynchronizationContext___c**)Il2CppClass::FromTypeDefinitionIndex(OSSpecificSynchronizationContext___c_TypeDefinitionIndex)->GetStaticField(0xE58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT___C__CTOR_OFFSET))(this);
		}

		::System::Threading::OSSpecificSynchronizationContext* _Get_b__3_0(::System::Object* _osContext)
		{
			return ((::System::Threading::OSSpecificSynchronizationContext*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT___C__GET_B__3_0_OFFSET))(this, _osContext);
		}
	};
}
