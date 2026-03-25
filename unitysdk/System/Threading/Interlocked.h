#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_THREADING_INTERLOCKED_ADD_1_OFFSET UNITYSDK_OFFSET(0x16234FE0)
#define SYSTEM_THREADING_INTERLOCKED_ADD_OFFSET UNITYSDK_OFFSET(0x16234FD0)
#define SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_1_OFFSET UNITYSDK_OFFSET(0x16234EB0)
#define SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_2_OFFSET UNITYSDK_OFFSET(0x16234EC0)
#define SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_3_OFFSET UNITYSDK_OFFSET(0x16234ED0)
#define SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_4_OFFSET UNITYSDK_OFFSET(0x16234F50)
#define SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_5_OFFSET UNITYSDK_OFFSET(0x16234F60)
#define SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_6_OFFSET UNITYSDK_OFFSET(0x16234F70)
#define SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_OFFSET UNITYSDK_OFFSET(0x162313F0)
#define SYSTEM_THREADING_INTERLOCKED_DECREMENT_1_OFFSET UNITYSDK_OFFSET(0x16234F00)
#define SYSTEM_THREADING_INTERLOCKED_DECREMENT_OFFSET UNITYSDK_OFFSET(0x16234EF0)
#define SYSTEM_THREADING_INTERLOCKED_EXCHANGE_1_OFFSET UNITYSDK_OFFSET(0x16234F30)
#define SYSTEM_THREADING_INTERLOCKED_EXCHANGE_2_OFFSET UNITYSDK_OFFSET(0x16234F40)
#define SYSTEM_THREADING_INTERLOCKED_EXCHANGE_3_OFFSET UNITYSDK_OFFSET(0x16234F90)
#define SYSTEM_THREADING_INTERLOCKED_EXCHANGE_4_OFFSET UNITYSDK_OFFSET(0x16234FA0)
#define SYSTEM_THREADING_INTERLOCKED_EXCHANGE_5_OFFSET UNITYSDK_OFFSET(0x16234FB0)
#define SYSTEM_THREADING_INTERLOCKED_EXCHANGE_OFFSET UNITYSDK_OFFSET(0x1622F250)
#define SYSTEM_THREADING_INTERLOCKED_INCREMENT_1_OFFSET UNITYSDK_OFFSET(0x16234F20)
#define SYSTEM_THREADING_INTERLOCKED_INCREMENT_OFFSET UNITYSDK_OFFSET(0x16234F10)
#define SYSTEM_THREADING_INTERLOCKED_MEMORYBARRIER_OFFSET UNITYSDK_OFFSET(0x16234FF0)
#define SYSTEM_THREADING_INTERLOCKED_READ_OFFSET UNITYSDK_OFFSET(0x16234FC0)

namespace System::Threading
{
	inline static constexpr unsigned int Interlocked_TypeDefinitionIndex = 868;

	class Interlocked : public ::System::Object
	{
	public:
		static ::System::Int32 CompareExchange(::System::Int32& location1, ::System::Int32 value, ::System::Int32 comparand)
		{
			return ((::System::Int32(*)(::System::Int32&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_OFFSET))(location1, value, comparand);
		}

		static ::System::Int32 CompareExchange_1(::System::Int32& location1, ::System::Int32 value, ::System::Int32 comparand, ::System::Boolean& succeeded)
		{
			return ((::System::Int32(*)(::System::Int32&, ::System::Int32, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_1_OFFSET))(location1, value, comparand, succeeded);
		}

		static ::System::Object* CompareExchange_2(::System::Object*& location1, ::System::Object* value, ::System::Object* comparand)
		{
			return ((::System::Object*(*)(::System::Object*&, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_2_OFFSET))(location1, value, comparand);
		}

		static ::System::Single CompareExchange_3(::System::Single& location1, ::System::Single value, ::System::Single comparand)
		{
			return ((::System::Single(*)(::System::Single&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_3_OFFSET))(location1, value, comparand);
		}

		static ::System::Int32 Decrement(::System::Int32& location)
		{
			return ((::System::Int32(*)(::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_DECREMENT_OFFSET))(location);
		}

		static ::System::Int64 Decrement_1(::System::Int64& location)
		{
			return ((::System::Int64(*)(::System::Int64&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_DECREMENT_1_OFFSET))(location);
		}

		static ::System::Int32 Increment(::System::Int32& location)
		{
			return ((::System::Int32(*)(::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_INCREMENT_OFFSET))(location);
		}

		static ::System::Int64 Increment_1(::System::Int64& location)
		{
			return ((::System::Int64(*)(::System::Int64&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_INCREMENT_1_OFFSET))(location);
		}

		static ::System::Int32 Exchange(::System::Int32& location1, ::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_EXCHANGE_OFFSET))(location1, value);
		}

		static ::System::Object* Exchange_1(::System::Object*& location1, ::System::Object* value)
		{
			return ((::System::Object*(*)(::System::Object*&, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_EXCHANGE_1_OFFSET))(location1, value);
		}

		static ::System::Single Exchange_2(::System::Single& location1, ::System::Single value)
		{
			return ((::System::Single(*)(::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_EXCHANGE_2_OFFSET))(location1, value);
		}

		static ::System::Int64 CompareExchange_4(::System::Int64& location1, ::System::Int64 value, ::System::Int64 comparand)
		{
			return ((::System::Int64(*)(::System::Int64&, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_4_OFFSET))(location1, value, comparand);
		}

		static ::System::IntPtr CompareExchange_5(::System::IntPtr& location1, ::System::IntPtr value, ::System::IntPtr comparand)
		{
			return ((::System::IntPtr(*)(::System::IntPtr&, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_5_OFFSET))(location1, value, comparand);
		}

		static ::System::Double CompareExchange_6(::System::Double& location1, ::System::Double value, ::System::Double comparand)
		{
			return ((::System::Double(*)(::System::Double&, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_COMPAREEXCHANGE_6_OFFSET))(location1, value, comparand);
		}

		static ::System::Int64 Exchange_3(::System::Int64& location1, ::System::Int64 value)
		{
			return ((::System::Int64(*)(::System::Int64&, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_EXCHANGE_3_OFFSET))(location1, value);
		}

		static ::System::IntPtr Exchange_4(::System::IntPtr& location1, ::System::IntPtr value)
		{
			return ((::System::IntPtr(*)(::System::IntPtr&, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_EXCHANGE_4_OFFSET))(location1, value);
		}

		static ::System::Double Exchange_5(::System::Double& location1, ::System::Double value)
		{
			return ((::System::Double(*)(::System::Double&, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_EXCHANGE_5_OFFSET))(location1, value);
		}

		static ::System::Int64 Read(::System::Int64& location)
		{
			return ((::System::Int64(*)(::System::Int64&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_READ_OFFSET))(location);
		}

		static ::System::Int32 Add(::System::Int32& location1, ::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_ADD_OFFSET))(location1, value);
		}

		static ::System::Int64 Add_1(::System::Int64& location1, ::System::Int64 value)
		{
			return ((::System::Int64(*)(::System::Int64&, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_ADD_1_OFFSET))(location1, value);
		}

		static ::System::Void MemoryBarrier()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_INTERLOCKED_MEMORYBARRIER_OFFSET))();
		}
	};
}
