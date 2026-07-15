#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/Register.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

namespace System::Numerics
{
	inline static constexpr unsigned int Vector_1_TypeDefinitionIndex = 3852;

	template <typename T>
	struct Vector_1
	{
		::System::Numerics::Register register_; // 0x0
		static ::System::Int32* StaticGet_s_count()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Vector_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Numerics::Vector_1<T>* StaticGet_s_zero()
		{
			return (::System::Numerics::Vector_1<T>*)Il2CppClass::FromTypeDefinitionIndex(Vector_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Numerics::Vector_1<T>* StaticGet_s_one()
		{
			return (::System::Numerics::Vector_1<T>*)Il2CppClass::FromTypeDefinitionIndex(Vector_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Numerics::Vector_1<T>* StaticGet_s_allOnes()
		{
			return (::System::Numerics::Vector_1<T>*)Il2CppClass::FromTypeDefinitionIndex(Vector_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
