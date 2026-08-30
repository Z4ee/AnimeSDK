#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::CompilerServices { template <typename T1, typename T2> class ConditionalWeakTable_2_CreateValueCallback; }
namespace System::Threading { class OSSpecificSynchronizationContext; }

#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3E79F0)
#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3E7A20)
#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT___C__GET_B__3_0_OFFSET UNITYSDK_OFFSET(0x1B3E7A30)

namespace System::Threading
{
	inline static constexpr unsigned int OSSpecificSynchronizationContext___c_TypeDefinitionIndex = 847;

	class OSSpecificSynchronizationContext___c : public ::System::Object
	{
	public:
		static ::System::Threading::OSSpecificSynchronizationContext___c** StaticGet___9()
		{
			return (::System::Threading::OSSpecificSynchronizationContext___c**)Il2CppClass::FromTypeDefinitionIndex(OSSpecificSynchronizationContext___c_TypeDefinitionIndex)->GetStaticField(0x14240);
		}
		static ::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>** StaticGet___9__3_0()
		{
			return (::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>**)Il2CppClass::FromTypeDefinitionIndex(OSSpecificSynchronizationContext___c_TypeDefinitionIndex)->GetStaticField(0x14248);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT___C__CTOR_OFFSET))(this);
		}

		::System::Threading::OSSpecificSynchronizationContext* _Get_b__3_0(::System::Object* a1)
		{
			return ((::System::Threading::OSSpecificSynchronizationContext*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT___C__GET_B__3_0_OFFSET))(this, a1);
		}
	};
}
