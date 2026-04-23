#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Threading { class TimerCallback; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { class Task_ContingentProperties; }

#define SYSTEM_THREADING_TASKS_TASK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17874BC0)
#define SYSTEM_THREADING_TASKS_TASK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17874BF0)
#define SYSTEM_THREADING_TASKS_TASK___C__DELAY_B__276_0_OFFSET UNITYSDK_OFFSET(0x17874C00)
#define SYSTEM_THREADING_TASKS_TASK___C__DELAY_B__276_1_OFFSET UNITYSDK_OFFSET(0x17874E60)
#define SYSTEM_THREADING_TASKS_TASK___C___CCTOR_B__295_0_OFFSET UNITYSDK_OFFSET(0x17874EC0)
#define SYSTEM_THREADING_TASKS_TASK___C___CCTOR_B__295_1_OFFSET UNITYSDK_OFFSET(0x17874EE0)
#define SYSTEM_THREADING_TASKS_TASK___C___CCTOR_B__295_2_OFFSET UNITYSDK_OFFSET(0x17874F00)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int Task___c_TypeDefinitionIndex = 902;

	class Task___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet___9__276_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Task___c_TypeDefinitionIndex)->GetStaticField(0xC550);
		}
		static ::System::Threading::TimerCallback** StaticGet___9__276_1()
		{
			return (::System::Threading::TimerCallback**)Il2CppClass::FromTypeDefinitionIndex(Task___c_TypeDefinitionIndex)->GetStaticField(0xC558);
		}
		static ::System::Threading::Tasks::Task___c** StaticGet___9()
		{
			return (::System::Threading::Tasks::Task___c**)Il2CppClass::FromTypeDefinitionIndex(Task___c_TypeDefinitionIndex)->GetStaticField(0xC560);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK___C__CTOR_OFFSET))(this);
		}

		::System::Void _Delay_b__276_0(::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK___C__DELAY_B__276_0_OFFSET))(this, state);
		}

		::System::Void _Delay_b__276_1(::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK___C__DELAY_B__276_1_OFFSET))(this, state);
		}

		::System::Threading::Tasks::Task_ContingentProperties* __cctor_b__295_0()
		{
			return ((::System::Threading::Tasks::Task_ContingentProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK___C___CCTOR_B__295_0_OFFSET))(this);
		}

		::System::Boolean __cctor_b__295_1(::System::Threading::Tasks::Task* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK___C___CCTOR_B__295_1_OFFSET))(this, t);
		}

		::System::Boolean __cctor_b__295_2(::System::Object* tc)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK___C___CCTOR_B__295_2_OFFSET))(this, tc);
		}
	};
}
