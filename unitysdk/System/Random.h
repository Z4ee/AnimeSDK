#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_RANDOM_GETSAMPLEFORLARGERANGE_OFFSET UNITYSDK_OFFSET(0x179937B0)
#define SYSTEM_RANDOM_INTERNALSAMPLE_OFFSET UNITYSDK_OFFSET(0x179936F0)
#define SYSTEM_RANDOM_NEXTBYTES_OFFSET UNITYSDK_OFFSET(0x179939E0)
#define SYSTEM_RANDOM_NEXTDOUBLE_OFFSET UNITYSDK_OFFSET(0x179939D0)
#define SYSTEM_RANDOM_NEXT_1_OFFSET UNITYSDK_OFFSET(0x179937F0)
#define SYSTEM_RANDOM_NEXT_2_OFFSET UNITYSDK_OFFSET(0x17993920)
#define SYSTEM_RANDOM_NEXT_OFFSET UNITYSDK_OFFSET(0x179937A0)
#define SYSTEM_RANDOM_SAMPLE_OFFSET UNITYSDK_OFFSET(0x179936D0)
#define SYSTEM_RANDOM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17993410)
#define SYSTEM_RANDOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1798ECC0)

namespace System
{
	inline static constexpr unsigned int Random_TypeDefinitionIndex = 315;

	class Random : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* SeedArray; // 0x10
		::System::Int32 inextp; // 0x18
		::System::Int32 inext; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RANDOM__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 Seed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RANDOM__CTOR_1_OFFSET))(this, Seed);
		}

		::System::Double Sample()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RANDOM_SAMPLE_OFFSET))(this);
		}

		::System::Int32 InternalSample()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RANDOM_INTERNALSAMPLE_OFFSET))(this);
		}

		::System::Int32 Next()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RANDOM_NEXT_OFFSET))(this);
		}

		::System::Double GetSampleForLargeRange()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RANDOM_GETSAMPLEFORLARGERANGE_OFFSET))(this);
		}

		::System::Int32 Next_1(::System::Int32 minValue, ::System::Int32 maxValue)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RANDOM_NEXT_1_OFFSET))(this, minValue, maxValue);
		}

		::System::Int32 Next_2(::System::Int32 maxValue)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RANDOM_NEXT_2_OFFSET))(this, maxValue);
		}

		::System::Double NextDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RANDOM_NEXTDOUBLE_OFFSET))(this);
		}

		::System::Void NextBytes(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_RANDOM_NEXTBYTES_OFFSET))(this, buffer);
		}
	};
}
