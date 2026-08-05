#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"
#include "unitysdk/UnityEngine/TextureFormat.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_NAPRENDERPIPELINE0_TEXTURECURVE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E6071B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_TEXTURECURVE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1E6076A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_TEXTURECURVE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E6071A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_TEXTURECURVE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E607940)
#define UNITYENGINE_NAPRENDERPIPELINE0_TEXTURECURVE_GETTEXTUREFORMAT_OFFSET UNITYSDK_OFFSET(0x1E607230)
#define UNITYENGINE_NAPRENDERPIPELINE0_TEXTURECURVE_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1E607270)
#define UNITYENGINE_NAPRENDERPIPELINE0_TEXTURECURVE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1E607090)
#define UNITYENGINE_NAPRENDERPIPELINE0_TEXTURECURVE_RELEASE_OFFSET UNITYSDK_OFFSET(0x1E6071C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_TEXTURECURVE_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1E607190)
#define UNITYENGINE_NAPRENDERPIPELINE0_TEXTURECURVE_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1E6070A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_TEXTURECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6070B0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int TextureCurve_TypeDefinitionIndex = 6082;

	class TextureCurve : public ::System::Object
	{
	public:
		::System::Int32 _length_k__BackingField; // 0x10
		::System::Boolean m_Loop; // 0x14
		::System::Single m_ZeroValue; // 0x18
		::System::Single m_Range; // 0x1C
		::UnityEngine::AnimationCurve* m_Curve; // 0x20
		::UnityEngine::AnimationCurve* m_LoopingCurve; // 0x28
		::UnityEngine::Texture2D* m_Texture; // 0x30
		::System::Boolean m_IsCurveDirty; // 0x38
		::System::Boolean m_IsTextureDirty; // 0x39
		::System::Int32 m_Version; // 0x3C

		::System::Void _ctor(::Il2CppArray<::UnityEngine::Keyframe>* keys, ::System::Single zeroValue, ::System::Boolean loop, ::UnityEngine::Vector2& bounds)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Keyframe>*, ::System::Single, ::System::Boolean, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TEXTURECURVE__CTOR_OFFSET))(this, keys, zeroValue, loop, bounds);
		}

		::System::Int32 get_length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TEXTURECURVE_GET_LENGTH_OFFSET))(this);
		}

		::System::Void set_length(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TEXTURECURVE_SET_LENGTH_OFFSET))(this, value);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TEXTURECURVE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TEXTURECURVE_DISPOSE_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TEXTURECURVE_RELEASE_OFFSET))(this);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TEXTURECURVE_SETDIRTY_OFFSET))(this);
		}

		static ::UnityEngine::TextureFormat GetTextureFormat()
		{
			return ((::UnityEngine::TextureFormat(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TEXTURECURVE_GETTEXTUREFORMAT_OFFSET))();
		}

		::UnityEngine::Texture2D* GetTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TEXTURECURVE_GETTEXTURE_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TEXTURECURVE_GETHASHCODE_OFFSET))(this);
		}

		::System::Single Evaluate(::System::Single time)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TEXTURECURVE_EVALUATE_OFFSET))(this, time);
		}
	};
}
