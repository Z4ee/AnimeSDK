#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IComparer_1; }

#define ZLINQ_LINQ__ORDERBY_F20F22F0783C758479CC59FC23C7FEAF81F289B10B31CBE866E87C24F818E06F4__ORDERBYHELPER_MAX_OFFSET UNITYSDK_OFFSET(0x18CF02B0)
#define ZLINQ_LINQ__ORDERBY_F20F22F0783C758479CC59FC23C7FEAF81F289B10B31CBE866E87C24F818E06F4__ORDERBYHELPER_MIN_OFFSET UNITYSDK_OFFSET(0x18CF0130)
#define ZLINQ_LINQ__ORDERBY_F20F22F0783C758479CC59FC23C7FEAF81F289B10B31CBE866E87C24F818E06F4__ORDERBYHELPER_PARTIALQUICKSORT_OFFSET UNITYSDK_OFFSET(0x18CEFD80)
#define ZLINQ_LINQ__ORDERBY_F20F22F0783C758479CC59FC23C7FEAF81F289B10B31CBE866E87C24F818E06F4__ORDERBYHELPER_QUICKSELECT_OFFSET UNITYSDK_OFFSET(0x18CEFA50)

namespace ZLinq::Linq
{
	inline static constexpr unsigned int _OrderBy_F20F22F0783C758479CC59FC23C7FEAF81F289B10B31CBE866E87C24F818E06F4__OrderByHelper_TypeDefinitionIndex = 6509;

	class _OrderBy_F20F22F0783C758479CC59FC23C7FEAF81F289B10B31CBE866E87C24F818E06F4__OrderByHelper : public ::System::Object
	{
	public:
		static ::System::Int32 QuickSelect(::Il2CppArray<::System::Int32>* map, ::System::Collections::Generic::IComparer_1<::System::Int32>* comparer, ::System::Int32 right, ::System::Int32 idx)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::IComparer_1<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZLINQ_LINQ__ORDERBY_F20F22F0783C758479CC59FC23C7FEAF81F289B10B31CBE866E87C24F818E06F4__ORDERBYHELPER_QUICKSELECT_OFFSET))(map, comparer, right, idx);
		}

		static ::System::Void PartialQuickSort(::Il2CppArray<::System::Int32>* map, ::System::Collections::Generic::IComparer_1<::System::Int32>* comparer, ::System::Int32 left, ::System::Int32 right, ::System::Int32 minIdx, ::System::Int32 maxIdx)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::IComparer_1<::System::Int32>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZLINQ_LINQ__ORDERBY_F20F22F0783C758479CC59FC23C7FEAF81F289B10B31CBE866E87C24F818E06F4__ORDERBYHELPER_PARTIALQUICKSORT_OFFSET))(map, comparer, left, right, minIdx, maxIdx);
		}

		static ::System::Int32 Min(::Il2CppArray<::System::Int32>* map, ::System::Collections::Generic::IComparer_1<::System::Int32>* comparer, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::IComparer_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + ZLINQ_LINQ__ORDERBY_F20F22F0783C758479CC59FC23C7FEAF81F289B10B31CBE866E87C24F818E06F4__ORDERBYHELPER_MIN_OFFSET))(map, comparer, count);
		}

		static ::System::Int32 Max(::Il2CppArray<::System::Int32>* map, ::System::Collections::Generic::IComparer_1<::System::Int32>* comparer, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::IComparer_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + ZLINQ_LINQ__ORDERBY_F20F22F0783C758479CC59FC23C7FEAF81F289B10B31CBE866E87C24F818E06F4__ORDERBYHELPER_MAX_OFFSET))(map, comparer, count);
		}
	};
}
