#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/AutoIncrementValue.h"
#include "unitysdk/System/Numerics/BigInteger.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class Type; }

#define SYSTEM_DATA_AUTOINCREMENTINT64_BOUNDARYCHECK_OFFSET UNITYSDK_OFFSET(0x1D9F3840)
#define SYSTEM_DATA_AUTOINCREMENTINT64_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D9F3670)
#define SYSTEM_DATA_AUTOINCREMENTINT64_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x1D9F3760)
#define SYSTEM_DATA_AUTOINCREMENTINT64_GET_SEED_OFFSET UNITYSDK_OFFSET(0x1D9F3790)
#define SYSTEM_DATA_AUTOINCREMENTINT64_GET_STEP_OFFSET UNITYSDK_OFFSET(0x1D9F3A10)
#define SYSTEM_DATA_AUTOINCREMENTINT64_MOVEAFTER_OFFSET UNITYSDK_OFFSET(0x1D9F3A90)
#define SYSTEM_DATA_AUTOINCREMENTINT64_SETCURRENTANDINCREMENT_OFFSET UNITYSDK_OFFSET(0x1D9F3AC0)
#define SYSTEM_DATA_AUTOINCREMENTINT64_SETCURRENT_OFFSET UNITYSDK_OFFSET(0x1D9F3AA0)
#define SYSTEM_DATA_AUTOINCREMENTINT64_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D9F36C0)
#define SYSTEM_DATA_AUTOINCREMENTINT64_SET_SEED_OFFSET UNITYSDK_OFFSET(0x1D9F37A0)
#define SYSTEM_DATA_AUTOINCREMENTINT64_SET_STEP_OFFSET UNITYSDK_OFFSET(0x1D9F3A20)
#define SYSTEM_DATA_AUTOINCREMENTINT64__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9F3BF0)

namespace System::Data
{
	inline static constexpr unsigned int AutoIncrementInt64_TypeDefinitionIndex = 38566;

	class AutoIncrementInt64 : public ::System::Data::AutoIncrementValue
	{
	public:
		::System::Int64 _step; // 0x18
		::System::Int64 _seed; // 0x20
		::System::Int64 _current; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTINT64__CTOR_OFFSET))(this);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTINT64_GET_CURRENT_OFFSET))(this);
		}

		::System::Void set_Current(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTINT64_SET_CURRENT_OFFSET))(this, value);
		}

		::System::Type* get_DataType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTINT64_GET_DATATYPE_OFFSET))(this);
		}

		::System::Int64 get_Seed()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTINT64_GET_SEED_OFFSET))(this);
		}

		::System::Void set_Seed(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTINT64_SET_SEED_OFFSET))(this, value);
		}

		::System::Int64 get_Step()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTINT64_GET_STEP_OFFSET))(this);
		}

		::System::Void set_Step(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTINT64_SET_STEP_OFFSET))(this, value);
		}

		::System::Void MoveAfter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTINT64_MOVEAFTER_OFFSET))(this);
		}

		::System::Void SetCurrent(::System::Object* value, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTINT64_SETCURRENT_OFFSET))(this, value, formatProvider);
		}

		::System::Void SetCurrentAndIncrement(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTINT64_SETCURRENTANDINCREMENT_OFFSET))(this, value);
		}

		::System::Boolean BoundaryCheck(::System::Numerics::BigInteger value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + SYSTEM_DATA_AUTOINCREMENTINT64_BOUNDARYCHECK_OFFSET))(this, value);
		}
	};
}
