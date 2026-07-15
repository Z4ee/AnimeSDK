#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Threading { class TimerCallback; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { class Task_ContingentProperties; }

#define SYSTEM_THREADING_TASKS_TASK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7329A0)
#define SYSTEM_THREADING_TASKS_TASK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7329D0)
#define SYSTEM_THREADING_TASKS_TASK___C__DELAY_B__276_0_OFFSET UNITYSDK_OFFSET(0x1A7329E0)
#define SYSTEM_THREADING_TASKS_TASK___C__DELAY_B__276_1_OFFSET UNITYSDK_OFFSET(0x1A732CF0)
#define SYSTEM_THREADING_TASKS_TASK___C___CCTOR_B__295_0_OFFSET UNITYSDK_OFFSET(0x1A732D50)
#define SYSTEM_THREADING_TASKS_TASK___C___CCTOR_B__295_1_OFFSET UNITYSDK_OFFSET(0x1A732D70)
#define SYSTEM_THREADING_TASKS_TASK___C___CCTOR_B__295_2_OFFSET UNITYSDK_OFFSET(0x1A732D90)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int Task___c_TypeDefinitionIndex = 901;

	class Task___c : public ::System::Object
	{
	public:
		static ::System::Threading::TimerCallback** StaticGet___9__276_1()
		{
			return (::System::Threading::TimerCallback**)Il2CppClass::FromTypeDefinitionIndex(Task___c_TypeDefinitionIndex)->GetStaticField(0x21720);
		}
		static ::System::Threading::Tasks::Task___c** StaticGet___9()
		{
			return (::System::Threading::Tasks::Task___c**)Il2CppClass::FromTypeDefinitionIndex(Task___c_TypeDefinitionIndex)->GetStaticField(0x21728);
		}
		static ::System::Action_1<::System::Object*>** StaticGet___9__276_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Task___c_TypeDefinitionIndex)->GetStaticField(0x21730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK___C__CTOR_OFFSET))(this);
		}

		::System::Void _Delay_b__276_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK___C__DELAY_B__276_0_OFFSET))(this, a1);
		}

		::System::Void _Delay_b__276_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK___C__DELAY_B__276_1_OFFSET))(this, a1);
		}

		::System::Threading::Tasks::Task_ContingentProperties* __cctor_b__295_0()
		{
			return ((::System::Threading::Tasks::Task_ContingentProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK___C___CCTOR_B__295_0_OFFSET))(this);
		}

		::System::Boolean __cctor_b__295_1(::System::Threading::Tasks::Task* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK___C___CCTOR_B__295_1_OFFSET))(this, a1);
		}

		::System::Boolean __cctor_b__295_2(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASK___C___CCTOR_B__295_2_OFFSET))(this, a1);
		}
	};
}
