#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"

namespace ZLinq::Internal { template <typename T> class RentedArrayBox_1; }

namespace ZLinq::Internal
{
	inline static constexpr unsigned int RentedArrayBox_1_TypeDefinitionIndex = 6397;

	template <typename T>
	class RentedArrayBox_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _array_P; // 0x0
		::System::Int32 _length_P; // 0x0
		static ::ZLinq::Internal::RentedArrayBox_1<T>** StaticGet_Empty()
		{
			return (::ZLinq::Internal::RentedArrayBox_1<T>**)Il2CppClass::FromTypeDefinitionIndex(RentedArrayBox_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
