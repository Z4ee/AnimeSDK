#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_THREADING_INTERLOCKED_ADD_1_OFFSET UNITYSDK_OFFSET(0x1BC3ADB0)
#define SYSTEM_THREADING_INTERLOCKED_ADD_OFFSET UNITYSDK_OFFSET(0x1BC3ADA0)
#define SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_1_OFFSET UNITYSDK_OFFSET(0x1BC3AC80)
#define SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_2_OFFSET UNITYSDK_OFFSET(0x1BC3AC90)
#define SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_3_OFFSET UNITYSDK_OFFSET(0x1BC3ACA0)
#define SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_4_OFFSET UNITYSDK_OFFSET(0x1BC3AD20)
#define SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_5_OFFSET UNITYSDK_OFFSET(0x1BC3AD30)
#define SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_6_OFFSET UNITYSDK_OFFSET(0x1BC3AD40)
#define SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_OFFSET UNITYSDK_OFFSET(0x1BC36DE0)
#define SYSTEM_THREADING_INTERLOCKED_DECREMENT_1_OFFSET UNITYSDK_OFFSET(0x1BC3ACD0)
#define SYSTEM_THREADING_INTERLOCKED_DECREMENT_OFFSET UNITYSDK_OFFSET(0x1BC3ACC0)
#define SYSTEM_THREADING_INTERLOCKED_EXCHANGE_1_OFFSET UNITYSDK_OFFSET(0x1BC3AD00)
#define SYSTEM_THREADING_INTERLOCKED_EXCHANGE_2_OFFSET UNITYSDK_OFFSET(0x1BC3AD10)
#define SYSTEM_THREADING_INTERLOCKED_EXCHANGE_3_OFFSET UNITYSDK_OFFSET(0x1BC3AD60)
#define SYSTEM_THREADING_INTERLOCKED_EXCHANGE_4_OFFSET UNITYSDK_OFFSET(0x1BC3AD70)
#define SYSTEM_THREADING_INTERLOCKED_EXCHANGE_5_OFFSET UNITYSDK_OFFSET(0x1BC3AD80)
#define SYSTEM_THREADING_INTERLOCKED_EXCHANGE_OFFSET UNITYSDK_OFFSET(0x1BC34CB0)
#define SYSTEM_THREADING_INTERLOCKED_INCREMENT_1_OFFSET UNITYSDK_OFFSET(0x1BC3ACF0)
#define SYSTEM_THREADING_INTERLOCKED_INCREMENT_OFFSET UNITYSDK_OFFSET(0x1BC3ACE0)
#define SYSTEM_THREADING_INTERLOCKED_MEMORYBARRIER_OFFSET UNITYSDK_OFFSET(0x1BC3ADC0)
#define SYSTEM_THREADING_INTERLOCKED_READ_OFFSET UNITYSDK_OFFSET(0x1BC3AD90)

namespace System::Threading
{
	inline static constexpr unsigned int Interlocked_TypeDefinitionIndex = 873;

	class Interlocked : public ::System::Object
	{
	public:
		static ::System::Int32 CompareExchange(::System::Int32& a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Int32&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 CompareExchange_1(::System::Int32& a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean& a4)
		{
			return ((::System::Int32(*)(::System::Int32&, ::System::Int32, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Object* CompareExchange_2(::System::Object*& a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::System::Object*&, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Single CompareExchange_3(::System::Single& a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 Decrement(::System::Int32& a1)
		{
			return ((::System::Int32(*)(::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_DECREMENT_OFFSET))(a1);
		}

		static ::System::Int64 Decrement_1(::System::Int64& a1)
		{
			return ((::System::Int64(*)(::System::Int64&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_DECREMENT_1_OFFSET))(a1);
		}

		static ::System::Int32 Increment(::System::Int32& a1)
		{
			return ((::System::Int32(*)(::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_INCREMENT_OFFSET))(a1);
		}

		static ::System::Int64 Increment_1(::System::Int64& a1)
		{
			return ((::System::Int64(*)(::System::Int64&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_INCREMENT_1_OFFSET))(a1);
		}

		static ::System::Int32 Exchange(::System::Int32& a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_EXCHANGE_OFFSET))(a1, a2);
		}

		static ::System::Object* Exchange_1(::System::Object*& a1, ::System::Object* a2)
		{
			return ((::System::Object*(*)(::System::Object*&, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_EXCHANGE_1_OFFSET))(a1, a2);
		}

		static ::System::Single Exchange_2(::System::Single& a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_EXCHANGE_2_OFFSET))(a1, a2);
		}

		static ::System::Int64 CompareExchange_4(::System::Int64& a1, ::System::Int64 a2, ::System::Int64 a3)
		{
			return ((::System::Int64(*)(::System::Int64&, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_4_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr CompareExchange_5(::System::IntPtr& a1, ::System::IntPtr a2, ::System::IntPtr a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr&, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_5_OFFSET))(a1, a2, a3);
		}

		static ::System::Double CompareExchange_6(::System::Double& a1, ::System::Double a2, ::System::Double a3)
		{
			return ((::System::Double(*)(::System::Double&, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_6_OFFSET))(a1, a2, a3);
		}

		static ::System::Int64 Exchange_3(::System::Int64& a1, ::System::Int64 a2)
		{
			return ((::System::Int64(*)(::System::Int64&, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_EXCHANGE_3_OFFSET))(a1, a2);
		}

		static ::System::IntPtr Exchange_4(::System::IntPtr& a1, ::System::IntPtr a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr&, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_EXCHANGE_4_OFFSET))(a1, a2);
		}

		static ::System::Double Exchange_5(::System::Double& a1, ::System::Double a2)
		{
			return ((::System::Double(*)(::System::Double&, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_EXCHANGE_5_OFFSET))(a1, a2);
		}

		static ::System::Int64 Read(::System::Int64& a1)
		{
			return ((::System::Int64(*)(::System::Int64&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_READ_OFFSET))(a1);
		}

		static ::System::Int32 Add(::System::Int32& a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_ADD_OFFSET))(a1, a2);
		}

		static ::System::Int64 Add_1(::System::Int64& a1, ::System::Int64 a2)
		{
			return ((::System::Int64(*)(::System::Int64&, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_ADD_1_OFFSET))(a1, a2);
		}

		static ::System::Void MemoryBarrier()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_MEMORYBARRIER_OFFSET))();
		}
	};
}
