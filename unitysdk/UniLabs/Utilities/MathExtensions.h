#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNILABS_UTILITIES_MATHEXTENSIONS_POSITIVEMODULO_1_OFFSET UNITYSDK_OFFSET(0x1C49CDB0)
#define UNILABS_UTILITIES_MATHEXTENSIONS_POSITIVEMODULO_OFFSET UNITYSDK_OFFSET(0x1C49CD90)

namespace UniLabs::Utilities
{
	inline static constexpr unsigned int MathExtensions_TypeDefinitionIndex = 85820;

	class MathExtensions : public ::System::Object
	{
	public:
		static ::System::Int32 PositiveModulo(::System::Int32 x, ::System::Int32 m)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNILABS_UTILITIES_MATHEXTENSIONS_POSITIVEMODULO_OFFSET))(x, m);
		}

		static ::System::Single PositiveModulo_1(::System::Single x, ::System::Single m)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNILABS_UTILITIES_MATHEXTENSIONS_POSITIVEMODULO_1_OFFSET))(x, m);
		}
	};
}
