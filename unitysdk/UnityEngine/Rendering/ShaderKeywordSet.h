#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/ShaderKeywordSet__m_Bits_e__FixedBuffer.h"

#define UNITYENGINE_RENDERING_SHADERKEYWORDSET_COMPUTESLICEANDMASK_OFFSET UNITYSDK_OFFSET(0x388B4F0)
#define UNITYENGINE_RENDERING_SHADERKEYWORDSET_ENABLE_OFFSET UNITYSDK_OFFSET(0x388B510)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ShaderKeywordSet_TypeDefinitionIndex = 4873;

	struct alignas(4) ShaderKeywordSet
	{
		::UnityEngine::Rendering::ShaderKeywordSet__m_Bits_e__FixedBuffer m_Bits; // 0x10

		/*
		::System::Void ComputeSliceAndMask(::UnityEngine::Rendering::ShaderKeyword a1, ::System::UInt32& a2, ::System::UInt32& a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ShaderKeyword, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERKEYWORDSET_COMPUTESLICEANDMASK_OFFSET))(this, a1, a2, a3);
		}
		*/

		/*
		::System::Void Enable(::UnityEngine::Rendering::ShaderKeyword a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ShaderKeyword))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERKEYWORDSET_ENABLE_OFFSET))(this, a1);
		}
		*/
	};
}
