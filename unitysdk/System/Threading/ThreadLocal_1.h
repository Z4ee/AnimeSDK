#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/ThreadLocal_1_LinkedSlotVolatile.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Threading { template <typename T> class ThreadLocal_1_FinalizationHelper; }
namespace System::Threading { template <typename T> class ThreadLocal_1_IdManager; }
namespace System::Threading { template <typename T> class ThreadLocal_1_LinkedSlot; }

namespace System::Threading
{
	inline static constexpr unsigned int ThreadLocal_1_TypeDefinitionIndex = 813;

	template <typename T>
	class ThreadLocal_1 : public ::System::Object
	{
	public:
		::System::Func_1<T>* m_valueFactory; // 0x0
		static ::Il2CppArray<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>** StaticGet_ts_slotArray()
		{
			return (::Il2CppArray<::System::Threading::ThreadLocal_1_LinkedSlotVolatile<T>>**)Il2CppClass::FromTypeDefinitionIndex(ThreadLocal_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Threading::ThreadLocal_1_FinalizationHelper<T>** StaticGet_ts_finalizationHelper()
		{
			return (::System::Threading::ThreadLocal_1_FinalizationHelper<T>**)Il2CppClass::FromTypeDefinitionIndex(ThreadLocal_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Int32 m_idComplement; // 0x0
		::System::Boolean m_initialized; // 0x0
		static ::System::Threading::ThreadLocal_1_IdManager<T>** StaticGet_s_idManager()
		{
			return (::System::Threading::ThreadLocal_1_IdManager<T>**)Il2CppClass::FromTypeDefinitionIndex(ThreadLocal_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Threading::ThreadLocal_1_LinkedSlot<T>* m_linkedSlot; // 0x0
		::System::Boolean m_trackAllValues; // 0x0
	};
}
