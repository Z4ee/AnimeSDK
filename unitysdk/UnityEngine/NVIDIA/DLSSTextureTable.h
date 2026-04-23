#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Texture; }

#define UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_GET_BIASCOLORMASK_OFFSET UNITYSDK_OFFSET(0x24F80)
#define UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_GET_COLORINPUT_OFFSET UNITYSDK_OFFSET(0x5580)
#define UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_GET_COLOROUTPUT_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x13C30)
#define UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_GET_EXPOSURETEXTURE_OFFSET UNITYSDK_OFFSET(0x24F70)
#define UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_GET_MOTIONVECTORS_OFFSET UNITYSDK_OFFSET(0x296E0)
#define UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_GET_TRANSPARENCYMASK_OFFSET UNITYSDK_OFFSET(0x104A0)
#define UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_SET_BIASCOLORMASK_OFFSET UNITYSDK_OFFSET(0x29900)
#define UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_SET_COLORINPUT_OFFSET UNITYSDK_OFFSET(0xBDC0)
#define UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_SET_COLOROUTPUT_OFFSET UNITYSDK_OFFSET(0x8D10)
#define UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_SET_DEPTH_OFFSET UNITYSDK_OFFSET(0xAF80)
#define UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_SET_MOTIONVECTORS_OFFSET UNITYSDK_OFFSET(0x296F0)

namespace UnityEngine::NVIDIA
{
	inline static constexpr unsigned int DLSSTextureTable_TypeDefinitionIndex = 5176;

	struct alignas(8) DLSSTextureTable
	{
		::UnityEngine::Texture* _colorInput_k__BackingField; // 0x10
		::UnityEngine::Texture* _colorOutput_k__BackingField; // 0x18
		::UnityEngine::Texture* _depth_k__BackingField; // 0x20
		::UnityEngine::Texture* _motionVectors_k__BackingField; // 0x28
		::UnityEngine::Texture* _transparencyMask_k__BackingField; // 0x30
		::UnityEngine::Texture* _exposureTexture_k__BackingField; // 0x38
		::UnityEngine::Texture* _biasColorMask_k__BackingField; // 0x40

		::System::Void set_colorInput(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_SET_COLORINPUT_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get_colorInput()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_GET_COLORINPUT_OFFSET))(this);
		}

		::System::Void set_colorOutput(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_SET_COLOROUTPUT_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get_colorOutput()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_GET_COLOROUTPUT_OFFSET))(this);
		}

		::System::Void set_depth(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_SET_DEPTH_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get_depth()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_GET_DEPTH_OFFSET))(this);
		}

		::System::Void set_motionVectors(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_SET_MOTIONVECTORS_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get_motionVectors()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_GET_MOTIONVECTORS_OFFSET))(this);
		}

		::UnityEngine::Texture* get_transparencyMask()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_GET_TRANSPARENCYMASK_OFFSET))(this);
		}

		::UnityEngine::Texture* get_exposureTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_GET_EXPOSURETEXTURE_OFFSET))(this);
		}

		::System::Void set_biasColorMask(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_SET_BIASCOLORMASK_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get_biasColorMask()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSTEXTURETABLE_GET_BIASCOLORMASK_OFFSET))(this);
		}
	};
}
