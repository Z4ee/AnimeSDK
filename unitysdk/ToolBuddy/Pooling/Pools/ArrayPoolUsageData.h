#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define TOOLBUDDY_POOLING_POOLS_ARRAYPOOLUSAGEDATA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA8D460)
#define TOOLBUDDY_POOLING_POOLS_ARRAYPOOLUSAGEDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xA8D440)
#define TOOLBUDDY_POOLING_POOLS_ARRAYPOOLUSAGEDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA8D4D0)
#define TOOLBUDDY_POOLING_POOLS_ARRAYPOOLUSAGEDATA_GET_ARRAYSCOUNT_OFFSET UNITYSDK_OFFSET(0x2C19D0)
#define TOOLBUDDY_POOLING_POOLS_ARRAYPOOLUSAGEDATA_GET_ELEMENTSCAPACITY_OFFSET UNITYSDK_OFFSET(0x3E3F20)
#define TOOLBUDDY_POOLING_POOLS_ARRAYPOOLUSAGEDATA_GET_ELEMENTSCOUNT_OFFSET UNITYSDK_OFFSET(0x246290)
#define TOOLBUDDY_POOLING_POOLS_ARRAYPOOLUSAGEDATA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E886C40)
#define TOOLBUDDY_POOLING_POOLS_ARRAYPOOLUSAGEDATA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E886C60)
#define TOOLBUDDY_POOLING_POOLS_ARRAYPOOLUSAGEDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA8D500)
#define TOOLBUDDY_POOLING_POOLS_ARRAYPOOLUSAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x680BB0)

namespace ToolBuddy::Pooling::Pools
{
	inline static constexpr unsigned int ArrayPoolUsageData_TypeDefinitionIndex = 26185;

	struct alignas(8) ArrayPoolUsageData
	{
		::System::Int64 _ElementsCount_k__BackingField; // 0x10
		::System::Int32 _ArraysCount_k__BackingField; // 0x18
		::System::Int64 _ElementsCapacity_k__BackingField; // 0x20

		::System::Void _ctor(::System::Int64 elementsCount, ::System::Int32 arraysCount, ::System::Int64 elementsCapacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + TOOLBUDDY_POOLING_POOLS_ARRAYPOOLUSAGEDATA__CTOR_OFFSET))(this, elementsCount, arraysCount, elementsCapacity);
		}

		::System::Int64 get_ElementsCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_POOLING_POOLS_ARRAYPOOLUSAGEDATA_GET_ELEMENTSCOUNT_OFFSET))(this);
		}

		::System::Int32 get_ArraysCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_POOLING_POOLS_ARRAYPOOLUSAGEDATA_GET_ARRAYSCOUNT_OFFSET))(this);
		}

		::System::Int64 get_ElementsCapacity()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_POOLING_POOLS_ARRAYPOOLUSAGEDATA_GET_ELEMENTSCAPACITY_OFFSET))(this);
		}

		::System::Boolean Equals(::ToolBuddy::Pooling::Pools::ArrayPoolUsageData other)
		{
			return ((::System::Boolean(*)(::PVOID, ::ToolBuddy::Pooling::Pools::ArrayPoolUsageData))((::PBYTE)hIl2Cpp + TOOLBUDDY_POOLING_POOLS_ARRAYPOOLUSAGEDATA_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + TOOLBUDDY_POOLING_POOLS_ARRAYPOOLUSAGEDATA_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_POOLING_POOLS_ARRAYPOOLUSAGEDATA_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::ToolBuddy::Pooling::Pools::ArrayPoolUsageData a, ::ToolBuddy::Pooling::Pools::ArrayPoolUsageData b)
		{
			return ((::System::Boolean(*)(::ToolBuddy::Pooling::Pools::ArrayPoolUsageData, ::ToolBuddy::Pooling::Pools::ArrayPoolUsageData))((::PBYTE)hIl2Cpp + TOOLBUDDY_POOLING_POOLS_ARRAYPOOLUSAGEDATA_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::ToolBuddy::Pooling::Pools::ArrayPoolUsageData a, ::ToolBuddy::Pooling::Pools::ArrayPoolUsageData b)
		{
			return ((::System::Boolean(*)(::ToolBuddy::Pooling::Pools::ArrayPoolUsageData, ::ToolBuddy::Pooling::Pools::ArrayPoolUsageData))((::PBYTE)hIl2Cpp + TOOLBUDDY_POOLING_POOLS_ARRAYPOOLUSAGEDATA_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_POOLING_POOLS_ARRAYPOOLUSAGEDATA_TOSTRING_OFFSET))(this);
		}
	};
}
