#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IComparer_1; }

#define ZLINQ_LINQ__ORDERBY_F20F22F0783C758479CC59FC23C7FEAF81F289B10B31CBE866E87C24F818E06F4__ORDERBYHELPER_MAX_OFFSET UNITYSDK_OFFSET(0x1B52CC10)
#define ZLINQ_LINQ__ORDERBY_F20F22F0783C758479CC59FC23C7FEAF81F289B10B31CBE866E87C24F818E06F4__ORDERBYHELPER_MIN_OFFSET UNITYSDK_OFFSET(0x1B52CAC0)
#define ZLINQ_LINQ__ORDERBY_F20F22F0783C758479CC59FC23C7FEAF81F289B10B31CBE866E87C24F818E06F4__ORDERBYHELPER_PARTIALQUICKSORT_OFFSET UNITYSDK_OFFSET(0x1B52C740)
#define ZLINQ_LINQ__ORDERBY_F20F22F0783C758479CC59FC23C7FEAF81F289B10B31CBE866E87C24F818E06F4__ORDERBYHELPER_QUICKSELECT_OFFSET UNITYSDK_OFFSET(0x1B52C450)

namespace ZLinq::Linq
{
	inline static constexpr unsigned int _OrderBy_F20F22F0783C758479CC59FC23C7FEAF81F289B10B31CBE866E87C24F818E06F4__OrderByHelper_TypeDefinitionIndex = 6371;

	class _OrderBy_F20F22F0783C758479CC59FC23C7FEAF81F289B10B31CBE866E87C24F818E06F4__OrderByHelper : public ::System::Object
	{
	public:
		static ::System::Int32 QuickSelect(::Il2CppArray<::System::Int32>* a1, ::System::Collections::Generic::IComparer_1<::System::Int32>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::IComparer_1<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZLINQ_LINQ__ORDERBY_F20F22F0783C758479CC59FC23C7FEAF81F289B10B31CBE866E87C24F818E06F4__ORDERBYHELPER_QUICKSELECT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void PartialQuickSort(::Il2CppArray<::System::Int32>* a1, ::System::Collections::Generic::IComparer_1<::System::Int32>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::IComparer_1<::System::Int32>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZLINQ_LINQ__ORDERBY_F20F22F0783C758479CC59FC23C7FEAF81F289B10B31CBE866E87C24F818E06F4__ORDERBYHELPER_PARTIALQUICKSORT_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 Min(::Il2CppArray<::System::Int32>* a1, ::System::Collections::Generic::IComparer_1<::System::Int32>* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::IComparer_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + ZLINQ_LINQ__ORDERBY_F20F22F0783C758479CC59FC23C7FEAF81F289B10B31CBE866E87C24F818E06F4__ORDERBYHELPER_MIN_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 Max(::Il2CppArray<::System::Int32>* a1, ::System::Collections::Generic::IComparer_1<::System::Int32>* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::IComparer_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + ZLINQ_LINQ__ORDERBY_F20F22F0783C758479CC59FC23C7FEAF81F289B10B31CBE866E87C24F818E06F4__ORDERBYHELPER_MAX_OFFSET))(a1, a2, a3);
		}
	};
}
