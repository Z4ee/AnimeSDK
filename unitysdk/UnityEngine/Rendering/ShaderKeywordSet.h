#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/ShaderKeywordSet__m_Bits_e__FixedBuffer.h"

#define UNITYENGINE_RENDERING_SHADERKEYWORDSET_COMPUTESLICEANDMASK_OFFSET UNITYSDK_OFFSET(0x211AC10)
#define UNITYENGINE_RENDERING_SHADERKEYWORDSET_ENABLE_OFFSET UNITYSDK_OFFSET(0x211AC30)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ShaderKeywordSet_TypeDefinitionIndex = 4691;

	struct alignas(4) ShaderKeywordSet
	{
		::UnityEngine::Rendering::ShaderKeywordSet__m_Bits_e__FixedBuffer m_Bits; // 0x10

		/*
		::System::Void ComputeSliceAndMask(::UnityEngine::Rendering::ShaderKeyword keyword, ::System::UInt32& slice, ::System::UInt32& mask)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ShaderKeyword, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERKEYWORDSET_COMPUTESLICEANDMASK_OFFSET))(this, keyword, slice, mask);
		}
		*/

		/*
		::System::Void Enable(::UnityEngine::Rendering::ShaderKeyword keyword)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ShaderKeyword))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERKEYWORDSET_ENABLE_OFFSET))(this, keyword);
		}
		*/
	};
}
