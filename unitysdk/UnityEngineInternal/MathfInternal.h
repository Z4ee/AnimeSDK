#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINEINTERNAL_MATHFINTERNAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A49B890)

namespace UnityEngineInternal
{
	inline static constexpr unsigned int MathfInternal_TypeDefinitionIndex = 3731;

	struct alignas(1) MathfInternal
	{
		static ::System::Boolean* StaticGet_IsFlushToZeroEnabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MathfInternal_TypeDefinitionIndex)->GetStaticField(0x140);
		}
		static ::System::Single* StaticGet_FloatMinDenormal()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MathfInternal_TypeDefinitionIndex)->GetStaticField(0x144);
		}
		static ::System::Single* StaticGet_FloatMinNormal()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MathfInternal_TypeDefinitionIndex)->GetStaticField(0x148);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_MATHFINTERNAL__CCTOR_OFFSET))();
		}
	};
}
