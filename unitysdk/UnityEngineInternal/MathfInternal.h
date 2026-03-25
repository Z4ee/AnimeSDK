#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINEINTERNAL_MATHFINTERNAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A64020)

namespace UnityEngineInternal
{
	inline static constexpr unsigned int MathfInternal_TypeDefinitionIndex = 3729;

	struct alignas(1) MathfInternal
	{
		static ::System::Single* StaticGet_FloatMinDenormal()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MathfInternal_TypeDefinitionIndex)->GetStaticField(0xC0);
		}
		static ::System::Single* StaticGet_FloatMinNormal()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MathfInternal_TypeDefinitionIndex)->GetStaticField(0xC4);
		}
		static ::System::Boolean* StaticGet_IsFlushToZeroEnabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MathfInternal_TypeDefinitionIndex)->GetStaticField(0xC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_MATHFINTERNAL__CCTOR_OFFSET))();
		}
	};
}
