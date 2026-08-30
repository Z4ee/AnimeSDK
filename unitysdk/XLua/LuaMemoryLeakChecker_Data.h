#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define XLUA_LUAMEMORYLEAKCHECKER_DATA_GET_POTENTIALLEAKCOUNT_OFFSET UNITYSDK_OFFSET(0x11866570)
#define XLUA_LUAMEMORYLEAKCHECKER_DATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x118661D0)
#define XLUA_LUAMEMORYLEAKCHECKER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x11864440)

namespace XLua
{
	inline static constexpr unsigned int LuaMemoryLeakChecker_Data_TypeDefinitionIndex = 50431;

	class LuaMemoryLeakChecker_Data : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::IntPtr, ::System::Int32>* TableSizes; // 0x10
		::System::Int32 Memroy; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER_DATA__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER_DATA_TOSTRING_OFFSET))(this);
		}

		::System::Int32 get_PotentialLeakCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_LUAMEMORYLEAKCHECKER_DATA_GET_POTENTIALLEAKCOUNT_OFFSET))(this);
		}
	};
}
