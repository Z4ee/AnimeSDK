#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND_BLOOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDC30C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int OpaquePostProcessSecond_BloomData_TypeDefinitionIndex = 26610;

	class OpaquePostProcessSecond_BloomData : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::RenderTextureDescriptor>* _BloomMipsUpRTDesc; // 0x10
		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* _BloomMipsDownRTID; // 0x18
		::Il2CppArray<::UnityEngine::Vector2>* mipsUp; // 0x20
		::Il2CppArray<::System::Int32>* _BloomMipsUpShaderID; // 0x28
		::Il2CppArray<::System::Int32>* _BloomMipsDownShaderID; // 0x30
		::Il2CppArray<::UnityEngine::RenderTextureDescriptor>* _BloomMipsDownRTDesc; // 0x38
		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* _BloomMipsUpRTID; // 0x40
		::Il2CppArray<::UnityEngine::Vector4>* bloomMipInfo; // 0x48
		::System::Collections::Generic::List_1<::System::Int32>* _AlignDownSampleShaderID; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderTargetIdentifier>* _AlignDownSampleRTID; // 0x58
		::Il2CppArray<::UnityEngine::Vector2>* mipsDown; // 0x60
		::System::Single bloomIntensityChar; // 0x68
		::System::Int32 bloomMipCount; // 0x6C
		::System::Single bloomIntensity; // 0x70
		::System::Single bloomIntensityCharFromScene; // 0x74
		::UnityEngine::Vector4 thresholdParams; // 0x78
		::System::Single bloomScatterParam; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OPAQUEPOSTPROCESSSECOND_BLOOMDATA__CTOR_OFFSET))(this);
		}
	};
}
