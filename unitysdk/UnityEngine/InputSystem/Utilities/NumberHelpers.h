#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_ALIGNTOMULTIPLEOF_1_OFFSET UNITYSDK_OFFSET(0x1D7BFBB0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_ALIGNTOMULTIPLEOF_2_OFFSET UNITYSDK_OFFSET(0x1D7BFBF0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_ALIGNTOMULTIPLEOF_OFFSET UNITYSDK_OFFSET(0x1D7BFB90)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_APPROXIMATELY_OFFSET UNITYSDK_OFFSET(0x1D7BFC10)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_INTTONORMALIZEDFLOAT_OFFSET UNITYSDK_OFFSET(0x1D7BFC90)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_NORMALIZEDFLOATTOINT_OFFSET UNITYSDK_OFFSET(0x1D7BFCD0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_NORMALIZEDFLOATTOUINT_OFFSET UNITYSDK_OFFSET(0x1D7BFD60)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_UINTTONORMALIZEDFLOAT_OFFSET UNITYSDK_OFFSET(0x1D7BFD10)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int NumberHelpers_TypeDefinitionIndex = 32683;

	class NumberHelpers : public ::System::Object
	{
	public:
		static ::System::Int32 AlignToMultipleOf(::System::Int32 number, ::System::Int32 alignment)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_ALIGNTOMULTIPLEOF_OFFSET))(number, alignment);
		}

		static ::System::Int64 AlignToMultipleOf_1(::System::Int64 number, ::System::Int64 alignment)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_ALIGNTOMULTIPLEOF_1_OFFSET))(number, alignment);
		}

		static ::System::UInt32 AlignToMultipleOf_2(::System::UInt32 number, ::System::UInt32 alignment)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_ALIGNTOMULTIPLEOF_2_OFFSET))(number, alignment);
		}

		static ::System::Boolean Approximately(::System::Double a, ::System::Double b)
		{
			return ((::System::Boolean(*)(::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_APPROXIMATELY_OFFSET))(a, b);
		}

		static ::System::Single IntToNormalizedFloat(::System::Int32 value, ::System::Int32 minValue, ::System::Int32 maxValue)
		{
			return ((::System::Single(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_INTTONORMALIZEDFLOAT_OFFSET))(value, minValue, maxValue);
		}

		static ::System::Int32 NormalizedFloatToInt(::System::Single value, ::System::Int32 intMinValue, ::System::Int32 intMaxValue)
		{
			return ((::System::Int32(*)(::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_NORMALIZEDFLOATTOINT_OFFSET))(value, intMinValue, intMaxValue);
		}

		static ::System::Single UIntToNormalizedFloat(::System::UInt32 value, ::System::UInt32 minValue, ::System::UInt32 maxValue)
		{
			return ((::System::Single(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_UINTTONORMALIZEDFLOAT_OFFSET))(value, minValue, maxValue);
		}

		static ::System::UInt32 NormalizedFloatToUInt(::System::Single value, ::System::UInt32 uintMinValue, ::System::UInt32 uintMaxValue)
		{
			return ((::System::UInt32(*)(::System::Single, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NUMBERHELPERS_NORMALIZEDFLOATTOUINT_OFFSET))(value, uintMinValue, uintMaxValue);
		}
	};
}
