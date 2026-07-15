#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IComparer_1; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int _OrderBy_F20F22F0783C758479CC59FC23C7FEAF81F289B10B31CBE866E87C24F818E06F4__DescendingDefaultComparer_1_TypeDefinitionIndex = 6375;

	template <typename T>
	class _OrderBy_F20F22F0783C758479CC59FC23C7FEAF81F289B10B31CBE866E87C24F818E06F4__DescendingDefaultComparer_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IComparer_1<T>** StaticGet_Default()
		{
			return (::System::Collections::Generic::IComparer_1<T>**)Il2CppClass::FromTypeDefinitionIndex(_OrderBy_F20F22F0783C758479CC59FC23C7FEAF81F289B10B31CBE866E87C24F818E06F4__DescendingDefaultComparer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
